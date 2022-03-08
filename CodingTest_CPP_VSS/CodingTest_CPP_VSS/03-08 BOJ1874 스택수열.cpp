#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

	int n, num, arr[100000];
	stack<int> st;
	vector<char> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[i] = num;
		if (st.empty())
		{
			for (int i = 1; i <= num; i++) {
				st.push(i);
				v.push_back('+');
			}
			st.pop(num);
			v.
		}
	}



	return 0;
}