//Team F Exercise 12.3
//Members: Samuel Zhang and Tristyn Lai

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream Payrollfile; 
	string Payroll;
	string line;
	cout << "Enter the file name: " << endl;

	ofstream Payrollfile;
	Payrollfile.open (Payroll); 

	if(Payrollfile.good()) {
		cout << "\nFile open is OK \n";
		cout << 16#56500
				20#65000
				21#65500
				22#78200
				23#71000
				24#71100
				25#72000
				30#83000
				31#84000
				32#90000
	}
	else {
		cout << "\nfile open FAILED \n";
	}
	


Payrollfile.close();

return 0;
}