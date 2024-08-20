#ifndef UNITMODEL_HPP
#define UNITMODEL_HPP

#include <iostream>
#include <cmath>
#include <cstring>
#include <assert.h>

#include "../../src/flowExponential.hpp"
#include "../../src/flowLogistic.hpp"
#include "../../src/model.hpp"
#include "../../src/modelImplementation.hpp"
#include "../../src/systemImplementation.hpp"
#include "../../src/system.hpp"
#include "../../src/flow.hpp"

/**
 *@brief This function run the unit test of the model
 */
void run_unit_test_Model();
/**
 *@brief This function does the unit test of the Constructor
 */
void unit_model_constructor();
/**
 *@brief This function does the unit test of the destructor
 */
void unit_model_destructor();
/**
 *@brief This function does the unit test of the Getname
 */
void unit_model_getId();
/**
 *@brief This function does the unit test of the Setname
 */
void unit_model_setId();

/**
 *@brief This function does the unit test of the add
 */
void unit_model_add();
/**
 *@brief This function does the unit test of the remove
 */
void unit_model_remove();
/**
 *@brief This function does the unit test of the clear
 */
void unit_model_clear();
/**
 *@brief This function does the unit test of the run
 */
void unit_model_run();

#endif // UNITMODEL_HPP