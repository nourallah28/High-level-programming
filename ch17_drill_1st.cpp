#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i<n; ++i) os<<a[i]<<"\n";
	return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
	for(int vv: v) os<<vv<<"\n";
	return os;
}


int main()
{
	int* arr20= new int[20]; //allocates the array on free store
	int x=100;
	for(int i=0; i<20; ++i){
		arr20[i]= x;
		++x;
	}
	
	print_array(cout, arr20, 20);
	delete[] arr20;  //it frees the memory for the array with obj allocated by new
	//delocate
	cout<<"\n";
	
	vector<int> v10(10);
	int y=100;
	for(int& v: v10){
		v= y;
		++y;
	}
	
	print_vector(cout, v10);
}
