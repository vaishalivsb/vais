
#include <stdio.h>
int main(void)
{
char s;
scanf("%c",&s);
if(((s>='a')&&(s<='z'))||((s<='A')&&(s>='Z')))
printf("alphabet");
else
printf("not a alphabet");
	return 0;
}
 
