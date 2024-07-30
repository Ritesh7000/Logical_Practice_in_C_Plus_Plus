#include<iostream>
using namespace std;

void Reverse(char *);


int main(void)
{
	char str[] = "Vinod";

	Reverse(str);

	return 0;
}

void Reverse(char *str)
{
	if(strlen(str) == 0)
		return;

	Reverse(str+1);
	cout << str[0];          //doniV
}