#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int i,j;
  for(i=1;i<=5;i++){
  	for(j=0;j<5-i;j++)
  	  cout<<"  ";
  	for(j=0;j<2*i-1;j++)
  	  cout<<"* ";
  	cout<<endl<<endl;
  }
}
