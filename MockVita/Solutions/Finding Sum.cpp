#include <bits/stdc++.h>
using namespace std;
long long count=0;
void get_input(int ar[])
{
	char str[10000];
	int x=0;
	cin>>str;
	char *token=strtok(str,",");
	while(token!=NULL)
	{
		ar[x++]=atoi(&token[0]);
		token=strtok(NULL,",");
	}	
}
void cU(int arr[], int n, int r, int index, int data[], int i,int p)
{
	long long sum=0;
    if (index == r)
    {
        for (int j=0; j<r; j++)
            {
            	sum+=data[j];
            	//cout<<" "<<data[j];
            }
            //cout<<endl<<sum<<" "<<p<<endl;
            if( (sum%p) == 0 )
            {
            	::count++;
            }
        return;
    }
    if (i >= n)
        return;
    data[index] = arr[i];
    cU(arr, n, r, index+1, data, i+1,p);
    while (arr[i] == arr[i+1])
             i++; 
    cU(arr, n, r, index, data, i+1,p);
}
void pC(int arr[], int n, int r,int p)
{
    int data[r];
    sort(arr,arr+n);
    cU(arr, n, r, 0, data, 0,p);
}
int main()
{
	
	int np[2],x=0;
	get_input(np);
	int arr[np[0]];
	get_input(arr);
	pC(arr, np[0], 3,np[1]);
	cout<<::count% 1009<<endl;
	
	
}
