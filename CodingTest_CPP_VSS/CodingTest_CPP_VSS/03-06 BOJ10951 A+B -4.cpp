#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include "stdio.h"
#include <iostream>
using namespace std;

int main() {

	int A, B;

	while (scanf("%d %d", &A, &B)!=EOF) {
		printf("%d\n", A + B);
	}


	return 0;
}