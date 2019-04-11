#ifndef __PATH_FINDING_NODE_H__
#define __PATH_FINDING_NODE_H__

#include "path_finding/State.h"

#include <memory>

namespace path_finding {

template <typename StateType>
class Node {
public:
	Node(State<StateType> const& state, ::std::shared_ptr<Node<StateType>> parent)
		: _state{state}, _parent{parent} {}

	auto state() { return _state; }
	auto parent() { return _parent; }

private:
	State<StateType> const _state;
	::std::shared_ptr<Node<StateType>> const _parent;
};

template <typename StateType>
auto newNode(StateType const& state, ::std::shared_ptr<Node<StateType>> parent = nullptr) {
	// Because State has a constructor that takes an argument of StateType, we can pass in
	// StateType value where a State<StateType> is expected.
	return ::std::make_shared<Node<StateType>>(state, parent);
}

}  // namespace path_finding

#endif  // __PATH_FINDING_NODE_H__
