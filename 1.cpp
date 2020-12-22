// homework0.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
void shiftArray(int A[], int n, int k) {

}
int* createArray(int N) {
	/*
	if (N > 0)
		return new int[N];
	else
		nullptr;
	*/
	return N > 0 ? (new int[N]) : nullptr;
}
void moveArray(int M[], int K,int n ) {
	std::cout << "input K: "; std::cin >> K;
	for (int i = K; i > 0; --i) {
		for (int j = 0; j < n - K; ++j) {
			int a = M[i - 1 + j];
			M[i - 1 + j] = M[i + j];
			M[i + j] = a;
		}
	}
	for (int j = 0; j < n; ++j) {
		std::cout << M[j];
	}
}

int main()
{
	int n = 0;
	int k = 0;
	std::cout << "Size of array: "; std::cin >> n;
	int *M = createArray(n);

	if (M == nullptr) {
		std::cout << "Error! Can not allocate memmory." << std::endl;
		return 1;
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			std::cout << "Size of array["<<i<<"]:"; std::cin >> M[i];
			std::cout << std::endl;
		}
	}
	moveArray(M, k, n);
}

