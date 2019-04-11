#ifndef __PATH_FINDING_COST_H__
#define __PATH_FINDING_COST_H__

namespace path_finding {

namespace {
double constexpr kDefaultCost = 0.0;
}

// This function will return a cost of 0 by default.
// Specialize this for a specific StateType for a custom cost function.
template <typename StateType>
double computeCost(StateType const& state) {
	return kDefaultCost;
}

}  // namespace path_finding

#endif  // __PATH_FINDING_COST_H__