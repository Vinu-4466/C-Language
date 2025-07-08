
#include <stdio.h>

int main()
{
    int size=8;
    int arr[8]={1,2,3,4,5};
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int index;
    printf("enter which index:");
    scanf("%d",&index);
    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=n;
    size++;
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}
