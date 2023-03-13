/*C program to print sum of all the array elements*/
#include<stdio.h>
main()
{
	int a[10],i,n,s=0;
	scanf("%d",&n);//size of array
	printf("Enter the elements in the array\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("Sum=%d",s);
}
