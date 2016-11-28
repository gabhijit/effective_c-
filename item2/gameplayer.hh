
namespace Effective_Cpp {

	class GamePlayer {
	  private:
		static const int NumTurns = 5;
		int scores[NumTurns];
	};

	class GamePlayerEnumHack {
	  private:
		enum {NumTurns = 5};
		int scores[NumTurns];

	};

	template <typename T>
	void f(const T&a) { }

	template<typename T>
	inline void CallWithMax(const T&a, const T& b) {
		f(a > b ? a: b);
	}

};
