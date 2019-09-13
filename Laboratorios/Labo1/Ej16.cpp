#include <iostream>

using namespace std;

int main (){
	float x, suma=0, a[10];
	float div;
	cout<<"Digite los 10 enteros: "<<endl;
	for(int i=0; i<10; i++){
		cin>>a[i];
		suma=suma+a[i];
	}
	div= suma/10;
	cout<<"La suma es: "<<suma<<endl;
	cout<<"El promedio es: "<<div<<endl;
    return 0;
}
