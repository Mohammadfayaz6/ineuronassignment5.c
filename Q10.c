#include<stdio.h>
int main()
{  
    int n,i;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("table of N ");
    for(i=1;i<=n;i++)
    {  
          printf("\n%d*%d=%d",n,i,n*i);
    }
    return 0;
}