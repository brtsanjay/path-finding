#include "path_finding/Cost.h"
#include "path_finding/State.h"

#include <iostream>

// Specialization to compute cost of int states.
template <>
double path_finding::computeCost<int>(int const& state) {
	return state;
}

int main() {
	{
		// int state
		int constexpr intState = 1;
		path_finding::State state{intState};
		::std::cout << "State<int>\n";
		::std::cout << "State: " << state.getState() << '\n';
		::std::cout << "Cost: " << state.getCost() << '\n';
	}
	::std::cout << '\n';
	{
		// double state
		double constexpr doubleState = 1.0;
		path_finding::State state{doubleState};
		::std::cout << "State<double>\n";
		::std::cout << "State: " << state.getState() << '\n';
		::std::cout << "Cost: " << state.getCost() << '\n';
	}
}
