#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i,j,k;
    printf("Enter the elements in first array: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements in second array: ");
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("After interchanging the both array:");
    for ( i = 0; i < 5; i++)
    {
        for(k=0;k<5;k++)
        {
            c[k]=a[i];
        }
    }
    
     for ( j = 0; j < 5; j++)
    {
        for(i=0;i<5;i++)
        {
            a[i]=b[j];
        }
    }
     for ( k = 0; k < 5; k++)
    {
        for(j=0;j<5;j++)
        {
           b[j]=c[k];
        }
    }
    printf("Elements in first array");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Elements in second array");
     for ( j= 0; j < 5; j++)
    {
        printf("%d\n",b[j]);
    }
    
    return 0;
}