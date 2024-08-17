#include<iostream>
#include<string>
#include<stack>

using namespace std;


/*
O/P:
1.(A+(B+C))
There is NO EXTRA parenthesis.

2.((A+B))
There is EXTRA Parenthesis.
*/

int main(void)
{
	string str = "(A+(B+C))";

	stack<char> st;
	int a = 0;

	for(int i=0;i<str.size();i++)
	{
		if(str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' )
			st.push(str[i]);
		else if(str[i] == ')')
		{
			if(st.top() == '(')
			{
				a =  1;
				break;
			}
			while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
			{
				st.pop();
			}
		
			st.pop();
		}

	}
	
	if(a == 0)
		cout << "There is NO EXTRA parenthesis.";
	else
		cout << "There is EXTRA Parenthesis.";
	return 0;
}