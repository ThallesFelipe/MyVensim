#ifndef UNITSYSTEM_HPP
#define UNITSYSTEM_HPP

#include <iostream>
#include <cmath>
#include <cstring>
#include <assert.h>

#include "../../src/systemImplementation.hpp"
#include "../../src/system.hpp"

/**
 *@brief This function run the unit test of the system
 */
void run_unit_test_system();
/**
 *@brief This function does the unit test of the Constructor
 */
void unit_system_constructor();
/**
 *@brief This function does the unit test of the destructor
 */
void unit_system_destructor();
/**
 *@brief This function does the unit test of the get Value
 */
void unit_system_getValue();
/**
 *@brief This function does the unit test of the set Value
 */
void unit_system_setValue();
/**
 *@brief This function does the unit test of the get Name
 */
void unit_system_getId();
/**
 *@brief This function does the unit test of the set Name
 */
void unit_system_setId();

#endif // UNITSYSTEM_HPP