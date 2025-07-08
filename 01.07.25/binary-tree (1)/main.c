
#include <stdio.h>

int main()
{
    int size=6;
    int arr[6]={1,2,3,4,5,6};
    int n=16;
    int l=0,r=size-1;
    int found;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(n==arr[mid])
        {
            printf("the index of the element is %d ",mid);
            found=1;
            break;
        }
        else if(n>arr[mid])
        {
            l=mid+1;
        }
        else 
        {
            r=mid-1;
        }
    }
    if(found==0)
    {
    printf("element not found");
    }
    
    return 0;
}
