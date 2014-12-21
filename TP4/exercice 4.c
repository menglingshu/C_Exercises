#include <stdio.h>
float pscalaire(float v1[], float v2[], int size)
{
    int i;
    float ps = 0;
    for(i=0; i<size; i++)
    {
        ps = ps +(v1[i]*v2[i]);
    }
    printf("Le produit scalaire A*B vaut %f", ps);
    return ps;
}
int main()
{
    float v1[3], v2[3], Pscalaire;
    int size=3, i;
    for(i=0; i<size; i++)
    {
        printf("Donner les valeurs de A:\n");
        scanf("%f", &v1[i]);
    }
    for(i=0; i<size; i++)
    {
        printf("Donner les valeurs de B:\n");
        scanf("%f", &v2[i]);
    }
    Pscalaire = pscalaire(v1, v2, size);
    return 0;
}
