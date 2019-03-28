#include <stdio.h>
#include<math.h>
int main()
{
 int i,j,k,m,n;
 float f[10][10],a[10][10],e[10][10],c[10][10],x[10];
 printf("\nenter the value of order :\n");
 scanf("%d",&n);
 printf("\nenter the matrix\n ");
 for(i=0;i<n;i++)
 {
     for(j=0;j<n+1;j++)
     {
         scanf("%f",a[i][j]);
         
     }
     
 }
    printf("\n the entered maatrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%f",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        e[i][0]=a[i][0];
    }
    for(j=1;j<n+1;j++)
    {
        f[0][j]=(a[0][j]/e[0][0]);
    }
    for(m=1;m<n;m++)
    {
        for(i=m;i<n;i++)
        {
            for(k=0;k<m;k++)
            {
                a[i][m]=a[i][m]-e[i][k]*f[k][m];
            }
            e[i][m]=a[i][m];
        }
        for(j=m+1;j<n+1;j++)
        {
            for(k=0;k<m;k++)
            {
                a[m][j]=a[m][j]-e[m][k]*f[k][j];
            }
            f[m][j]=a[m][j]/e[m][m];
        }
    }
    for(k=0;k<n;k++)
    {
        i=(n-k-1);
        x[i]=f[i][n];;
        for(j=i+1;j<n;j++)
        {
            x[i]=x[i]-f[i][j]*x[j];
        }
    }
    printf("\nthe solution is :\n");
    for(i=0;i<n;i++)
        {
        printf("\nx[%d]=%f\n",i+1,x[i]);
        
        }
        return 0;
    }
