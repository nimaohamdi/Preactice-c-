#include <iostream>
#include <conio.h>

using namespace std;

int main(){
  char x=' ';
  while(x!='q'){
    cout<<"hello  ";
    if(kbhit())
	  x=getch();
  }
  cout<<endl<<"Finished...";
}