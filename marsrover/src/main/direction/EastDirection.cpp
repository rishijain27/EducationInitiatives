#include "Direction.cpp"
#include "DirectionVisitor.cpp"

class EastDirection : public Direction
{
public:
    Direction spinRight()
    {
        return new SouthDirection();
    }
    Direction spinLeft()
    {
        return new NorthDirection();
    }
    void moveForward(Rover rover)
    {
        rover.setXCoordinate(rover.getXCoordinate + 1);
    }
    void moveBackward(Rover rover)
    {
        rover.setXCoordinate(rover.getXCoordinate - 1);
    }
    void accept(DirectionVisitor directionVisitor)
    {
        directionVisitor.visitEast();
    }
};