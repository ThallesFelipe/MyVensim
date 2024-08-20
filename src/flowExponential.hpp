#ifndef FLOWEXPONENTIAL_HPP
#define FLOWEXPONENTIAL_HPP

#include "flowImplementation.hpp"

class FlowExponentialImplementation : public FlowImplementation
{
public:
    /**
     * @brief This constructor is the empty constructor of the class
     *
     * @param
     * @return
     */
    FlowExponentialImplementation();
    /**
     * @brief Comparison operator for flowExponential
     *
     * @param object a flow object
     * @return bool -> return bool according to the comparison
     */
    FlowExponentialImplementation(Flow &object);
    /**
     * @brief Comparison operator for flow
     *
     * @param id a flow object
     * @param source a flow object
     * @param destiny a flow object
     * @return a flowExponential object
     */
    FlowExponentialImplementation(const string id, System *source, System *destiny);
    /**
     * @brief Comparison operator for flow
     *
     * @param 
     * @return 
     */
    virtual ~FlowExponentialImplementation();
    /**
     * @brief execute virtual
     *
     * @param
     * @return float number
     */
    virtual float execute();
};

#endif // FLOWEXPONENTIAL_HPP