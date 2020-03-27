#include<bits/stdc++.h>
using namespace std;

template <typename T>
std::string to_string(const T& value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

vector<string> split(const string &s, char delim)
{
	vector<string> elems;
	stringstream ss(s);
	string item;
	while (getline(ss, item, delim))
		elems.push_back(item);

	return elems;
}
int pPS(int arr[], int n,int p,int q)
{
	vector<string> list;
	vector <string> :: iterator zz,yy;

	for (int i = 0; i < (int) pow(2, n); i++)
	{
		string subset = "";

		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) != 0)
				subset += to_string(arr[j]) + "|";
		}
		if (find(list.begin(), list.end(), subset) == list.end())
			list.push_back(subset);
	}
	int flag7=0,flag5=0,count=0;
	char nn[100];
	for (zz = list.begin(); zz != list.end(); ++zz)
	{
		vector<string> arr = split(*zz, '|');
		flag7=0,flag5=0;
		for (yy = arr.begin(); yy != arr.end(); ++yy)
			{
				strcpy(nn, (*yy).c_str()); 
			   if(atoi(nn)%p==0)
			          flag7++;
			      
			   else if(atoi(nn)%q==0)
			          flag5++;
			    if(flag7>=1 && flag5>=1)
			       {
			           count++;
			           break;
			       }
			}
	}
    return count;
}


int main()
{
	int n[3],x=0;
	char str[1000];
	cin>>str;
	
	char *token = strtok(str, ",");
	x=0;
	while (token != NULL)
    {
        n[x++]=atoi(token);
        token = strtok(NULL, ",");
    }
	int ar[n[0]];
	cin>>str;
	token = strtok(str, ",");
	x=0;
	while (token != NULL)
    {
        ar[x++]=atoi(token);
        token = strtok(NULL, ",");
    }
	
	cout<<pPS(ar, n[0],n[1],n[2]);
}
