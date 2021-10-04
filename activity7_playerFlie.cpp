#include <stdio.h>
#include <string.h>

int main()
{

    struct Player
    {
        char name[100];
        int Level;
        int Score;
    };

    Player number[5];
    FILE *fptr = fopen("PlayerFile.txt", "r");

    for(int i = 0 ; !feof(fptr) ; i++){
        fscanf(fptr,"%s %d %d", &number[i].name, &number[i].Level, &number[i].Score);
        printf(" Player Number : %d \n", i+1);
        printf("\tName : %s\n", number[i].name);
        printf("\tLevel : %d\n", number[i].Level);
        printf("\tScore : %d\n", number[i].Score);
        printf("---------------------------------------------------------------\n");
    }

    fclose(fptr);
    return 0;
}