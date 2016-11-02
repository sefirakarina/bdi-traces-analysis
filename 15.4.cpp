#include<iostream>
#include<string>
using namespace std ;

class Time
{
	protected:
	int hour;
	int min;
	int sec;

	public:
// Default constructor
	Time()
	{ 
		hour = 0; 
		min = 0; 
		sec = 0; 
	}

// Constructor
	Time(int h, int m, int s)
	{ 
		hour = h; 
		min = m; 
		sec = s; 
	}

// Accessor functions

	int getHour()
	{
		return hour;
	}


	int getMin() const
	{ 
		return min; 
	}

	int getSec() const
	{ 
		return sec; 
	}
	
	void showTime()
	{
		cout << getHour() << ":" << getMin() << ":" << getSec() << endl;
	}
	
	
};




class MilTime:public Time 
{
	int milHour;
	int milSeconds;
	
	public :
		
	MilTime(int h,int m,int s)
	{	
		milHour = h; 
		min = m; 
		sec = s; 
	}
	
	void setTime()
	{
		
		if(milHour<12)
		milHour=milHour+12 ;
		
		else
		milHour=milHour ;
	}
	
	int getMilHour()
	{
		return milHour ;
	}

	
	
	
	void showMilTime()
	{
		cout << getMilHour() << getMin()<<" hours" ;
	}
	
	
	
};




int main()
{
	int h,m,s;
	
	cout<<"input hour :";
	cin>>h;
	
	cout<<"input minutes : ";
	cin>>m;
	
	cout<<"input seconds : ";
	cin>>s;
	
	Time showday(h,m,s);
	
	showday.showTime();
	
	MilTime input(h,m,s);
	input.setTime();

	
	input.showMilTime();
	
	
	
	return 0;
}
