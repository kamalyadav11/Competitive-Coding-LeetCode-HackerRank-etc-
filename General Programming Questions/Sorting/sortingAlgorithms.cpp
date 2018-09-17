#include<iostream>
using namespace std;

void selectionSort(int a[], int n) {
	int temp = 0;
	for (int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; j++) {
			if(a[j] < a[i]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
}

void bubbleSort(int a[], int n) {
	int temp = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < i + 1; ++j)	{
			if(a[j] < a[i]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		cout<<a[i]<<" ";
	}
}

int main() {
	int n = 9;
	int a[9] = {9, 3, 1, 7, 8, -4, 5, 11, 2}; 

	selectionSort(a, n);
	cout<<endl;
	bubbleSort(a, n);
}
