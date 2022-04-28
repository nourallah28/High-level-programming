#include <iostream>
using namespace std;

int main()
{
double n1=0, n2=0;

cout<<"enter 2 numbers then press | to stop the program:"<<"\n";
while(cin>>n1>>n2)
  if(n1<n2){
    cout<<"the smaller value is: "<<n1<<"\n";
    cout<<"the larger value is: "<<n2<<"\n";
    if((n2-n1)<1.0/100)
      cout<<"the numbers are almost equal\n";
     }
  else if(n1>n2){
     cout<<"the smaller value is: "<<n2<<"\n";
     cout<<"the larger value is: "<<n1<<"\n";
     if((n1-n2)<1.0/100)
      cout<<"the numbers are almost equal\n";
     }
  else
    cout<<"the numbers are equal\n";
}