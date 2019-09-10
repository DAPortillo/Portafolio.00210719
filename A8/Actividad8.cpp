#include <iostream>
using namespace std;

struct Tpila{
    float elementos[10];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
s->top = -1;
}

bool empty(Pila *s){
return s->top < 0;
}

void push(Pila *s, float e){
if(s->top < 9){
(s->top)++;
s->elementos[s->top] = e;
}
}

void pop(Pila *s, float *e){
if(s->top >= 0){
*e = s->elementos[s->top];
(s->top)--;
}
}
/* Dejando la pila vacia

float vacia(Pila *s){
    float a=-1;
    while(!empty(s)){
        pop(s, &a);
                     }
    return a;
}*/

float intacta(Pila *s){
 Pila otrapila;
 float a=-1, b=0;
 initialize(&otrapila);
 while(!empty(s)){
 pop(s, &a);
 push(&otrapila, a);
 }
 b=a;
 while(!empty(&otrapila)){
 pop(&otrapila, &a);
 push(s, a);
 }
return b;
}



int main()
{
    float f, l;    
    Pila unaPila;
    initialize(&unaPila);
	//Prueba
    push(&unaPila, 3.4);
    push(&unaPila, 6.9);

    /*
     f=vacia(&unaPila);
    if(f==-1){
        cout<<"La pila esta vacia"<<endl;
    }
    else {
        cout<<"El ultimo valor es "<<f<<endl;
    }
    */
    l=intacta(&unaPila);
    if(l==-1){
        cout<<"La pila esta vacia"<<endl;
    }
    else {
        cout<<"El ultimo valor es "<<l<<endl;
    }
}
