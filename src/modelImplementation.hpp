#ifndef MODELIMP_HPP
#define MODELIMP_HPP

#include <cstring>
#include <ostream>
#include <vector>

#include "system.hpp"
#include "model.hpp"

class ModelImplementation : public Model
{
protected:
    string id;
    vector<Flow *> flows;
    vector<System *> systems;

private:
    /**
     * @brief this method is a copy constructor of model
     *
     * @param  model to be copied
     */
    ModelImplementation(Model &object);
    /**
     * @brief  This method is overloading the '=' operator, "cloning" from one model to another
     *
     * @param object The model to be cloned must be passed
     *
     * @return A model is returned that is a clone of what was passed to the method, which was the model that called this function, the model to the left of the '='
     */
    ModelImplementation &operator=(const ModelImplementation &object);

public:
    /**
     * @brief This constructor is the empty constructor of the class
     *
     */
    ModelImplementation();
    /**
     * @brief Construct a Model name
     *
     * @param id
     */
    ModelImplementation(const string id);
    /**
     * @brief This destructor is a virtual destructor of the Class
     *
     */
    virtual ~ModelImplementation();

    /**
     * @brief This method returns the name of a flow
     *
     * @return A string containing the name is returned.
     */
    string getId() const;

    /**
     * @brief This method assigns the name to a string
     *
     * @param a string must be passed to the method
     */
    void setId(const string id);

    /**
     * @brief This method returns the flow from the beginning
     *
     * @return the flow from the beginning
     */

    vectorFlow flowBegin();
    /**
     * @brief This method returns the flow of the end
     *
     * @return the flow of the end
     */
    vectorFlow flowEnd();

    /**
     * @brief This method returns the size of the flow vector
     *
     * @return the size of the flow vector
     */
    int flowSize();

    /**
     * @brief This method returns the system from the beginning
     *
     * @return  the system from the beginning
     */
    vectorSystem systemBegin();

    /**
     * @brief This method returns the system of the end
     *
     * @return the system of the end
     */
    vectorSystem systemEnd();
    /**
     * @brief This method returns the size of the system vector
     *
     * @return  the size of the system vector
     */
    int systemSize();

    /**
     * @brief this method adds a system
     *
     * @param a pointer to system must be passed.
     */
    void add(System *);
    /**
     * @brief this method adds a flow
     *
     * @param a pointer to flow must be passed.
     */
    void add(Flow *);
    /**
     * @brief this method removes a system
     *
     * @return true if object and item have the same memory addres
     * @return false if object and item do not have the same memory addres
     */
    bool remove(System *);
    /**
     * @brief this method removes a flow
     *
     * @return true if object and item have the same memory addres
     * @return false if object and item do not have the same memory addres
     */
    bool remove(Flow *);
    /**
     * @brief  this method is to clean the model.
     *
     */
    void clear();
    /**
     * @brief this method is to show the model.
     *
     */
    void show();

    /**
     * @brief  must be passed three integers start, finish and increment
     *
     */
    void execute(int, int, int);
};

#endif // MODELIMP_HPP