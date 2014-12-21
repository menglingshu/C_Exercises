#include<stdio.h>
int main()
{
	int x, som=0, nbr=0;
	printf("donner les nombers entre 1-100:\n");
	scanf("%d", &x);
	while(x>=0)
	{
		if(x<=100)
		{
			som=som+x;
			nbr++;
		}
		scanf("%d", &x);
	}
	printf("la moyenne est %d :", som/nbr);
	return 0;
}