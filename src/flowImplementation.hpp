#ifndef FLOWIMPLEMENTATION_HPP
#define FLOWIMPLEMENTATION_HPP

#include <iostream>
#include <string>

#include "system.hpp"
#include "flow.hpp"

class FlowImplementation : public Flow
{
protected:
    string id;
    System *source;
    System *destiny;

public:
    /**
     * @brief Construct a new Flow
     *
     */
    FlowImplementation();
    /**
     * @brief Construct a new Flow object
     *
     * @param object
     */
    FlowImplementation(Flow &object);
    /**
     * @brief This constructor assigns name, source and destination to flow
     *
     * @param id
     * @param source
     * @param destiny
     */
    FlowImplementation(const string id, System *source, System *destiny);
    /**
     * @brief This destructor is a virtual destructor of the Class
     *
     */
    virtual ~FlowImplementation();

    /**
     * @brief This method returns the name of a flow
     *
     * @return the name of a flow
     */
    string getId() const;
    /**
     * @brief This method assigns the name to a string
     *
     * @param the name to a string
     */
    void setId(const string id);
    /**
     * @brief This method returns the Source System of a Flow
     *
     * @return A System pointer of the origin is returned
     */
    System *getSource() const;
    /**
     * @brief This method assigns an origin to the Flow
     *
     * @param  The System pointer to be assigned must be passed.
     */
    void setSource(System *source);
    /**
     * @brief This method returns the target System of a Flow
     *
     * @return  the target System of a Flow
     */
    System *getDestiny() const;
    /**
     * @brief This method assigns a destination to the Flow
     *
     * @param The System pointer to be assigned must be passed
     */
    void setDestiny(System *destiny);

    /**
     * @brief This method is overloading the '=' operator, "cloning" from one flow to another
     *
     *@param The flow to be cloned must be passed
     * @return A flow is returned that is a clone of what was passed to the method, which was the flow that called this function, the flow to the left of the '='
     */
    Flow &operator=(const Flow &object);
    /**
     * @brief Pure virtual method that will be inherited by subclasses
    created by the user, this one will contain an equation that will be executed in the flow by the model.
     *
     * @return float
     */
    virtual float execute() = 0;
};

#endif // FLOWIMPLEMENTATION_HPP