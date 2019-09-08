#include <iostream>
using namespace std;
int sum(int n){
    if(n == 1)
        return 1;
    else
        return sum(n-1) + n;
}
int pre_sum(int arr[], int n){
    if(n == 0)
        return arr[0];
    else
        return pre_sum(arr, n-1) + arr[n];
}
int main(){
    cout << "num = " << sum(100) << endl;
    int arr[] = {1,2,3,4,5,6,7};
    cout << "num = " << pre_sum(arr, 5) << endl;
    return 0;
} 