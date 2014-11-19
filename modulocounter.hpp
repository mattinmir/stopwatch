#include "counter.hpp"

class modulocounter_comp
{
public:
	modulocounter_comp(int m);

	void reset();

	int get_count();

	bool increment();

private:
	int modulo;
	counter c;
};

class modulocounter_sub : public counter
{
public:
	modulocounter_sub(int m);

	bool increment();

private:
	int modulo;
};