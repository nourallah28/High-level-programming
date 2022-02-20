#include <iostream>
#include <vector>
using namespace std;

int main()
{

double n1=0, s=100000, l=0, sum=0, count=0;
string unit=" ";

//conversions
constexpr double cm_per_m= 100; 
constexpr double cm_per_in= 2.54; 
constexpr double in_per_ft= 12;



cout<<"enter a number followed by a unit(cm, m, in, ft) then press | to stop the program:"<<"\n";


while (cin>>n1>>unit){

	if(unit=="cm" || unit=="m" || unit=="in" || unit=="ft"){
		
		if(n1>l){
			l= n1;
			cout<<n1<<unit<<" is the largest so far\n";
			}
		if(n1<s){
			s= n1;
			cout<<n1<<unit<<" is the smallest so far\n";
			}
		sum+=n1;
		count++;
		
		}
	else
		cout<<"please enter a valid unit\n";
		
	}
}
