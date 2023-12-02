#include <vector>
#include <string>
#include <iostream>

int main()
{
	std::vector<int> x{ 1, 2, 3};
	std::string s { "This is a vector: " };
	std::cout << s << x[0] << ", " << x[1] << ", " << x[2] << "\n";

}

