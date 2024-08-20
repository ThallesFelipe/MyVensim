#include "unitModel.hpp"

void unit_model_constructor()
{
    Model *model1 = new ModelImplementation();
    assert(model1->getId() == "NULL");
    assert(model1->flowSize() == 0);
    assert(model1->systemSize() == 0);

    Flow *flowExp1 = new FlowExponentialImplementation();

    System *system1 = new SystemImplementation();

    Model *model2 = new ModelImplementation("teste");
    model2->add(flowExp1);
    model2->add(system1);
    assert(model2->getId() == "teste");
    assert(model2->flowSize() == 1);
    assert(model2->systemSize() == 1);

    delete model1;
    delete model2;
    delete flowExp1;
    delete system1;
};

void unit_model_destructor() {};

void unit_model_getId()
{
    Model *model1 = new ModelImplementation();
    assert(model1->getId() == "NULL");

    delete model1;
};

void unit_model_setId()
{
    Model *model1 = new ModelImplementation();
    model1->setId("test");
    assert(model1->getId() == "test");

    delete model1;
};

void unit_model_add()
{
    Model *model1 = new ModelImplementation();
    System *system1 = new SystemImplementation("system1");
    System *system2 = new SystemImplementation("system2");
    Flow *flowExp1 = new FlowExponentialImplementation("flowExp", system1, system2);

    model1->add(system1);
    model1->add(system2);

    assert(model1->systemSize() == 2);

    for (auto it = model1->systemBegin(); it != model1->systemEnd(); it++)
        if ((*it)->getId() == system1->getId())
            assert((*it)->getId() == system1->getId());

    model1->add(flowExp1);

    assert(model1->flowSize() == 1);

    for (auto it = model1->flowBegin(); it != model1->flowEnd(); it++)
        if ((*it)->getId() == flowExp1->getId())
            assert((*it)->getId() == flowExp1->getId());

    model1->clear();

    delete model1;
    delete system1;
    delete system2;
    delete flowExp1;
};

void unit_model_remove()
{
    Model *model1 = new ModelImplementation();
    System *system1 = new SystemImplementation("system1");

    model1->add(system1);

    assert(model1->systemSize() == 1);

    for (auto it = model1->systemBegin(); it != model1->systemEnd(); it++)
        if ((*it)->getId() == system1->getId())
            assert((*it)->getId() == system1->getId());

    model1->remove(system1);

    assert(model1->systemSize() == 0);

    model1->clear();

    delete model1;
    delete system1;
};

void unit_model_clear()
{
    Model *model1 = new ModelImplementation();
    System *system1 = new SystemImplementation("system1");
    System *system2 = new SystemImplementation("system2");
    Flow *flowExp1 = new FlowExponentialImplementation("flowExp", system1, system2);

    model1->add(system1);
    model1->add(system2);
    assert(model1->systemSize() == 2);

    model1->add(flowExp1);
    assert(model1->flowSize() == 1);

    model1->clear();

    assert(model1->systemSize() == 0);
    assert(model1->flowSize() == 0);

    delete model1;
    delete system1;
    delete system2;
    delete flowExp1;
};

void unit_model_run()
{
    System *system1 = new SystemImplementation(100.0);
    System *system2 = new SystemImplementation(0.0);
    Model *model = new ModelImplementation();

    // Exponential
    Flow *flowExp1 = new FlowExponentialImplementation("test", system1, system2);
    model->add(system1);
    model->add(system2);
    model->add(flowExp1);

    model->execute(0, 100, 1);
    assert(fabs((round((system1->getValue() * 10000)) - 10000 * 36.6032)) < 0.0001f);
    assert(fabs((round((system2->getValue() * 10000)) - 10000 * 63.3968)) < 0.0001f);

    model->clear();

    delete system1;
    delete system2;
    delete flowExp1;
    delete model;
};

void run_unit_test_Model()
{
    unit_model_constructor();
    unit_model_destructor();
    unit_model_getId();
    unit_model_setId();
    unit_model_add();
    unit_model_remove();
    unit_model_clear();
    unit_model_run();
};