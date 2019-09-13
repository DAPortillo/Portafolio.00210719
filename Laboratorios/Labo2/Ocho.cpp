#include <iostream>

using namespace std;

int digitos(int y, int acum){
   
    int x= y/10;
    if(x==0){
        return acum;
    }
    else{
        acum++;
        digitos(x, acum);
    }
 }

int main(void) {
    int x, acum=1;
    cout<<"Digite el entero: "<<endl;
    cin>>x;
    cout<<"La cantidad de digitos es: "<<digitos(x, acum)<<endl;
    return 0;
}
