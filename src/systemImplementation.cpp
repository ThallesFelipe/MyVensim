#include "systemImplementation.hpp"

SystemImplementation::SystemImplementation()
{
    id = "NULL";
    value = 0;
};

SystemImplementation::SystemImplementation(System &object)
{
    id = object.getId();
    value = object.getValue();
};

SystemImplementation::SystemImplementation(const string id, double value) : id(id), value(value) {};
SystemImplementation::SystemImplementation(const string id) : id(id), value(0) {};
SystemImplementation::SystemImplementation(double value) : id(""), value(value) {};
SystemImplementation::~SystemImplementation() {};

string SystemImplementation::getId() const
{
    return id;
};

void SystemImplementation::setId(const string id)
{
    this->id = id;
};

double SystemImplementation::getValue() const
{
    return value;
};

void SystemImplementation::setValue(double value)
{
    this->value = value;
};

System &SystemImplementation::operator=(const System &object)
{
    if (&object == this)
        return *this;

    id = object.getId();
    value = object.getValue();

    return *this;
};