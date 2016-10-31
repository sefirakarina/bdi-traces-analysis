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

class ProductionWorker :public Employee
{
	int shift;
	double hourPayment ;
	
	public :
		

	ProductionWorker()
	{
		this -> shift = shift ;
		this -> hourPayment = hourPayment ;
	}
	
	void setShift(int shiftt)
	{
		shift = shiftt ;
		
	}
	
	void setHourPayment(double hourPaymentt)
	{
		hourPayment = hourPaymentt ;
	}
	
	int getShift()
	{
		return shift ;
	}
	
	double getHourPayment()
	{
		return hourPayment ;
	}
	
	
};


int main()
{
	string namee ;
	int numberr,datee,shiftt;
	double hourPaymentt ;
	ProductionWorker input ; 
	
	cout<<"input name : ";
	cin>> namee ;
	
	cout<<"input number : " ;
	cin>>numberr ;  
	
	cout<<"input hire date(DDMMYYY) : ";
	cin>>datee ;
	
	cout<<"input shift(1/2) : ";
	cin >>shiftt;
	
	cout<<"input hourly payment : ";
	cin>>hourPaymentt ;
	
	input.setName(namee);
	input.setNumber(numberr);
	input.setDate(datee);
	input.setShift(shiftt);
	input.setHourPayment(hourPaymentt); 
	
	cout<<endl<<endl;
	
	cout<<"name : "<<input.getName();
	cout<<"number : "<<input.getNumber();
	cout<<"date : "<<input.getDate();
	cout<<"shift : "<<input.getShift();
	cout<<"hourly payment: "<<input.getHourPayment();
	
	return 0;
}





