#include<stdio.h>
#include<string.h>

int islower1(char lettre1)
{
    if (lettre1>='a'&& lettre1<='z')
    return 1;
    else
    return 0;
}
int isupper1(char lettre2)
{
    if (lettre2>='A'&&lettre2<='Z')
    return 1;
    else
    return 0;
}
char tolower1(char lettre3)
{
    return lettre3+32;

}
char toupper1(char lettre4)
{
    return lettre4-32;
}
int maj2min(char ch[])
{
    int i;
    for (i=0; i<strlen(ch); i++)
    {
        if (islower1(ch[i]) == 1)
        ch[i] = toupper1(ch[i]);
        else if(isupper1(ch[i])==1)
        ch[i] = tolower1(ch[i]);
    }
    return 0;
}
int main()
{
    char phrase[100];
	printf("donnez votre phrase:\n");
    scanf("%s", phrase);
    maj2min(phrase);
    printf("Voici la phrase transformee: %s\n", phrase);
    return 0;
}
