class SimpleClass
{
public:
	SimpleClass(int k) :k_{ k } {}	// Braced initialization in constructor also
	SimpleClass() = default;		// C++11 form of default constructor
									// (to be discussed in more detail in Ch XX)

private:
	int k_;
};

enum OptionType
{
    European,     	// default integer value = 0
    American,     	// default integer value = 1
    Bermudan,     	// default integer value = 2
    Asian	      	// default integer value = 3
};

#include <iostream>

int main() {
	double x = 2.58;    // Assigned or input somewhere
	SimpleClass sc_01(x);
	std::cout << " European = " << European << std::endl;
	std::cout << " American = " << American << std::endl;
	std::cout << " Bermudan = " << Bermudan << std::endl;
	std::cout << " Asian = " << Asian << std::endl;
	std::cout << std::endl;
}
