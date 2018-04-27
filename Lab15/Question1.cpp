#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class lineType
{
	//Overload the stream extraction operators
	friend ostream& operator<<(ostream&, const lineType&);
	friend istream& operator>>(istream&, lineType&);

public:
	const lineType& operator=(const lineType&);
	//overload the assignment operator

	void setLine(double a = 0, double b = 0, double c = 0);
	//Function to set the line.

	double getXCoefficient() const;
	double getYCoefficient() const;
	double getCOnstantTerm() const;

	void setXCoefficient(double coeff);
	void setYCoefficient(double coeff);
	void setConstantTerm(double c);


	lineType(double a = 0, double b = 0, double c = 0);
	//Constructor

private:
	double xCoeff;
	double yCoeff;
	double constTerm;
};

void lineType::setLine(double a, double b, double c)
{
	xCoeff = a;
	yCoeff = b;

	if (a == 0 && b == 0)
		constTerm = 0;
	else
		constTerm = c;
}

double lineType::getXCoefficient() const
{
	return xCoeff;
}

double lineType::getYCoefficient() const
{
	return yCoeff;
}

double lineType::getCOnstantTerm() const
{
	return constTerm;
}

void lineType::setXCoefficient(double coeff)
{
	xCoeff = coeff;
}

void lineType::setYCoefficient(double coeff)
{
	yCoeff = coeff;
}

void lineType::setConstantTerm(double c)
{
	constTerm = c;
}

lineType::lineType(double a, double b, double c)
{
	setLine(a, b, c);
}

ostream& operator<<(ostream& osObject, const lineType& line)
{
	if (line.xCoeff != 0)
		osObject << line.xCoeff << "x ";

	if (line.yCoeff != 0)
	{
		if (line.yCoeff < 0)
			osObject << "- ";
		else
			osObject << "+ ";
		osObject << fabs(line.yCoeff) << "y ";
	}

	osObject << " = " << line.constTerm;

	return osObject;
}

/*
* Implement the following operators
*/
const lineType& lineType::operator=(const lineType& otherLine)
{
	
	xCoeff = otherLine.xCoeff;
	yCoeff = otherLine.yCoeff;
	constTerm = otherLine.constTerm;

	return otherLine;
}

istream& operator>>(istream& isObject, lineType& line)
{

	char openParam;
	cin >> openParam;

	cin >> line.xCoeff;

	char openParam2;
	cin >> openParam2;

	cin >> line.yCoeff;

	char openParam3;
	cin >> openParam3;

	cin >> line.constTerm;

	return isObject;

}
//----------------------DriverProgram-----------------------
int main()
{
	lineType line1(2, 3, 4);
	lineType line2(3, 5, 7);
	lineType line3(2, 3, -2);
	lineType line4(3, -2, 1);

	lineType line5;
	lineType line6;

	cout << "line1: " << line1 << endl;
	cout << "line2: " << line2 << endl;
	cout << "line3: " << line3 << endl;
	cout << "line4: " << line4 << endl;


	cout << "Input line5 in the form (a, b, c): ";
	cin >> line5;
	cout << "line5: " << line5 << endl;


	cout << "line5 has been copied to line6 by the assignment operator" << endl;
	line6 = line5;
	cout << "line6: " << line6 << endl;
	return 0;
}

