#include<iostream>
#include<string>
using namespace std;

/*
aBxYz

Small Letter = abxyz
Capital letter = ABXYZ
*/
int main(void)
{
	string str = "aBxYz";

	int iSize = str.size();

	//cout << str << endl << endl;

//	cout  << 'a' - 'A'; 
 
	cout << "Small Letter = ";
	for(int i = 0;i <= iSize;i++)
	{
		if('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}

	cout << str <<endl;

	cout <<"Capital letter = ";
	for(int i = 0;i <= iSize;i++)
	{
		if('a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

	cout << str;

	return 0;
}

/*
for inbuild function

	#include<cstring>
	char str[] = "aBxYz";
	
	strupr(str);
	cout << str << endl;

	strlwr(str);
	cout << str << endl;
*/