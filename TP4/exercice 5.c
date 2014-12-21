#include <stdio.h>
void litSeq(float tab[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("Donner les 8 valeur de la mesure: \n");
        scanf("%f", &tab[i]);
    }
}
float litSeuil()
{
    float seuil;
    printf("Donner la valeur du seuil: ");
    scanf("%f", &seuil);
    return seuil;
}
void ecret(float tab[], int size, float seuil)
{
    int i;
    for(i=0; i<size; i++)
    {
        if (tab[i]>seuil)
        {
            tab[i] = seuil;
        }
    }
}
void affiche(float tab[], int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        printf("La sequence ecretee est %f: \n", tab[i]);
    }
}
int main()
{
    float tab[8],  seuil;
    litSeq(tab, 8);
    seuil = litSeuil();
    ecret(tab, 8, seuil);
    affiche (tab, 8);

    return 0;
}