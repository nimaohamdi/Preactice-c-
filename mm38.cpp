#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x,int y){
  COORD pos={x,y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}


int main(){
  gotoxy(38,12);
  cout<<"Hello";
  getch();
}
