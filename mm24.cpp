#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int i,j;
  int n;
  cout<<"Enter Row number:";
  cin>>n;
  for(i=1;i<=n;i++){
  	for(j=0;j<n-i;j++)
  	  cout<<"  ";
  	for(j=0;j<2*i-1;j++)
  	  cout<<"* ";
  	cout<<endl<<endl;
  }
}
