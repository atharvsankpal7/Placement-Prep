#include<bits/stdc++.h>
using namespace std;

class Employee{
protected:
	float salary;
	float bonus = 0;
public:
	virtual float calculateBonus() = 0;

	void getSalary(float salary){
		this->salary = salary;
	}

	void displayDetails(){
		cout << "salary : "<< salary << "bonus : " << bonus << endl;
	}
};

class Manager : public Employee{
	float bonusPercentage = 20;
public:
	float calculateBonus(){
		bonus = (salary * bonusPercentage) / 100;
		return bonus;
	}
};

class Engineer : public Employee{
	float bonusPercentage = 10;
public:
	float calculateBonus(){
		bonus = (salary * bonusPercentage) / 100;
		return bonus;
	}
};

class Intern : public Employee{
	float bonusPercentage = 0;
public:
	float calculateBonus(){
		bonus = (salary * bonusPercentage) / 100;
		return bonus;
	}
};

int main(){
	int t;
	cin >> t;

	while(t--){
		Employee *e;
		int ch;
		cin >> ch;
		int salary;
		cin >> salary;
		switch(ch){
		case 1:
			e = new Manager();
			e->getSalary(salary);
			cout << e->calculateBonus() << endl;
			break;
		case 2:
			e = new Engineer();
			e->getSalary(salary);
			cout << e->calculateBonus() << endl;
			break;
		case 3: 
			e = new Intern();
			e->getSalary(salary);
			cout << e->calculateBonus() << endl;
			break;
		}

	}
}