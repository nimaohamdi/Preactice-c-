#include <iostream>
#include <iomanip>

using namespace std;

int max(int a,int b){
  if(a>b)
    return(a);
  else
    return(b);
}

int main(){
	cout<<max(9,3);
	
}
