#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>

using namespace std;

int main() {

	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0 && y > 0)
		cout << "1";
	else if (x < 0 && y > 0)
		cout << "2";
	else if (x > 0 && y < 0)
		cout << "4";
	else if (x < 0 && y < 0)
		cout << "3";

	return 0;
}