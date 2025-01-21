#include <stdio.h>

int main() {
    int a[100],i,m,n,k;
    printf("enter size : ");
    scanf("%d",&n);
    printf("enter elements in ascending order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number to search : ");
    scanf("%d",&k);
m=n/2;
for(i=0;i<n;i++)
{
    if(k==a[m])
    {
        printf("element found at %d",m+1);
        break;
    }
    else
    {
        if(k>a[m])
        {
            m=(m+n)/2;
            printf("element found at %d",m+1);
            break;
        }
        else 
        {
            m=m/2;
        }
    }
}
    return 0;
}
