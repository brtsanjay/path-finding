#ifndef __PATH_FINDING_STATE_H__
#define __PATH_FINDING_STATE_H__

#include "path_finding/Cost.h"

namespace path_finding {

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
