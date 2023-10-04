#include "Direction.cpp"
#include "DirectionVisitor.cpp"
class SouthDirection : public Direction
{
public:
    Direction spinRight()
    {
        return new WestDirection();
    }
    Direction spinLeft()
    {
        return new EastDirection();
    }
    void moveForward(Rover rover)
    {
        rover.setYCoordinate(rover.getYCoordinate + 1);
    }
    void moveBackward(Rover rover)
    {
        rover.setYCoordinate(rover.getYCoordinate - 1);
    }
    char getDirectionChar(){
        return 'S';
    }
};
