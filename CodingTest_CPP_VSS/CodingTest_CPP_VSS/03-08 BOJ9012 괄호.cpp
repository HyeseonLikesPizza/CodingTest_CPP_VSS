#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	int T, cnt=0;
	string str;
	stack<char> st;
	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++) {
		getline(cin, str);
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(')
				cnt++;
			else if (str[j] == ')') {
				if (cnt == 0)
				{
					cnt = 3000;
					break;
				}
				cnt--;
			}
				
		}
		if (cnt != 0)
			printf("NO\n");
		else
			printf("YES\n");
		cnt = 0;
	}

	return 0;
}