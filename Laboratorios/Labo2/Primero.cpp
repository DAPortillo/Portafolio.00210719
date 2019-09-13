#include <iostream>

using namespace std;

int mcd(int a, int b){
    if(a%b==0){
        return b;
    }
    else{
        mcd(b, a%b);
    }
}

int main(void) {
    int x=0, y=0;
    cout<<"Digite el numero mayor: "<<endl;
    cin>>x;
    cout<<"Digite el numero menor: "<<endl;
    cin>>y;
    cout<<"El mcd es: "<<mcd(x,y)<<endl;
    return 0;
}
