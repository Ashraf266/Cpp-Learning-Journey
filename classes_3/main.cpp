#include <iostream>
#include "gradebook.h"



int main(void)
{

	GradeBook_v3 myGradeBook_3("Physics 101");
	cout << myGradeBook_3.getCourseName() <<endl;
	myGradeBook_3.setCourseName("Physics 101 LONG PLAPLAPLAPLAPLAPLAPLAPLA");
	cout << myGradeBook_3.getCourseName() <<endl;

	myGradeBook_3.displayMessage();

	return 0;
}
