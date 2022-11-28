#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
	int search, ans;
	int data[] = { 1, 5, 12, 21, 25, 38, 41, 47, 55, 56, 78, 81, 99 };

	printf("請輸入要搜尋的資料: ");
	scanf("%d", &search);


	ans = binarysearch(data, search, sizeof(data) / sizeof(int));

	if (ans < 0)
	{
		printf("找不到 %d\n", search);
	}
	else
	{
		printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
	}

	system("pause");
}

int binarysearch(int data[], int search, int n)
{
	int left = 0, right = n - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (data[mid] == search)
		{
			return mid;
		}
		else if (data[mid] > search)
		{
			right= mid - 1;
		}
		else if (data[mid] < search)
		{
			left = mid + 1;
		}
	}

	return -1;
}