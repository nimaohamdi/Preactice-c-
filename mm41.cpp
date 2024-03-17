#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x,int y){
  COORD pos={x,y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void drawsquare(int x,int y,int n){
  for(int i=0;i<n;i++){
    gotoxy(x+i,y+0);   cout<<"*";
    gotoxy(x+i,y+n-1); cout<<"*";    
    gotoxy(x+0,y+i);   cout<<"*";
    gotoxy(x+n-1,y+i); cout<<"*";
  }
}

int main(){
  drawsquare(5,5,10);	
  drawsquare(20,10,5);	
  drawsquare(50,5,16);	
  getch();
}
