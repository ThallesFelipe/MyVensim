#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include <ostream>
#include <string>

using namespace std;

class System
{
public:
    /**
     * @brief destructor virtual
     *
     * @param
     * @return
     */
    virtual ~System() {};
    /**
     * @brief this methor returns the id of a system
     *
     * @param
     * @return a string containing the name is returned
     */
    virtual string getId() const = 0;
    /**
     * @brief This method assigns the id to a string
     *
     * @param
     * @return A string must be passed to the method
     */
    virtual void setId(const string id) = 0;
    /**
     * @brief This method returns the value of a system.
     *
     * @param
     * @return A float containing the value is returned.
     */
    virtual double getValue() const = 0;
    /**
     * @brief This method assigns the value to a string
     *
     * @param
     * @return A float must be passed to the method
     */
    virtual void setValue(double value) = 0;
    /**
     * @brief This method is overloading the '==' operator comparing a system
     *
     * @param The system to be compared with the system that called the method is passed
     * @return System& object
     */
    virtual System &operator=(const System &object) = 0;
};

#endif // SYSTEM_HPP