//Delete an element from array at specified position
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
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("array becomes after deletion:");
    for(i=0;i<n-1;i++)
    printf("%d\n",a[i]);
    return 0;
}