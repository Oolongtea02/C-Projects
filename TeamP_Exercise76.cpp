#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    vector<float> weightList;
    float weights;
    int i = 0;
    float sum = 0;
    float averageWeight = 0;
    float maxWeight = 0;
    
    //While loop to get the user's inputs
    while (i < 5){
        cout << "Enter weight " << (i + 1) << ": ";
        cin >> weights;
        weightList.push_back(weights);
        ++i;
    }
	cout << endl;
    cout << "You entered: "; 
    
    for (i = 0; i < weightList.size(); ++i){
        cout << fixed << setprecision(2) << weightList.at(i) << " ";
    }
    
    for (i = 0; i < weightList.size(); ++i){
        sum += weightList.at(i);
    }
    
    averageWeight = sum / 5;
    maxWeight = *max_element(weightList.begin(), weightList.end());
    
    cout << endl << endl;
    cout << "Total weight: " << fixed << setprecision(2) << sum << endl;
    cout << "Average weight: " << fixed << setprecision(2) << averageWeight << endl;
    cout << "Max weight: " << fixed << setprecision(2) << maxWeight << endl;
    
}