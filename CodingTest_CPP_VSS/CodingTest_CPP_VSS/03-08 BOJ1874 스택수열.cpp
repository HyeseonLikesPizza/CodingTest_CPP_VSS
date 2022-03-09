#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

	int n, num, cnt=1, i, top;
	stack<int> st;
	vector<char> v;
	bool cal = false;

	cin >> n;
	
	for (i = 0; i < n; i++) {		
		scanf("%d", &num);

		if (!st.empty())
			top = st.top();
		if (st.empty() || top < num)
		{
			if (cnt > num) {
				cal = false;
				break;
			}
			while (cnt <= num) {
				st.push(cnt);
				v.push_back('+');
				cnt++;
			}
			st.pop();
			v.push_back('-');
		}
		else if (top >= num) {
			int top = st.top();
			for (int j = top; j >= num; j--) {
				st.pop();
				v.push_back('-');
			}
		}
	}

	if (i == n && st.empty())
		cal = true;

	if (cal) {
		for (int i = 0; i < v.size(); i++) {
			printf("%c\n", v[i]);
		}
	}
	else
	{
		cout << "NO";
	}


	return 0;
}