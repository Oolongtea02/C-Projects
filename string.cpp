#include <iostream>
using namespace std;

void subStrings(string str) {
    for (int i = 0; i < str.length(); i++) {
    string subStr;
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            cout << subStr << endl;
        }
    }
}
 
// Driver Code
 
int main()
{
    string str = "abcd";
    subStrings(str);
    return 0;
}

