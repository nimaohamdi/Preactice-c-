#include <iostream>
#include <iomanip>

using namespace std;

void showstar(int i){
  for( ;i>0;i--)
    cout<<"*";
}

int main(){
    int x;
    cout<<"Enter a positive number:";
    cin>>x;    
	showstar(x);
}
