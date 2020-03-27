#include<bits/stdc++.h>
using namespace std;

vector<char> vect;

void ins (int num)
{
	switch(num)
	  {
		case 2: vect.push_back('A');
					break;
		case 12: vect.push_back('A');
					break;
		case 22: vect.push_back('B');
					break;
		case 32: vect.push_back('C');
					break;
		
		case 3: vect.push_back('D');
					break;
		case 13: vect.push_back('D');
					break;
		case 23: vect.push_back('E');
					break;
		case 33: vect.push_back('F');
					break;
					
		case 4: vect.push_back('G');
					break;
		case 14: vect.push_back('G');
					break;
		case 24: vect.push_back('H');
					break;
		case 34: vect.push_back('I');
					break;
					
		case 5: vect.push_back('J');
					break;
		case 15: vect.push_back('J');
					break;
		case 25: vect.push_back('K');
					break;
		case 35: vect.push_back('L');
					break;
					
		case 6: vect.push_back('M');
					break;
		case 16: vect.push_back('M');
					break;
		case 26: vect.push_back('N');
					break;
		case 36: vect.push_back('O');
					break;
					
		case 7: vect.push_back('P');
					break;
		case 17: vect.push_back('P');
					break;
		case 27: vect.push_back('Q');
					break;
		case 37: vect.push_back('R');
					break;
		case 47: vect.push_back('S');
					break;
		
		case 8: vect.push_back('T');
					break;
		case 18: vect.push_back('T');
					break;
		case 28: vect.push_back('U');
					break;
		case 38: vect.push_back('V');
					break;
					
		case 9: vect.push_back('W');
					break;
		case 19: vect.push_back('W');
					break;
		case 29: vect.push_back('X');
					break;
		case 39: vect.push_back('Y');
					break;
		case 49: vect.push_back('Z');
					break;
	  }
	  
}
int main()
{
	char str[1000];
	int x,num,num1;
	cin>>str;
	
	for(x=0;x<strlen(str)-1;x++)
	{
		 num= (int)(str[x])-'0';
		ins(num);
		num1= (int)(str[x+1])-'0';
		if(num1==7 || num1== 9)
		{
			num= num % 4;
			if(num==0)
			num=4;
		}
		else 
		{
			num= num%3;
			if(num==0)
			num=3;
		}
		num= (num *10)+num1;
		ins(num); 
	}
	num= (int)(str[x])-'0';
	ins(num);
	/* for(int x=0;x<vect.size();x++)
		cout<<vect[x]<<" ";
	*/
	sort(vect.begin(), vect.end());
	vect.erase(unique(vect.begin(),vect.end()),vect.end());
	cout<<vect.size();
}
