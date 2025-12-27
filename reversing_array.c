//reversing without an array
#include<>stdio.h>
int main()
{
    int n,a[100],i,jtemp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("Reversed array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }       
}
//reversing with an array
#include<stdio.h>
int main()
{
    int n,a[100],b[100],i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    for(i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
    }
    printf("Reversed array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }       
}