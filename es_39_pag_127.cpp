//rette perpendicolari
#include<iostream>
using namespace std;

bool perpendicolare(int x,int y);

int main(){
int m1,m2;
cout<<"Quanto vale il primo coefficiente angolare?"<<endl;
cin>>m1;
cout<<"Quanto vale il secondo coefficiente angolare?"<<endl;
cin>>m2;
perpendicolare(m1,m2);
return 0;	
}

bool perpendicolare(int x,int y){
	bool vero;
	if(x=-1/x){
		vero=true;
		cout<<"Le rette sono perpndicolari";
	}else{
		vero=false;
		cout<<"le rette non sono perpendicolari";
	}
	return vero;
}
