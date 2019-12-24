#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
class Command{
public:
    virtual ~Command();
    virtual void execute()=0;
    virtual void print()=0;
};

#endif // COMMAND_H
