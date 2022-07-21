#include<stdio.h>
int main()
{  
    int n,i,sum;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("cubes of the first N natural numbers");
    for(i=1;i<=n;i++)
    {  
         sum=i*i*i;
          printf("\n%d",sum);
    }
    return 0;
}