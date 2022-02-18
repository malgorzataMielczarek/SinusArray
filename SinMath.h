#pragma once
namespace sinmath
{
	constexpr double exp(double base, unsigned int power)
	{
		return (power > 0) ? (base * exp(base, power - 1)) : 1;
	}

	constexpr long long factorial(unsigned int n)
	{
		return (n > 0) ? (n * factorial(n - 1)) : 1;
	}

	constexpr double sin(double radAngle, unsigned int precision = 5)
	{
		///
		/// Sine trigonometric function counted using power series expansion (using Taylor series)
		/// radAngle - angle value in radians, for wich sine is counted
		/// precision - integer value 1, 2, 3, ... determining the accuracy of the calculations, number of added series elements
		/// 
		return (precision > 1) ?
			(exp(-1, precision - 1) / factorial(2 * (precision - 1) + 1) * exp(radAngle, (2 * (precision - 1) + 1))
				+ sin(radAngle, (precision - 1)))
			: radAngle;
	}
	constexpr double pi = 3.14159265359;

	constexpr double deg2rad(double angle)
	{
		return pi * angle / 180;
	}
}