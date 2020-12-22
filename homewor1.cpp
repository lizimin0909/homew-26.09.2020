// homewor1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void snakeArr(int** a, int n)
{
	int i, j, t;
	int k;
	int flag;
	t = 0;
	for (k = 0; k < n; ++k)
	{
		if ((k & 1) == 0)
		{
			i = k;
			j = 0;
			for (; i >= 0; --i, ++j)
			{
				t++;
				a[i][j] = t;
			}
		}
		else
		{
			i = 0;
			j = k;
			for (; j >= 0; ++i, --j)
			{
				t++;
				a[i][j] = t;
			}
		}
	}
	if ((n & 1) == 0)
		flag = 1;
	else flag = 0;
	for (k = 1; k < n; ++k)
	{
		if (flag == 1)
		{
			i = n - 1;
			j = k;
			for (; j < n; ++j, --i)
			{
				t++;
				a[i][j] = t;
			}
			flag = 0;
		}
		else
		{
			i = k;
			j = n - 1;
			for (; i < n; ++i, --j)
			{
				t++;
				a[i][j] = t;
			}
			flag = 1;
		}
	}

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
			std::cout << " " << a[i][j];
		std::cout << std::endl;
	}
}
int main()
{
	int n;
	std::cout << "input n:";
	std::cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new int[n];
	}
	snakeArr(arr, n);
}

