//It23250192
//group 5.2
#include <iostream>
using namespace std;

//class definition
class Doctor {
    private:
        int doctorId;
        string doctorName;
        string specialization;
        string hospital;

    public:
        void setDoctorDetails(int dId, string dName, string spec, string hos);
        void displayDoctorDetails();
        string getSpecialization();
        void setHospital();
};
void Doctor::setDoctorDetails(int dId, string dName, string spec, string hos)
{
    doctorId = dId;
    doctorName = dName; 
    specialization = spec;
    hospital = hos;
}
void Doctor::displayDoctorDetails()
{
    cout << "Doctor Id = " << doctorId << endl
        << "Doctor Name = " << doctorName << endl
        << "Specialization = " << specialization << endl
        << "Hosptal = " << hospital << endl<<endl;

    
}
string Doctor::getSpecialization()
{
    return specialization;
}
void Doctor::setHospital()
{
    cout << "Input new hosptal of doctor " << doctorId << " : " << specialization << endl;
}
int main()
{
    Doctor d1, d2;

    d1.setDoctorDetails(1, "Dr. Sunil", "Neuro", "Asiri");
    d2.setDoctorDetails(2, "Dr. Yasantha", "Oncolo", "Lanka");

    d1.setHospital();
    d2.setHospital();

    cout << endl;




    d1.displayDoctorDetails();
    d2.displayDoctorDetails();

    return 0;
}