/*
Write a program that shows the binary equivalent of a 
given positive number between 0 to 255.

Sample output:
Enter a decimal number(0 to 255):87                                                                                     
Binary number of 87 is 1010111

*/
#include <stdio.h>
#include <math.h>
int main() 
{
	int deci,bin=0,r,n,i=0;
	printf("Enter a decimal number(0 to 255):");
	scanf("%d", &deci);
	n=deci;
	
	while(n>0)
	{
		r=n%2;
		bin = bin+r*pow(10,i);
		n=n/2;
		i++;
	}
	printf("Binary number of %d is %d", deci, bin);
	return 0;
}

