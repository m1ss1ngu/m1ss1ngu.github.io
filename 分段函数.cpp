#include <stdio.h>
#include <math.h>
int main(void)
{
	double x,y;
	scanf("%lf",&x);
	if(x<-1)
	{
		y=2*x-1; 
		printf("x=%.2lf,y=%.2lf\n",x,y);
	}
	else if(x==0)
	{
		y=0;
		printf("x=0.00,y=0.00");
	}
	else if(x>=-1&&x<1&&x!=0)
	{
		y=2*x/3+10;
		printf("x=%.2lf,y=%.2lf\n",x,y);
	}
	else if(x>=1)
	{
		y=exp(2)+sqrt(x);
		printf("x=%.2lf,y=%.2lf\n",x,y);
	}
	return 0;
}
