#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rod_cutting.h"


int max(int a, int b)
{ return (a > b)?a : b;}

float rod_cutting ()
{
//generam dimensiunea tijei
int n,i,j;
float **a;
int *x;
srand((unsigned) time(NULL));
n=rand() % 10+1;
printf("dimensiunea tijei: %d", n);
printf("\n");
//generam tabelul de preturi
x=(int *) calloc (n,sizeof(int));
srand((unsigned) time(NULL));
for(i=1;i<=n-1;i++)
    {
        x[i]=rand() % 1000+1;
    }
//alocam memorie pt matrice
a = (float **) malloc(n * sizeof(float *));

for (i = 0; i < n; i++) {
    a[i]=calloc(n, sizeof(float));}

    if(n!=0)
    {
        for(i=1;i<=n-1;i++)
        {
            for(j=1;j<n;j++)
            {
                if(i==0||j==0)
                    a[i][j]=0;
                else if(i==1)
                    a[i][j]=x[i]*j;
                else if(i>j)
                    a[i][j]=a[i-1][j];
                else
                    a[i][j] = max(a[i-1][j],x[i]+a[i][j-i]);
            }
        }
    }
                else
                    printf("tija nu are dimensiune");

//afisam posibile preturi
printf("mai jos aveti o lista cu profitul pe care il puteti obtine\n\n");
    for (i = 1; i < n; i++)
    {
        for (j = 1;j <= n; j++)
        {
            printf("%.3f", a[i][j]);
            printf("\n");
        }
    }
free(a);
printf("\n");
return 0;
}
