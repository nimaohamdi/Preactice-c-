#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;


int main(){
  char x=' ';
  while(x!=27){  // 27 = ESC key code
    x=getch();
    cout<<(int)x<<" ";
  }
}