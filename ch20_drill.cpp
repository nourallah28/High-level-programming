#include"std_lib_facilities.h"

template<typename C>
void print_contents(const C& c, const std::string& s = "")
{
	std::cout << s << "\t";
	for (auto& a : c)
		std::cout << a << ' ';
	std::cout << "\n";
}

template<typename C>
void inc_contents(C& c, int n = 1)
{
	for (auto& a : c)
	a += n;
}

// 6 Write a copy operation
template<typename Iter1, typename Iter2>
    // requires Input_iterator<Iter1>() && Output_iterator<Iter2>()
Iter2 my_copy(Iter1 f1, Iter1 e1, Iter2 f2)
{
	for (Iter1 p = f1; p != e1; ++p)
	*f2++ = *p;
	return f2;
}

int main()
{
	constexpr int size = 10;

	// 1(?) Define an array of 10 ints w/values 0-9
	int arr[size]; 
	for (int i = 0; i < size; ++i) arr[i] = i;
	print_contents(arr, "built-in []: ");

	// 1 - by virtue of instruction 4 to copy
	array<int, size> ai;
	copy(arr, arr + size, ai.begin());
	print_contents(ai, "array: ");

	// 2 Define a vector with the same 10 elements
	vector<int> vi(size);
	copy(arr, arr + size, vi.begin());
	print_contents(vi, "vector: ");

	// 3 Define a list with the same 10 elements
	list<int> li(size);
	copy(arr, arr + size, li.begin());
	print_contents(li, "list: ");

	cout << "\n";

	// 4 Define copies of the array, vector, and list
	array<int, size> ai2 = ai;
	vector<int> vi2 = vi;
	list<int> li2 = li;
	print_contents(ai2, "array copy: ");
	print_contents(vi2, "vector copy: ");
	print_contents(li2, "list copy: ");

	cout << '\n';

	// 5 Increase values in array by 2, vector by 3 and list by 5
	inc_contents(ai2, 2);
	inc_contents(vi2, 3);
	inc_contents(li2, 5);
	print_contents(ai2, "array increased: ");
	print_contents(vi2, "vector increased: ");
	print_contents(li2, "list increased: ");

	cout << "\n";

	// 7 Use my_copy to copy array into vector and list into array
	my_copy(ai2.begin(), ai2.end(), vi2.begin());
	my_copy(li2.begin(), li2.end(), ai2.begin());
	print_contents(ai2, "array copied: ");
	print_contents(vi2, "vector copied: ");
	print_contents(li2, "list copied: ");

	// 8 Use std find() to search for values
	vector<int>::iterator vit;
	vit = find(vi2.begin(), vi2.end(), 3);
	if (vit != vi2.end())
		cout << "Found at: " << distance(vi2.begin(), vit) << '\n';
	else
		cout << "The value wasn't found\n";

	list<int>::iterator lit;
	lit = find(li2.begin(), li2.end(), 27);
	if (lit != li2.end())
		cout << "Found at: " << distance(li2.begin(), lit) << '\n';
	else
		cout << "The value wasn't found\n";
}

