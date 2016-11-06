//seno, coseno, tangente di un angolo
#include<iostream>
#include<cmath>
using namespace std;

double seno(double angolo);
double coseno(double angolo);
double tangente(double angolo);

int main(){
	double angolo;
	int denominatore;
	cout<<"Per quanto divido pi greco?"<<endl;
	cin>>denominatore;		
	angolo=3.14/denominatore;
	cout<<"Il seno dell'angolo e':"<<' '<<seno(angolo)<<endl;
	cout<<"Il coseno dell'angolo e':"<<' '<<coseno(angolo)<<endl;
	cout<<"La tangente dell'angolo e':"<<' '<<tangente(angolo)<<endl;
	return 0;
}

double seno(double angolo){
	double seno;
	seno=sin(angolo);
	return seno;
	
}

double coseno(double angolo){
	double coseno;
	coseno=cos(angolo);
	return coseno;
}

double tangente(double angolo){
	double tangente;
	tangente=tan(angolo);
	return tangente;
}


