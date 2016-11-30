#include <string>
#include <cstddef>
#include <iostream>

namespace Effective_Cpp {

class TextBlock {

public:
	TextBlock(std::string text)
	:_text(text) {}

	const char& operator[](std::size_t position) const
	{ std::cout << "const operator called" << std::endl;
			return _text[position];}

	char& operator[](std::size_t position)
	{ std::cout << "non const operator called" << std::endl;
			return _text[position];}
private:
	std::string _text;
};


}
