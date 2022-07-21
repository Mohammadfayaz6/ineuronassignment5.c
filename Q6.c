#include<stdio.h>
int main()
{  
    int n,i;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("N even natural numbers ");
    for(i=1;i<=n;i++)
    {  
        if(i%2==0)
          printf("\n%d",i);
    }
    return 0;
}