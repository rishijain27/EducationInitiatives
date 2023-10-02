#include "Direction.cpp"
#include "DirectionVisitor.cpp"
class NorthDirection : public Direction
{
public:
    Direction spinRight()
    {
        return new EastDirection();
    }
    Direction spinLeft()
    {
        return new WestDirection();
    }
    void moveForward(Rover rover)
    {
        rover.setYCoordinate(rover.getYCoordinate + 1);
    }
    void moveBackward(Rover rover)
    {
        rover.setYCoordinate(rover.getYCoordinate - 1);
    }
    void accept(DirectionVisitor directionVisitor)
    {
        directionVisitor.visitNorth();
    }
};