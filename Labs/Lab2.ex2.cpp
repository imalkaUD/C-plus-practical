#include<iostream>
#include<iomanip>
using namespace std;

struct rectangle {
	float len;
	float wid;
};
float area(struct rectangle rec);
int main()
{
	struct rectangle rec1;
	struct rectangle rec2;

	float yardArea, houseArea, greenArea;

	cout << "Enter the length: ";
	cin >> rec1.len;

	cout << "Enter the width: ";
	cin >> rec1.wid;

	cout << "Enter the length: ";
	cin >> rec2.len;

	cout << "Enter the width: ";
	cin >> rec2.wid;

	yardArea = area(rec1);
	houseArea = area(rec2);

	greenArea = area(rec1) - area(rec2);

	cout << "Area of green color area: " << setiosflags(ios::fixed) << setprecision(3) << greenArea;


	return 0;

}
float area(struct rectangle rec)
{
	float area = rec.len * rec.wid;
	return area;
	
}
/*float area(rectangle rec)
{
	float rec1.area = rec1.len * rec1.wid;
	return rec1.area;

	float rec2.area = rec2.len * rec2.wid;
	return rec1.area;  */





