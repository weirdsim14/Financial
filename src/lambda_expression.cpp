#include <iostream>
#include <functional>

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


double z = g(9.2, 2.6);	// z = 11.8
auto add = [](int a, int b) { return a + b; };
int x = 10;
auto printX = [x = std::ref(x)]() { std::cout << x << std::endl; };

class SimpleClass
{
public:
	SimpleClass(int value) : value_(value) {}
	int getValue() const { return value_; }

private:
	int value_;
};

auto some_lambda = [](int n) -> SimpleClass
{
	return { n }; // Braced initialization of a SimpleClass type
};

int main()
{
	worlds_simplest_function();
	std::cout << "z = " << z << "\n";
	std::cout << add(5, 3) << std::endl; // Calling the lambda with 5 and 3, will print 8
	printX();                            // Prints 10

	return 0;
}