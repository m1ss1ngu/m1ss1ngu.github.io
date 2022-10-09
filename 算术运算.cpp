#include <stdio.h>
int main(void)
{
	int x,y,a,b,c;
	float d; 
	scanf("%d %d",&x,&y);
	a=x+y;
	b=x-y;
	c=x*y;
	d=(float)x/y; 
	printf("%d+%d=%d\n",x,y,a);
	printf("%d-%d=%d\n",x,y,b);
	printf("%d*%d=%d\n",x,y,c);
	printf("%d/%d=%.2f\n",x,y,d);
	return 0;
}

