#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	char arr[] = "abcb";
	int start = 0, end = strlen(arr)-1;
	bool flag = true;
 
 	cout  << arr << endl;;
	while(start < end)
	{
		if(arr[start] != arr[end])
		{
			flag = false;
			break;
		}

		start++;
		end--;
	}

	if(flag == false)
		cout << "It is not Palindrom";
	else
		cout << "It is Palindrom";
	return 0;
}
