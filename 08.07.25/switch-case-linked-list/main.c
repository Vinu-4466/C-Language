#include<stdlib.h>// Online C compiler to run C program online
#include <stdio.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*head=NULL,*createNode=NULL,*new=NULL;
void insertnode()
{
    int n;
    printf("enter the no of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
     {
        createNode=malloc(sizeof(struct Node));
        int value;
        printf("enter the value:");
        scanf("%d",&value);
        createNode->data=value;
        createNode->next=NULL;
        if(head==NULL)
        {
        head=createNode;
        new=createNode;
        }
       else
       {
        new->next=createNode;
        new=createNode;
       }
    
    }
    
}
void displaynode()
{
     struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void displaynode();
void insertnode();
int main() {

   
    int choice;
    while (1){
        printf("1.NODE INSERTION:\n");
        printf("2.DISPLAY NODES:\n");
        printf("enter your choice:");
        scanf("%d",&choice);
           
    switch (choice)
    {
        case 1:
        {
            printf("NODE INSERTION\n");
            insertnode();
            break;
            
        }
        case 2:
        {
         
           printf("2.DISPLAY NODES\n");
           displaynode();
           break;
        }
        
    }
    printf("\n");
 
    }
    
    return 0;
    
}