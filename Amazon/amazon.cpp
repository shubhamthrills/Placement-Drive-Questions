#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	
	vector<std::string> result;
	istringstream iss(str);
	
	for(std::string str; iss >> str; )
    	{	
    		//cout<<str<<endl;
    		if(str[str.length()-1]=='$')
    		{
    			result.push_back(str);
    			cout<<str<<endl;
    			break;
    		}else
    		{
    			result.push_back(str);
    		}
    	}
    	string z = result.back();
    	result.pop_back();
    	z= z.substr(0,z.size()-1);
    	result.push_back(z);
    	//cout<<z<<endl;
    	
    	std::vector<string>::iterator it;
    int x,f=0;
    for(x=1;x<result.size()-1;x++)
    {
    	reverse(result[x-1].begin(),result[x-1].end());
    	it = std::find (result.begin()+x, result.end(), result[x-1]); 
		if (it != result.end()) 
		{ 
			f=1;
			reverse(result[x-1].begin(),result[x-1].end());
			cout<<result[x-1];
    	}
	}
	if(f==0)
	cout<<"$";
}
