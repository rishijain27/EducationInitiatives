#include "Command.cpp"

class SpinRight : public Command
{
public:
    void excecute(Rover rover)
    {
        rover.spinRight();
    }
};