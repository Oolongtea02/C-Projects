#include <algorithm>
#include <iostream>
using namespace std;

//start at 0
//add in recursive function 1-10
int recurSum(int n) {
    if (n <= 1)
        return n;
    return n + recurSum(n - 1);
}

int subArraySum(int A[], int low, int high) {
    int sum = 0;
    for (int i = low; i <= high; i++) {
        sum += A[i];
    }
    return sum;
}

int * maxSubArrayBruteSearch(int arr[], int size) {
    //int n = sizeof(arr)/sizeof(int);
    //cout << n <<endl;
    //int n = *(&arr + 1) - arr;
    //int n = sizeof(arr)/sizeof(arr[0]);  
    //cout << n <<endl;
    int n = size;
    int maxi, maxj = 0;
    int maxSum = 0;
    static int result[] = {0, 0, 0}; //static is a must, otherwise the value of pointer was changed
     for (int i = 0; i <= n - 1; i++){
        int currSum = 0;
        for (int j = i; j <= n - 1; j++) {
            //cout << "i: "  << i  << " j: " << j << endl;
            currSum += arr[j];
            //cout<<currSum<<endl;
            if (currSum > maxSum) {
                maxSum = currSum;
                maxi=i;
                maxj=j;
                //cout << "Max sum" << maxSum << endl;
            }
        }
    }
    result[0] = maxi;
    result[1] = maxj;
    result[2] = maxSum;

    for (int i = 0; i <= 2; i++){
        cout << result[i] << endl;
    }

    return result;
}

//recursive maxsubarray

int main() {
    int n = 10;
    int A[] = {13, -3, 20 ,-12, -6};
    //cout << subArraySum(A, 1, 2);
    //cout << maxSubArrayBruteSearch(A, 4);
    int *B;
    B = maxSubArrayBruteSearch(A, 5);
    //print(B);
    cout << "Max i: " << *(B + 0) << endl;
    cout << "Max j: " << *(B + 1) << endl;
    cout << "Max sum: " << *(B + 2) << endl;
    //cout << recurSum(n);
    return 0;
}
