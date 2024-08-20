#ifndef UNITFLOW_HPP
#define UNITFLOW_HPP

#include <iostream>
#include <cmath>
#include <cstring>
#include <assert.h>

#include "../../src/flow.hpp"
#include "../../src/flowExponential.hpp"
#include "../../src/flowLogistic.hpp"
#include "../../src/systemImplementation.hpp"
#include "../../src/system.hpp"
#include "../../src/model.hpp"
#include "../../src/modelImplementation.hpp"

/**
 *@brief This function run the unit test of the Flow
 */
void run_unit_test_flow();
/**
 *@brief This function does the unit test of the Constructor
 */
void unit_flow_constructor();
/**
 *@brief This function does the unit test of the destructor
 */
void unit_flow_destructor();
/**
 *@brief This function does the unit test of the Getname
 */
void unit_flow_getId();
/**
 *@brief This function does the unit test of the Setname
 */
void unit_flow_setId();
/**
 *@brief This function does the unit test of the getorigin
 */
void unit_flow_getSource();
/**
 *@brief This function does the unit test of the setorigin
 */
void unit_flow_setSource();
/**
 *@brief This function does the unit test of the getdestiny
 */
void unit_flow_getDestiny();
/**
 *@brief This function does the unit test of the Setdestiny
 */
void unit_flow_setDestiny();

/**
 *@brief This function does the unit test of the execute
 */
void unit_flow_execute();

#endif // UNITFLOW_HPP