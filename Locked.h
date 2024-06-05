#ifndef LOCKED_H
#define LOCKED_H

#include <stdexcept>

class Locked : public std::exception{
public:
    const char *what() const noexcept override;
};



#endif //LOCKED_H
