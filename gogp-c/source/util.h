#pragma once

inline double powi(double base, int times)
{
	double tmp = base, ret = 1.0;

	for (int t = times; t>0; t /= 2)
	{
		if (t % 2 == 1) ret *= tmp;
		tmp = tmp * tmp;
	}
	return ret;
}