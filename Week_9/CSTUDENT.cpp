#include "CSTUDENT.h"

STUDENT::STUDENT()
{
	Name = "";
	Point = 0;
};
STUDENT::STUDENT(string newName, float newPoint)
{
	Name = newName;
	Point = newPoint;
}
STUDENT::STUDENT(const STUDENT* p)
{
	Name = p->Name;
	Point = p->Point;
}

STUDENT::STUDENT(const STUDENT& p)
{
	Name = p.Name;
	Point = p.Point;
}
STUDENT::~STUDENT() {};

bool STUDENT::operator<(const STUDENT& s)
{
	return Point < s.Point;
}
bool STUDENT::operator>(const STUDENT& s)
{
	return Point > s.Point;
}

    ostream& operator<<(ostream& os, STUDENT& s)
{
	cout << "\nName: ";
	os << s.Name << "\t";
	cout << "Point: ";
	os << s.Point;
	return os;
}
