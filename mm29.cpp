#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int n;
  cout<<"Enter a positive number:";
  cin>>n;
  for(;;){
    cout<<n--<<" ";
    if(n<1)
      break;
  }
}
