#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MovieData
{
	string title;
	string director;
	int year;
	int runningTime;
	double productionCost;
	double firstYearRevenue;
	double firstYearProfit;
	double firstYearLoss;	
};

int main()
{
	MovieData movie1 = {"War of the Worlds", "Byron Haskin", 1953, 88 " minutes", "15000000.00", "28000000.00", "13999999.00"};
	MovieData movie2 = {"War of the Worlds", "Stephen Spielberg", 2005, 118 " minutes", "22000000.00", "$14000000.00", "-800000.00"};

	cout << fixed << showpoint << setprecision(2);

	//Details for Movie1
	cout << "Title	: " << movie1.title << endl;
	cout << "Director	: " << movie1.director << endl;
	cout << "Released	: " << movie1.year << endl;
	cin >> movie1.runningTime;
	cout << "Running Time: " << movie1.runningTime << endl;
	cout << "Production cost:" << movie1.productionCost << endl;
	cout << "First year revenue: " << movie1.firstYearRevenue << endl;
	cout << "First year profit: " << movie1.firstYearProfit << endl;

	//Details for Movie2
	cout << "Title	: " << movie2.title << endl;
	cout << "Director	: " << movie2.director << endl;
	cout << "Released	: " << movie2.year << endl;
	cin >> movie2.runningTime;
	cout << "Running Time: " << movie2.runningTime << endl;
	cout << "Production cost: " << movie2.productionCost << endl;
	cout << "First year revenue: " << movie2.firstYearRevenue << endl;
	cout << "First year loss: " << movie2.firstYearLoss << endl;

	return 0;
}