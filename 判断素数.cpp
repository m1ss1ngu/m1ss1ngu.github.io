#include <stdio.h>
int main()
{
	int i,m;
	scanf("%d",&m);
	for(i=2;i<m;i++)
	if(m%i==0)break;
	if(i<m||m==0)
	printf("%d is not prime.\n",m);
	else
	printf("%d is prime.\n",m);
	return 0;
 } 
