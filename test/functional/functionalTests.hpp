#include "../../src/model.hpp"
#include "../../src/modelImplementation.hpp"
#include "../../src/system.hpp"
#include "../../src/systemImplementation.hpp"
#include "../../src/flow.hpp"
#include "../../src/flowImplementation.hpp"
#include "../../src/flowExponential.hpp"
#include "../../src/flowLogistic.hpp"

#include <assert.h>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <cstring>

#ifndef FUNCTIONALTESTS_HPP
#define FUNCTIONALTESTS_HPP

/**
 * @brief This function performs the exponential functional test
 *
 * @param
 * @returns
 */
void exponentialFunctionalTest();
/**
 * @brief This function performs the logistic test
 * @param
 * @returns
 */
void logisticalFunctionalTest();
/**
 * @brief This function runs the "complex" test, which has multiple systems and flows
 *
 * @param
 * @returns
 */
void complexFunctionalTest();

#endif // FUNCTIONALTESTS