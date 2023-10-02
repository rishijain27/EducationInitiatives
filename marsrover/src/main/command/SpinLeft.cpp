#include "Command.cpp"

class SpinLeft : public Command
{
public:
    void excecute(Rover rover)
    {
        rover.spinLeft();
    }
};