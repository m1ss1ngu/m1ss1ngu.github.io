#include <stdio.h>
int main()
{
int i=0;
while (i<=100&&i>=0)
{
if((i%3==0)&&(i%7==0))
printf("%d ",i);
i++;
}
return 0;
}
