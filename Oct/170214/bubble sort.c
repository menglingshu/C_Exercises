#include<stdio.h>
int main()
{
 static int a[8] = {5,9,7,6,1,8,13,4};
 int length;
 int i=0, j=0, k=0, m=0;
 int n=0;
 
 length = sizeof(a) / sizeof(a[0]);
 m=length;
 
 for(i = 1; i<length; i++)
 {
  m-=1;
  
  for(j=0; j<m-1;j++)
  {
   if(a[j]>a[j+1])
   {
    k = a[j];
    a[j] = a[j+1];
    a[j+1] = k;
   }
    n++;
  }
 }
 printf("\n");
}
