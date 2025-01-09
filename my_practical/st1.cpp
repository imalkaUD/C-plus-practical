#include<iostream>
#include<iomanip>
using namespace std;

struct circle
{
	float radius;
};

struct rectangle
{
	float rLen;
	float rWid;
};

struct square
{
	float sLen;
};
float areaOfCircle(circle c);
float areaOfRectangle(rectangle r);
float areaOfSquare(square s);
int main()
{
	float greenArea, areaCircle, areaRectangle, areaSquare;

	float circle c1;
	float rectangle r1;
	float sqaure s1;

	cout << "Enter the radius of the circle: ";
	cin >> c1.radius;

	cout << "Enter the length of the rectangle: ";
	cin >> r1.rLen;

	cout << "Enter the width of the rectangle: ";
	cin >> r1.rWid;

	cout << "Enter the length of the square: ";
	cin >> s1.sLen;



	areaCircle = areaOfCircle(c);
	areaRectangle = areaOfRectangle(r);
	areaSquare = areaOfSquare(s);

	greenArea = 28 * 15 - (areaCircle + areaRectangle + areaSquare);

	cout << "Area of the green colour area is " <<setw(7) <<setiosflags(ios::fixed) << setprecision(3) << greenArea << endl;


	return 0;



}
float areaOfCircle(circle c)
{
	float cArea = (22 / 7.0) * c.radius * c.radius;
	return cArea;
}
float areaOfRectangle(rectangle r)
{
	float rArea = r.rLen * r.rWid;
	return rArea;
}
float areaOfSquare(square s)
{
	float sArea = s.sLen * s.sLen;
	return sArea;
}
