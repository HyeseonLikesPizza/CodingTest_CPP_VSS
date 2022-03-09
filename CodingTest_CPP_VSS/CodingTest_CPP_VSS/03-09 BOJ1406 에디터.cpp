#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
#include <string>

using namespace std;


int main() {

	string str, com;
	int M, p, size;
	stack<char> temp;
	vector<char> v;

	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		v.push_back(str[i]);
	}
	p = str.size();


	cin >> M;
	cin.ignore();
	for (int i = 0; i < M; i++) {
		getline(cin, com);
		if (com.size() == 3)
		{
			if (p == v.size()) {
				v.push_back(com[2]);
			}
			else {
				for (int j = v.size() - 1; j >= p; j--) {
					temp.push(v.back());
					v.pop_back();
				}
				v.push_back(com[2]);
				size = temp.size();
				for (int j = 1; j <= size; j++) {
					v.push_back(temp.top());
					temp.pop();
				}
			}
			p++;
		}
		else if (com == "L" && p != 0) {
			p--;
		}
		else if (com == "D" && p != v.size()) {
			p++;
		}
		else if (com == "B" && p != 0) {
			if (p == v.size()) {
				v.pop_back();
			}
			else {
				for (int j = v.size() - 1; j >= p; j--) {
					temp.push(v.back());
					v.pop_back();
				}
				v.pop_back();
				size = temp.size();
				for (int j = 1; j <= size; j++) {
					v.push_back(temp.top());
					temp.pop();
				}
			}
			p--;
		}
	}

	for (int i = 0; i < v.size(); i++) {
		printf("%c", v[i]);
	}
	/*
	size = st.size();
	for (int i = 0; i < size; i++) {
		temp.push(st.top());
		st.pop();
	}
	size = temp.size();
	for (int i = 0; i < size; i++) {
		printf("%c", temp.top());
		temp.pop();
	}
	*/

	return 0;
}