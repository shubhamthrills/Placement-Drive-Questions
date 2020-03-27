#include<bits/stdc++.h>
using namespace std;

long long Sieve(long long n)
{
	long long count=0;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (long long p=2; p<=n; p++)
    {
        if (prime[p] == true && (n%p)==0)
        {
        	prime[p] = false;
        	//cout<<" "<<p<<" ";
            for (int i=p*2; i<=n; i += p)
                {
                	prime[i] = false;
                	//cout<<" "<<i<<" ";
                }
        }
    }
    //cout<<"-------------primes-------------\n";
    for (long long p=1; p<=n; p++)
       if (prime[p]!=0 )
         {
           //cout << p << " ";
           count++;
         }
         return count;
}
int main()
{
	long long n;
	cin>>n;
	cout<<Sieve(n);
	
}
