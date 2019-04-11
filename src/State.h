#ifndef __PATH_FINDING_STATE_H__
#define __PATH_FINDING_STATE_H__

#include "path_finding/Cost.h"

namespace path_finding {

// This class represents a generic state of any type, and its associated cost.
// The cost is a representation of the value obtained from a suitable heuristic function
// for a given scenario (if any).
template <typename StateType>
class State {
public:
	State(StateType const& state) : _state{state}, _cost{computeCost(_state)} {}
	StateType getState() const { return _state; }
	double getCost () const { return _cost; }

private:
	StateType const _state;
	double const _cost;
};

}  // namespace path_finding

#endif  // __PATH_FINDING_STATE_H__
