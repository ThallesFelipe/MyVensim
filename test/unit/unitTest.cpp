#include "unitTest.hpp"

void run_unit_tests_globals()
{
    cout << "Running unit test..." << endl;

    cout << "System tests: ";
    run_unit_test_system();
    cout << "OK" << endl;

    cout << "Flow tests: ";
    run_unit_test_flow();
    cout << "OK" << endl;

    cout << "Model tests: ";
    run_unit_test_Model();
    cout << "OK" << endl
         << endl;

    cout << "finished unit test!" << endl;
};