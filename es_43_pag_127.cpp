//Candidati in ballottaggio
#include<iostream>
#include<string>
using namespace std;

string nome1,nome2;
int voto1,voto2,tot_voti;
int percentuale_1(int voto1,int tot_voti);
int percentuale_2(int voto2,int tot_voti);

int main(){
cout<<"Come si chiama il primo candidato?"<<endl;
cin>>nome1;
cout<<"Quanti voti ha preso il candidato "<<nome1<<endl;
cin>>voto1;
cout<<"Come si chiama il secondo candidato?"<<endl;
cin>>nome2;
cout<<"Quanti voti ha preso il candidato "<<nome2<<endl;
cin>>voto2;
tot_voti=voto1+voto2;
if(percentuale_1(voto1,tot_voti)>percentuale_2(voto2,tot_voti)){
	cout<<"Il candidato "<<nome1<<' '<<"ha preso il "<<percentuale_1(voto1,tot_voti)<<' '<<"% di voti"<<endl;;
	cout<<"Il candidato "<<nome2<<' '<<"ha preso il "<<percentuale_2(voto2,tot_voti)<<' '<<"% di voti"<<endl;
}else{
	cout<<"Il candidato "<<nome2<<' '<<"ha preso il "<<percentuale_2(voto2,tot_voti)<<' '<<"% di voti"<<endl;
	cout<<"Il candidato "<<nome1<<' '<<"ha preso il "<<percentuale_1(voto1,tot_voti)<<' '<<"% di voti"<<endl;
}
return 0;
}

int percentuale_1(int voto1,int tot_voti){
    int percentuale1;
	percentuale1=(voto1*tot_voti)/100;
	return percentuale1;
}

int percentuale_2(int voto2,int tot_voti){
	int percentuale2;
	percentuale2=(voto2*tot_voti)/100;
	return percentuale2;
}
