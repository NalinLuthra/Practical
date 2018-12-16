#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int smallest(int a[], int i,int n)
{
	int small = a[i];
	int key = i;
	for(int j=i;j<n;j++){
		if(small>a[j]){
			key = j;
			small = a[j];
		}
	}
	return key;
}
void selection(int a[],int n)
{
	int key;
	for(int i=0;i<n;i++)
		{
			key = smallest(a,i,n);
			swap(a[i],a[key]);
		}
	for(int i=0;i<5;i++)
	{
		cout << a[i] << " " ;
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	int a[]={64, 25, 12, 22, 11};
	selection(a,5);
	return 0;
}