#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	
	int h, m, c, i=1, sum;

	scanf("%d %d", &h, &m);
	scanf("%d", &c);

	sum = m + c;

	if (sum >= 60) {
		while (1) {
			if (sum - (i * 60) >= 60)
				i++;
			else {
				h += i;
				m = sum - (i * 60);
				break;
			}
		}
	}
	else
		m = sum;

	i = 1;

	if (h >= 24) {
		while (1) {
			if (h - (i * 24) >= 24)
				i++;
			else {
				h -= i * 24;
				break;
			}
		}
	}

	cout << h << " " << m;

	return 0;
}
