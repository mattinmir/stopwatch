#include "stopwatch.hpp"

stopwatch_comp::stopwatch_comp() : seconds(60), minutes(60), hours(0)
{}

void stopwatch_comp::tick()
{
	if (seconds.increment())
		if (minutes.increment())
			hours.increment();
}

void stopwatch_comp::reset()
{
	seconds.reset();
	minutes.reset();
	hours.reset();
}



stopwatch_sub::stopwatch_sub() : seconds(60), minutes(60), hours(0)
{}

void stopwatch_sub::tick()
{
	if (seconds.increment())
		if (minutes.increment())
			hours.increment();
}

void stopwatch_sub::reset()
{
	seconds.reset();
	minutes.reset();
	hours.reset();
}