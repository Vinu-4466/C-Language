
#include <stdio.h>

int main()
{
    int size=8;
    int arr[8]={1,2,3,4,5,7,65,45};
    int index=6;
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}