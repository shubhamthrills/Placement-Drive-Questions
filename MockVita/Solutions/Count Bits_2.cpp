#include<bits/stdc++.h>
#include<stdlib.h>
using namespace::std;
int main(){
    //Data declaration
    int n; string input; vector<string > arrs; vector<int> arri; int i; char temp[100];
    vector<int > ones; int one; int res=0;
    
    // Data entry
    cin>>n;
    fflush(stdin);
	getline(cin,input);
	cout<<"input success\n";
	
	//Operating CSV string input>>integer vector
    stringstream ss(input);
    while (ss >> i) {
        arri.push_back(i);
        ss.ignore(1);
    }
    
    //Displaying input taken from integer vector
    /*for (vector<int> :: iterator it=arri.begin();it!=arri.end();it++) {
        cout<<*it<<endl;
    }*/
     
     //Conversion to binary
     for(int a=0 ; a<arri.size();a++){
         itoa(arri[a],temp,2);
         arrs.push_back(temp);
     }   
    
	//Displaying binary from integer vector
    /*for (vector<string > :: iterator it=arrs.begin();it!=arrs.end();it++) {
        cout<<*it<<"  ";
    }
    cout<<endl;*/
    
    //Calculatng frequency of 1's.
    for(int a=0 ; a<arrs.size();a++){
         one=count(arrs[a].begin(),arrs[a].end(),'1');
         ones.push_back(one);
    }
    
    //Displaying number of ones
    /*for (vector<int > :: iterator it=ones.begin();it!=ones.end();it++) {
    	cout<<*it<<"   ";
    }
    cout<<endl;*/
    
    //Calculaing final result
    for(int a=0; a<ones.size();a++){
    	for(int b=a; b<ones.size();b++){
    		if(ones[b]<ones[a])
    		res++;
    	}
    }
    cout<<res<<endl;
    
return 0; 
}
