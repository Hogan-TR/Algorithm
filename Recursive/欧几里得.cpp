#include <iostream>
using namespace std;
int func(int m, int n){
    return n == 0 ? m : func(n, m % n);
}
int main(){
    cout << "num = " << func(10, 5) << endl;
    return 0;
}