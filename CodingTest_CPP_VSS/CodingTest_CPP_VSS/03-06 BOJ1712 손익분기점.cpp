#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

int main() {

	int A, B, C, n = 1;

	scanf("%d %d %d", &A, &B, &C);

	if (C - B == 0)
		printf("-1");
	else if ((double)A / (C - B) < 0)
		printf("-1");
	else
	{
		while (1) {
			if (A / (C - B) < n)
				break;
			n++;
		}
		printf("%d", n);
	}


	return 0;
}