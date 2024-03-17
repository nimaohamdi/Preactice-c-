#include <iostream>

using namespace std;

int main(){
	int x;
    cout<<"Enter an integer number:";
	cin>>x;
	if(x<0)
	  cout<<"Number is Negative";
	else
	  if(x==0)
	    cout<<"Number is Zero";
	  else
	    cout<<"Number is Positive";    	
}