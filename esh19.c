#include<stdio.h>
#include<math.h>
int convert(int dec);
int main()
{
	int dec;
	printf("Enter a decimal number: ");
	scanf("%d", &dec);
	printf("The octel number of %d is %d", dec, convert(dec));
	return 0;
}
int convert(int dec)
{
	int octel=0, i=1;
	while(dec!=0)
	{
		octel+=(dec%8)*i;
		dec/=8;
		i*=10;
	}
	return octel;
}