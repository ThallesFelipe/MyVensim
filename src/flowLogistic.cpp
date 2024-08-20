#include "flowLogistic.hpp"

FlowLogisticImplementation::FlowLogisticImplementation()
{
    id = "NULL";
    source = NULL;
    destiny = NULL;
};

FlowLogisticImplementation::FlowLogisticImplementation(Flow &object)
{
    if (&object == this)
        return;

    id = object.getId();
    source = object.getSource();
    destiny = object.getDestiny();
};

FlowLogisticImplementation::FlowLogisticImplementation(const string id, System *source, System *destiny) : FlowImplementation(id, source, destiny) {};
FlowLogisticImplementation::~FlowLogisticImplementation() {};

float FlowLogisticImplementation::execute()
{
    return ((0.01 * getDestiny()->getValue()) * (1 - getDestiny()->getValue() / 70));
};