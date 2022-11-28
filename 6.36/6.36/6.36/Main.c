#include <stdio.h>
#include <stdlib.h>
void reservesentence();
int main()
{
	printf("請輸入一個字串: ");
	reservesentence();
	return 0;
}
void reservesentence()
{
	char a;
	scanf("%c", &a);
	if (a != '\n')
	{
		reservesentence();
		printf("%c", a);
	}
}