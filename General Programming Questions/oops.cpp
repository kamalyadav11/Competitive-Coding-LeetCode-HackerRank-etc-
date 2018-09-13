#include<iostream>
using namespace std;

class Bank {
	private:
		double balance;
	public:
		Bank(double Openingbalance) {
			balance = Openingbalance;
		}

		void deposit(double amount){
			balance = balance + amount;	
		};

		void withdraw(double amount){
			balance = balance - amount;
		};

		void display() {
			cout<<"Account Balance is "<<balance<<endl;
		}
};

int main() {
	Bank b(100.00);
	cout<<"Before Transaction "<<endl;
	b.display();
	b.deposit(74.25);
	b.withdraw(45.00);
	cout<<"After Transaction "<<endl;
	b.display();
}
