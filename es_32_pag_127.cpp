//Calcolo perimetro e area di un quadrato
#include<iostream>
using namespace std;

int perimetro(int lato);
int area(int lato);

int main(){
	int lato;
	cout<<"Quanto vale il lato?"<<endl;
	cin>>lato;
	cout<<"Il perimetro vale:"<<' '<<perimetro(lato)<<endl;
	cout<<"L'area vale:"<<' '<<area(lato)<<endl;
	return 0;
}

int perimetro(int lato){
	int perimetro;
	perimetro=lato*4;
	return perimetro;
}

int area(int lato){
	int area;
	area=lato*lato;
	return area;
}
