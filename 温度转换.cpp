#include<stdio.h>
int main()
{
	double F, C;
	printf("Input F:");
	scanf("%lf", &F);
	C=(F-32)*5/9;
	printf("F=%.2f,C=%.2f",F,C);
	return 0;
}
