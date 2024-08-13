#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool CheckParenthesis(string str)
{
	stack<char> st;
	bool bResult = true;

	for(int i=0;i<str.size();i++)
	{
		if(str[i] == '{' ||  str[i] == '[' || str[i] == '(')
			st.push(str[i]);
		else
		{
			if(st.empty())				// check stack is empty or not
			{
				bResult = false;
				cout << "string is empty.\n\n";
				break;
			}

			if(str[i] == ')' && st.top() == '(')
			{
				st.pop();
			}
			else if(str[i] == ']' && st.top() == '[')
			{
				st.pop();
			}
			else if(str[i] == '}' && st.top() == '{')
			{
				st.pop();
			}
			else
			{
				bResult = false;
				break;
			}
		}
	}

	if(!st.empty())			//If stack is not empty, so there is no closing sequence of bracket. eg- ([{
		bResult = false;

	return bResult;
}

int main(void)
{
	string str = " ";

	if(CheckParenthesis(str))
		cout << "Bracket sequence is correct.";
	else 
		cout << "Btacket sequence is not correct.";

	return 0;
}
