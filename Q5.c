#include<stdio.h>
int main()
{  
    int n,i;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("N odd numbers in reverse");
    for(i=1;n>=i;n--)
    {  
        if(n%2==1)
          printf("\n%d",n);
    }
    return 0;
}