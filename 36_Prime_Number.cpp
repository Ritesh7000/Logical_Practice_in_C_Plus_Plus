// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

/*
o/p:
30
2,3,5,7,11,13,17,19,23,29,
*/
int main() 
{
    int End;
    
    cin >> End;
    int arr[100] = {0};
    
    for(int i = 2;i <= End;i++)
    {
        if(arr[i] == 0)
        {
            for(int j = i*i;j <= End;j = j+i)
                arr[j] = 1;
        }
    }
    
    for(int k = 2;k <= End;k++)
    {
        if(arr[k] != 1)
        cout << k << ",";
    }
        
    
    return 0;
}