#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <cmath>
using namespace std;
int main() {

	int h, m, sub;
	scanf("%d %d", &h, &m);

	sub = m - 45;

	if (m - 45 < 0)
	{
		if (h == 0)
			h = 23;
		else
			h = h - 1;
		m = (m - 45) + 60;
	}
	else
		m = m - 45;
	

	cout << h << " " << m;

	return 0;
}