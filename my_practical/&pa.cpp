#include<iostream>
#include<iomanip>
using namespace std;

void findMarks(int t_marks1, int t_marks2, float& t_cA1, float& t_cA2);
struct marks
{
	int t_marks1, t_marks2;
	int student;
	float t_cA1, t_cA2;
};
int main()
{
	marks details[5];

	for (int i = 0; i <= 5; i++)
	{
		cout << "Enter mark of 1st Assignment:" << i + << endl;;
		cin >> details[i].t_marks1;

		cout <<"Enter mark of 2nd Assignment:" << i + <<endl;
		cin >> details[i].t_marks2;

		cout << endl;

		details[i].student = i + 1;

		findmarks(details[i].t_marks1, details[i].t_marks2, details[i].t_cA1, details[i].t_cA2);

		
	}
	cout << endl;

	cout << setw(10) << "Student" << setw(10) << "Marks 1" << "Marks 2" << setw(10) << "CA 1" << setw(10) << "CA 2" << endl;

	for (int i = 0; i <= 5; i++)
	{
		cout << setw(10) << details[i].student << setw(10) << details[i].t_marks1 << setw(10) << details[i].t_marks2 << setw(10) << details[i].t_cA1 << setw(10) << details[i].t_cA2;
	}

	return 0;

}
void findMarks(int t_marks1, int t_marks2, float& t_cA1, float& t_cA2)
{
	t_cA1 = (t_marks1 * 20) / 100.0;
	t_cA2 = (t_marks2 * 30) / 100.0;
}
