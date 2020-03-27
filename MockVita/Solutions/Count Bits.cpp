#include <bits/stdc++.h>
using namespace std;
unsigned int CSB(unsigned int n)
{
  unsigned int count = 0;
  while (n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
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
        dar[x]=CSB(ar[x]);
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
