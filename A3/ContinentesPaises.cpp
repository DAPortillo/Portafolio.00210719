#include <iostream>

using namespace std;


//Diego Portillo 00210719
//Diego Abrego 00044919
struct paises{

	string capital;
	
	int poblacion;

	string nombre;


};


int main ()
{

cout<<"Elija un continente escribiendo el numero que corresponda: "<<endl;

string conti[5]= {"America", "Europa", "Asia", "Africa", "Oceania"};

cout<<"Continentes: "<<endl;

cout<<"1. "<< conti[0]<<endl;

string paises1[5];

for(int i=0; i<5; i++){

cout<<"Digite 5 paises del continente de America: "<<endl;

cin>>paises1[i];
	
}
	
cout<<"2. "<< conti[1]<<endl;

string paises2[5];
	
for(int i=0; i<5; i++){
		
cout<<"Digite 5 paises del continente de Europa: "<<endl;

		cin>>paises2[i];
	
}
	
	cout<<"3. "<< conti[2]<<endl;

	string paises3[5];
	
for(int i=0; i<5; i++){
		
cout<<"Digite 5 paises del continente de Asia: "<<endl;

		cin>>paises3[i];
	
}
	
	
cout<<"4. "<< conti[3]<<endl;
	
	
string paises4[5];
	
for(int i=0; i<5; i++){
		
cout<<"Digite 5 paises del continente de Africa: "<<endl;
		
cin>>paises4[i];
	
}
	
cout<<"5. "<< conti[4]<<endl;
	
	
string paises5[5];
	
for(int i=0; i<5; i++){
		
cout<<"Digite 5 paises del continente de Oceania: "<<endl;
		
cin>>paises5[i];
	
}

}