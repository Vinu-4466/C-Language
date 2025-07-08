#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node*next;
};
void linkedlist(){
    int val1=10,val2=20,val3=30,val4=40;
    struct Node*head=NULL,*createNode=NULL,*createNode1=NULL,*createNode2=NULL,*createNode3=NULL;
    createNode=malloc(sizeof(struct Node));
    createNode1=malloc(sizeof(struct Node));
    createNode2=malloc(sizeof(struct Node));
    createNode->data=val1;
    head=createNode;
    createNode1->data=val2;
    createNode2->data=val3;
    createNode->next=createNode1;
    createNode2->next=NULL;
    printf("%d",head->next->data);
   
}
int main(){
 
    linkedlist();

    
  
    // int value;
    // printf("enter the value:");
    // scanf("%d",&value);
    // createNode->data=valucreateNode1->next=createNode2;e;
    // createNode->next=NULL;
    // }
    // if(head==NULL)
    // {
    //     head=createNode;
    // }
    // else
    // {
    //     new->next=createNode;
    // }
    // new=createNode;
    
    return 0;
    
}