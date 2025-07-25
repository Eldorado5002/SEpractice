/* Write the program for the simple, compound interest. 

Sample IO:
Enter principle amount:10000
Enter rate of interest:10
Enter time in years:3
Simple interest = 3000.00
Compound interest = 3310.00

*/
#include<stdio.h>
#include<math.h>
int main()
{
	double p,t,r,ci,si;
	printf("Enter principle amount:");
	scanf("%lf",&p);
	printf("Enter rate of interest:");
	scanf("%lf",&r);
	printf("Enter time in years:");
	scanf("%lf",&t);
	si = p*t*r/100;
	ci = p*pow((1+r/100),t) - p;
	printf("Simple interest = %.2lf\n",si);
	printf("Compound interest = %.2lf\n",ci);
	return 0;	
}
