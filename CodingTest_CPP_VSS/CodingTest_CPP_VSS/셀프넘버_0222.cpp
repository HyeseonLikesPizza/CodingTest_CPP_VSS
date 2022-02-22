#include <iostream>
#include <string>

using namespace std;

int SelfNumber(int num) {
	int w = num, i;
	string str = to_string(num);
	
	for (i = 0; i < str.size(); i++)
	{
		w += str[i]-'0';
	}

	return w;
}

int main() {

	int num = 2, res=0, i, cnt=1;
	printf("1\n");

	
	while (cnt <= 10000)
	{
		res = SelfNumber(num);

		if(res != cnt)


		for (i = num + 1; i < res; i++)
			printf("%d\n", i);
		
		num = res;
		cnt++;
	}
	

	return 0;
}