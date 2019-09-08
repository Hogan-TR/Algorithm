#include <iostream>
using namespace std;
int func(int arr[], int n){
    if(n == 0)
        return arr[0];
    return func(arr, n-1) < arr[n] ? arr[n] : func(arr, n-1);
}
int main(){
    int arr[] = {3,6,2,9,1,0,8,11,2};
    cout << "max_num = " << func(arr, 8) << endl;
    return 0;
}