#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	for (int i = n; i >= 1; i--)
		printf("%d\n", i);

	return 0;
}