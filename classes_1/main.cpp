#include <iostream>
#include <string>
using namespace std;

class GradeBook_v0
{
public:
	void displayMessage()
	{
		cout << "Welcome to the Grade Book!" << endl;
	}
};


class GradeBook_v1
{
public:
	void displayMessage(string courseName)
	{
		cout << "Welcome to the Grade Book for " << courseName << "!" << endl;
	}
};


class GradeBook_v2
{
public:
	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCourseName()
	{
		return courseName;
	}

	void displayMessage()
	{
		cout << "Welcome to the Grade Book for " << courseName << "!" << endl;
	}

private:
	string courseName;
};


class GradeBook_v3
{
private:
	string courseName;

public:
	GradeBook_v3(string name)
	{
		setCourseName(name);
	}

	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCourseName()
	{
		return courseName;
	}

	void displayMessage()
	{
		cout << "Welcome to the Grade Book for " << courseName << "!" << endl;
	}
};

int main()
{
	GradeBook_v0 myGradeBook;
	myGradeBook.displayMessage();

	cout << endl;

	string courseName;
	//cin >> courseName; //Stops at the first space
	//getline(cin, courseName);
	courseName = "Physics";

	GradeBook_v1 myGradeBook_1;
	myGradeBook_1.displayMessage(courseName);

	cout << endl;

	GradeBook_v2 myGradeBook_2;
	cout << "Initial value of the course name is: " << myGradeBook_2.getCourseName() << endl;
	myGradeBook_2.setCourseName("Chemistry");
	cout << "value of the course name is: " << myGradeBook_2.getCourseName() << endl;
	myGradeBook_2.displayMessage();

	cout << endl;

	GradeBook_v3 myGradeBook_3("Physics 101");
	cout << myGradeBook_3.getCourseName() <<endl;

	cout << endl;

	return 0;
}
