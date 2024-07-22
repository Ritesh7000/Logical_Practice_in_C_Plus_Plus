#include<iostream>
#include<string>
using namespace std;


/*
a = 1 = Small
B = 2 = Capital
x = 24 = Small
Y = 25 = Capital
z = 26 = Small
*/
int main(void)
{
	string str = "aBxYz";

	int iSize = str.size();


	for(int i = 0;i < iSize;i++)
	{
		if('A' <= str[i] && str[i] <= 'Z')
		{
			cout << str[i] << " = " << str[i] - 64 << " = Capital" << endl;
			//cout << str[i] << " = " << str[i] - 'A' +1 << " = Capital" << endl;
		}
		else if('a' <= str[i] && str[i] <= 'z')
		{
			cout << str[i] << " = " << str[i] - 'a' + 1 << " = Small\t" << endl;
		}
	}

	return 0;
}