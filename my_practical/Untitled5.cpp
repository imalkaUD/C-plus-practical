//lec2.1
/*Write a C++ program to input the length and the 
width of a rectangle and calculate and print the area and
perimeter. */

#include<iostream>
using namespace std;

	class rectangle{
		private:
			int length;
			int width;
			
		public:
			void setWidth(int l1);
			void setLength(int w1);
			int calcArea();
			int calcPerimeter();
			

	};
int main()
{
	
	rectangle r1;
	
	r1.setLength(20);
	r1.setWidth(10);
	
	cout<<"Area is  "<<r1.calcArea()<<endl;
	cout<<"Perimeter is  "<<r1.calcPerimeter()<<endl;
	
	return 0;
	
}
void rectangle::setWidth(int l1){
	length = l1;
}
void rectangle::setLength(int w1){
	width = w1;
}
int rectangle::calcArea(){
	int area = length * width;
	return area;
}
int rectangle::calcPerimeter(){
	int perimeter = 2 * (length + width);
	return perimeter;
}
