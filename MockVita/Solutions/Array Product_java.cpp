#include<bits/stdc++.h>
using namespace std;

#define List list
#define ArrayList list
#define Integer int
#define add(n) push_back(n)

void fLF(int frst,int e_prod, long n,List<List<Integer> > &r_l, List<Integer> &s_r_l);

	List<List<Integer> > fact_Comb(long n,int k)
	{
		List<List<Integer> > r_l ;
		List<Integer> lst ;
		fLF(2, 1, n, r_l, lst);
		return r_l;
	}
	void fLF(int frst,int e_prod, long n,List<List<Integer> > &r_l, List<Integer> &s_r_l)
	{
		if (frst > n || e_prod > n)
			return;
		if (e_prod == n) {
			ArrayList<Integer> t(s_r_l);
			r_l.add(t);
			return;
		}
		for (int i = frst; i < n; i++) {
			if (i * e_prod > n)
				break;
			if (n % i == 0) {
				s_r_l.add(i);
				fLF(i, i * e_prod, n,
				r_l, s_r_l);
				s_r_l.pop_back();
			}
		}
	}
	int main()
	{
	    int n,k,x=0;
		long long prod=1;
		cin>>n>>k;
			int ar[n];
			for(x=0;x<n;x++)
			{
				cin>>ar[x];
				prod*=ar[x];
			}
		List<List<Integer> > resultant = fact_Comb(prod,k);
			int count=0;
			
			list< list<int> >::iterator row;
			list<int>::iterator col;
				for (row = resultant.begin(); row != resultant.end(); row++) 
				{
					if(row->size()<=k)
					   count++;
   					 /*for (col = row->begin(); col != row->end(); col++) 
						{
     						cout<<*col<<" ";
    					}
    					cout<<endl;
    					*/
    			}
    			cout<<count+1<<endl;
	}


