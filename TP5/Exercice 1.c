#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char chaine1[100], chaine2[100];
    printf("donner le premier chaine de caractere:\n");
    scanf("%s", chaine1);
    printf("donner le dexieme chaine de caractere:\n");
    scanf("%s", chaine2);
    printf("le taille de chaine1 est: %d\n",strlen(chaine1));
    printf("le taille de chaine2 est: %d\n",strlen(chaine2));
    if(strcmp(chaine1, chaine2)<0)
    {printf("le chaine1 est en premier dans l'ordre alphabetique");}
    else if(strcmp(chaine1, chaine2)>0)
    {printf("le chaine2 est en premier dans l'ordre alphabetique");}
    return 0;
}