#include<stdlib.h>
#include <stdio.h>
struct Node {
	int data;
	struct Node*next;
};

int main()
{
	struct Node*head=NULL,*createNode=NULL,*new=NULL,*createNewNode=NULL;
	int n;
	printf("enter the no of values:");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
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
			new->next=createNode;
		}
		new=createNode;
		
	}
	    int pos,insertvalue;
		printf("enter the pos:");
		scanf("%d",&pos);
        createNewNode=(struct Node*)malloc(sizeof(struct Node));
		printf("enter the value to be inserted:");
		scanf("%d",&insertvalue);
		createNewNode->data=insertvalue;
		createNewNode->next=NULL;
		if(pos==0)
		{
		    createNewNode->next=head;
		    head=createNewNode;
		}
		
		else 
		{
		    struct Node*temp=head;
		   for(int i=0;i<pos-1;i++)
		   {
		       temp=temp->next;
		   }
		
		createNewNode->next=temp->next;
		temp->next=createNewNode;
		}
		printf("list:");
		struct Node*temp1=head;
		while(temp1 !=NULL){
		    printf("%d ",temp1->data);
		    temp1=temp1->next;
		}
		
	
	return 0;
   }