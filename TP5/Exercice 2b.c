#include<stdio.h>
#include<ctype.h>
#include<string.h>

void afficherlgn2(int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (i%2==0)
        {printf("-");}
        else
        {printf("#");}
    }
}
void afficherlgn(int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (i%2==0)
        {printf("#");}
        else
        {printf("_");}
    }
}
void damier(int n, int m)
{
    int i;
    for (i=0; i<m; i++)
    {
            if (i%2==0)
            {afficherlgn(n);}
            else
            {afficherlgn2(n);}
            printf("\n");

    }
}
int main()
{
    int n,m;
    printf("donner le nombre n= \n");
    scanf("%d", &n);
    printf("donner le nombre m= \n");
    scanf("%d", &m);
    damier(n, m);
    return 0;
}
