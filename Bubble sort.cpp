#include <stdio.h>
#include <stdlib.h>
int main()
{
     int n,i,j,temp,a[20];
         printf("how many num do you want:\n");
	   scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 printf("enter the num a[%d]=",i);
	 scanf("%d",&a[i]);
	}
    for(i=1;i<=n-1;i++)
	 {
	  for(j=1;j<=n-i;j++)
         {
		  if(a[j]>a[j+1])
		    {
		    temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
	        }
		 }
	 }
printf("Sorted sequence is: \n");
   for(i=1;i<=n;i++)
   printf("%d  \n",a[i]);
return 0;
}
