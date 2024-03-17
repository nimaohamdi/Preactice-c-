#include <iostream>
#include <conio.h>

using namespace std;

int main(){
  char x;
  while(1){
    cout<<"hello  ";
    x=getch();
    if(x=='q')
      break;
  }
  cout<<endl<<"Finished...";
}