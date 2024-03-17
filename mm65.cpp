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
  int row=12,col=38;
  gotoxy(col,row);
  cout<<"Hello";
  while(x!=27){  // 27 = ESC key code
    x=getch();
    if(x==-32){
		gotoxy(col,row);
		cout<<"     ";
    	x=getch();
    	if(x==72){ // up key
    	  row--;
    	  if(row<0)
    	    row=0;
		}
    	if(x==80){ // down key
    	  row++;
    	  if(row>24)
    	    row=24;
		}
    	if(x==75){ // left key
    	  col--;
    	  if(col<0)
    	    col=0;
		}
    	if(x==77){ // right key
    	  col++;
    	  if(col>79-5)
    	    col=79-5;
		}
        gotoxy(col,row);
        cout<<"Hello";		
	}
  }
}