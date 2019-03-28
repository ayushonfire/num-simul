#include<stdio.h>
int main()
{
  int n,i,j,k;
  printf("\nenter the order of the matrix :\n");
  scanf("%d",&n);
  double a[n][n],c,f=1.0;
  printf("\n enter the matrix:\n");
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
      scanf("%lf",&a[i][j]);    
      }
      
      
  }
   printf("the entered natrix is :\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%lf",a[i][j]);
           
       }
       printf("\n");
       
   }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            c=a[j][i]/a[i][i];
            for(k=0;k<n;k++)
            {
                a[j][k]=a[j][k]-c*a[i][k];
                
            }
        }
    }
     for(i=0;i<n;i++)
        {
            f=f*a[i][i];
            printf("the value of determinant is :\n");
            printf("%lf",f);
            return 0;
            
        }   
}
