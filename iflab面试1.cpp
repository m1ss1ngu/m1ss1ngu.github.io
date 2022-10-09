#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
	char str[50] = { 0 };
	int i, len;
	gets(str);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (isdigit(str[i]))
		
		{
			printf("%c",str[i]);
		}
		else if(isdight(str[i])=0)
		{
			printf("none")
		}
	}
	return 0;
}
