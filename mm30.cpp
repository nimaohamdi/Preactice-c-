#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int x;
  int sum=0;
  while(1){
    cin>>x;
    if(x==-1)
      break;
    sum=sum+x;
  }
  cout<<"Sum="<<sum;
}
