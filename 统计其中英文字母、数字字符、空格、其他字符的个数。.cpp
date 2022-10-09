#include<stdio.h>
int main(void)
{
	int a=0,b=0,c=0,d=0,t;//a存储英文字母个数，b存储空格的个数，c存储数字的个数，d存储其他字符个数 
	char x;
scanf("\n");
	while((x=getchar())!='\n')//对字符串中的每一个字符进行比较判断 
	{
		if(x>='a'&&x<='z'||x>='A'&&x<='Z');
		a++；
		else if(x>='1'&&x<='9')
		b++;
		else if(x==' ')
		c++;
		else if d++;
	}
	t=a+b+c+d;
	printf("total=%d,letter=%d,number=%d,space=%d,other=%d",t,a,b,c,d);
}

