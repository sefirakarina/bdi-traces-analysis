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

class TeamLeader : public ProductionWorker
{
	double mmBonus;
	int reqTraining;
	int hourTraining ;
	
	public :
		
	void setTeamLeader(double mmBonuss,int reqTrainingg,int hourTrainingg)
	{
		mmBonus=mmBonuss;
		reqTraining=reqTrainingg;
		hourTraining=hourTrainingg;
	}
	
	double getMmBonus()
	{
		return mmBonus;
	}
	
	int getReqTraining()
	{
		return reqTraining ;
	}
	
	int getHourTraining()
	{
		return hourTraining ;
	}	
	
	
};


int main()
{
	string namee ;
	int numberr,datee,shiftt,reqTrainingg,hourTrainingg;
	double hourPaymentt ,mmBonuss;
	TeamLeader input ; 
	
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
	
	cout<<"input required training hours : " ;
	cin>>reqTrainingg ;
	
	cout <<"input training hours attended : ";
	cin>>hourTrainingg;
	
	cout<<"input montly bonus : ";
	cin>>mmBonuss;
	
	input.setName(namee);
	input.setNumber(numberr);
	input.setDate(datee);
	input.setShift(shiftt);
	input.setHourPayment(hourPaymentt); 
	input.setTeamLeader(mmBonuss,reqTrainingg,hourTrainingg);
	
	
	cout<<endl<<endl;
	
	cout<<"name : "<<input.getName();
	cout<<"number : "<<input.getNumber();
	cout<<"date : "<<input.getDate();
	cout<<"shift : "<<input.getShift();
	cout<<"hourly payment: "<<input.getHourPayment();
	cout<<"bonus : "<<input.getMmBonus();
	cout<<"req training : "<<input.getReqTraining();
	cout<<"training attended : "<<input.getHourTraining();
	
	return 0;
}





