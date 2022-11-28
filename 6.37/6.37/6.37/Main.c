#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a1, a2, a3, a4, a5;
	int max;
	
	printf("請輸入5個變數: ");
	scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
	int a[5] = { 0 };
	a[0] = a1;
	a[1] = a2;
	a[2] = a3;
	a[3] = a4;
	a[4] = a5;
	max = a[0];
	for (int i = 0; i < 5; i++)
	{
		
		if (a[i] >max)
		{
			max = a[i];
		}
	
	}
	printf("最大的數: %d", max);
}