#include <iostream>

using namespace std;

void insertion(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		

		key = a[i];
		j = i-1;

		while(j>=0 && a[j] > key)
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = key;
	}
	for(int i=0;i<8;i++)
	{
		cout << a[i] << " " ;
	}
}
int main(int argc, char const *argv[])
{
	int a[]={10,11,23,4,1,28,90,3};
	insertion(a,8);
	return 0;
}