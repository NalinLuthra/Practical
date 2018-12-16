#include <iostream>
using namespace std;

void act_sel(int s[], int f[], int n)
{
	int i,j;

	i=0;
	cout << i;

	for(int j=1;j<n;j++)
	{
		if(s[j]>s[i])
		{
			cout << j;
			i = j;
		}
	}
}

int main(int argc, char const *argv[])
{
	int s[] =  {1, 3, 0, 5, 8, 5}; 
    int f[] =  {2, 4, 6, 7, 9, 9}; 
    int n = sizeof(s)/sizeof(s[0]); 
    act_sel(s, f, n); 
    return 0; 
}