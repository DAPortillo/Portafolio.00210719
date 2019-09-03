#include <iostream>
using namespace std;
int main (){
int num, poblacion[5], total;
string capital[5];
string conti[5]= {"America", "Europa", "Asia", "Africa", "Oceania"};
cout<<"ELija un continente escribiendo el numero que corresponda: "<<endl;
cout<<"Continentes: "<<endl;
cout<<"1. "<<conti[0]<<endl;
cout<<"2. "<<conti[1]<<endl;
cout<<"3. "<<conti[2]<<endl;
cout<<"4. "<<conti[3]<<endl;
cout<<"5. "<<conti[4]<<endl;
cin>>num;
if(num==1){
string paises1[5];
for(int i=0; i<5;i++){
cout<<"Digite 5 paises del continente de America: "<<endl;
cin>>paises1[i];
}
cout<<endl<<"Ingrese los datos del pais: "<<paises1[0]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[0];
cout<<"Capital del pais: ";
cin>>capital[0];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[1]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[1];
cout<<"Capital del pais: ";
cin>>capital[1];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[2]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[2];
cout<<"Capital del pais: ";
cin>>capital[2];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[3]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[3];
cout<<"Capital del pais: ";
cin>>capital[3];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[4]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[4];
cout<<"Capital del pais: ";
cin>>capital[4];
total=poblacion[0]+poblacion[1]+poblacion[2]+poblacion[3]+poblacion[4];
cout<<"El total de ploblacion es: "<<total<<endl;
if (poblacion[0]<poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]){
cout<<"La capital con mayor poblacion es: "<<capital[4]<<" con una poblacion de "<<poblacion[4]<<endl;
}
else if (poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]){
cout<<"La capital con mayor poblacion es: "<<capital[0]<<" con una poblacion de "<<poblacion[0]<<endl;
}
else if (poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]){
cout<<"La capital con mayor poblacion es: "<<capital[1]<<" con una poblacion de "<<poblacion[1]<<endl;
}
else if (poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]<poblacion[2]){
cout<<"La capital con mayor poblacion es: "<<capital[2]<<" con una poblacion de "<<poblacion[2]<<endl;
}
else{
cout<<"La capital con mayor ploblacion es: "<<capital[3]<<" con una poblacion de "<<poblacion[3]<<endl;
}
}
if(num==2){
string paises1[5];
for(int i=0; i<5;i++){
cout<<"Digite 5 paises del continente de Europa: "<<endl;
cin>>paises1[i];
}
cout<<endl<<"Ingrese los datos del pais: "<<paises1[0]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[0];
cout<<"Capital del pais: ";
cin>>capital[0];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[1]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[1];
cout<<"Capital del pais: ";
cin>>capital[1];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[2]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[2];
cout<<"Capital del pais: ";
cin>>capital[2];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[3]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[3];
cout<<"Capital del pais: ";
cin>>capital[3];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[4]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[4];
cout<<"Capital del pais: ";
cin>>capital[4];
total=poblacion[0]+poblacion[1]+poblacion[2]+poblacion[3]+poblacion[4];
cout<<"El total de ploblacion es: "<<total<<endl;
if (poblacion[0]<poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]){
cout<<"La capital con mayor poblacion es: "<<capital[4]<<" con una poblacion de "<<poblacion[4]<<endl;
}
else if (poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]){
cout<<"La capital con mayor poblacion es: "<<capital[0]<<" con una poblacion de "<<poblacion[0]<<endl;
}
else if (poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]){
cout<<"La capital con mayor poblacion es: "<<capital[1]<<" con una poblacion de "<<poblacion[1]<<endl;
}
else if (poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]<poblacion[2]){
cout<<"La capital con mayor poblacion es: "<<capital[2]<<" con una poblacion de "<<poblacion[2]<<endl;
}
else{
cout<<"La capital con mayor ploblacion es: "<<capital[3]<<" con una poblacion de "<<poblacion[3]<<endl;
}
}
if(num==3){
string paises1[5];
for(int i=0; i<5;i++){
cout<<"Digite 5 paises del continente de Asia: "<<endl;
cin>>paises1[i];
}
cout<<endl<<"Ingrese los datos del pais: "<<paises1[0]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[0];
cout<<"Capital del pais: ";
cin>>capital[0];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[1]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[1];
cout<<"Capital del pais: ";
cin>>capital[1];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[2]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[2];
cout<<"Capital del pais: ";
cin>>capital[2];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[3]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[3];
cout<<"Capital del pais: ";
cin>>capital[3];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[4]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[4];
cout<<"Capital del pais: ";
cin>>capital[4];
total=poblacion[0]+poblacion[1]+poblacion[2]+poblacion[3]+poblacion[4];
cout<<"El total de ploblacion es: "<<total<<endl;
if (poblacion[0]<poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]){
cout<<"La capital con mayor poblacion es: "<<capital[4]<<" con una poblacion de "<<poblacion[4]<<endl;
}
else if (poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]){
cout<<"La capital con mayor poblacion es: "<<capital[0]<<" con una poblacion de "<<poblacion[0]<<endl;
}
else if (poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]){
cout<<"La capital con mayor poblacion es: "<<capital[1]<<" con una poblacion de "<<poblacion[1]<<endl;
}
else if (poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]<poblacion[2]){
cout<<"La capital con mayor poblacion es: "<<capital[2]<<" con una poblacion de "<<poblacion[2]<<endl;
}
else{
cout<<"La capital con mayor ploblacion es: "<<capital[3]<<" con una poblacion de "<<poblacion[3]<<endl;
}
}
if(num==4){
string paises1[5];
for(int i=0; i<5;i++){
cout<<"Digite 5 paises del continente de Africa: "<<endl;
cin>>paises1[i];
}
cout<<endl<<"Ingrese los datos del pais: "<<paises1[0]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[0];
cout<<"Capital del pais: ";
cin>>capital[0];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[1]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[1];
cout<<"Capital del pais: ";
cin>>capital[1];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[2]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[2];
cout<<"Capital del pais: ";
cin>>capital[2];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[3]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[3];
cout<<"Capital del pais: ";
cin>>capital[3];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[4]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[4];
cout<<"Capital del pais: ";
cin>>capital[4];
total=poblacion[0]+poblacion[1]+poblacion[2]+poblacion[3]+poblacion[4];
cout<<"El total de ploblacion es: "<<total<<endl;
if (poblacion[0]<poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]){
cout<<"La capital con mayor poblacion es: "<<capital[4]<<" con una poblacion de "<<poblacion[4]<<endl;
}
else if (poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]){
cout<<"La capital con mayor poblacion es: "<<capital[0]<<" con una poblacion de "<<poblacion[0]<<endl;
}
else if (poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]){
cout<<"La capital con mayor poblacion es: "<<capital[1]<<" con una poblacion de "<<poblacion[1]<<endl;
}
else if (poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]<poblacion[2]){
cout<<"La capital con mayor poblacion es: "<<capital[2]<<" con una poblacion de "<<poblacion[2]<<endl;
}
else{
cout<<"La capital con mayor ploblacion es: "<<capital[3]<<" con una poblacion de "<<poblacion[3]<<endl;
}
}
if(num==5){
string paises1[5];
for(int i=0; i<5;i++){
cout<<"Digite 5 paises del continente de Oceania: "<<endl;
cin>>paises1[i];
}
cout<<endl<<"Ingrese los datos del pais: "<<paises1[0]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[0];
cout<<"Capital del pais: ";
cin>>capital[0];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[1]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[1];
cout<<"Capital del pais: ";
cin>>capital[1];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[2]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[2];
cout<<"Capital del pais: ";
cin>>capital[2];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[3]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[3];
cout<<"Capital del pais: ";
cin>>capital[3];
cout<<endl<<"Ingrese los datos del pais: "<<paises1[4]<<endl;
cout<<"Poblacion del pais: ";
cin>>poblacion[4];
cout<<"Capital del pais: ";
cin>>capital[4];
total=poblacion[0]+poblacion[1]+poblacion[2]+poblacion[3]+poblacion[4];
cout<<"El total de ploblacion es: "<<total<<endl;
if (poblacion[0]<poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]){
cout<<"La capital con mayor poblacion es: "<<capital[4]<<" con una poblacion de "<<poblacion[4]<<endl;
}
else if (poblacion[1]<poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]){
cout<<"La capital con mayor poblacion es: "<<capital[0]<<" con una poblacion de "<<poblacion[0]<<endl;
}
else if (poblacion[2]<poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]){
cout<<"La capital con mayor poblacion es: "<<capital[1]<<" con una poblacion de "<<poblacion[1]<<endl;
}
else if (poblacion[3]<poblacion[4]<poblacion[0]<poblacion[1]<poblacion[2]){
cout<<"La capital con mayor poblacion es: "<<capital[2]<<" con una poblacion de "<<poblacion[2]<<endl;
}
else{
cout<<"La capital con mayor ploblacion es: "<<capital[3]<<" con una poblacion de "<<poblacion[3]<<endl;
}
}
return 0;
}
