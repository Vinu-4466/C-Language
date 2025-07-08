#include<stdlib.h>
#include <stdio.h>
struct Node{
    int data;
    struct Node*next;
};

int main()
{
    struct Node*head=NULL,*createNode=NULL;
    //int *ptr=malloc(sizeof(int));
    createNode=malloc(sizeof(struct Node));
    createNode->data=10;
    createNode->next=NULL;
    head=createNode;
    printf("%d",head->data);

    return 0;
}