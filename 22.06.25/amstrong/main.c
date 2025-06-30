
#include <stdio.h>

int main()
{
    int n, rev, sum=0;
    int temp;
    printf("enter a number:");
    scanf("%d", &n);
    temp = n;
    while(n>0){
        rev = (n%10);
        sum = sum + (rev*rev*rev);
        n=n/10;
        
    }
    if(sum==temp){
        printf("Amstrong");
    }
    else{
        printf("Not an Amstrong");
    }

    return 0;
}