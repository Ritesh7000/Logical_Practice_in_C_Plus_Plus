// Online C++ compiler to run C++ program online
#include <iostream>

/*
1.
    Row = 4
    Column =4
    arr = 
    1 4 7 11
    2 5 8 12
    3 6 9 16
    10 13 14 17

    Which key you want to find = 55
    This Key is not present

2.
    Row = 4
    Column =4
    arr = 
    1 4 7 11
    2 5 8 12
    3 6 9 16
    10 13 14 17

    Which key you want to find = 6
    present 2 1

3.
    Row = 4
    Column =4
    arr = 
    1 4 7 11

    2 5 8 12

    3 6 9 16

    10 13 14 17

    Which key you want to find = 15
    Data is not found.
    
//yacha optimise aprroach asa ahe ki arr[0][iColumn-1] or arr[iRow-1][0] pasun sodhan star kara ani key is mothi asel tar iRow++ kiva
	Key hi lahan asel tar iColumn-- kara.
*/

using namespace std;
int main() {
    int iRow,iColumn;
    int iKey;
     
    cout << "Row = ";
    cin >> iRow;
    
    cout << "Column =";
    cin >> iColumn;
    
   int arr[iRow][iColumn];
    
    cout << "arr = \n";
    
    for(int i = 0;i < iRow;i++)
    {
        for(int j = 0;j < iColumn;j++)
        {
            cin >> arr[i][j];
          //  cout << "ala";
        }
        cout << endl;
    }
    
    cout << "Which key you want to find = ";
    cin >> iKey;
    
    if(arr[0][0] > iKey || arr[iRow-1] [iColumn-1] < iKey)
    { 
        cout << "This Key is not present";
        return 0;
    }
    
    int r = 0;
    int c = iColumn -1;
    
    while(1)
    {
        if(arr[r][c] == iKey)
        {
            cout << "Present " << r << " " << c;
            return 0;
        }
        else if(arr[r][c] > iKey)
        {
            c--;
        }
        else if(arr[r][c] < iKey)
        {
            r++;
        }

        if(r > iRow || c > iColumn)
        {
            cout << "Data is not found.";
            break;
        }
    }

    return 0;
}