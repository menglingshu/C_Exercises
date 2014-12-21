#include<stdio.h>
int main()
{
	int x;
	printf("entrez une suite d'entiers svp: \n");
	scanf("%d", &x);
	while(x!=-1)
	{
		if (x<18 && x>0)
			{printf(" %d", x);}
		    else if (x<0 || x>120)
			{printf("error! please enter the correct number\n");}
			else if(x>=18 && x<=120){}
		scanf("%d", &x);
	} 
	return 0;
}
