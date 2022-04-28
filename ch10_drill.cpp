#include "std_lib_facilities.h"

//q.1
struct Point {
	int x;
	int y;
};

//q.2
istream& operator>>(istream& is, Point& p)  //read a point from is into p
{

	char ch1;
	if(is>>ch1 && ch1!='(') {
		is.unget();
		is.clear(ios_base::failbit);
		return is;
	}

	char ch2;
	char ch3;
	int xx;
	int yy;
	is>> xx >> ch2 >> yy >> ch3;
	if (!is || ch3 != ')') {
		if (is.eof()) return is;
		error ("bad point");
	}
	p.x = xx;
	p.y = yy;
	return is;
}

//q.3
ostream& operator<<(ostream& os, Point& p)
{
	return os<< '(' << p.x << ',' << p.y << ')';
}



//q.5
void fill_from_file(vector<Point>& points, string& name)
{
	ifstream ist {name};
	ist.exceptions(ist.exceptions()|ios_base::badbit);
	
	if(!ist) error ("couldn't open input file ", name);
	for (Point p; ist >> p;)
	points.push_back(p);
}

int main() 
{
	//q.3
	vector<Point>original_points;
	while(original_points.size() < 7) {
		Point p;
		cin >> p;
		original_points.push_back(p);
		}
	
	//q.4
	string fname= "mydata.txt";
	ofstream ost {fname};
	if (!ost) error("coudn't open file ", fname);
	
	for(Point p : original_points)
		ost << p;
	ost.close();
	
	//q.5
	vector<Point>processed_points;
	fill_from_file(processed_points, fname);
	
	for(Point p: processed_points)
		cout << p << "\t";
	cout << "\n";
	
	if(original_points.size() != processed_points.size())
		cout << "There is something wrong in the size\n";
	
}

