#include <iostream>
#include <string>
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

	Human Talk () {
		cout << "Human can talk";
	};
	Human Eat (string food) {};
	Human Walk (string distance) {};

//	Human isWorking (bool HisWorking) {
		//isWorking = HisWorking;
		
//	}
//	Human isNotWorkin() {}
	

	bool getIsWorking () {
		cout << "��������?: " << isWorking;
		return isWorking;
	}

	void setAge (int setAge) {
		age = setAge;

	}

	int getAge () {
		cout << "�������: " << age << "\n";
		return age;
	}

	void setName (string name, string SName, string PName) {
		FirstName = name;
		SurName = SName;
		PantonymicName = PName;
	}

	string getName () {
		cout << FirstName + " " + SurName + " " + PantonymicName + "\n";
		return (FirstName + " " + SurName + " " + PantonymicName + "\n");
	}


	void setHeight (int setHeight) {
		height = setHeight;
	}

	int getHeight () {
		cout << "����: " << height;
		return height;
	}
		
private:
	string FirstName = "";
	string SurName = "";
	string PantonymicName = "";
	int age = 0;
	int height = 150;
	bool isWorking = true;
};


int main () {
	setlocale (LC_ALL, "Russian");
	Human h;
	h.setAge (15);
	h.getAge ();
	h.setName ("Roman", "Perekrasov", "Olegovich");
	h.getName ();
	h.setHeight (177);
	h.getHeight ();
	//h.isWorking (true);
	return 0;
}