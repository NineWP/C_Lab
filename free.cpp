#include<stdio.h>
#include<windows.h>
#include<conio.h>


void setcolor(int fg, int bg)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}

void setcursor(bool visible)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void erase_ship(int x, int y) {
	gotoxy(x, y);
	setcolor(2, 0);
	printf("       ");
	setcolor(2, 4);
}


void draw_ship(int a, int b)
{
	gotoxy(a, b);
	printf(" <-0-> ");
}

void draw_bullet(int a, int b)
{
	setcolor(2, 0);
	gotoxy(a, b);
	printf("^");
}

void erase_bullet(int a, int b)
{
	setcolor(2, 0);
	gotoxy(a, b);
	printf(" ");
}

struct Bullet {
	int active = 0;
	int x, y;
};
int main()
{
	Bullet bullets[5];
	setcursor(0);
	setcolor(2, 4);
	char ch = 'j', press = 'a';
	int x = 38, y = 20, b = 0, shoot = 0;
	
	draw_ship(x, y);
	do {
		if (_kbhit())  {
			ch = _getch();
			switch (ch)
			{
			case 'a':
				press = 'a';
				break;
			case 'd':
				press = 'd';
				break;
			case 'w':
				press = 'w';
				break;
			case 's':
				press = 's';
				break;
			case ' ':
				for (int i = 0; i < 5; i++)
				{
					if (bullets[i].active == 0)
					{
						bullets[i].active = 1;
						bullets[i].x = x + 3;
						bullets[i].y = y;
						break;
					}
				}
				break;
			}
			b = 1;
			fflush(stdin);
		}
		for (int i = 0; i < 5; i++)
		{
			if (bullets[i].active == 1)
			{
				erase_bullet(bullets[i].x, bullets[i].y);
				if (bullets[i].y > 0)
					draw_bullet(bullets[i].x, --bullets[i].y);
				else
					bullets[i].active = 0;
			}
			
		}
		if (b == 1) {
			if (press == 'a' && x >= 1) {
				erase_ship(x, y);
				draw_ship(--x, y);
			}
			if (press == 'd' && x < 73) {
				erase_ship(x, y);
				draw_ship(++x, y);
			}
			if (press == 'w' && y >= 1) {
				erase_ship(x, y);
				draw_ship(x, --y);
			}
			if (press == 's') {
				erase_ship(x, y);
				draw_ship(x, ++y);
			}
			
		}

		Sleep(100);
	} while (ch != 'x');
	return 0;
}