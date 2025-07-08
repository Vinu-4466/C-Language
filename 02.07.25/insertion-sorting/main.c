
#include <stdio.h>

int main()
{
    int size=6;
    int arr[6]={8,3,6,7,5,1};
    for(int i=1;i<size;i++){
        int key =arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}
