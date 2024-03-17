#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int i,x;
  cout<<"Enter a positive number:";
  cin>>x;
  for(i=1;i<=x;i++){
    if(x%i==0)  	
      cout<<setw(4)<<i;
  }
}
