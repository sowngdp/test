#include <iostream>
using namespace std;
 int d = 1;
 int func(int p){
 static int d = 15;
 d += p; 
    cout << d << ";"; return d; 
 }
 int main(){
    int a = 4;
    cout << func(a + func(d)) << endl;
    return 0;
 }