//largest element without sorting
#include<stdio.h>
int main()
{
    int a[100],n,i,largest=0;  
    printf("enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elemenets");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("largest element is %d",largest);
    return 0;    
        //largest element with sorting(descending)
    #include<stdio.h>
    int main()
    {
        int a[100],n,i,j,temp;  
        printf("enter the array size:");
        scanf("%d",&n);
        printf("Enter the array elemenets");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
            }
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            printf("largest=%d",a[0]);
            printf("second largest = %d",a[1]);

        }
        