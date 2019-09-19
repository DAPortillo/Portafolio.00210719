//actividad 8 realizado con la libreria stack
#include <iostream>
#include <stack>
using namespace std;
void vacia(stack<int> s){
while(!s.empty()){
 if(s.size()==1){
 	cout<<s.top()<<endl;
	s.pop();
	break;
 }
 else{
 	s.pop();
 }
 }
}
void intacta(stack<int> s){
 stack<int> d;
 int a=0;
 while(!s.empty()){
  if(s.size()==1){
 	cout<<s.top()<<endl;
	break;
  }
  else{
	d.push(s.top());
 	s.pop();
  }
  }
 while(!d.empty()){
 s.push(d.top());
 d.pop();
}
}
int main()
{
 stack<int> s;
 int a=0;
 //Prueba 
 s.push(5);//elemento que debemos encontrar
 s.push(3);
 s.push(4);
 s.push(1);
 intacta(s);
 vacia(s);
 return 0;
}
