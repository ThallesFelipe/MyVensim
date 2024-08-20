#include "modelImplementation.hpp"

ModelImplementation::ModelImplementation()
{
    id = "NULL";
    flows.clear();
    systems.clear();
};

ModelImplementation::ModelImplementation(const string id) : id(id) {};

ModelImplementation::ModelImplementation(Model &object)
{
    if (&object == this)
        return;

    id = object.getId();
};

ModelImplementation::~ModelImplementation() {};

string ModelImplementation::getId() const
{
    return id;
};

void ModelImplementation::setId(const string id)
{
    this->id = id;
};

Model::vectorFlow ModelImplementation::flowBegin()
{
    return flows.begin();
};

Model::vectorFlow ModelImplementation::flowEnd()
{
    return flows.end();
};

int ModelImplementation::flowSize()
{
    return flows.size();
};

Model::vectorSystem ModelImplementation::systemBegin()
{
    return systems.begin();
};

Model::vectorSystem ModelImplementation::systemEnd()
{
    return systems.end();
};

int ModelImplementation::systemSize()
{
    return systems.size();
};

void ModelImplementation::add(System *subSystem)
{
    systems.push_back(subSystem);
};

void ModelImplementation::add(Flow *flow)
{
    flows.push_back(flow);
};

bool ModelImplementation::remove(System *object)
{
    for (auto thisystem = systems.begin(); thisystem != systems.end(); thisystem++)
        if (*thisystem == object)
        {
            systems.erase(thisystem);
            return true;
        }

    return false;
};

bool ModelImplementation::remove(Flow *object)
{
    for (auto thisFlows = flows.begin(); thisFlows != flows.end(); thisFlows++)
        if (*thisFlows == object)
        {
            flows.erase(thisFlows);
            return true;
        }

    return false;
};

ModelImplementation &ModelImplementation::operator=(const ModelImplementation &object)
{
    if (this != &object)
    {
        this->flows.clear();
        this->systems.clear();
        this->flows.insert(this->flows.begin(), object.flows.begin(), object.flows.end());
        this->systems.insert(this->systems.begin(), object.systems.begin(), object.systems.end());
    }

    return *this;
};

void ModelImplementation::clear()
{
    id = "NULL";
    flows.clear();
    systems.clear();
};

void ModelImplementation::execute(int start, int finish, int increment)
{
    vector<Flow *>::iterator vectorFlow;

    System *source;
    System *destiny;

    vector<float> flowValue;

    size_t i = 0;
    size_t j = 0;
    float initial = 0.0;

    for (size_t i = 0; i < flows.size(); i++)
        flowValue.push_back(initial);

    for (int index = start; index < finish; index += increment)
    {
        i = 0;
        vectorFlow = flows.begin();
        while (i != flows.size())
        {
            flowValue[i] = (*vectorFlow)->execute();
            vectorFlow++;
            i++;
        }

        j = 0;
        while (j != flows.size())
        {
            source = flows[j]->getSource();
            source->setValue(source->getValue() - flowValue[j]);

            destiny = flows[j]->getDestiny();
            destiny->setValue(destiny->getValue() + flowValue[j]);
            j++;
        }
    }
};

void ModelImplementation::show()
{
    cout << endl;
    cout << "Sub systems and their values:" << endl;

    for (auto system : systems)
        cout << "." << system->getId() << " " << system->getValue() << endl;

    cout << endl;
};