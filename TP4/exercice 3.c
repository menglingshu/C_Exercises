#include <stdio.h>
float somme(float v[], int n)
{
    int i;
    float somme =0;
    for(i=0; i<n ; i++)
    {
        somme = somme + v[i];
    }
    return somme;
}
void tableau(float v[], int n)
{
    float Somme=0;
    int i;
    for(i=0; i<n ; i++)
    {
        printf("entrez les vecteur par un tableau:\n ");
        scanf("%f", &v[i]);
    }
    Somme = somme(v,n);
    printf("la somme est %f", Somme);
}
int main()
{
    float t[10];
    tableau(t,10);
    return 0;
}