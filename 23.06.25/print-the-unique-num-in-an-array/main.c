
#include <stdio.h>

int main()
{
    int n=6;
    int arr1[n]={};
    int arr[6]={1,4,1,2,1,2};
    for(int i=0;i<n-1;i++){
        int count=0;
        if(arr1[i])
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr1[j]=1;
            }
        }
        if(count==0)
        {
            printf("%d",arr[i]);
            
        }
    }

    return 0;
}
