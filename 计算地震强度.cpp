#include <stdio.h>
int main(void)
{
	float x;
	scanf("%f",&x);
	if(x<4.0&&x>=0)
	{
		printf("Very small!");
	}
	else if(x>=4.0&&x<5.0)
	{
		printf("The windows shook!");
	}
	else if(x>=5.0&&x<6.0)
	{
		printf("Weak buildings were damaged!");
	}
	else if(x>=6.0&&x<7.0)
	{
		printf("Ordinary buildings were damaged!");
	} 
	else if(x>=7.0&&x<8.0)
	{
		printf("Strong buildings were also damaged!");
	}
	else if(x>=8.0)
	{
		printf("The ground was undulating and most of the buildings were damaged!");
	}
	else if("default")
	{
		printf("Input error!");
	}
	return 0;
}

