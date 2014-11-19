#include "modulocounter.hpp"
class stopwatch_comp
{
public:
	stopwatch_comp();

	void tick();

	void reset();

private:
	modulocounter_comp seconds;
	modulocounter_comp minutes;
	modulocounter_comp hours;
};

class stopwatch_sub
{
public:
	stopwatch_sub();

	void tick();

	void reset();

private:
	modulocounter_sub seconds;
	modulocounter_sub minutes;
	modulocounter_sub hours;
};