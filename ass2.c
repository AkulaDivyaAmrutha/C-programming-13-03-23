/* C program to print min & max ele in array*/
#include<stdio.h>
main()
{
	int min,max,a[10],n,i;
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d\t",max);
	min=a[0];
	for(i=0;i<=n-1;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("%d",min);
}
