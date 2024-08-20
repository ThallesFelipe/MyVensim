#ifndef MODEL_HPP
#define MODEL_HPP

#include <cstring>
#include <ostream>
#include <vector>

#include "system.hpp"
#include "flow.hpp"

class Model
{
public:
    /**
     * @brief Construct a new Model
     *
     * @param
     * @return
     */
    virtual ~Model() {};
    /**
     * @brief setting the flow vector type
     *
     * @param
     * @return
     */
    typedef typename vector<Flow *>::iterator vectorFlow;
    /**
     * @brief setting the system vector type
     *
     * @param
     * @return
     */
    typedef typename vector<System *>::iterator vectorSystem;

    /**
     * @brief This method returns the name of a flow
     *
     * @param
     * @return A string containing the name is returned.
     */
    virtual string getId() const = 0;
    /**
     * @brief This method assigns the name to a string
     *
     * @param
     * @return a string must be passed to the method
     */
    virtual void setId(const string id) = 0;
    /**
     * @brief This method returns the flow from the beginning
     *
     * @param
     * @return the flow from the beginning
     */
    virtual vectorFlow flowBegin() = 0;
    /**
     * @brief This method returns the flow of the end
     *
     * @param
     * @return the flow of the end
     */
    virtual vectorFlow flowEnd() = 0;
    /**
     * @brief This method returns the size of the flow vector
     *
     * @param
     * @return the size of the flow vector
     */
    virtual int flowSize() = 0;
    /**
     * @brief This method returns the system from the beginning
     *
     * @param
     * @return the system from the beginning
     */
    virtual vectorSystem systemBegin() = 0;
    /**
     * @brief This method returns the system of the end
     *
     * @param
     * @return the system of the end
     */
    virtual vectorSystem systemEnd() = 0;
    /**
     * @brief This method returns the size of the system vector
     *
     * @param
     * @return the size of the system vector
     */
    virtual int systemSize() = 0;
    /**
     * @brief this method adds a system
     *
     * @param
     * @return
     */
    virtual void add(System *) = 0;
    /**
     * @brief this method adds a flow
     *
     * @param
     * @return
     */
    virtual void add(Flow *) = 0;
    /**
     * @brief this method removes a system
     *
     * @param true if object and item have the same memory addres
     * @return false if object and item do not have the same memory address
     */
    virtual bool remove(System *) = 0;
    /**
     * @brief this method removes a flow
     *
     * @param true if object and item have the same memory addres
     * @return false if object and item do not have the same memory address
     */
    virtual bool remove(Flow *) = 0;
    /**
     * @brief this method is to clean the model.
     *
     * @param
     * @return
     */
    virtual void clear() = 0;
    /**
     * @brief this method is to show the model.
     *
     * @param
     * @return
     */
    virtual void show() = 0;
    /**
     * @brief this method is to execute the model.
     *
     * @param
     * @return
     */
    virtual void execute(int, int, int) = 0;
};

#endif // MODEL_HPP