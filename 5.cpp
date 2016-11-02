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

class TimeClock : public MilTime 
{
	int milHour2;
	int milSeconds;
	int m2;
	int s2;
	
	public :
		
	
	TimeClock(int h2,int m2,int s2)
	{
		milHour2=h2;
		m2=m2;
		s2=s2;
	}

	
	void setTime2()
	{
		
		if(milHour2<12)
		milHour2=milHour2+12 ;
		
		else
		milHour2=milHour2 ;
	}
	
	int getMilHour2()
	{
		return milHour2 ;
	}
	
	int getm2()
	{
		return m2 ;
	}

	
	void showMilTime2()
	{
		cout << getMilHour2() << getm2()<<" hours" ;
	}
	
	void timeSkip()
	{
		int hh ;
		
		if(getMilHour()<getMilHour2())
		hh = getMilHour2()-getMilHour();
		
		else
		hh=getMilHour()-getMilHour2();
		
		cout<<"the time skip is about " << hh <<" hours";
		
	}
};




int main()
{

	
	Time showday(1,23,45);
	
	showday.showTime();
	
	MilTime input(1,23,45);
	
	input.setTime();

	input.showMilTime();
	
	TimeClock input2(2,23,45);
	
	input2.setTime2();

	input2.showMilTime2();
	
	input2.timeSkip();
	
	
	
	return 0;
}
