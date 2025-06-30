
#include <stdio.h>

int main()
{
    int r,c;
    printf("enter the rows and column:");
    scanf("%d %d",&r,&c);
    if(r!=c){
        printf("enter the correct matrix format");
    }
    int mat[r][c];
    printf("enter the mat:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0;i<r;i++){
        sum+=mat[i][i];
    }
    printf("%d",sum);
    

    return 0;
}
