#include<stdio.h>
int  main()
{
	int  price,marks;
	
	printf("enter the marks:");
	scanf("%d",&marks);

	marks-=100;
	printf("The marks is:%d",marks);
	return 0;
}