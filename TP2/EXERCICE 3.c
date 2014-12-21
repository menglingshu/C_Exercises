#include<stdio.h>
int main()
{
	int j, m, a;
	const int aa=2014, am=11, aj=07;
	const int ma=12, ja=30;
	printf("enter la date de naissance svp:\n");
	scanf("%d %d %d", &j, &m, &a);
	if(j>31 || m>12 || a>2014)
	{
		printf("errer!");}
	else{printf("L'age est %d annees", aa-a);}
	if (am-m<0)
	{
	printf("%d mois", ma-m+am);}
	else{printf("%d mois", am-m);}
	if (aj-j<0)
	{
	printf("%d jours", ja-j+aj);}
	else{printf("%d jours", aj-j);}
	return 0;
}