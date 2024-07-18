// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


/*
Enter Row = 3
Enter Column = 3
1 2 3
4 5 6
7 8 9


Transpose of Matrix = 
1 4 7
2 5 8
3 6 9
*/
int main(void) 
{
    int iRow,iColumn;
    
    cout << "Enter Row = ";
    cin >> iRow;
    
    cout << "Enter Column = ";
    cin >> iColumn;
    
    int arr[iRow][iColumn];
    
    for(int i = 0;i < iRow;i++)
    {
        for(int j = 0;j < iColumn;j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    
    cout <<"\nTranspose of Matrix = \n\n";
   /* method 1: 
    for(int i = 0;i < iRow;i++)
    {
        for(int j = 0;j < iColumn;j++)
        {
            cout << arr[j][i] << " ";
        }
        cout <<endl;
    }   
    */
    //Optimise method 2:
    for(int i = 1;i < iRow;i++)
    {
        for(int j = i;j < iColumn;j++)
        {
            int iTemp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = iTemp;
        }
    }

    for(int i = 0;i < iRow;i++)
    {
        for(int j = 0;j < iColumn;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }   

    return 0;
}