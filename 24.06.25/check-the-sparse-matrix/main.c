
#include <stdio.h>

int main()
{
    int r1,c1,count=0;
    printf("enter the rows and column:");
    scanf("%d %d",&r1,&c1);
    printf("enter the mat1:");
    int mat1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
              if(mat1[i][j]==0){
                  count++;
              }
    
        }
    }
    if(count>(r1*c1)/2){
        printf("it is a sparse matrix");
    }
    else{
        printf("it is a normal matrix");
    }
    return 0;
}
  