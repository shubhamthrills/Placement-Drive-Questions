#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
int main()
{
	long long n,count=0;
	cin>>n;
	int x, y;
    int a, b = n;
	for(long long zz=1;zz<n;zz++)
	{     a=zz; b=n;
		if(gcdExtended(a, b, &x, &y)==1)
		count++;
	}
	cout<<count;
}
