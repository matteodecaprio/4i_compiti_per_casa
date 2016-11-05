//Funzione che restituisce l'età di una persona
#include<iostream>
using namespace std;

int eta(int anno_di_nascita);

int main(){
	int anno_di_nascita;
	cout<<"L'eta' della persona ha:"<<' '<<eta(anno_di_nascita)<<' '<<"anni";
	return 0;
}

int eta(int anno_di_nascita){
	int eta;
	cout<<"In che anno e' nata la persona?"<<endl;
	cin>>anno_di_nascita;
	eta=2016-anno_di_nascita;
	return eta;
	
}
