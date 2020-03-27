#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
/*
int base6( int n)
{
	char buffer[1000];
    itoa (n,buffer,6);
    int n = sizeof(buffer)/ sizeof(buffer[0]);
    return accumulate(buffer , buffer+n , (-48 * n));
}
*/

int sum_base6(int n)
{
	int base = 6 ;
	int result = 0 ;
	while (n > 0)
	{
		int remainder = n % base ;
		result = result + remainder ; 
		n = n / base;
	} 
	return result ;
}
int main()
{
	int n,x=0,y,num=0;
	long long count=0;
	cin>>n;
	int ar[n],dar[n];
	char str[10000];
	cin>>str;
	char *token = strtok(str, ",");
    while (token != NULL)
    {
        ar[x]= atoi(&token[0]);
        dar[x]= sum_base6(ar[x]);
        x++;
        token = strtok(NULL, ",");
    }
	for(x=0;x<n-1;x++)
	{	num=dar[x];
		for(y=x+1;y<n;y++)
		{
			if(num>dar[y])
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	
}
