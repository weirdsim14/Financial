#include <iostream>
enum class Bond
{
	Government,
	Corporate,
	Municipal,
	Convertible
};

enum class Futures_Contract
{
	Gold,
	Silver,
	Oil,
	Natural_Gas,
	Wheat,
	Corn
};

enum class OptionType
{
    European,
    American,
    Bermudan,
    Asian
};

void switch_statement_enum(OptionType ot)
    {
        switch (ot)
        {
        case OptionType::European:
            std::cout << "European: Use Black-Scholes" << "\n";
            break;
        case OptionType::American:    // AMERICAN case matches....
            std::cout << "American: Use a lattice model" << "\n";
            break;
        case OptionType::Bermudan:
            std::cout << "Bermudan: Use the Longstaff-Schwartz LSMC model" << "\n";
            break;
        case OptionType::Asian:
            std::cout << "Asian: Calculate average of the returns time series" << "\n";
            break;
        default:
            std::cout << "The SEC might want to talk with you" << "\n";
            break;
        }
    }

#include <iostream>
#include <iostream>

int main() {
    std::cout << "Corp Bond index: " << static_cast<int>(Bond::Corporate) << "\n";
    std::cout << "Silver Futures index: " << static_cast<int>(Futures_Contract::Silver) << "\n";

}
