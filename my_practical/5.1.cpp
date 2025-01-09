#include <iostream>
using namespace std;

class Rectangle {
	private :
		int width;
		int length;
	public: 
		void setWidth(int no);
		void setLength(int no);
		int calcArea();
};


int main() {
	
	Rectangle rec1, rec2;
	
	rec1.setWidth(10);
	rec1.setLength(20);
	rec2.setWidth(5);
	rec2.setLength(10);
	
	cout << rec1.calcArea() << endl;
	cout << rec2.calcArea() << endl;
	
	return 0;
}
void Rectangle::setWidth(int no) {
	width = no;
}
void Rectangle::setLength(int no) {
	length= no;
}
int Rectangle::calcArea() {
	int area = length * width;
	return area;
}


