
#include <stdio.h>

int main()
{
  int num=1011;
  int val=1;
  int sum=0;
  while(num>0){
      
          if (num%10==1){
          sum+=val;
      }
      val*=2;
      
      
          num=num/10;
  }
  printf("%d",sum);
    return 0;
}
