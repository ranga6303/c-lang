#include <stdio.h>
void q(int a[], int m, int n);
void d(int a[],int m,int n);
int main()
{
    int a[1000];
    int n,i=0;
    printf("\n\nenter size : ");
    scanf("%d",&n);
    printf("enter elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("original array \n");
    d(a,0,n);
    q(a,0,n);
    printf("sorted arrya \n");
    d(a,0,n);
     return 0;
}

void q(int a[], int m, int n)
{
    if (m >= n)
        return;
    int t, i = m, s = n, k = a[m];
    while (i < s)
    {
        while (i < s && a[s] >= k)
            s--;
        while (i < s && a[i] <= k)
            i++;
        if (i < s)
        {
            t = a[i];
            a[i] = a[s];
            a[s] = t;
        }
    }
    a[m] = a[s];
    a[s] = k;
    q(a, m, s - 1);
    q(a, s + 1, n);
}

void d(int a[],int m,int n)
{int i=m;
while( i<n)
{
printf("%d ",a[i]);
i++;
}
printf("\n");
}
