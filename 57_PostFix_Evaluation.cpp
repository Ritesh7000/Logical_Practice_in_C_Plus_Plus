#include<iostream>
#include<stack>
#include<string>

using namespace std;

void PostFix(string str)
{
	int iOpeand1 = 0;
	int iOpeand2 = 0;

	stack<int> st;

	for(int i = 0;i < str.size();i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			st.push(str[i] - '0');
		}
		else
		{
			iOpeand2 = st.top();
			st.pop();
			iOpeand1 = st.top();

			switch(str[i])
			{
			case '+':
				iOpeand1 = iOpeand1 + iOpeand2;
				break;
			case '-':
				iOpeand1 = iOpeand1 - iOpeand2;
				break;
			case '*':
				iOpeand1 = iOpeand1 * iOpeand2;
				break;
			case '/':
				iOpeand1 = iOpeand1 / iOpeand2;
				break;
			default:
				break;
			}

			st.push(iOpeand1);
		}
	}

	cout << iOpeand1;
}

int main(void)
{
	string str = "46+2/5*7+";

	PostFix(str);



	return 0;
}