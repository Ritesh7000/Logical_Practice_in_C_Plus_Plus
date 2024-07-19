// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

/*
Row = 3
Column = 4

arr = 
2 4 1 2
8 4 3 6
1 7 9 5

Row2 = 4 
Column2 = 3

arr2 = 
1 2 3
4 5 6
7 8 9
4 5 6

*/

int main(void) 
{
    int iRow,iColumn;
    
    cout  << "Row = ";
    cin >> iRow;

    cout  << "Column = ";
    cin >> iColumn;
    
    int arr[iRow][iColumn];
    
    cout << "\narr = \n";
    for(int i = 0;i < iRow;i++)
    {
        for(int j = 0;j < iColumn;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    
    int iRow2,iColumn2;
    
    cout  << "Row2 = ";
    cin >> iRow2;

    cout  << "Column2 = ";
    cin >> iColumn2;
    
    int arr2[iRow2][iColumn2];
    
    if(iRow2 != iColumn)
    {
        cout << "iRow & iColumn2 is not Equal.";
        return -1;
    }
    
    cout << "\narr2 = \n";
    for(int i = 0;i < iRow2;i++)
    {
        for(int j = 0;j < iColumn2;j++)
        {
            cin >> arr[i][j];
        }
    }
    
 //   int min1 = min(iRow,iColumn);
 //   int min2 = min(iRow2,iColumn2);
        
    int ans[iRow][iColumn2] = {0};
    
    for(int i = 0;i < iRow;i++)
    {
        for(int j = 0;j < iColumn2;j++)
        {
            ans[i][j] = 0;
        }
        cout << endl;
    }
    
    for(int i = 0;i < iRow;i++)
    {
        for(int j = 0;j < iColumn2;j++)
        {
            for(int k = 0;k < iRow2;k++)
            {
                ans[i][j] += arr[i][k] * arr[k][j]; 
            }
        }
    }
    
    cout << "\n Final ans\n";
    
    for(int i = 0;i < iRow;i++)
    {
        for(int j = 0;j < iColumn2;j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
   return 0;
}