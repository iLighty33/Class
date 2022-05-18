#include <iostream>
#include <string>
#include <ctime>//chrono
using namespace std;

/*class Integer {
public:
	// �����-�� ���
	
protected:
	// �����-�� ���

private:
	// �����-�� ���
	
};*/

/*
class Integer {
public:
	// ������� �������� ��������
	Integer(){ } // ����������� �� ���������
	Integer(bool sign, unsigned units){ } // ����������� � �����������
	Integer(int number) { } // 
	// ������� ��������� ��������

	// ������� �������� ��������� �������

	// ���������� ����������


private:
	// ���� ������ � ������ �� ��� ������������
	bool sign;
	unsigned units;
};
*/

class Human {

public:

	Human ();
	Human (string name, string sName, string pName, int setAge, int setHeight, int workingOrNot)

		:FirstName_ ("Jane"),
		SurName_ (""),
		PantonymicName_ (""),
		age_ (15),
		height_ (150),
		birthDate_ (std::tm ())
	{
		this->FirstName_ = name;
		this->SurName_ = sName;
		this->PantonymicName_ = pName;
		this->age_ = setAge;
		this->height_ = setHeight;
		this->isWorking_ = workingOrNot;
	}

	// setter and getters
	void setName (string name, string sName, string pName) {
		this->FirstName_ = name;
		this->SurName_ = sName;
		this->PantonymicName_ = pName;
	}
	string getName () const {
		return (FirstName_ + " " + SurName_ + " " + PantonymicName_);
	}

	void setAge (int setAge) {
		this->age_ = setAge;

	}
	int getAge () const {
		return age_;
	}

	void setHeight (int setHeight) {
		height_ = setHeight;
	}
	int getHeight () const {
		return height_;
	}

	void setIsWorking (bool workingOrNot) {
		this->isWorking_ = workingOrNot;
	}
	bool getIsWorking () const {
		return isWorking_;
	}

	// predicate
	bool isAdult ();
	// operators and traits
	friend bool operator == (Human a, Human b);

	bool olderThen (int age);

private:
	string FirstName_ = "";
	string SurName_ = "";
	string PantonymicName_ = "";
	tm birthDate_;
	int age_ = 0;
	int height_ = 150;
	bool isWorking_ = true;
};

class Student {
public:
	Student ();
	Student (Human person, double grades, string group, string direction) {
		this->person_ = person;
		this->grades_ = grades;
		this->group_ = group;
		this->direction_ = direction;
	}

	// setters and getters
	void setName (string name);
	string getName () const {
		return person_.getName ();
	}

private:
	Human person_;
	double grades_;
	string group_;
	string direction_;
};

int main () {
	setlocale (LC_ALL, "Russian");
	Human h;
	
	// ������ ��� ��������
	h.setName ("Roman", "Perekrasov", "Olegovich");
	string Name = h.getName ();

	// ������� ��������
	h.setAge (15);
	int Age = h.getAge ();

	// ���� ��������
	h.setHeight (177);
	int Height = h.getHeight ();

	// ������� ������
	h.setIsWorking (true);
	bool WorkingOrNot = h.getIsWorking ();

	cout << "�������: " << Name << "\n" << "�������: " << Age << "\n" << "����: " << Height << "\n" << "��������?: " << WorkingOrNot << endl;
	
	return 0;
}

Human::Human ()
	:FirstName_ (""),
	SurName_ (""),
	PantonymicName_ (""),
	birthDate_ ({}),
	age_ (15),
	height_ (150)
{
	// to-do data insertion
}
