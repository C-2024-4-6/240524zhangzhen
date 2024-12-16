#include <iostream>             
#include "student.h"
int main()
{
	Student stud;                
	Student stud1;
	stud.set_value(007, "tcg", 'm');

	stud.display();
	return 0;
}
