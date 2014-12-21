#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[10], i, min;
    for (i=0; i<10; i++)
    {
        printf("please enter the numbers:\n");
        scanf("%d", &tableau[i]);
    }
    min = tableau[0];
    for (i=1; i<10; i++)
    {
        if (tableau[i]<min)
        {
            min= tableau[i];}
            }
    printf("the min number is:%d", min);
    return 0;
}