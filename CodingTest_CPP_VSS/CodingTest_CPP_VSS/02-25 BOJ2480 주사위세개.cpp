#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, b, c, res=0, max=1;
	int cnt[7] = { 0 };

	scanf("%d %d %d", &a, &b, &c);

	cnt[a]++;
	cnt[b]++;
	cnt[c]++;

	for (int i = 1; i <= 6; i++) {
		if (cnt[i] >= 2)
			res = pow(10, cnt[i]+1) + i * pow(10, cnt[i]);
		if (cnt[i] >= 1 && max < i)
			max = i;
	}

	if (res == 0)
		res = max * 100;


	cout << res;

	return 0;
}
