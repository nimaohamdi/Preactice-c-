#include <iostream>
#include <iomanip>

using namespace std;

int max(int a,int b){
  if(a>b)
    return(a);
  else
    return(b);
}

int main(){
	int a,b,c;
	cout<<"Enter three number:";	
	cin>>a>>b>>c;
	cout<<endl<<"Maximum=";
	cout<<max(max(a,b),c);
}
