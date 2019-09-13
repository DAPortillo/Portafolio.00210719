#include <iostream>

using namespace std;

struct complejo{
	int real;
	int imaginario;
};
int funcion (int x){
	int y=x*-1;
	return y;
}
int main (){
	complejo pipa;
	cout<<"Digite la parte real: "<<endl;
	cin>>pipa.real;
	cout<<"Digite la parte imaginaria: "<<endl;
	cin>>pipa.imaginario;
	int c = funcion(pipa.imaginario);
	if(c>0){
	cout<<"La conjugada de su complejo es: "<<pipa.real<<"+"<<c<<"i"<<endl;
	}
	else{
	cout<<"La conjugada de su complejo es: "<<pipa.real<<c<<"i"<<endl;
	}
    return 0;
}
