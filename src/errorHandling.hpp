#ifndef __ERROR_HANDLING_HPP
#define __ERROR_HANDLING_HPP

#include <iostream>

using namespace std;

void pError(string error_description){
    cout << error_description << endl;
    exit(1);
}


#endif