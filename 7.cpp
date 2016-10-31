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
	
	void getCusData (int numberr,bool maill)
	{
		number=numberr;
		mail=maill;
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


int main()
{
	string lastt,firstt,addresss,cityy,statee,zipp,phonee ;
	int numberr ;
	
	cout<<"input last name : " ;
	cin.getline(cin,lastt);
	
	
	
	return 0;
}


