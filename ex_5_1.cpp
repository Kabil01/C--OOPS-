#include <cstring>
#include <iostream>
using namespace std;

class CommunityMember{
	protected:
		int age;
		string name;
		int id;
	public:
		CommunityMember(int age,string name,int id) : age(age),name(name),id(id) {}
		int get_id(){
			return id;
		}
		string get_name(){
			return name;
		}
		int get_age(){
			return age;
		}
		void display(){
			cout<<"  ID  : "<<id<<endl;
			cout<<" NAME : "<<name<<endl;
			cout<<" AGE  : "<<age<<endl;
		}
};

class Employee:public CommunityMember{
	protected:
		int salary;
	public:
		
		Employee(int age,string name,int id,int salary):CommunityMember(age,name,id),salary(salary) {}
	void display(){
		CommunityMember::display();
		cout<<"Employee Salary : Rs."<<salary<<endl;
		}
};
		
class Student:public CommunityMember{
	protected:
	int mark;
	string god;
	public:
	Student(int age,string name,int id,int mark,string god):CommunityMember(age,name,id),mark(mark),god(god){}
	void display(){
	CommunityMember::display();
	cout<<"Marks : "<<mark<<endl;
	cout<<"Grade of Study :"<<god<<endl;
	}
};

class Alumnus:public CommunityMember{
	protected:
	int passedyear;
	public:
	Alumnus(int age,string name,int id,int passedyear): CommunityMember(age,name,id),passedyear(passedyear){}
	void display(){
	CommunityMember::display();
	cout<<"Passed year : "<<passedyear<<endl;
	}
};

class Faculty:public Employee{
	protected:
		string dept;
	public:
		Faculty(int age,string name,int id,int salary,string dept):Employee(age,name,id,salary),dept(dept) {}
		void display(){
			Employee::display();
			cout<<"Department :"<<dept<<endl;
		}
		
};

class Staff:public Employee{
	protected:
		string staff_room;
	public:
		Staff(int age,string name,int id,int salary,string staff_room): Employee(age,name,id,salary),staff_room(staff_room) {}
		void display(){
			Employee::display();
			cout<<"Staff room :"<<staff_room<<endl;
		}
};

class Administrator:public Faculty{
	protected:
		string pos;
	public:
		Administrator(int age,string name,int id,int salary,string dept,string pos):Faculty(age,name,id,salary,dept),pos(pos) {}
		void display(){
			Faculty::display();
			cout<<"Position :"<<pos<<endl;
		}
};

class Teacher:public Faculty{
	protected:
		string course;
	public:
		Teacher(int age,string name,int id,int salary,string dept,string course):Faculty(age,name,id,salary,dept),course(course) {}	
		void display(){
			Faculty::display();
			cout<<"Course :"<<course<<endl;
		}
};

class AdministratorTeacher:public Administrator,public Teacher{
	public:
		AdministratorTeacher(int age,string name,int id,int salary,string dept,string pos,string course):Administrator(age,name,id,salary,dept,pos),Teacher(age,name,id, salary,dept,course) {}
		void display(){
			Administrator::display();
			cout<<"Course :"<<pos<<endl;
		}

};

int main(){
 CommunityMember member(19,"Kabil", 2021115046);
    member.display();
    cout << endl;

    Employee employee(21,"Logi", 2020115125, 45000);
    employee.display();
    cout << endl;

    Faculty faculty(25,"Tamizh", 2019001040, 50000, "Mathematics");
    faculty.display();
    cout << endl;

    Staff staff(30,"Manigandan", 2011004335, 42000, "2nd Floor Staff room");
    staff.display();
    cout << endl;

    Administrator administrator(35,"Kiara", 2015345032, 89000, "OS", "Professor");
    administrator.display();
    cout << endl;
    
    Teacher teacher(46,"Ganesh",2010355193,90999,"IT","OOPS");
    teacher.display();
    cout<<endl;
    
    AdministratorTeacher administratorteacher(59,"Krishnan",2000435001,150000,"IT","HOD","DAA");
    administratorteacher.display();

}

