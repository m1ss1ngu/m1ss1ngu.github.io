#include <stdio.h>
int main(void)
{
	char ch;
	ch=getchar();
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	printf("%c is a english letter.\n",ch);
	else if(ch>='0'&&ch<='9')
	printf("%c is a numeric character.\n",ch);
	else if(ch==' ')
	printf("%c is a blankspace.\n",ch);
	else 
	printf("%c is other character.\n",ch);
	return 0;
 } 
