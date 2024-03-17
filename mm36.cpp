#include <iostream>
#include <iomanip>

using namespace std;

void showstar(int i){
  for( ;i>0;i--)
    cout<<"*";
}

int main(){
	showstar(5);
	cout<<endl;
	showstar(15);
}
