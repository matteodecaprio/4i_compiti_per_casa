//Scrivere in ordine decrescente l'età di tre persone
#include<iostream>
using namespace std;

int main(){
	int eta1,eta2,eta3,a;
	cout<<"Quanto vale la prima eta'?"<<endl;
	cin>>eta1;
	cout<<"Quanto vale la seconda eta'?"<<endl;
	cin>>eta2;
	cout<<"Quanto vale la terza eta'?"<<endl;
	cin>>eta3;
	if(eta1<eta2){
		a=eta1;
		eta1=eta2;
		eta2=a;
	}
		if(eta1<eta3){
			a=eta1;
			eta1=eta3;
			eta3=a;
		}
		if(eta2<eta3){
			a=eta2;
			eta2=eta3;
			eta3=a;
		}
		cout<<"Eta' in ordine:"<<endl;
		cout<<eta1<<endl;
		cout<<eta2<<endl;
		cout<<eta3<<endl;
		return 0;
	}
	

