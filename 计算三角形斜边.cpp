#include "stdio.h"
#include "math.h"
int main(void)
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	double c;
	c=sqrt(a*a+b*b);
	printf("%.2lf\n",c);
	return 0;
 } 
