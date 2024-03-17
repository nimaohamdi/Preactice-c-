#include <iostream>
#include <conio.h>

using namespace std;

int main(){
  char x;
  while(1){
    cout<<"hello  ";
    if(kbhit())
	  x=getch();
    if(x=='q')
      break;
  }
  cout<<endl<<"Finished...";
}