#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int x,i;
  int m=-1;
  for(i=0;i<10;i++){
    cout<<"Enter a positive number:";
	cin>>x;
	if(x>m)
	  m=x;
  }	
  cout<<m;
}
