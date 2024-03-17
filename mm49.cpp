#include <iostream>
using namespace std;
int main(){
	int s[10];
	int i;
	// Get 10 numbers from input
	for(i=0;i<10;i++) 
	  cin>>s[i];
	// Sort numbers
	for(i=0;i<9;i++){
		for(int j=i+1;j<10;j++)
		  if(s[j]>s[i]){
		  	int t=s[i];
		  	s[i]=s[j];
		  	s[j]=t;
		  }
	}
	// Put 10 numbers after sort
	for(i=0;i<10;i++)
	  cout<<s[i]<<" ";
}