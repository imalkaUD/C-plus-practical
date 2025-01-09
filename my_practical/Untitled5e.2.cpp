//5.1,5.2
#include <iostream>
using namespace std;
	
	//class identification
	class student{
		
		//data members,attributes,properties
		private:
			int studentNo;
			float mark1;
			float mark2;
			float mark3;
		
		
		//methods,functions,behaviors	
		public:
			void setStudentNo(int stuno);
			void assignMarks(float m1, float m2, float m3);
			float calcAvg();
			
	};

int main()
 {
 	//objects identification
	student std1, std2;
	
	//functions accession
	std1.setStudentNo(1023);
	std1.assignMarks(50,60,70);
	
	std2.setStudentNo(2345);
	std2.assignMarks(70,80,75);
	
	//printing details
	cout<<"Average of student1: "<< std1.calcAvg() << endl;
	cout <<"Average of student2: "<< std2.calcAvg() << endl;
	
	return 0;
}
//functions implementation
void student::setStudentNo(int stuno)
{
	studentNo = stuno;
}
void student::assignMarks(float m1, float m2, float m3)
{
	mark1 = m1;
	mark2 = m2;
	mark3 = m3;
}
float student::calcAvg()
{
	float avg = (mark1 + mark2 + mark3) / 3.0;
	return avg;
}
