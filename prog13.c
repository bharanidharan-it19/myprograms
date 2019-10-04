#include <stdio.h>
int main() {
  int a,i,n;
  printf("Multiple table of:");
   scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
      a=n*i;
      printf("%d*%d=%d",i,n,a);
       printf("\n");
  }
    return 0;
}
