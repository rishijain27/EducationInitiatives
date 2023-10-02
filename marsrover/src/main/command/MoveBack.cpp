#include "Command.cpp"

class MoveBack : public Command
{
public:
    void excecute(Rover rover)
    {
        rover.moveBack();
    }
};