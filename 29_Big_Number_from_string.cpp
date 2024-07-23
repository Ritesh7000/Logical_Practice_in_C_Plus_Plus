#include<iostream>
#include<string>
#include<algorithm>
#include<functional>

using namespace std;

int main(void)
{
	string str = "352782955";
	
	sort(str.begin(),str.end(), greater<int>());

	cout << "Large Number is = " << str;

/*	o/p:

	Large Number is = 987555322
*/

	return 0;
}