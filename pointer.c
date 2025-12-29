//let's learn pointer
#include <stdio.h>
int main()
{
    int x,y,sum;
    int *p,*q;
    
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    p=&x;
    q=&y;
    printf(" %d\n",x);
    printf("%d\n",p);
    printf("%u\n",*p);
    printf("%u\n",&x);
    printf("%u\n",&p);

    sum=*p + *q;
    printf("Sum=%d\n",sum);
}
