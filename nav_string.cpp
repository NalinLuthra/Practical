#include <iostream>
#include<string.h>
using namespace std;

void str_nav(char *p,char *t)
{
	int m = strlen(p);
	int n = strlen(t);
	int j;
	for(int i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(p[j]!=t[i+j])
				break;
		}
		if(j==m)
			cout << i << " ";
	}

}



int main(int argc, char const *argv[])
{
	char txt[] = "AABAACAADAABAAABAA"; 
    char pat[] = "AABA"; 
    str_nav(pat, txt); 
	return 0;
}