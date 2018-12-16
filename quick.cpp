#include <iostream>

using namespace std;

int mcm(int p[], int i, int j)
{
	if(i==j)
		return 0;
	int k;
	int min = 10000000000;
	int count;

	for(k=i;k<j;k++)
	{
		count = MatrixChainOrder(p, i, k) + MatrixChainOrder(p, k, j) + p[i-1]*p[k]*p[j];
		if(count <  min)
			min =  count;
	}

	return min;
}

int main(int argc, char const *argv[])
{
	int a[] = {40, 20, 30, 10, 30}
	cout << mcm(a,1,4)
	return 0;
}