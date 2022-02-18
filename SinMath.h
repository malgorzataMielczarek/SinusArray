#pragma once
namespace sinmath
{
	typedef double radians;

	typedef double degrees;

	constexpr double exp(double base, unsigned int power)
	{
		return (power > 0) ? (base * exp(base, power - 1)) : 1;
	}

	constexpr long long factorial(unsigned int n)
	{
		return (n > 0) ? (n * factorial(n - 1)) : 1;
	}

	constexpr double sin(radians angle, unsigned int precision = 7)
	{
		///
		/// Sine trigonometric function counted using power series expansion (using Taylor series)
		/// angle - angle value in radians, for wich sine is counted
		/// precision - integer value 1, 2, 3, ... , 10 determining the accuracy of the calculations, number of added series elements
		/// 
		return (precision > 1) ?
			(exp(-1, precision - 1) / factorial(2 * (precision - 1) + 1) * exp(angle, (2 * (precision - 1) + 1))
				+ sin(angle, (precision - 1)))
			: angle;
	}
	constexpr double pi = 3.14159265359;

	constexpr radians deg2rad(degrees angle)
	{
		return pi * angle / 180;
	}
}