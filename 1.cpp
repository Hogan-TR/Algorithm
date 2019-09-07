#include <iostream>
using namespace std;
int func(int arr[], int n) {
	if(n == 0)
		return arr[0];
	if(func(arr, n-1) > arr[n])
		return func(arr, n-1);
	else
		return arr[n];
}
int main() {
	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	cout << func(arr, 8) << endl;
	return 0;
}