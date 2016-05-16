#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//generam dimensiunea tijei
int random_number()
{ int n;
    srand((unsigned) time(NULL));
n=rand() % 5+1;
return n;
}
//generam tabelul de preturi
int preturi()
{   int i;
    int x[2000];
    srand((unsigned) time(NULL));

    for(i=1;i<=random_number()-1;i++)
    {
        x[i]=rand() % 6;
    }
return x[i];
}

int max(int a, int b)
{ return (a > b)?a : b;}

int main ()
{
int a[10][10],i,j;

if(random_number()!=0)
{
for(i=1;i<random_number()-1;i++)
{
    for(j=1;j<random_number();j++)
    {
        if(i==0||j==0)
            a[i][j]=0;
        else if(i==1)
            a[i][j]=preturi()*j;
        else if(i>j)
            a[i][j]=a[i-1][j];
        else if(i<=j)
            a[i][j] = max(a[i-1][j],preturi()+a[i][j-i]);
    }
}
}
else
    printf("tija nu are dimensiune");
            printf("%d", a[i][j]);

printf("\n");
    return 0;
}
