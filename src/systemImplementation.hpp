#ifndef SYSTEMIMPLEMENTATION_HPP
#define SYSTEMIMPLEMENTATION_HPP

#include <ostream>
#include <string>
#include "system.hpp"

using namespace std;

class SystemImplementation : public System
{
protected:
    string id;
    double value;

public:
    /**
     * @brief default constructor
     *
     * @param
     * @return
     */
    SystemImplementation();
    /**
     * @brief construct a new system id
     *
     * @param name
     * @return
     */
    SystemImplementation(const string id);
    /**
     * @brief construct a new system value
     *
     * @param value
     * @return
     */
    SystemImplementation(double value);
    /**
     * @brief construct a new system object
     *
     * @param value
     * @return
     */
    SystemImplementation(System &object);
    /**
     * @brief Construct a new System object
     *
     * @param id to be copied
     * @param value to be copied
     * @return
     */
    SystemImplementation(const string id, double Value);
    /**
     * @brief This destructor is a virtual destructor of the Class
     *
     * @param
     * @return a string containing the name is returned
     */
    virtual ~SystemImplementation();
    /**
     * @brief this methor returns the id system
     *
     * @param
     * @return a string containing the name is returned
     */
    string getId() const;
    /**
     * @brief This method assigns the id to a string
     *
     * @param
     * @return A string must be passed to the method
     */
    void setId(const string id);
    /**
     * @brief This method returns the value of a system.
     *
     * @param
     * @return A float containing the value is returned.
     */
    double getValue() const;
    /**
     * @brief This method assigns the value to a string
     *
     * @param
     * @return A float must be passed to the method
     */
    void setValue(double value);
    /**
     * @brief This method is overloading the '==' operator comparing a system
     *
     * @param The system to be compared with the system that called the method is passed
     * @return System& object
     */
    System &operator=(const System &object);
};

#endif // SYSTEMIMPLEMENTATION_HPP