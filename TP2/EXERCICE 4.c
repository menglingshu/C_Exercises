#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("donnez la premiere valeur: ");
	scanf("%d", &a);
	printf("donnex la deuxieme valeur: ");
	scanf("%d", &b);
	printf("donnez la troisieme valeur: ");
	scanf("%d", &c);
	if (a>b)
	{	t=a;
		a=b;
		b=t;}
	if (a>c)
	{	t=a;
		a=c;
		c=t;}
	if (b>c)
	{	t=b;
		b=c;
		c=t;}
	printf("Le minimum est %d, le maximum est %d", a, c);
	return 0;
}