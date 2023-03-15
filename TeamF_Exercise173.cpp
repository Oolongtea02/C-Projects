#include <iostream>
#include <iterator>
#include <map>
using namespace std;
  
int main()
{

	map<string, int> courseRoom;
	courseRoom.insert(pair<string, int>(CS101, 102));
	courseRoom.insert(pair<string, int>(CS102, 103));
	courseRoom.insert(pair<string, int>(CS103, 203));
	courseRoom.insert(pair<string, int>(NT110, 204));
	courseRoom.insert(pair<string, int>(CM241, 301));

	map<string, int>::iterator itr;
    cout << "\nThe map courseRoom is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = courseRoom.begin(); itr != courseRoom.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
  
    map<int, int> courseRoom1(courseRoom.begin(), courseRoom.end());

}