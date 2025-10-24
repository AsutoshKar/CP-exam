//print the product -x+x^2-x^3+x^4-...+(-1)^(n+1)x^n
#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,s=0,i;
    printf("Enter a number for n & x: ");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++)
    {
            s=s+(pow(-1,i)*pow(x,i));
    }
    printf("The value of series is %d",s);
}