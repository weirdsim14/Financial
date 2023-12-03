#include <vector>
#include <string>
#include <iostream>

int main()
{
	using std::vector, std::string, std::cout;
	vector<int> x{ 1, 2, 3};
	string s { "This is a vector: " };
	cout << s << x[0] << ", " << x[1] << ", " << x[2] << "\n";
	double sum = 0.0;

	
	vector<double> v{ 1.0, 2.0, 3.0, 4.0, 5.0 };

	for(double elem : v)
	{
		sum += elem;
	}
	cout << "The sum of the elements of v is " << sum << "\n";

}

