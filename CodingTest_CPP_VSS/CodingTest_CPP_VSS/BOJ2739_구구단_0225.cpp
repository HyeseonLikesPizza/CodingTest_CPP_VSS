#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);

	return 0;
}