#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>

using namespace std;

int N;

void RecursiveStar(int n, int cnt) 
{
	if (n == 1) {
		printf("*");
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		RecursiveStar(n / 3, cnt++);
	}

	if (cnt / 3 == 0)
		printf("\n");

}

int main() {

	scanf("%s", &N);
	RecursiveStar(N, 1);

	return 0;
}