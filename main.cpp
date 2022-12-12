#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int a=0;
    cin >> a;
    float melvin[a], c;
    
    for(int i=0; i<a; i++){

       cin >> melvin[i];
    }

    c=valore(melvin, a);
    cout << c << endl;

    return 0;

}
