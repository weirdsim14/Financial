#include <vector>
#include <string>
#include <iostream>

int main()
{
	using std::vector, std::string, std::cout;
	vector<int> x{ 1, 2, 3};
	string s { "This is a vector: " };
	cout << s << x[0] << ", " << x[1] << ", " << x[2] << "\n";

}

