//search an element from an array
#include <stdio.h>
int main()
{
int i,n,a[100],x,f=0;
printf("Enter number of elements in array: ");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter element to search: ");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(a[i]==x){
f=1;
break;
}
}
if(f==1)
printf("Element %d found in the array.\n",x);
else
printf("Element %d not found in the array.\n",x);
}