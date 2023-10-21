
#include <iostream>
#include <fstream>

using namespace std;
// Class to define the properties
class Employee {
	public:
		string name;
		int emp_id;
		int sal;
};
int main()
{
	Employee E1;
	E1.emp_id = 100001;
	E1.name = "Ayush";
	E1.sal = 45000;
	//Write
	ofstream file1;
	file1.open("Employee.txt", ios::app);
	file1.write((char*)& E1, sizeof(E1));
	file1.close();
	//Read
	ifstream file2;
	file2.open("Employee.txt", ios::in);
	file2.read((char*)& E1, sizeof(E1));
	
	printf("\nId of Employee: %d",E1.emp_id);

	printf("\nName of Employee: %s",E1.name);
	printf("\nSalary of Employee: %d",E1.sal);
	file2.close();
	return 0;
}
