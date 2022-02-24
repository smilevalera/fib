#include <iostream>
using namespace std;
long fib(int k) {
	int first, second, tmp;
	first = second = 1;
	for (int i = 1; i < k; i++){
		tmp = first;
	first = second;
	second += tmp;
}
	return first;
}
long fib_rec(int k) {
	if (k <= 2) return 1;
	return fib_rec(k - 1) + fib_rec(k - 2);
}

void main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cout << fib(i) << ' ';
}