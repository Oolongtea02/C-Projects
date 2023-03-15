int Sale () {
	private:
		int day;
		int saleAmount;
		int idNumber;
}

void Salesperson() {
	public:
		string salesperson;
	private:
		string lastName;
		int IDNumber;
}

friend display() {
	cout << "Sale # " << idNumber << " on " << day << " for " saleAmount << endl;
}