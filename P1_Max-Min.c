/*Write a program for finding the max and min from 
the three numbers.

Sample IO:
Enter three integers:7 1 9
Min = 1 and Max = 9

Sample IO:
Enter three integers:10 4 2
Min = 2 and Max = 10

Sample IO:
Enter three integers:6 18 15
Min = 6 and Max = 18

*/
#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("Enter three integers:");
	scanf("%d %d %d",&a,&b,&c);
	max = (a>b && a>c) ? a : (b>c? b:c);
	min = (a<b && a<c) ? a : (b<c? b:c);
	/*
	if(a>b && a>c)
	
		max=a;
	else if(b>a && b>c)
		max=b;
	else
		max=c;
	
	if(a<b && a<c)
		min=a;
	else if(b<a && b<c)
		min=b;
	else
		min=c;	
	*/	
	printf("Min = %d and Max = %d\n",min,max);
	return 0;
}
