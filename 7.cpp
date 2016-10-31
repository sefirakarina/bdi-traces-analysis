#include<iostream>
#include<string>
using namespace std;

//now it's finished , I added no 8 too

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


int main()
{
	string lastt,firstt,addresss,cityy,statee;
	int zipp,phonee ;
	int numberr ;
	char maill;
	CustomerData input ;
	
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
	
	input.setData(lastt,firstt,addresss,cityy,statee,zipp,phonee);
	input.setN(numberr);
	
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
	
	
	
	
	
	return 0;
}


