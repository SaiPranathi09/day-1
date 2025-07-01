#include<stdio.h>
void main()
{
	int pen_price;

	printf("Enter the pen_price value:");
	scanf("%d",&pen_price);

	pen_price%=45;
	printf("pen_price is:%d",pen_price);
}