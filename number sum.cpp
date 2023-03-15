//
//  number sum.cpp
//  
//
//  Created by Samuel Zhang on 1/4/23.
//

#include "number sum.cpp"
#include <iostream>
using namespace std;

//start at 0
//add in recursive function 1-10
int recurSum(int n) {
    if (n <= 1)
        return n;
    return n + recurSum(n - 1);
}

int main() {
    int n = 10;
    cout << recurSum(n);
    return 0;
}
