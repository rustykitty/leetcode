/*
69. Sqrt(x)

Submitted: February 23, 2025

Runtime: 0 ms (beats 100.00%
Memory: 8.53 MB (beats 33.16%)
*/

// fast inverse square root
double Q_rsqrt( double number )
{
	long i;
	double x2, y;
	const double threehalfs = 1.5;

	x2 = number * 0.5;
	y  = number;
	i  = * ( long * ) &y;
	i  = 0x5fe6eb50c7b537a9 - ( i >> 1 );
	y  = * ( double * ) &i;
	y  = y * ( threehalfs - ( x2 * y * y ) );  // 1st iteration
    y  = y * ( threehalfs - ( x2 * y * y ) );  // 2nd iteration, this can be removed
    y  = y * ( threehalfs - ( x2 * y * y ) );  // added in 3rd iteration so we can pass leetcode testcases
	return y;
}

int mySqrt(int x) {
    return 1 / Q_rsqrt(x);
}