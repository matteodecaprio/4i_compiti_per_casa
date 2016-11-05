//Funzione che restituisce il prezzo scontato
#include<iostream>
using namespace std;

float prezzo_scontato(float prezzo_di_vendita,float percentuale_di_sconto);

int main(){
	float prezzo_di_vendita;
	float percentuale_di_sconto;
	cout<<"Il prezzo finale e':"<<' '<<prezzo_scontato(prezzo_di_vendita,percentuale_di_sconto);
return 0;
}

float prezzo_scontato(float prezzo_di_vendita,float percentuale_di_sconto){
	float prezzo_scontato;
	cout<<"Quanto costa l'oggetto?"<<endl;
	cin>>prezzo_di_vendita;
	cout<<"Quanto vale la percentuale di sconto applicata?"<<endl;
	cin>>percentuale_di_sconto;
	prezzo_scontato=prezzo_di_vendita-((prezzo_di_vendita*percentuale_di_sconto)/100);
	return prezzo_scontato;
}
