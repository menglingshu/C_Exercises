#include<stdio.h>
#include<ctype.h>
#include<string.h>
void palindrome(char src[], char dest[])
{
    if (strcmp(src, dest) ==0)
    {printf("c'est un palindrome\n");}
    else
    {printf("c'est pas un palindrome\n");}
}
void miroir(char src[], char dest[])
{
    int i, len;
    len = strlen(src);
    for (i=0; i<len; i++)
    {
        dest[len-1-i] = src[i];
    }
}
int main()
{
    char src[100], dest[100];
    char src1[100], dest1[1000];
    printf("donner une chaine de caractere: \n");
    scanf("%s", src);
    miroir(src, dest);
    printf("l'ordre inverse est: %s \n", dest);
    palindrome(src, dest);
    return 0;
}

    printf("donnez votre phrase:\n");
    scanf("%s", phrase);
    maj2min(phrase);
    printf("Voici la phrase transformee: %s\n", phrase);
    return 0;
}