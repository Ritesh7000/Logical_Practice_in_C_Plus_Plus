#include<iostream>

using namespace std;

void Quick_Sort(int [],int,int);
int Partition(int [],int, int);
void Swap(int [],int,int);

///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
// o/p
/*
Befor sort =  9,4,2,8,5,6,1,7,
4,2,5,6,1,7,9,8,
1,2,5,6,4,7,9,8,
1,2,4,6,5,7,9,8,
1,2,4,6,5,7,9,8,
1,2,4,5,6,7,9,8,
1,2,4,5,6,7,9,8,
1,2,4,5,6,7,8,9,
1,2,4,5,6,7,8,9,

After Quick Sort =  1,2,4,5,6,7,8,9,
*/
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////

int main(void)
{
	int arr[] = {9,4,2,8,5,6,1,7,3};

	cout << "Befor sort =  ";
	for(int i = 0;i < 9;i++)
	{
		cout << arr[i] << ","; 
	}

	Quick_Sort(arr,0,8);

	cout << "\n\nAfter Quick Sort =  ";
	for(int i = 0;i < 9;i++)
	{
		cout << arr[i] << ","; 
	}

	return 0;
}

///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
///////////void Quick_Sort(int arr[],int iLow,int iUp)///////

//In this function we use recursion on basis of the ipivot
//and we take ipivot from Partiotion fuction and 
//in 1st Quick_Sort call range is ipivot left side element
//and in 2nd Quick_Sort call range iPivote right side element   
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////

void Quick_Sort(int arr[],int iLow,int iUp)
{
	if(iLow>iUp)
		return;
	int iPivot = Partition(arr,iLow,iUp);

	Quick_Sort(arr,iLow,iPivot-1);
	Quick_Sort(arr,iPivot+1,iUp);
}

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
///// int Partition(int arr[],int iLow,int iUp)///////
//In this function we take ipivote variable is it right side 
//last element and we arrange the element basis of iPivote all
//small element on left side and all large element on Right 
//side(swap the number) after these all we need to return 
//iPivote to the caller function.
////////////////////////////////////////////////////
////////////////////////////////////////////////////

int Partition(int arr[],int iLow,int iUp)
{
	int iPivot = arr[iUp];
	int i = iLow-1;

	for(int j = iLow;j < iUp;j++)
	{
		if(arr[j] < iPivot)
		{
			i++;
//			if(i != j)						/// for Optimization purpose(why swap the same index/number.)
				Swap(arr,i,j);
		}
	}

	Swap(arr,i+1,iUp);

	cout << "\n";
	for(int i = 0;i < 9;i++)
	{
		cout << arr[i] << ","; 
	}

	return i+1;
}

void Swap(int arr[],int iSouce,int iDest)
{
	static int iNo;
//	cout <<" \nAla = " << ++iNo << endl;
	int iTemp = arr[iSouce];

	arr[iSouce] = arr[iDest];
	arr[iDest] = iTemp;
}


