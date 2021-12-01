#pragma once
#include"CSortAlgorithm.h"

class STUDENT
{
private:
	string Name;
	float Point;
public:
	STUDENT();
	STUDENT(string newName, float newPoint);
	STUDENT(const STUDENT* s);
	STUDENT(const STUDENT& s);
	~STUDENT();
	bool operator<(const STUDENT& s);
	bool operator>(const STUDENT& s);
	friend ostream& operator<<(ostream& os, STUDENT& s);
};

