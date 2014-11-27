#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>

class counter
{
public:
	counter();

	void increment();

	void reset();

	int get_count() const;

	friend std::ostream& operator<<(std::ostream& out, const counter &c);

private:
	int count;
};

std::ostream& operator<<(std::ostream& out, const counter &c);

#endif
