#include <iostream>

using namespace std;

int main(){
	int x;
    cout<<"Enter an integer number:";
	cin>>x;
	if(x<0 || x>100)
	  cout<<"Invalid Data";
	else
	  cout<<"Valid Data";
}