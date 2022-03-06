#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include "stdio.h"
#include <iostream>
using namespace std;

int main() {

	int iNum, N=1, res, fn, ln, sum;

	scanf("%d", &iNum);
	
	res = iNum;

	while (1) {
		if (res <= 9) {
			fn = 0;
			ln = res;
		}
		else {
			ln = res % 10;
			fn = (res - ln)/10;
		}

		sum = fn + ln;

		res = ln * 10 + (sum % 10);

		if (iNum == res)
			break;

		N++;
	}

	printf("%d", N);

	return 0;
}