#include<iostream>
#include<string>

using namespace std;
/*
o/p:
axbdcxxydixbrxd
abdcydibrdxxxxx

*/

//using recurssion
string ShiftString(string str)
{
	if(str.length() == 0)
		return "";

	char ch = str[0];

	string ans = ShiftString(str.substr(1));

	if(ch == 'x')
		return ans + ch;
	else
		return ch + ans;
}

/*
//without recursion
//this fun is not perfect make some changes.
void ShiftString(char * str)
{
	int iCount =0;
	int j = 0;
	int iNo =  16;
	string str2 = "axbdcxxydixbrxd";			//ithe char* nahi gheu shakat,jar char * ghetala tar tyala memory rodata madhe milate
	
	for(int i = 0;i < iNo;i++)
	{
		if(str[i] != 'x')
		{
			str2[j] = str[i];
			j++;
		}

	}

	while(j < iNo)
	{
		str2[j] = 'x';
		j++;
	}

	str2[16] = '/0';

	cout << str << endl;
	cout << str2;

	return str2;
}
*/
int main(void)
{
	string str = "axbdcxxydixbrxd";

	cout << ShiftString(str);



	return 0;
}

