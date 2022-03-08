#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Stack {

private:
	int arr[10000];
	int arrIdx;

public:
	Stack() {
		memset(arr, 0, 10000 * sizeof(int));
		arrIdx = -1;
	}
	int Size() {
		return arrIdx +1;
	}
	int Empty() {
		if (Size() == 0)
			return 1;
		else
			return 0;
	}
	int Top() {
		if (Empty() == 1)
			return -1;
		else
			return arr[arrIdx];
	}
	void Push(int num) {
		arrIdx++;
		arr[arrIdx] = num;
	}
	int Pop() {
		if (Size() == 0)
			return -1;
		else
		{
			int temp;
			temp = arr[arrIdx];
			arr[arrIdx] = 0;
			arrIdx--;
			return temp;
		}
	}

};

int main() {

	Stack st;
	int N;
	string str;

	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++) {
		getline(cin, str);

		if (str.find("push") != string::npos) {
			str.erase(0, 4);
			st.Push(stoi(str));
		}
		else if (str == "top") {
			printf("%d\n", st.Top());
		}
		else if (str == "pop") {
			printf("%d\n", st.Pop());
		}
		else if (str == "size") {
			printf("%d\n", st.Size());
		}
		else if (str == "empty") {
			printf("%d\n", st.Empty());
		}
	}



	return 0;
}