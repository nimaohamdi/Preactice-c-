#include <iostream>
#include <iomanip>

using namespace std;

unsigned int fact(unsigned int n){
  unsigned int p=1;
  while(n>0){
    p=p*n;
	n--;  
  }
  return(p);
}

int main(){
  cout<<fact(5)+fact(6);	 
}
