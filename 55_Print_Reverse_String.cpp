#include<iostream>
#include<stack>
#include<string>

using namespace std;

void Reverse(string str)
{
	stack<string> st;

	for(int i=0;i<str.length();i++)
	{
		string word = "";

		while(str[i] != ' '  && i < str.length())
		{
			word = word+str[i];
			i++;
		}

		st.push(word); 
	}

	while(!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}

}

int main(void)
{
	string str = "How Are you Bhaiii"; 

	cout << str;

	cout << "\nAfter Function call.\n";
	Reverse(str);

	return 0;
}

/*
o/p:
How Are you Bhaiii

After Function call.

Bhaiii you Are How

*/