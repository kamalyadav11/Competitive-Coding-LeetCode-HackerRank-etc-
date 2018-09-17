#include<iostream>

int factorial(int num) {
	int fib_result = 1;
	for(int i = 1; i <= num; i++) {
		// fib_result = fib_result * i; // => 1*1 = 1, 2*1=2, 3*2=6, 4*6=24, 5*24=120, 6*120=720, 7*720=5040
		fib_result = (fib_result * i);
	}
	return fib_result;
}

int main() {

	int n;
	std::cin>>n;

	std::cout<<factorial(n);
}
