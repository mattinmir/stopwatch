#include "stopwatch.hpp"

int main()
{
	stopwatch_comp s;
	for (int i = 0; i < 1000; i++)
		s.tick();
	s.reset();


	stopwatch_sub s2;
	for (int i = 0; i < 1000; i++)
		s2.tick();
	s2.reset();

	return 0;
}