#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	string password;
	int i;
	int lowerCount = 0;
	int digitCount = 0;
	bool lengthoften = false;
	bool lower = true;
	bool valid = false;
	
	cout << "Enter a password consisting of exactly 4 lower case letters and 6 digits:" << endl;
    cin >> password;
    
    while (!valid){
        int length = password.length();
        char passwordarr[length + 1];
 
        strcpy(passwordarr, password.c_str());
 
        if (strlen(passwordarr) == 10){
            //lengthoften will return 1
            lengthoften = true;
        }

        //Checking for 4 letters and 6 digits
        for (i = 0; i < length; ++i){
            if (isalpha(passwordarr[i]) != 0){
                if (islower(passwordarr[i])){
                    lowerCount += 1; 
                }
            }
        
            if (isdigit(passwordarr[i])){
                ++digitCount;
            }
        }
        
        if (lengthoften && (lowerCount > 4) && (digitCount > 6)){
            valid = true;
            break;
        }
        else{
            cout << "Invalid password. Please enter a password with exactly 4 lower case letters and 6 digits" << endl;
            cout << "For example, 1234abcd56 is valid. Please enter again:" << endl;
            cin >> password;
        }
        
      
            
    }
    
    cout << "The number of lower case letters in the password is 4" << endl;
    cout << "The number of digits in the password is 6" << endl;
        
    return 0;
    
}