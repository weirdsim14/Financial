#include <iostream>

void worlds_simplest_function()
{
	auto f = []
	{
		std::cout << "Hello World!" << "\n";
	};

	f();
}

auto g = [](double x, double y)
{
	return x + y;
};

#include <iostream>
#include <functional>

double z = g(9.2, 2.6);	// z = 11.8
auto add = [](int a, int b) { return a + b; };
int x = 10;
auto printX = [x = std::ref(x)]() { std::cout << x << std::endl; };

int main()
{
    worlds_simplest_function();
    std::cout << "z = " << z << "\n";
    std::cout << add(5, 3) << std::endl; // Calling the lambda with 5 and 3, will print 8
    printX(); // Prints 10

}