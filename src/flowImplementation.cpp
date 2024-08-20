#include "flowImplementation.hpp"

FlowImplementation::FlowImplementation()
{
    id = "NULL";
    source = NULL;
    destiny = NULL;
};

FlowImplementation::FlowImplementation(Flow &object)
{
    if (&object == this)
        return;

    id = object.getId();
    source = object.getSource();
    destiny = object.getDestiny();
};

FlowImplementation::FlowImplementation(const string id, System *source, System *destiny) : id(id), source(source), destiny(destiny) {};
FlowImplementation::~FlowImplementation() {};

string FlowImplementation::getId() const
{
    return id;
};

void FlowImplementation::setId(const string id)
{
    this->id = id;
};

System *FlowImplementation::getSource() const
{
    return source;
};

void FlowImplementation::setSource(System *source)
{
    this->source = source;
};

System *FlowImplementation::getDestiny() const
{
    return destiny;
};

void FlowImplementation::setDestiny(System *destiny)
{
    this->destiny = destiny;
};

Flow &FlowImplementation::operator=(const Flow &object)
{
    if (&object == this)
        return *this;

    id = object.getId();
    source = object.getSource();
    destiny = object.getDestiny();

    return *this;
};