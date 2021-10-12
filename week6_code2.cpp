#include<stdlib.h>
#include<stdio.h>


struct Node{
    int data;
    Node* next;
};

struct Node* Head;

void Insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1){
        temp1->next = Head;
        Head = temp1;
        return;
    }

    Node* temp2 = Head;
    for(int i = 0; i<n-2 ; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Print(){
    Node* temp = Head;
    printf("Output : ");
    while (temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

}

int main(){
    Head = NULL;
    int a, n , x ;
    printf("How many number : ");
    scanf("%d",&a);
    for(int i = 0 ; i<a ; i++){
        printf("\n\nInput : ");
        scanf("%d , %d",&n,&x);
        if(x>i)
            x=i+1;
        Insert(n,x);
        Print();
    }

}