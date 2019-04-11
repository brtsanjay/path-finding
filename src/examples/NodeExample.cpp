#include "path_finding/Node.h"
#include "path_finding/State.h"

#include <array>
#include <iostream>

int main() {
	auto node = path_finding::newNode(1);
	auto childNode = path_finding::newNode(2, node);

	if (childNode->parent()) {
		::std::cout
			<< "Parent of state " << childNode->state().getState() << " is state " 
			<< childNode->parent()->state().getState() << '\n';
	}
}
