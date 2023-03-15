//Exercise 12.1
//Team F
//Members: Tristyn Lai and Samuel Zhang

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream sourceFile;
    ofstream targetFile;
    string sourceName, targetName;
    string line;
    
    cout << "Enter a source file name: ";
    cin >>sourceName;
    cout << "Enter a target file name: ";
    cin >> targetName; 
    
    
    if(!sourceFile.is_open() || !targetFile.is_open()){
        cout << "Could not open file" << endl;
        return 1;
    }
    
    if (sourceFile && targetFile){
        while(getline(sourceFile, line)){
            targetFile << line << "\n";
        }
        
        cout << "Copy Done" << endl;
    }
    else{
        cout << "Can't read file" << endl;
    }
    
    sourceFile.close();
    targetFile.close();

    return 0;
}