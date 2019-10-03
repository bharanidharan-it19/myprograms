#include<stdio.h>
int main() {
   int a,b,c;
   printf("\nEnter value of a, b, c:");
   scanf("%d %d %d",&a,&b,&c);
   if((a>b)&&(a>c))
      printf("\n a is greatest");
   else if((b>a)&&(b>c))
      printf("\n b is greatest");
    else if((c>a)&&(c>b))
      printf("\n c is greatest");
     return 0;
}
