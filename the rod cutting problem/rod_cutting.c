///\file rod_cutting.c
///\brief C library implementation for basic mathematic operation.
///
/// Created by Manescu Marius-Alexandru on 31/05/15.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rod_cutting.h"


int max(int a, int b)
{return (a > b)?a : b;
/** \brief The function returns the highest value of 2 integers
 *
 * \param A First integer
 * \param B Al Second integer
 */
}

//generam dimensiunea tijei
float rod_cutting ()
{
/** \brief The function calculates profits which we can get after cutting a rod
 *
 * \param n Represent the dimension of a rod
 * \param a Represent the matrix in which save prices
 * \param x Represent the original table with values for every cut
 * \param i,j Represent the line respectively column the matrix
 \return a[i][j]
 *
 *\note
 *
 * Because of requirements, the size of rod and the table with values must automatically determined
 *
 * n=rand() % 50- the variable n we assigned a value *
 * x[i]=rand() % 50 - Automatically generates values for every cut
 *
 * x=(int *) calloc (n,sizeof(int));Assign a vector memory

 */

int n,i,j;
float **a;
int *x;
srand((unsigned) time(NULL));
n=rand() % 40+1;
printf("dimensiunea tijei: %d", n);
printf("\n");

//generam tabelul de preturi
x=(int *) calloc (n,sizeof(int));
srand((unsigned) time(NULL));
for(i=1;i<=n-1;i++)
    {
        x[i]=rand() % 500+1;
    }
//alocam memorie pt matrice
a = (float **) malloc(n * sizeof(float *));

for (i = 0; i < n; i++) {
    a[i]=calloc(n, sizeof(float));}

for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
                a[i][j] = max(a[i-1][j],x[i]+a[i][j-i]);
            else
                a[i][j]=a[i-1][j];
        }
    }

//afisam posibile preturi
printf("mai jos aveti o lista cu profiturile pe care il puteti obtine\n\n");
    for (i = 1; i < n; i++)
    {
        for (j = 1;j <= n; j++)
        {
            printf("%.3f", a[i][j]);
            printf("\n");
        }
    }
free(a); free(x);
printf("\n");
return 0;
}
