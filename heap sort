#include<stdio.h>
void heap_adj(int a[],int n)
{
    int i,j,item;
    j=0;
    item=a[j];
    i=2*j+1;
    while(i<n)
    {
        if((i+1)<=n-1)
        {
            if(a[i]<a[i+1])
            i++;
        }
        if(item<a[i])
        {
            a[j]=a[i];
            j=i;
            i=2*j+1;
        }
        else
        break;
    }
    a[j]=item;
}
void heap_const(int a[],int n)
{
    int i,j,k,item;
    for(k=0;k<n;k++)
    {
        item=a[k];
        i=k;
        j=(i-1)/2;
        while(i>0 && item>a[j])
        {
            a[i]=a[j];
            i=j;
            j=(i-1)/2;
        }
        a[i]=item;
    }
}
void heapsort(int a[],int n)
{
    int i,temp;
    heap_const(a,n);
    for(i=n-1;i>0;i--)
    {
        temp=a[i];
        a[i]=a[0];
        a[0]=temp;
        heap_adj(a,i);
    }
}
void main()
{
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    heapsort(a,n);
    printf("After sorting:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
