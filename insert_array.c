//Insert an element into an array
#include <stdio.h>
int main() {
int a[100], n, i, pos, num;
printf("Enter the size of the array: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) 
    scanf("%d", &a[i]);
printf("enter the element to be added:");
scanf("%d", &num);
printf("enter the position:");
scanf("%d", &pos);
for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
a[pos]=num;
printf("Array after insertion:\n");
for(i=0;i<=n;i++)
    printf("%d ",a[i]);
return 0;
}