#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x,int y){
  COORD pos={x,y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}


int main(){
  for(int i=0;i<10;i++){
    gotoxy(i,0); cout<<"*";
    gotoxy(i,9); cout<<"*";    
    gotoxy(0,i); cout<<"*";
    gotoxy(9,i); cout<<"*";
  }
  getch();
}
