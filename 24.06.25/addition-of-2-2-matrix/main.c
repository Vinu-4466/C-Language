
#include <stdio.h>

int main()
{
    int r1,r2,c1,c2;
    printf("enter the rows and columns:");
    scanf("%d %d %d %d", &r1, &r2,&c1,&c2);
    if((r1!=r2) && (c1!=c2)){
        printf("enter correct rows and column");
    }
    int mat1[r1][c1],mat2[r2][c2],res[r1][c1];
    
    printf("enter the matrix1:");
    for(int i=0;i<r1;i++){
       for(int j=0;j<c1;j++){
             scanf("%d", &mat1[i][j]);
       }
    }
    printf("enter the matrix2:");
    for(int i=0;i<r2;i++){
       for(int j=0;j<c2;j++){
             scanf("%d", &mat2[i][j]);
       }
    }
     for(int i=0;i<r2;i++){
       for(int j=0;j<c2;j++){
             res[i][j]=mat1[i][j]+mat2[i][j];
       }
    }
     for(int i=0;i<r2;i++){
       for(int j=0;j<c2;j++){
             printf("%d ",res[i][j]);
       }
       printf("\n");
    }
    
    
    return 0;
}