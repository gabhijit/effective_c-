namespace Effective_Cpp {

	class Rational {};

	const Rational operator*(const Rational& lhs, const Rational& rhs);

	// When the operator is not 'const' it's possible to do something like
	// (a * b) = c; which is very weird
	class BadRational {};
	BadRational operator*(const BadRational& lhs, const BadRational& rhs);
}
