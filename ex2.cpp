#include <iostream>
using namespace std;

class Event {
	private:
		int eventId;
		string eventType;
		string themeColor;
		string location;

	public:
		void setEventDetails(int eId, string eType, string tColor, string  loc);
		void displayEventDetails();
		void setEventLocation();

};
void Event::setEventDetails(int eId, string eType, string tColor, string  loc)
{
	eventId = eId;
	eventType = eType;
	themeColor = tColor;
	location = loc;

}
void Event:: displayEventDetails()
{
	cout << "Event Type: " << eventType << endl << "Theme Colour: " << themeColor << endl << "Location: " << location << endl << endl;;

}
void Event:: setEventLocation()
{
	cout << "Input new location of event " << eventId << " : ";
	cin >> location;
}
int main()
{
	Event* e1 = new Event();
	Event* e2 = new Event();
	Event* e3 = new Event();


	e1->setEventDetails(1, "Party", "Red", "Nugegoda");
	e2->setEventDetails(2, "Wedding", "Purple", "Maharagama");
	e3->setEventDetails(3, "Party", "Pink", "Malabe");

	e1->setEventLocation();
	e2->setEventLocation();
	e3->setEventLocation();

	cout << endl;

	e1->displayEventDetails();
	e2->displayEventDetails();
	e3->displayEventDetails();

	delete e1;
	delete e2;
	delete e3;

	return 0;
}


