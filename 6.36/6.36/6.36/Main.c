#include <stdio.h>
#include <stdlib.h>
void reservesentence();
int main()
{
	printf("�п�J�@�Ӧr��: ");
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