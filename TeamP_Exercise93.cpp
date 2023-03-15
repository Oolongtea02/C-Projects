#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i, j, testSize, number, temp;
    float sum = 0;
    float averageWeight = 0;
    
    cout << "How many test scores will you enter? ";
    cin >> testSize;
    
    float *data = new float(testSize);
    
    for(i = 0; i < testSize; ++i){
    cout << "Enter test score " << (i + 1) << ": ";
        cin >> number;
        if (number > 0){
            data[i] = number;
        }
        else{
        cout << "Negative numbers are not allowed." << endl;
            cout << "Enter another score for this test: ";
            cin >> number;
            data[i] = number;
        }
        
    }
    
    cout << endl;
    cout << "The test scores in ascending order, and their average, are:" << endl;
    cout << endl;
    cout <<  "Score" << endl;
    cout << "-----" << endl;
    cout << endl;
    
    for(i=0;i<testSize;i++)
    {
        for(j=i+1;j<testSize;j++)
        {
            if(data[i]>data[j])
            {
                temp  =data[i];
                data[i]=data[j];    
                data[j]=temp;
            }
        }
    }
    for (i = 0; i < testSize; ++i){
        sum += data[i];
    }

    averageWeight = sum / testSize;
    
    for (i = 0; i < testSize; ++i){
       cout <<  fixed << setprecision(2) << data[i] << " " << endl;
    }
   
    cout << endl;
    cout << "Average score: " << fixed << setprecision(2) << averageWeight << endl;

        
    
    
    delete [] data;
    return 0;
    
}