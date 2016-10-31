#include<iostream>
#include<string>
using namespace std ;

class Employee
{
	string name ;
	int number ;
	int date ;
	
	public :

	Employee()
	{
		this -> name = name ;
		this -> number = number ;
		this -> date = date ;
		
	}
	
	void setName(string namee)
	{
		name = namee ;
	}
	void setNumber(int numberr)
	{
		number = numberr ;
	}
	void setDate(int datee)
	{
		date = datee ;
	}
	
	string getName()
	{
		return name ;
	}
	int getNumber()
	{
		return number  ;
	}
	int getDate()
	{
		return date ;
	}
		
};

class ShiftSupervisor :public Employee
{
	double annualSalary ;
	int annualProduction ;
	
	public :
		
	ShiftSupervisor(){
	}
	
	void setAnnual(double annualSalaryy,int annualProductionn)
	{
		annualSalary=annualSalaryy ;
		annualProduction=annualProductionn ;
	}
	
	double getAnnualSalary()
	{
		return annualSalary ;
	}
	
	int getAnnualProduction()
	{
		return annualProduction ;
	}
	
};


int main()
{
	string namee ;
	int numberr,datee,annualProductionn;
	double annualSalaryy ;
	ShiftSupervisor input ; 
	
	cout<<"input name : ";
	cin>> namee ;
	
	cout<<"input number : " ;
	cin>>numberr ;  
	
	cout<<"input hire date(DDMMYYY) : ";
	cin>>datee ;
	
	cout<<"input annual salary : ";
	cin >>annualSalaryy;
	
	cout<<"input annual production bonus : ";
	cin>>annualProductionn;
	
	input.setName(namee);
	input.setNumber(numberr);
	input.setDate(datee);
	input.setAnnual(annualSalaryy,annualProductionn);
	
	cout<<endl<<endl;
	
	cout<<"name : "<<input.getName();
	cout<<"number : "<<input.getNumber();
	cout<<"date : "<<input.getDate();
	cout<<"annual salary : "<<input.getAnnualSalary();
	cout<<"annual production bonus: "<<input.getAnnualProduction();
	
	return 0;
}


