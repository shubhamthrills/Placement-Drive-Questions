#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int er1=-1,er2=-1, len,x,f=0;
        cin>>s;
        len=s.length()-1;
        cout<<" len = "<<len<<endl;
        for(x=0;s[x]!='\0';x++)
        {
             //er1=-1,er2=-1,f=0;
             cout<<" s[x]= "<<s[x]<<" s[len-x]= "<<s[len-x]<<endl;
            if(s[x]!=s[len-x])
            {	cout<<" s[x]= "<<s[x]<<" s[len-x]= "<<s[len-x]<<" ok "<<endl;
                 if(er1==-1)
                 {
                     er1=x;
                 }
                 else if(er2==-1)
                 {
                    er2=x;   
                 }
                 else
                 {      f=1;
                     cout<<"No\n";
                     break;
                 }
                 
            }
        }
        cout<<"er1= "<<er1<<" er2= "<<er2<<" f= "<<f;
        if(er1!=-1 && er2!=-1 && f!=1)
        {
            cout<<"Yes\n";
        }
    }
    return 0;
}

