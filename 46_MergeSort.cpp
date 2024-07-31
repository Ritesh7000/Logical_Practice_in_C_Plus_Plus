#include<iostream>
#define MAX 100
using namespace std;

void Mearge(int arr[],int temp[],int,int,int);
void Copy(int arr[],int temp[],int,int);
void Mearge_Sort(int arr[],int,int);

int main(void)
{
	int arr[5] = {5,7,9,1,3};

	cout << "Bfore =\t";
	for(int i = 0;i < 5;i++)
	{
		cout << arr[i] << " ";
	}

	Mearge_Sort(arr,0,4);

	cout << "\nAfter =\t";

	for(int i = 0;i < 5;i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

// This function is divide length in 2 part and call 
// itself.than pass arr,temp array,low,mid,up this 
// paramater to merge function 

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

void Mearge_Sort(int arr[],int l,int u)
{
	int mid;
	int temp[MAX];


	if(l<u)
	{
		mid = (l+u)/2;
		Mearge_Sort(arr,l,mid);
		Mearge_Sort(arr,mid+1,u);

		Mearge(arr,temp,l,mid,u);
		Copy(arr,temp,l,u);
	}
}

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

//This actual swapping the number and put in temp array.

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

void Mearge(int arr[],int temp[],int l,int mid,int u)
{
	int i = l;
	int j = mid+1;
	int k = l;

	while((i<=mid) && (j<=u))
	{
		if(arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}

	while(i<=mid)
	{
		temp[k++] = arr[i++];
	}

	while(j <= u)
	{
		temp[k++] = arr[j++];
	}
}

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

//This function simply copy all element in the arr[] 
//from temp[].

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

void Copy(int arr[],int temp[],int l,int u)
{
	for(int i=l;i<=u;i++)
	{
		arr[i] = temp[i];
	}
}