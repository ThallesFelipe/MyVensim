#ifndef FLOW_HPP
#define FLOW_HPP

#include <iostream>
#include <string>
#include "system.hpp"

using namespace std;

class Flow
{
public:
    /**
     * @brief This destructor is a virtual destructor of the Class
     *
     * @param
     * @return
     */
    virtual ~Flow() {};
    /**
     * @brief This method returns the name of a flow
     *
     * @param
     * @return the id of a flow
     */

    virtual string getId() const = 0;
    /**
     * @brief This method assigns the name to a string
     *
     * @param id string must be passed to the method
     * @return
     */
    virtual void setId(const string id) = 0;
    /**
     * @brief This method returns the Source System of a Flow
     *
     * @param
     * @return A System pointer of the source is returned
     */
    virtual System *getSource() const = 0;
    /**
     * @brief dThis method assigns an origin to the Flow
     *
     * @param source The System pointer to be assigned must be passed.
     * @return
     */
    virtual void setSource(System *source) = 0;
    /**
     * @brief This method returns the target System of a Flow
     *
     * @param
     * @return A System pointer is returned
     */
    virtual System *getDestiny() const = 0;
    /**
     * @brief This method assigns a destination to the Flow
     *
     * @param destiny The System pointer to be assigned must be passed
     * @return
     */
    virtual void setDestiny(System *destiny) = 0;
    /**
     * @brief Comparison operator for flow
     *
     * @param object a flow object
     * @return bool -> returns an assignment
     */
    virtual Flow &operator=(const Flow &object) = 0;
    /**
     * @brief execute virtual
     *
     * @param
     * @return float number
     */
    virtual float execute() = 0;
};

#endif // FLOW_HPP