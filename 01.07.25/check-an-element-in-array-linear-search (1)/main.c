
#include <stdio.h>

int main()
{
    int size=5;
    int n=3;
    int found;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
        {
            found=1;
        printf("the index of the element:%d ",i);
        break;
            
        }
    }
    if(found==0)
    {
        printf("element not found");
    }

    return 0;
}
