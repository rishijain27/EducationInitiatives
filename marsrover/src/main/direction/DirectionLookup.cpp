#include "Direction.cpp"

enum DirectionLookup
{
    private :
        Direction direction;
    public :
        N = (new NorthDirection()),

    E = (new EastDirection()),

    S = (new SouthDirection()),

    W = (new WestDirection());

    DirectionLookup(Direction direction){
        this.direction = direction;}

Direction getDirection()
{
    return direction;
}
}