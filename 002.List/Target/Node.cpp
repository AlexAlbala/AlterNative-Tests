#include "Node.h"
namespace List {
	Node::Node(){
		double f = Utils::random->NextDouble();
		this->value = (int)(f * 1000.0);
	}

}
