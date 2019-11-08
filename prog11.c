#include <stdio.h>
int main() {
    int i,j,a[10];
    printf("Enter a ten number:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    {
    for(i=0;i<10;i++)
    {
        printf("%d[%d]=%p\n",a[i],i,&a[i]);
    }
}
    return 0;
}
