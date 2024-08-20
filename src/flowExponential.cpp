#include "flowExponential.hpp"

FlowExponentialImplementation::FlowExponentialImplementation()
{
    id = "NULL";
    source = NULL;
    destiny = NULL;
};

FlowExponentialImplementation::FlowExponentialImplementation(Flow &object)
{
    if (&object == this)
        return;

    id = object.getId();
    source = object.getSource();
    destiny = object.getDestiny();
};

FlowExponentialImplementation::FlowExponentialImplementation(const string id, System *source, System *destiny) : FlowImplementation(id, source, destiny) {};
FlowExponentialImplementation::~FlowExponentialImplementation() {};

float FlowExponentialImplementation::execute()
{
    return getSource()->getValue() * 0.01;
};