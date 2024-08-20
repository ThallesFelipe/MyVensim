#ifndef FLOWLOGISTICIMPLEMENTATION_HPP
#define FLOWLOGISTICIMPLEMENTATION_HPP

#include "flowImplementation.hpp"

class FlowLogisticImplementation : public FlowImplementation
{
public:
    /**
     * @brief Construct a new Flow Logistic
     *
     * @param
     * @return
     */
    FlowLogisticImplementation();
    /**
     * @brief Comparison operator for flowExponential
     *
     * @param object a flow object
     * @return bool -> return bool according to the comparison
     */
    FlowLogisticImplementation(Flow &object);
    /**
     * @brief Comparison operator for flow
     *
     * @param id a flow object
     * @param source a flow object
     * @param destiny a flow object
     * @return a flowExponential object
     */
    FlowLogisticImplementation(const string id, System *source, System *destiny);
    /**
     * @brief Comparison operator for flow
     *
     * @param
     * @return
     */
    virtual ~FlowLogisticImplementation();
    /**
     * @brief execute virtual
     *
     * @param
     * @return float number
     */
    virtual float execute();
};

#endif // FLOWLOGISTICIMPLEMENTATION_HPP