namespace Effective_Cpp {

	class Rational {};

	const Rational operator*(const Rational& lhs, const Rational& rhs);

	class BadRational {};
	BadRational operator*(const BadRational& lhs, const BadRational& rhs);
}
