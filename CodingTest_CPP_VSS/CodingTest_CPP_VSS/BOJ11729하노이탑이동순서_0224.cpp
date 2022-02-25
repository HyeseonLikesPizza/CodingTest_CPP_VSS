#include <iostream>
#include <cmath>
using namespace std;

int N;

void Hanoi(int moveFrom, int moveTo, int n) {


	if (n == 1) {
		printf("%d %d\n", moveFrom, moveTo);
		return;
	}
	
	Hanoi(moveFrom, 6 - (moveFrom + moveTo), n - 1);
	Hanoi(moveFrom, moveTo, 1);
	Hanoi(6 - (moveFrom + moveTo), moveTo, n - 1);

}

int main() {

	cin >> N;
	int res = pow(2, N) - 1;
	
	cout << res << endl;
	Hanoi(1, 3, N);

	return 0;
}