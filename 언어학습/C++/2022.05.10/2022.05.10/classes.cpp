#include <iostream>
using namespace std;

class Human
{
private:
	int age;
	char name[50];

public:
	Human() {}
	Human(int my_age, char* my_name) : age(my_age)
	{

		strcpy_s(name, my_name);
		cout << "���� Human ź��" << endl;
	}
	void Spk_name()
	{
		cout << "my name is " << name << endl;
	}
	void Spk_age()
	{
		cout << "I'm " << age << " years old" << endl;
	}
	~Human() 
	{
		cout << "���� Human �Ҹ�" << endl;
	}
};

class Student : public Human
{
private:
	char interest[50];
public:
	Student() {}
	Student(char* my_name, int my_age, char* my_interest) : Human(my_age, my_name)
	{
		cout << "���� Student ź��" << endl;
		strcpy_s(interest, my_interest);
	}
	void Intro()
	{
		Spk_name();
		Spk_age();
		cout << "my interest is " << interest << endl;
	}
	~Student()
	{
		cout << "���� Student �Ҹ�" << endl;
	}
};