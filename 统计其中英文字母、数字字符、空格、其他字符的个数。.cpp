#include<stdio.h>
int main(void)
{
	int a=0,b=0,c=0,d=0,t;//a�洢Ӣ����ĸ������b�洢�ո�ĸ�����c�洢���ֵĸ�����d�洢�����ַ����� 
	char x;
scanf("\n");
	while((x=getchar())!='\n')//���ַ����е�ÿһ���ַ����бȽ��ж� 
	{
		if(x>='a'&&x<='z'||x>='A'&&x<='Z');
		a++��
		else if(x>='1'&&x<='9')
		b++;
		else if(x==' ')
		c++;
		else if d++;
	}
	t=a+b+c+d;
	printf("total=%d,letter=%d,number=%d,space=%d,other=%d",t,a,b,c,d);
}

