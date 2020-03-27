#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int isValidH(int d,int dd)
{
	if(d>2)
	return 0;
	else if(d==2)
	{
		if(dd>4)
		return 0;
	}
	return 1;
}
int isValidMS(int m,int mm)
{
	if(m>6)
	return 0;
	else if(m==6)
	{
		if(mm>0)
		return 0;
	}
	return 1;
}

int main()
{
	int n,x=0,y,count=0,pos=0;
	char str[10000];
	cin>>str;
    n= strlen(str);
	int ar[n],t[6]={0,0,0,0,0,0};
	char *token = strtok(str, ",");
    while (token != NULL)
    {
        ar[x]= atoi(&token[0]);
        x++;
        token = strtok(NULL, ",");
    }
    sort(ar,ar+n);
    int greater6=1;
    for(y=0;y<x && count<6;y++)
    {
    }
}
    
