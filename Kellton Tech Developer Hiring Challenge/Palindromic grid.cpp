#include<bits/stdc++.h>
using namespace std;
void check_palindrome(char str[],int m)
{
	string s(str);
	s=str;
	sort(s.begin(), s.end());
	//cout<<"   "<<s<<"  ";
	for(int x=0;x<m;x++)
	{
		if(count(str.begin(), str.end(), str[x]))
	}

}
int main()
{
	int t,n,m,r,c;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		char str[n+1][m+1];
		for(r=0;r<n;r++)
		{
			for(c=0;c<m;c++)
			{
				cin>>str[r][c];
			}
			str[r][c]='\0';
			check_palindrome(str[r],m);
			
		}
		
	}
}
