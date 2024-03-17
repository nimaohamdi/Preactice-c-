#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(short x,short y){
  COORD pos={x,y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main(){
  char x=' ';
  int value=0;
  gotoxy(40,12);
  cout<<"Value="<<setw(5)<<value;
  while(x!=27){  // 27 = ESC key code
    if(kbhit()){
    	x=getch();
    	if(x=='+'){
    	  value++;
    	  if(value>100)
    	    value=100;
		}
    	if(x=='-'){
    	  value--;
    	  if(value<0)
    	    value=0;
		}
	    gotoxy(40,12);
		cout<<"Value="<<setw(5)<<value;    	
	}
  }
}