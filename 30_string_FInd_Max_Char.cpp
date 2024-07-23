#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string str ="bhbcghabcajhssbaffsabasb";
	int arr[26] = {0};
	int iMAx = 0;
	char ch = 'a';

	for(int i = 0;i < str.size();i++)
	{
		arr[str[i] -'a']++;
	}

	for(int j = 0;j < 26;j++)
	{
		if(iMAx < arr[j])
		{
			iMAx = arr[j];
			ch = 'a' + j;
		}
	}


	cout << iMAx << "  =  " << ch; // 6  =  b

	return 0;
}