#include <stdio.h>
#include <math.h>

int estPremier(int nombre)
{
    int b;
    int racine = sqrt(nombre);
    int resultat =1;

    for(b=2;b<=racine;b++)
    {
        if(nombre%b==0)
            resultat = 0;
    }
    return resultat;
}
int main()
{
    int resultat, nombre;
    printf("entrez le nombre svp:\n");
    scanf("%d",&nombre);
    resultat = estPremier(nombre);
    if(resultat==0)
    {printf("le nombre n'est pas premier");}
    else
    {printf("le nombre est premier");}
    return 0;
}