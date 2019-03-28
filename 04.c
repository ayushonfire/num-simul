#include <stdio.h>
# include<math.h>
int main()
{
int n,i,j,k;
printf("\n enter the order of the matrix\n");
scanf("%d",&n);
double a[n][n+1],x[n],sum=0,c;
printf("enter the matrix:");
for (i=0;i<n;i++)
{
    for(j=0;j<n+1;j++)
    {
        scanf("%lf",&a[i][j]);
        
    }
}
printf("\n the enterd matrix is :\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n+1;j++)
    {
        printf("%lf",a[i][j]);
    }
    printf("\n");
    
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    { c=a[j][i]/a[i][i];
    for(k=0;k<n+1;k++)
    {
        a[j][k]=a[j][k]-c*a[i][k];
    }
}
}
x[n-1]=a[n-1][n]/a[n-1][n];
for(i=n-2;i>=0;i--)
{
    sum=0;
    for(j=i+1;j<n;j++)
    {
        sum=sum+a[i][j]*x[j];
    }
    x[i]=(a[i][n]-sum)/a[i][i];
    
    
}
printf("\n the sample output:\n");
for(i=0;i<n;i++)
{
    printf("\nx%d=%f\t",i+1,x[i]);
    
}
return 0;
}

