#include <stdio.h>

int main() {
    
    int n,sq,temp,digit=0,r,l;
    printf("enter a num:");
    scanf("%d",&n);
    sq=n*n;
    temp=sq;
    while(temp!=0){
        digit++;
        temp/=10;
    }
    
    for(int i=0;i<digit;i++){
        int split=1;
        for(int j=0;j<i;j++){
            split*=10;
        }
        r=sq%split;
        l=sq/split;
        if(r!=0 && r+l==n){
            printf("kaprekar");
            return 0;
        }
    }
    if(r+l!=n){
        printf("not");
    }

    return 0;
}