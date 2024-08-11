#include<iostream>
#include<stack>
#include<string>

using namespace std;


void PrefixEvaluation(string str)
{
	stack<int> st;
	int iOprand1 = 0;
	int iOprand2 = 0;

	for(int i = str.length()-1; i != 0; i--)
	{
		if(str[i]>='0' && str[i]<= '9')
		{
			st.push(str[i]-'0');
		}
		else
		{
			iOprand1 = st.top();
			st.pop();
			iOprand2 = st.top();
			st.pop();

			switch(str[i])
			{
			case '+':
				iOprand1 = iOprand1 + iOprand2;
				break;
			case '-':
				iOprand1 = iOprand1 - iOprand2;
				break;
			case '*':
				iOprand1 = iOprand1 * iOprand2;
				break;
			case '/':
				iOprand1 = iOprand1 / iOprand2;
				break;
			default:
			break;							
			}

			st.push(iOprand1);
		}
	}

	cout << iOprand1;
}

int main(void)
{
	string str = "-+7*45+20";

	PrefixEvaluation(str);

	return 0;
}