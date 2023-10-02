#include <bits/stdc++.h>
#include "../direction/Direction.cpp"
#include "../grid/GridSurface.cpp"
#include "../direction/DirectionVisitor.cpp"
using namespace std;

class Rover
{
private:
    int xCoordinate;
    int yCoordinate;
    Direction direction;
    GridSurface grid;

public:
    Rover(int xCoordinate, int yCoordinate, Direction direction, GridSurface grid)
    {
        this->grid = grid;
        this->xCoordinate = xCoordinate;
        this->yCoordinate = yCoordinate;
        this->direction = direction;
    }
    GridSurface getGrid()
    {
        return this.grid;
    }
    void setXCoordinate(int xCoordinate)
    {
        this->xCoordinate = xCoordinate;
    }
    int getXCoordinate()
    {
        return this->xCoordinate;
    }
    void setYCoordinate(int yCoordinate)
    {
        this->yCoordinate = yCoordinate;
    }
    int getYCoordinte()
    {
        return this->yCoordinate;
    }
    void setDirection(Direction direction)
    {
        this->direction = direction;
    }
    Direction getDirection()
    {
        return this->direction;
    }
    // bool isMoveCorrect(int newXCoordinate, int newYCoordinate)
    // {
    //     if (isForwardMove)
    //     {
    //         if (this->getXcoordinate)
    //     }
    // }
    //     void moveForward()
    // {
    //     bool isMoveCorrect = getDirection().accept(new DirectionVisitor(){
    //         void visitNorth(){
    //             isMoveCorrect = isMoveValid(this->xCoordinate, this->yCoordinate + 1);
    //         }
    //         void visitSouth(){
    //             isMoveCorrect = isMoveValid(this->xCoordinate, this->yCoordinate - 1);
    //         }
    //         void visitEast(){
    //             isMoveCorrect = isMoveValid(this->xCoordinate + 1, this->yCoordinate);
    //         }
    //         void visitWest(){
    //             isMoveCorrect = isMoveValid(this->xCoordinate - 1, this->yCoordinate);
    //         }
    //     });
    // }
};