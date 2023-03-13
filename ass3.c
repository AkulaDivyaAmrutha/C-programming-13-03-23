/* C program to print diff b/w min and max ele in array*/
#include<stdio.h>
main()
{
	int min,max,n,a[10],d=0,i;
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
	min=a[0];
	for(i=0;i<=n-1;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	d=max-min;
	printf("%d",d);
}
