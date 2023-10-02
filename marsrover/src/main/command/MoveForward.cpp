#include "Command.cpp"

class MoveForward : public Command
{
public:
    void excecute(Rover rover)
    {
        rover.moveForward();
    }
};