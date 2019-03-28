# include <stdio.h>
int main()
{
    double x[100],y[100],a,s=1,f=1,k=0;
    int n,i,j;
    printf("\n\n enter the number of terms :");
    scanf("%d",&n);
    printf("\n\n enter the value of x and y:\n");
    for(i=0;i<n;i++)
    {
        scanf("%lf",&x[i]);
        scanf("%lf",&y[i]);
        
    }
    printf("\n the table entered is :\n");
    printf("x\t fx\n");
    for(i=0;i<n;i++)
    {
        printf("%lf \t %lf",x[i],y[i]);
        printf("\n");
        
    }
    printf("\n\n enter the value of x to estimate y \n\n");
    scanf("%lf",&a);
    for(i=0;i<n;i++)
    {
        s=1;
        f=1;
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                s=s*(a-x[j]);
                f=f*(x[i]-x[j]);
                
            }
        }
        k=k+(s/f)*y[i];
        
    }
    printf ("the estimate of the new value is :%f",k);
    return 0;
}
