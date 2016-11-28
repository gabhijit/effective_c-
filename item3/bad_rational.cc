#include "rational.hh"

void foo_bad()
{
	Effective_Cpp::BadRational a, b, c;

	// compiles because we didn't return a const in operator*
	(a*b) = c;

}
