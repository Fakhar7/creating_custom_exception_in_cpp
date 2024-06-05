//
// Created by azrael on 6/5/24.
//

#include "Locked.h"

const char* Locked::what() const noexcept {
    // We should not throw any exception like this
    // throw invalid_arguments()
    // else we have to return an exception
    return "Account locked. Please contact the admin.";
}
