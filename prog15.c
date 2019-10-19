#include <stdio.h>
int main() {
   int a[10],i,j=23, count=0,n;
printf("Enter any number:");
  scanf("%d",&n);
printf("Enter your number:");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
  for(i=0;i<n;i++)
{
    if(a[i]==j)
{
  count++;
}
}
printf("%d",count);
}
