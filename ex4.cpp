
#include <iostream>
using namespace std;

//Student class Definition
class Student {
	private:
		//attributes declaration
		int studentId;
		string studentName;
		int marksOOC;
		int marksSPM;
		int marksISDM;

	public:
		//function declaration
		void setStudentDetails(int sId, string sName, int mOOC, int mSPM, int mISDM);
		int getStudentId();
		int getMarksOOC();
		int getMarksSPM();
		int getMarksISDM();

};
//function implementation
void Student::setStudentDetails(int sId, string sName, int mOOC, int mSPM, int mISDM)
{
	studentId = sId;
	studentName = sName;
	marksOOC = mOOC;
	marksSPM = mSPM;
	marksISDM = mISDM;

}
int Student::getStudentId()
{
	return studentId;
}
int Student::getMarksOOC()
{
	return marksOOC;
}
int Student::getMarksSPM()
{
	return marksSPM;
}
int Student::getMarksISDM()
{
	return marksISDM;
}
int main()
{
	//Creating objects
	Student s1, s2, s3;

	s1.setStudentDetails(1234, "Kylie", 75, 80, 60);
	s2.setStudentDetails(4321, "James", 65, 70, 85);
	s3.setStudentDetails(6543, "Kyson", 90, 85, 80);

	//Declare the total marks
	int s1TM, s2TM, s3TM;

	s1TM = s1.getMarksISDM() + s1.getMarksOOC() + s1.getMarksSPM();
	s2TM = s2.getMarksISDM() + s2.getMarksOOC() + s2.getMarksSPM();
	s3TM = s3.getMarksISDM() + s3.getMarksOOC() + s3.getMarksSPM();

	//printing details
	cout << "Student id = " << s1.getStudentId() << endl
		<< "Marks OOC = " << s1.getMarksOOC() << endl
		<< "Marks SPM = " << s1.getMarksSPM() << endl
		<< "Marks ISDM = " << s1.getMarksISDM() << endl
		<< "Total Marks = " << s1TM << endl
		<< "Average Marks = " << s1TM / 3.0 << endl<<endl;

	cout << "Student id = " << s2.getStudentId() << endl
		<< "Marks OOC = " << s2.getMarksOOC() << endl
		<< "Marks SPM = " << s2.getMarksSPM() << endl
		<< "Marks ISDM = " << s2.getMarksISDM() << endl
		<< "Total Marks = " << s2TM << endl
		<< "Average Marks = " << s2TM / 3.0 << endl<<endl;

	cout << "Student id = " << s3.getStudentId() << endl
		<< "Marks OOC = " << s3.getMarksOOC() << endl
		<< "Marks SPM = " << s3.getMarksSPM() << endl
		<< "Marks ISDM = " << s3.getMarksISDM() << endl
		<< "Total Marks = " << s3TM << endl
		<< "Average Marks = " << s3TM / 3.0 << endl;

	return 0;
}