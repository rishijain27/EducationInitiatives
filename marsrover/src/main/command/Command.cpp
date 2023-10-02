#include "../rover/Rover.cpp"

class Command
{
public:
    virtual void execute(Rover rover) = 0;
};