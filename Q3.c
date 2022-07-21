#include<stdio.h>
int main()
{  
    int n,i;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("N natural numbers in reverse");
    for(i=1;n>=i;n--)
    {
        printf("\n%d",n);
    }
    return 0;
}