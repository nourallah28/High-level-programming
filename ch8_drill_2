#include "std_lib_facilities.h"


void swap_v(int a, int b)
{
	int temp;
	temp= a;
	a= b;
	b= temp;
}


void swap_r(int& a, int& b)
	//since it is a refrence int type value 
	//it can't be compiled to a value of type int
	//if the fuction is a double and the value of x and y are also double
	//it would compile
{
	int temp;
	temp= a;
	a= b;
	b= temp;

}


/*void swap_cr(const int& a, const int& b)
	//a and b are const so this function cant be compiled
	//because of the local variables a and b
{
	int temp;
	temp= a;
	a= b;
	b= temp;
}
*/

int main()
{
	int x=7;
	int y=9;
	swap_v(x,y);
	swap_v(7,9);
	cout <<"x= "<<x<<"\n";
	cout <<"y= "<<y<<"\n";
	
	const int cx=7;
	const int cy=9;
	swap_v(cx,cy);
	swap_v(7.7,9.9);
	cout <<"cx= "<<cx<<"\n";
	cout <<"cy= "<<cy<<"\n";
	
	double dx=7.7;
	double dy=9.9;
	swap_v(dx,dy);
	swap_v(7.7,9.9);
	cout <<"dx= "<<dx<<"\n";
	cout <<"dy= "<<dy<<"\n";
	
	
	
	
}
