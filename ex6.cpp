

#include <iostream>

using namespace std;

class Guest{
	private:
		int guestId;
		string guestName;
		int ratePerDay;
		int numberOfDays;

	public:
		void setGuestDetails(int gId, string gName, int rPerDay, int nOfDays);
		void displayGuestDetils();
		int calculateGuestBill();
};
void Guest:: setGuestDetails(int gId, string gName, int rPerDay, int nOfDays)
{
	guestId = gId;
	guestName = gName;
	ratePerDay = rPerDay;
	numberOfDays = nOfDays;

}
void Guest::displayGuestDetils()
{
	cout << "Guest ID = " << guestId << endl
		<< "Guest Name = " << guestName << endl;
	
}
int Guest::calculateGuestBill()
{
	return ratePerDay * numberOfDays;
}

int main()
{
	Guest g1, g2, g3;

	g1.setGuestDetails(1212, "Jared", 4500, 4);
	g2.setGuestDetails(1122, "Ben", 3000, 3);
	g3.setGuestDetails(1234, "Ruby", 5750, 2);


	g1.displayGuestDetils();
	cout << "Bill Amount = " << g1.calculateGuestBill() << endl << endl;

	g2.displayGuestDetils();
	cout << "Bill Amount = " << g2.calculateGuestBill() << endl << endl;

	g3.displayGuestDetils();
	cout << "Bill Amount = " << g3.calculateGuestBill() << endl << endl;

	return 0;

}

