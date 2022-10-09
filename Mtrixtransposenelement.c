// You are using GCC
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,n,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j == m-1)
            printf("\n");
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
            if(j==n-1)
            printf("\n");
        }
        
    }
}
