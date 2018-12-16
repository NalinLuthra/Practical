#include <iostream>

using namespace std;

void merge(int a[], int l, int m, int n)
{
	int i,j,k;
	int n1 = m - l + 1;
	int n2 = n - m;

	int L[n1], R[n2];

	//Copy array

	for (i = 0; i < n1; i++)
	{
		L[i] = a[l+i];
	}
	for(j = 0; j < n2; j++)
	{
		R[j] = a[m+1+j];
	}

	i = 0;
	j = 0;
	k = l;

//Copy all elements in main array
	while(i<n1 && j<n2)
	{
		if(L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		a[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}

}

void mergeSort(int a[], int i, int n)
{

	if (i<n)
	{
		int m = (i + n)/2;

		mergeSort(a, i, m);
		mergeSort(a, m+1, n);
		merge(a, i, m, n);

	}
}

int main(int argc, char const *argv[])
{
	/* code */
	int a[]={64, 25, 12, 22, 11};
	mergeSort(a,0,5);
	for(int i=0;i<5;i++)
	{
		cout << a[i] << " " ;
	}
	return 0;
	
}