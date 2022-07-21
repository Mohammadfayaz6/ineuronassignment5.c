#include<stdio.h>
int main()
{  
    int n,i;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("N odd natural numbers\n");
    for(i=1;i<=n;i+=2)
    {
        printf("\n%d",i);
    }
    return 0;
}