#include "textblock.hh"

Effective_Cpp::TextBlock tb("Hello");

const Effective_Cpp::TextBlock ctb("Hello");

int foo()
{
	char c;

	c = tb[0];
	c++;

	char cc;
	cc = ctb[0];
	cc++;

	return 0;
}

int main()
{
		foo();
}
