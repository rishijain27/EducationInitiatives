#include "Direction.cpp"
#include "DirectionVisitor.cpp"
class WestDirection : public Direction
{
public:
    Direction spinRight()
    {
        return new NorthDirection();
    }
    Direction spinLeft()
    {
        return new SouthDirection();
    }
    void moveForward(Rover rover)
    {
        rover.setXCoordinate(rover.getXCoordinate + 1);
    }
    void moveBackward(Rover rover)
    {
        rover.setXCoordinate(rover.getXCoordinate - 1);
    }
    char getDirectionChar(){
        return 'W';
    }
};