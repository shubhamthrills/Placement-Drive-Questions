#include<bits/stdc++.h>
using namespace std;
void find_set(vector<int> vect,int z)
{
	vect.erase( remove( vect.begin(), vect.end(), z ) ,vect.end());
	

    
    //for (int &x : vect) cout << x << " ";
    
}
int main()
{
	int n,x;
	cin>>n;
	int ar[n];
	for(x=0;x<n;x++)
	{
		cin>>arr[x];
	}	
	vector<int> vect(arr, arr+n);
	sort(vect.begin(),vect.end());
	
	for(x=0;x<n;x++)
	{
		find_set(vext,vect[x]);
		cout<<endl;
	}
	
}
