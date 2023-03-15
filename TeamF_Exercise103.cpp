#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
using namespace std;
int main()
{
    string originWord, result;
    int i;
    
    cout << "Enter a sentence with no spaces between the words \nand the first" 
"letter of each word capitalized." << endl;
    cout << "(Example: StopAndSmellTheRoses):" << endl;
    cin >> originWord;
    
    //Turning the string into an arrray
    int length = originWord.length();
    char wordarr[length + 1];
    strcpy(wordarr, originWord.c_str());
    
    
    for (i = 0; i < length; ++i){
        if (isupper(wordarr[i]) != 0){
            vector<int> wordsVector;
            for (i = 0; i < length; ++i){
                wordsVector.push_back(wordarr[i]);
            }
            string finalword(wordsVector.begin(), wordsVector.end());
            finalword.insert(i, " ");
            tolower(finalword.at(i));
            result = finalword;
        }
        
    }
    cout << "output => " << result << endl;
    
    
    return 0;
}