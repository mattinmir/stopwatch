#include "stopwatch.hpp"
using namespace std;

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

	counter c;
	c.increment();
	cout << c << endl;

	modulocounter_comp mc;
	mc.increment();
	cout << mc << endl;

	modulocounter_sub mc2;
	mc2.increment();
	cout << mc2 << endl;
	return 0;
}