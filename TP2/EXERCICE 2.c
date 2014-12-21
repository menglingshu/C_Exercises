#include<stdio.h>
int main()
{
	int h;
	const int m=30, j=24;
	printf("Enter les heures svp:\n");
	scanf("%d", &h);
	printf("%d = %dmois et %djours et %dheures \n", h, h/(m*j), (h%(m*j))/j, (h%(m*j))%j);
	return 0;
}
