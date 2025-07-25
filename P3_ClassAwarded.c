/*Write program that declares Class awarded for a given percentage
of marks, where mark <40%= Failed, 40% to <60% = Second class, 
60% to <70%=First class, >= 70% = Distinction. 
Read percentage from standard input.

Sampl IO:
Enter percentage:68.25
First class

*/
#include<stdio.h>
int main()
{
	float p;
	printf("Enter percentage:");
	scanf("%f",&p);
	if(p<40)
		printf("Failed\n");
	else if(p<60)
		printf("Second class\n");
	else if(p<70)
		printf("First class\n");
	else
		printf("Distinction\n");
	return 0;
}
