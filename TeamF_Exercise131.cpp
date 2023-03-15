// Example program
#include <iostream>

using namespace std;

class EmployeeInfo {
    public:
        EmployeeInfo();
        string getName() const;
        int getHourlyRate() const;
        int getHoursWorked() const;
        void setName(string nameInput);
        void setHourlyRate(int hoursOfRate);
        void setHoursWorked(int hoursWorked);
        void calculatePay(int hourlyRate, int hoursWorked);
    private:
        string name;
        int hourlyRate;
        int numHours;
};

EmployeeInfo::EmployeeInfo() {
    name = "";
    hourlyRate = 0;
    numHours = 0;
}

string EmployeeInfo::getName() const {
    return name;
}

int EmployeeInfo::getHourlyRate() const {
    return hourlyRate;
}

int EmployeeInfo::getHoursWorked() const {
    return numHours;
}

void EmployeeInfo::setName(string nameInput){
    name = nameInput;
}

void EmployeeInfo::setHourlyRate(int hoursOfRate){
    hourlyRate = hoursOfRate;
}

void EmployeeInfo::setHoursWorked(int hoursWorked){
    numHours = hoursWorked;
}

void EmployeeInfo::calculatePay(int hourlyRate, int hoursWorked){
    int pay;
    pay = hourlyRate * hoursWorked;
    //return pay;
}

/*EmployeeInfo::EmployeeInfo() {
    name = "";
    hourlyRate = 0;
    numHours = 0;
}*/

int main()
{
    EmployeeInfo eI;
    string nameI;
    int hourR, hourW;
    int payR;
    bool valid = false;
    cout << "Welcome to my payroll program" << endl;
    cout << "Enter the employee name (stop to exit): ";
    cin >> nameI;
    eI.setName(nameI);
    
    cout << "Please enter hourly rate: ";
    cin >> hourR;
    
    if (hourR < 0){
        while (!valid){
            cout << "Invalid hourly rate. Please enter positive numbers only:";
            if (hourR >= 0){
                valid = true;
            }
        }
    }
    

    eI.setHourlyRate(hourR);
    
    valid = false;
    cout << "Please enter the number of hours worked: ";
    cin >> hourW;
    
    if (hourW < 0){
        while (!valid){
            cout << "Invalid amount of hours worked. Please enter positive numbers only:";
            if (hourW >= 0){
                valid = true;
            }
        }
    }
    
    eI.setHoursWorked(hourW);
    //payR = eI.calculatePay(eI.getHourlyRate(), eI.getHoursWorked());
    cout << "Employee Name: " << eI.getName() << endl;
    cout << "Weekly pay amount : " << eI.calculatePay(eI.getHourlyRate(), eI.getHoursWorked()) << endl; 
    
    
    return 0; 
}