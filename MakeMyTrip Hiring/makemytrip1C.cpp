#include <iostream>
#include <cstdio>
#define max 1000000
using namespace std;

int main()
{
    char n[max],a[4];
    long t,len=0,x,y;
    long flag=0;
    cin>>len;
    cin>>n;  // array input
    cin>>t;
    while(t--)
    { cin>>a[0];
      
      cin>>a[2];
      cout<<endl;
      flag=0;
       for(x=0;x<len;x++)
       {	
		 if(a[0]==n[x])
		    { for(y=x+1;y<len;y++)
		       if(a[2]==n[y])
		       { flag++;
		         cout<<" loop 1 : "<<a[0]<<a[2]<<"  "<<x<<"  "<<y<<endl;
		       }
		    }
		    else if(a[2]==n[x])
		    { for(y=x+1;y<len;y++)
		       if(a[0]==n[y])
		       { flag++;
		       cout<<" loop 2 : "<<a[0]<<a[2]<<"  "<<x<<"  "<<y<<endl;
		       }
		    }
    	}
		cout<<flag;
    }
    return 0;
}

