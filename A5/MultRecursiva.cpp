#include <iostream>
using namespace std;
int mult (int y, int x){
if (x==1){
return y;
}
else
{        
int suma;        
suma = y+mult(y,x-1);       
return suma;
}
}
int main(){   
int a, b;  
cout<<"Digite los numeros a multiplicar "<<endl;    
cin>>a>>b;    
cout<<mult(a,b)<<endl;   
return 0;
}
