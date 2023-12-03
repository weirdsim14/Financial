#include <cmath>      // Put this at top of the file.
#include <numbers>

double trig_fcn(double theta, double phi)
{
    return std::sin(theta) + std::cos(phi);
}

// Or, alternatively

double zero_coupon_bond(double face_value, double int_rate, double year_fraction)
{
	using std::exp;
        return face_value * exp(-int_rate * year_fraction);
}
double f(double x)
{
  return x * (x * (x * (8.0 * x + 7.0) + 4.0 * x) - 10.0) - 6.0;
}

double math_constant_fcn(double x, double y)
{
	double math_inv_sqrt_two_pi =
		std::numbers::inv_sqrtpi / std::numbers::sqrt2;
	return math_inv_sqrt_two_pi*(std::sin(std::numbers::pi * x) +
		std::cos(std::numbers::inv_pi*y));
}