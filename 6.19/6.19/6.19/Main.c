#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int first, second,sum;
	int b[11] = { 0 };
	
	srand(time(0));
	for (int i = 1; i <= 36000; i++)
	{
			first = 1 + rand() % 6;
			second = 1 + rand() % 6;
			sum = first + second;	
			b[sum - 2]++;
	}
	for (int i = 2; i <= 12; i++)
	{
		printf("»ë¨ì%d:%d\n", i, b[i - 2]);
	}
	
}