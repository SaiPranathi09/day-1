#include<stdio.h>
void main()
{
	float book_price;

	printf("Enter the book_price value:");
	scanf("%f",&book_price);

	book_price/=36.4;
	printf("book_price is:%f",book_price);
}