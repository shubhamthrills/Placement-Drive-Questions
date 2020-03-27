#include <iostream>
#include <cstdio>
#define max 100000
using namespace std;

int main()
{
    int ar[max],flag=0,a,b,c;
    long n,q,z,y;
    cin>>n>>q;
    for(z=0;z<n;z++)
    { cin>>ar[z];
    }
    for(z=0;z<q;z++)
    { cin>>a;
    flag=0;
       if(a==1)
       {
        cin>>b;
        for(y=0;y<n;y++)
        { if(ar[y]>=b)
            { flag++;
            cout<<y+1<<endl;
            break;
            }
        }
        if(flag==0)
        cout<<"-1"<<endl;
       }
        else
       {
        cin>>b>>c;
        ar[b-1]=c;
       }
     }
        
        
    }
