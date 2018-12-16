#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
	int t = a;
	a = b;
	b = t;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low-1);

	for(int j=low;j<=high;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i+1], &a[high]);
	return(i+1);
}

void quickSort(int a[], int low, int high)
{
	if(low<high)
	{
		int pi = partition(a,low,high);

		quickSort(a,low,pi-1);
		quickSort(a,pi+1, high);
	}
}

void printArray(int a[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << a[i] << " ";
	}
}


int main(int argc, char const *argv[])
{
	int arr[] = {10, 7, 8, 9, 1, 5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	quickSort(arr, 0, n-1);
	printArray(arr,n);
	return 0;
}