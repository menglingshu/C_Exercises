#include<stdio.h>
#include<ctype.h>
#include<string.h>
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
int main()
{
    int n;
    printf("donner le nombre n= \n");
    scanf("%d", &n);
    afficherlgn(n);
    return 0;
}