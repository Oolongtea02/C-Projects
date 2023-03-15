#include <iostream>
#include <exception>
using namespace std;

int main() {
	try {
		f();
	}
	catch(Exception& e) {
		cout << "Enter hours: " << hours << endl;
	}
	
}

class invalidHr() {
	public:
		Exception(const string& time) : time_(time) {}
		int hours;
	private: 
		int time;
}

class invalidMin() {
	public:
		Exception(const string& time) : time_(time) {}
		int hours;
	private: 
		int time;
}

class invalidSec() {
	public:
		Exception(const string& time) : time_(time) {}
		int hours;
	private: 
		int time;
}

void f() {
	throw(Exception(-20));
}