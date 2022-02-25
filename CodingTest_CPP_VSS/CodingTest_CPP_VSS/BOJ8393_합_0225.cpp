#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

int main() {

	int n, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		sum += i;

	cout << sum;
	
	return 0;
}