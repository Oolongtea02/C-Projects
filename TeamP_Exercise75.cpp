#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numRows = 5;
    int numCols = 3;
    int shippingCosts[numRows][numCols];
    int numberOrdered = 1;
    int i, j;
  
    //Initialization of min and max Orders
    shippingCosts[0][0] = 1;
    shippingCosts[0][1] = 50;
    shippingCosts[1][0] = 51;
    shippingCosts[1][1] = 100;
    shippingCosts[2][0] = 101;
    shippingCosts[2][1] = 200;
    shippingCosts[3][0] = 201;
    shippingCosts[3][1] = 500;
    shippingCosts[4][0] = 501;
    shippingCosts[4][1] = 999999;
  
    //Initialization of shipping charge
    shippingCosts[0][2] = 20;
    shippingCosts[1][2] = 15;
    shippingCosts[2][2] = 10;
    shippingCosts[3][2] = 5;
    shippingCosts[4][2] = 0;
  
    while (numberOrdered > 0){
    cout << "Number ordered (negative number or 0 to end): ";
    cin >> numberOrdered;

    if (numberOrdered >= shippingCosts[0][0] && numberOrdered <= shippingCosts[0][1]){
        cout << "Shipping charge for a quantity of " << numberOrdered << " is $" << shippingCosts[0][2] << endl;
    }  
    else if (numberOrdered >= shippingCosts[1][0] && numberOrdered <= shippingCosts[1][1]){
        cout << "Shipping charge for a quantity of " << numberOrdered << " is $" << shippingCosts[1][2] << endl;
    }
    else if (numberOrdered >= shippingCosts[2][0] && numberOrdered <= shippingCosts[2][1]){
        cout << "Shipping charge for a quantity of " << numberOrdered << " is $" << shippingCosts[2][2] << endl;
    }
    else if (numberOrdered >= shippingCosts[3][0] && numberOrdered <= shippingCosts[3][1]){
        cout << "Shipping charge for a quantity of " << numberOrdered << " is $" << shippingCosts[3][2] << endl;
    }
    else if (numberOrdered >= shippingCosts[4][0] && numberOrdered <= shippingCosts[4][1]){
        cout << "Shipping charge for a quantity of " << numberOrdered << " is $" << shippingCosts[4][2] << endl;
    }
    }
}
