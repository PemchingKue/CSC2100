#include <iostream>
#include <string> 
using namespace std;
// Base class personType
class personType
{
public:
	void print()const;
	//Function to output the first name and last name
	//in the form firstName lastName.
	void setName(string first, string last);

	string getFirstName()const;
	string getLastName()const;
	personType(string first = "", string last = "");
	//Constructor
	//Sets firstName and lastName according to the parameters.
	//The default values of the parameters are null strings.
	//Postcondition: firstName = first; lastName = last  
private:
	string firstName; //variable to store the first name
	string lastName;  //variable to store the last name
};

void personType::print() const
{
	cout << "Person FirstName=" << firstName << " LastName=" << lastName << endl;
}

void personType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

string personType::getFirstName() const
{
	return firstName;
}

string personType::getLastName() const
{
	return lastName;
}

//constructor
personType::personType(string first, string last)

{
	firstName = first;
	lastName = last;
}
// --------------------Start your code from here
class doctorType : public personType{

public:
	
	void setSpecialty(string);
	string getSpecialty()const;
	void print()const;

	doctorType(string first, string last, string specialty);
	doctorType();

private:
	string fname;
	string lname;
	string Specialty;
};

doctorType::doctorType(string first, string last, string specialty) :personType(first, last)
{
	fname = first;
	lname = last;
	Specialty = specialty;
}

void doctorType::setSpecialty(string specialty)
{
	Specialty = specialty;
}
string doctorType::getSpecialty()const{
	return Specialty;
}
void doctorType::print()const{
	cout << "Doctor FirstName=" << fname << " LastName=" << lname 
		 << " Specialty=" << Specialty << endl;
}
/////
class patientType : public personType{

public:
	
	void setId(int);
	void setAge(int);
	void setDob(int);

	int getId()const;
	int getAge()const;
	int getDob()const;
	void print()const;
	
	patientType(string first, string last, int, int, int);
	patientType();

private:
	string fname;
	string lname;
	int id;
	int age;
	int dob;
};
void patientType::setId(int a){
	id = a;
}
void patientType::setAge(int b){
	age = b;
}
void patientType::setDob(int c){
	dob = c;
}
int patientType::getId()const{
	return id;
}
int patientType::getAge()const{
	return age;
}
int patientType::getDob()const{
	return dob;
}
patientType::patientType(string first, string last, int a, int b , int c) :personType(first, last){
	fname = first;
	lname = last;
	id = a;
	age = b;
	dob = c;
}
void patientType::print()const{
	cout << "Patient FirstName=" << fname << " LastName=" << lname
		 << " Id=" << id << " Age=" << age << " DOB=" << dob << endl;
}

///
class billType{

public:

	void setCharge(double);
	double getCharge()const;

	void print()const;

	billType(doctorType &d, patientType &c);

private:
	double charge;
	patientType &patient;
	doctorType &doctor;
};

billType::billType(doctorType &d, patientType &c) : doctor(d), patient(c){ }

void billType::setCharge(double c){
	charge = c;
}
double billType::getCharge()const{
	return charge;
}
void billType::print()const{
	patient.print();
	cout << "Patient's ";
	doctor.print();
	cout << "Hospital Chrge=" << charge << "$" << endl;
}

//--------------------driver program
int main()
{

	personType person1("Lisa", "Regan");
	doctorType doctor1("Sarah", "Conner", "Dentist");
	patientType patient1("Sam", "Fire", 200, 100, 1916);
	billType b1(doctor1, patient1);
	b1.setCharge(250.66);
	cout << "<personType> Printing...\n";
	person1.print();
	cout << endl;
	cout << "<doctorType> Printing...\n";
	doctor1.print();
	cout << endl;
	cout << "<patientType> Printing...\n";
	patient1.print();
	cout << endl;
	cout << "<billType> Printing...\n";
	b1.print();
	cout << endl;
	return 0;
}