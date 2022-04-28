#include "abstract.h"
Human::Human(string surname, string name, string midname, int age)
{
	this->surname = surname;
	this->name = name;
	this->midname = midname;
	this->age = age;
}
Human::~Human()
{
}
Student::Student(string surname,string name,string midname,int age,bool on_lesson ) :Human(surname,name, midname,age)
{
	this->on_lesson = on_lesson;
}
void Student::print()
{
	cout << "Student: " << getSurname() << " " << getName() << " " << getMidname() << " " << getAge() << " " << on_lesson << endl;
}
Student::~Student()
{
}
Boss:: Boss(string surname, string name, string midname, int age, int number_of_workers) : Human(surname, name, midname, age)
{
	this->number_of_workers = number_of_workers;
}
void Boss::print()
{
	cout << "Boss: "<<  getSurname() << " " << getName() << " " << getMidname() << " " << getAge() << " " << number_of_workers << endl;
}

Boss::~Boss()
{
}
