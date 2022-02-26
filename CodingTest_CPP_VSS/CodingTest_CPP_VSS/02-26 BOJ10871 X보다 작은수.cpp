#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

int main() {

	int N,X,temp;
	bool num[1001] = {false};
	
	scanf("%d %d", &N, &X);

	for (int i = 1; i <= N; i++) {
		scanf("%d", &temp);
		if (temp < X)
			printf("%d ", temp);
	}
		
	


	return 0;
}