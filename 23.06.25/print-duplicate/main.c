
#include <stdio.h>

int main()
{
    int n=5;
    int arr[5]={1,2,1,2,5};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }



    return 0;
}
