#include<stdio.h>
int main()
{
    int a[100],n,i,pos,num;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to delete element: ");
    scanf("%d",&pos);
     printf("Enter the number to be deleted: ");
    scanf("%d",&num);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("array becomes after deletion:");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
   