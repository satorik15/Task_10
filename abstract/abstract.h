#ifndef ABSTRACT_H
#define ABSTRACT_H
#include <iostream>
#include <string>
using namespace std;
class Human 
{
private:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human(string ="",string ="", string ="",int =0);
	virtual void print() = 0;
	~Human();
	const string& getSurname()
	{
		return surname;
	}
	const string& getName()
	{
		return name;
	}
	const string& getMidname()
	{
		return midname;
	}
	int getAge() const {
		return age;
	}


};
class Student :public Human
{
private:
	bool on_lesson;
public:
	Student(string = "", string = "", string = "", int = 0, bool = 0);
	void print();
	~Student();
};
class Boss :public Human
{
private:
	int number_of_workers;
public:
	Boss(string = "", string = "", string = "", int = 0, int = 0);
	void print();
	~Boss();

};

#endif // !ABSTRACT_H
