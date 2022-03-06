#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

int main() {

	long int A, B, C, n=1, cost, sales;

	scanf("%d %d %d", &A, &B, &C);

	while (1) {

		cost = A + (B * n);
		sales = C * n;

		if (sales - cost < 0) {
			n = -1;
			break;
		}

		if (cost < sales)
			break;

		n++;
	}

	printf("%d", n);

	return 0;
}