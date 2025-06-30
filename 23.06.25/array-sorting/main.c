
#include <stdio.h>

int main()
{
    int n=5;
    int arr[5]={5,4,3,2,1};
    
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
  

    return 0;
}