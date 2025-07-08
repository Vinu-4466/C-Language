#include<stdlib.h>
#include <stdio.h>
struct Node{
    int data;
    struct Node*next;
};

int main()
{
    struct Node*head=NULL,*createNode=NULL,*old=NULL;
    int n;
    printf("enter the no of values:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        createNode=(struct Node*)malloc(sizeof(struct Node));
        int value;
        printf("enter the value:");
        scanf("%d",&value);
        createNode->data=value;
        createNode->next=NULL;
        if(head==NULL)
        {
            head=createNode;
        }
        else
        {
            old->next=createNode;
        }
        old=createNode;
    
    }

    printf("%d",head->next->next->data);
    

    return 0;
}