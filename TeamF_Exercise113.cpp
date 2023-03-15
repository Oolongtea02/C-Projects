#include <iostream>

using namespace std;

struct CustomerData{
    string name;
    string address;
    string city;
    string state;
    int ZIP;
    string telephone;
    int accountBalance;
    string dataOfLastPayment
};

int main()
{
    CustomerData customer;
    
    cout<<"1. Enter new account information";
    cout<<"2. Change account information";
    cout<<"3. Display account information";
    cout<<"4. Exit the program";

    getline(cin, name, '\n');
    return 0;
}
