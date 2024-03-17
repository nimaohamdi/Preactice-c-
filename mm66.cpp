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
  int row=5,col=8;
  int dx=+1,dy=+1;
  gotoxy(col,row);
  cout<<"Hello";
  while(x!=27){  // 27 = ESC key code
    if(kbhit())
	  x=getch();
    gotoxy(col,row);
    cout<<"     ";	
	row=row+dy;
	if(row<1 || row>24)
	  dy=-dy;
	col=col+dx;
	if(col<1 || col>73)
	  dx=-dx;
    gotoxy(col,row);
    cout<<"Hello";	
    Sleep(50);
  }
}