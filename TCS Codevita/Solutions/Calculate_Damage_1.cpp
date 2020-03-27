#include<bits/stdc++.h>
using namespace std;
int tot_sucessful_swap=0;
int sucessful_swap1=0,sucessful_swap2=0;
void count_char(int &s,int &k,int &m,double &p,double &my_damage,char l[])
{	s=0,k=0,m=0,p=1,my_damage=0;
	int x;
	for(x=0;l[x]!='\0';x++)
		{
			if(l[x]=='K')
			 {
			 	 k++;
			 	 my_damage+=p;
			 }
			else if(l[x]=='S')
			{
				s++;
				if(p>=1)
				 {
				  p/=2;
				 }
			}
			else if(l[x]=='M')
			{
				m++;
				p*=3;
			}
		}
}
int swap_with(char l[],char k[])
{
	char *z= strstr(&l[1],k);
	if(z)
	{
		*z= l[0];
		l[0]=k[0];
		
		tot_sucessful_swap+=1;
		return 1;
	}
	else
	return 0;
}
int temp1_swap_with(char l[],char k[])
{
	char *z= strstr(&l[1],k);
	if(z)
	{
		*z= l[0];
		l[0]=k[0];
		
		sucessful_swap1+=1;
		return 1;
	}
	else
	return 0;
}
int temp2_swap_with(char l[],char k[])
{
	char *z= strstr(&l[1],k);
	if(z)
	{
		*z= l[0];
		l[0]=k[0];
		
		sucessful_swap2+=1;
		return 1;
	}
	else
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	tot_sucessful_swap=0;
		int x,s=0,k=0,m=0;
		double d,my_damage=0,min_dam1=0,min_dam2=0;
		double p=1,new_p=1;
		char l[30],rep[2]="K",l1[30],l2[30];
		cin>>d>>l;
		count_char(s,k,m,p,my_damage,l);
		//cout<<" my initial damage "<<my_damage<<endl;
		if(my_damage<=d)
		{
			cout<<0;
			continue;
		}
		for(x=0;l[x]!='\0';x++)
		{
			if(l[x]=='S')
			{
				if(new_p>=1)
				{
					new_p/=2;
					//cout<<" new_p updated "<<new_p<<endl;
				}
				else
				{
					swap_with(&l[x],rep);
					//cout<<" swap with K updated "<<l<<endl;
				}
			}
			else if(l[x]=='K')
			{
				if(new_p>=1)
				{
					rep[0]='S';
					if(swap_with(&l[x],rep))
					{
						//cout<<" swap with S "<<l<<endl;
						new_p/=2;
						//cout<<" new_p updated "<<new_p<<endl;
					}
				}
			}
			else if (l[x]=='M')
			{
				strcpy(l1,l);
				strcpy(l2,l);
				double temp_new_p1=new_p,temp_new_p2=new_p;
				sucessful_swap1=0;
				sucessful_swap2=0;
				if((new_p>=1))
				{
					rep[0]='S';
					if(temp1_swap_with(&l1[x],rep))
						{
						  //cout<<" swap with S updated "<<l<<endl;
						  temp_new_p1/=2;
						  //cout<<" new_p updated "<<new_p<<endl;
						}
						else
						{
							rep[0]='K';
							temp1_swap_with(&l1[x],rep);
							//cout<<" swap with K updated "<<l<<endl;
						}
						
				} else 
				{
					rep[0]='K';
					temp1_swap_with(&l1[x],rep);
					//cout<<" swap with K updated "<<l<<endl;
				}
				count_char(s,k,m,p,my_damage,l);
				min_dam1=my_damage;
				if(!(new_p>=1))
				{
					rep[0]='S';
					if(temp2_swap_with(&l2[x],rep))
						{
						  //cout<<" swap with S updated "<<l<<endl;
						  temp_new_p2/=2;
						  //cout<<" new_p updated "<<new_p<<endl;
						}
						else
						{
							rep[0]='K';
							temp2_swap_with(&l2[x],rep);
							//cout<<" swap with K updated "<<l<<endl;
						}
						
				} else 
				{
					rep[0]='K';
					temp2_swap_with(&l2[x],rep);
					//cout<<" swap with K updated "<<l<<endl;
				}
				count_char(s,k,m,p,my_damage,l);
				min_dam2=my_damage;
				if(min_dam1<min_dam2)
				{
					strcpy(l,l1);
					new_p=temp_new_p1;
					tot_sucessful_swap+=sucessful_swap1;
				}
				else
				{
					strcpy(l,l2);
					new_p=temp_new_p2;
					tot_sucessful_swap+=sucessful_swap2;
				}
			}
			count_char(s,k,m,p,my_damage,l);
			if(my_damage<=d)
			    break;
		}
		
		count_char(s,k,m,p,my_damage,l);
		if(my_damage>d)
		cout<<"IMPOSSIBLE";
		else
		cout<<tot_sucessful_swap;
	}
}
