#include<iostream>
#include<string>
using namespace std;

//not finished yet , but almost 9 pm so upload dulu

class PersonData
{
	string last ;
	string first ; 
	string address;
	string city ;
	string state ;
	int zip;
	int phone ;
	
	public :
	
	void setData(string lastt,string firstt,string addresss,string cityy,string statee,int zipp,int phonee)
	{
		last=lastt;
		first=firstt;
		address=address;
		city=cityy;
		state=statee;
		zip=zipp;
		phone=phonee;
	}
	
	string getL()
	{
		return last ;
	}
	string getF()
	{
		return first ; 
	}
	string getA()
	{
		return address ;  
	}
	string getC()
	{
		return city ;
	}
	string getS()
	{
		return state ;
	}
	int getZ()
	{
		return zip ;
	}
	int getP()
	{
		return phone ;
	}
	
}; 

class CustomerData : public PersonData 
{
	int number ;
	bool mail ;
	
	public:
		
	CustomerData()
	{
		
	}
	
	void setN (int numberr)
	{
		number=numberr;
	}
		
	void setM(bool maill)
	{
		mail=maill ;
	}
		
	int getN()
	{
		return number ;
	}
	
	bool getM()
	{
		return mail;
	}
	
	
};

class PreferredCustomer: public CustomerData 
{
	double amount ;
	double level ;
	
	public :
	
	void setA(double amountt)
	{
		amount=amountt;
	
	}
	
	double getA()
	{
		return amount;
	}
	
	double getL()
	{
		return level ;
	}
	
	void discount(double)
	{
		if(amount>499 && amount<1000)
		cout<<"5%";
		
		else if(amount>999 && amount<1500)
		cout<<"6%";
		
		else if(amount>1499 && amount<2000)
		cout<<"7%";
		
		else if(amount>1999)
		cout<<"10%";
		
		else
		cout<<"no discount";
	}
	
};


int main()
{
	string lastt,firstt,addresss,cityy,statee;
	int zipp,phonee ;
	int numberr ;
	char maill;
	double levell,amountt;
	PreferredCustomer input ;
	
	cout<<"input last name : " ;
	getline(cin,lastt);
	
	cout<<"input first name : " ;
	getline(cin,firstt);
	
	cout<<"input address : " ;
	getline(cin,addresss);
	
	cout<<"input city : " ;
	getline(cin,cityy);
	
	cout<<"input state : " ;
	getline(cin,statee);
	
	cout<<"input zip code : " ;
	cin>>zipp;
	
	cout<<"input phone number : " ;
	cin>>phonee;
	
	cout<<"input cust number : ";
	cin>>numberr ;
	
	cout<<"want a mailing list? (Y/N) : ";
	cin>>maill;
	
	if(maill=='Y' || maill == 'y')
	input.setM(true);
	
	else
	input.setM(false);
	
	cout<<"purchases amount : ";
	cin>>amountt;
	
	
	input.setData(lastt,firstt,addresss,cityy,statee,zipp,phonee);
	input.setN(numberr);
	input.setA(amountt);
	
	cout<<endl<<endl;
	
	cout<<"last name : " << input.getL();
	cout<<endl;
	
	cout<<"first name : " <<input.getF();
	cout<<endl;
	
	cout<<"address : " <<input.getA();
	cout<<endl;
	
	cout<<"city : " <<input.getC();
	cout<<endl;
	
	cout<<"state : " << input.getS();
	cout<<endl;
	
	cout<<"zip code : " <<input.getZ();
	cout<<endl;
	
	cout<<"phone number : " <<input.getN();
	cout<<endl ;
	
	cout<<"get mailing list?";
	
	if (input.getM())
	cout<<"  yes";
	else
	cout<<"  no";
	
	cout<<"purcased : "<<input.getA();
	cout<<endl<<endl;
	
	cout<<"discount = ";
	
	input.discount(input.getA());
	
	
	
	
	
	return 0;
}


