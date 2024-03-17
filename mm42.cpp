#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(){
  int y,m,d;
  cout<<"Enter Date in yy/mm/dd:";
  cin>>y>>m>>d;
  d=d+1;
  if(m>=1 && m<=6){
    if(d>31){
	  d=1;
	  m++;
	}
  }else if(m>6 && m<12){
    if(d>30){
	  d=1;
	  m++;
	}
  }else{
    if(d>29){
	  d=1;
	  m=1;
	  y++;
	}
  }
  cout<<y<<"/"<<m<<"/"<<d;
}
