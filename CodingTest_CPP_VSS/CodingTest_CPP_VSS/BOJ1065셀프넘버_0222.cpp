#include <iostream>
#include <string>

bool notSelfNum[10000];

using namespace std;

int SelfNumber(int num) {
	int w = num, i;
	string str = to_string(num);
	
	for (i = 0; i < str.size(); i++)
	{
		w += str[i]-'0';
	}

	notSelfNum[w] = true;

	return w;
}

int main() {

	int cnt=1, res=0;

	while (cnt <= 10000)
	{
		res = SelfNumber(cnt);

		if(!notSelfNum[cnt])
			printf("%d\n", cnt);


		cnt++;
	}
	
	return 0;

}