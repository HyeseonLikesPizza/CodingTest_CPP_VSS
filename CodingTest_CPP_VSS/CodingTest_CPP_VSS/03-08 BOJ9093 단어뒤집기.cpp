#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

	int T, size, cnt=0;
	string str,temp;
	char ch;
	stringstream ss;

	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++)
	{
		getline(cin, str);
		ss.str(str);
		while (ss >> temp) {
			size = temp.size();
			for (int j = 0; j < size/2; j++) {
				ch = temp[j];
				temp[j] = temp[size - 1 - j];
				temp[size - 1 - j] = ch;
			}
			cout << temp << " ";
		}
		str.clear();
		temp.clear();
		ss.clear();
		printf("\n");
	}

	return 0;
}