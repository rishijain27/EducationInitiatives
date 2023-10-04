#include <bits/stdc++.h>
#include "../direction/Direction.cpp"
#include "../grid/GridSurface.cpp"
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
        return this->grid;
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
    void validateMove()
    {
        if (this->xCoordinate > grid.getXUpperCoordinate() ||
            this->yCoordinate > grid.getYUpperCoordinate() ||
            this->xCoordinate < getXLowerCoordinate() ||
            this->yCoordinate < grid.getYLowerCoordinare())
        {
            throw("Out of bounds");
        }
        if (grid.getObstacles().contains(new ObstacleCell(this->xCoordinate, this->yCoordinate)))
        {
            throw("Obstacle Detected");
        }
    }
    void moveForward()
    {
        getDirection().moveForward(this);
        try
        {
            validateMove();
        }
        catch (string err)
        {
            getDirection().moveBack(this);
            cout << xCoordinate << " " << yCoordinate << " " << getDirection().getDirectionChar() << endl;
            cout << err << endl;
            throw err;
        }
    }
    void moveBack()
    {
        getDirection().moveBack(this);
        try
        {
            validateMove();
        }
        catch (string err)
        {
            getDirection().moveForward(this);
            cout << xCoordinate << " " << yCoordinate << " " << getDirection().getDirectionChar() << endl;
            cout << err << endl;
            throw err;
        }
    }
    void spinLeft()
    {
        this->direction = getDirection().spinLeft();
    }
    void spinRight()
    {
        this->direction = getDirection().spinRight();
    }
};