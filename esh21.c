#include<stdio.h>
int main()
{
	int num, binary, decimal=0, base=1, rem;
	printf("Enter a binary number: ");
	scanf("%d", &num);
	binary=num;
	while(num>0)
	{
		rem=num % 10;
		decimal+=rem*base;
		num/=10;
		base*=2;
	}
	printf("The decimal value for the given number is: %d", decimal);
}