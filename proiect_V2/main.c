#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{ return (a > b)? a : b;}

int main ()
{
int p[100];
int a[10][10],i,j,n;

printf("dati dimensiunea tijei: ");
scanf("%d",&n);
for(i=1;i<=n;i++) {
    scanf("%d",&p[i]); }

for(i=1;i<n-1;i++)
        {
    for(j=1;j<n;j++)
    {
        if(i==0||j==0)
            a[i][j]=0;
        else if(i>j)
            a[i][j]=a[i-1][j];
        else if(i<=j)
            a[i][j] = max(a[i-1][j],p[i]+a[i][j-i]);
    }
        }
    for( i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d", a[i][j]);
        }
printf("\n");
    }
    return 0;
}
