class SimpleClass
{
public:
	SimpleClass(int k) :k_{ k } {}	// Braced initialization in constructor also
	SimpleClass() = default;		// C++11 form of default constructor
									// (to be discussed in more detail in Ch XX)

private:
	int k_;
};
int main() {
double x = 2.58;		// Assigned or input somewhere
SimpleClass sc_01(x);
SimpleClass sc_02{x};

}