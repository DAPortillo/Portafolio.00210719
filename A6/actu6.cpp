#include <iostream>
using namespace std;
//Diego Eduardo Abrego Cornejo 00044919
//Diego Andres Portillo Gonzalez 00210719
int a[8]={1,3,4,5,17,18,31,33};
int low=0;
int high=7;
int encuentrame(int x, int low, int high){
    if(low>high){
        return(-1);
    }
    int mid =(low + high)/2;
    if (x==a[mid]){
        return (mid);
    }
    if (x< a[mid]){
        encuentrame(x, low, mid-1);
    }
    else {
        encuentrame(x, mid+1, high);
    }
};

int main (){
    
    int n, j;
    
    cout<<"Digite un numero entero positivo: "<<endl;
    cin>>n;
    j=encuentrame(n, low, high);
    
    if (j==-1){
        cout<<"no se encontro su vaina loca."<< endl;
        
    }
    
    else {
        cout<<"El elemento esta en la casilla "<<j<<endl;
    }
}
