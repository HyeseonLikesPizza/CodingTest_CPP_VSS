#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

int main() {

	int A, B;

	while (1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0)
			break;
		printf("%d\n", A + B);
	}
	

	return 0;
}