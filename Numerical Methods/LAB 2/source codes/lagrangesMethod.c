#include<stdio.h>
#include<math.h>
#define MAX 15
int main()
{
    int n,i,j;
    float x[MAX], f[MAX],fp,lf,sum,xp;
    char q;
    printf("\nEnter the number of data pairs:");
    scanf("%d",&n);
    printf("\nEnter data pairs x(i) and values f(i) (one set in each line):\n");
    for(i=0;i<n;i++)
    scanf("%f%f",&x[i],&f[i]);
    do{
        printf("\nEnter x at which interpolation is required:");
        scanf("%f",&xp);
        for(i=0;i<n;i++){
            lf=1.0;
            for(j=0;j<n;j++){
                if(i!=j)
                lf=lf*(xp-x[j])/(x[i]-x[j]);
            }
            sum=sum+lf*f[i];
        }
        fp=sum;
        printf("\nInterpolated function value at x=%f is %f.",xp,fp);
        fflush(stdin);
        printf("\nDo you want to input another value?(y/n):");
        scanf("%c",&q);
    }while(q=='y' || q=='Y');
    return 0;
}