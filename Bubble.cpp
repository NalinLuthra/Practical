#include <iostream>
using namespace std;

void swap(int &a, int &b){

	int temp;
	temp = a;
	a = b;
	b = temp;
}

void sort(int a[], int n)
{

	for(int i=0;i<n;i++)
	{

		for(int j=0;j<n-1;j++)
		{

			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				//cout << "Swaping elemets" << a[j] << " " << a[j+1] << " " << endl;
			}
		}
	}
	for(int i=0;i<8;i++){
		cout << a[i] << " " ;
	}
}

int main(int argc, char const *argv[])
{
	int a[]={10,11,23,4,1,28,90,3};
	sort(a,8);
	return 0;
}