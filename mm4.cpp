#include <iostream>

using namespace std;

int main(){
	int x;
    cout<<"Enter an integer number:";
	cin>>x;
	if(x<0)
	  cout<<"Number is Negative";
    if(x==0)
	  cout<<"Number is Zero";
    if(x>0)
	  cout<<"Number is Positive";    	
}