
#include <stdio.h>

int main()
{
    int size=5;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<size;i++)
    {
        int small=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[small])
            {
                small=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[small];
        arr[small]=temp;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
