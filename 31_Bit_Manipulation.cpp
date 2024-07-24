#include<iostream>
using namespace std;


int update_Bit(int no,int pos, int des)
{
	return des & (no << pos);
}

int Clear_Bit(int pos,int des)
{
	return des & (~(1<<pos));
}
int main(void)
{
	cout << update_Bit(1, 1, 5) << endl ;

	cout << Clear_Bit(2,7);
	

 
	return 0;
}