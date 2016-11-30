
namespace Effective_Cpp {

	// Example of declaration of static const in a class and it's use
	// @ compilation time.
	class GamePlayer {
	  private:
		static const int NumTurns = 5;
		int scores[NumTurns];
	};

	// Example of Enum Hack : For compilers that'd crib for the definition
	// above
	class GamePlayerEnumHack {
	  private:
		enum {NumTurns = 5};
		int scores[NumTurns];

	};

	// just so that the code below can compile
	template <typename T>
	void f(const T&a) { }

	// Example of an inline function
	template<typename T>
	inline void CallWithMax(const T&a, const T& b) {
		f(a > b ? a: b);
	}

};
