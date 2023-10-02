#include "GridComponent.cpp"
#include "ObstacleCell.cpp"

class GridSurface : public GridComponent
{
private:
    int xUpperCoordinate;
    int yUpperCoordinate;
    int xLowerCordinate = 0;
    int yLowerCoordinate = 0;
    set<GridComponent> obstacles;

public:
    void addObstacles(ObstacleCell obstacle)
    {
        obstacles.insert(obstacle);
    }
    void dislpay()
    {
        for (auto it : obstacles)
        {
            it.display();
        }
    }
    set<GridComponent> getObstacles()
    {
        return this->obstacles;
    }
    void setXUpperCoordinate(int xUpperCoordinate)
    {
        this->xUpperCoordinate = xUpperCoordinate;
    }
    void setYUpperCoordinate(int yUpperCoordinate)
    {
        this->yUpperCoordinate = yUpperCoordinate;
    }
    int getXUpperCoordinate()
    {
        return this->xUpperCoordinate;
    }
    int getYUpperCoordinate()
    {
        return this->yUpperCoordinate;
    }
    int getXLowerCoordinate()
    {
        return this->xLowerCordinate;
    }
    int getYLowerCoordinate()
    {
        return this->yLowerCoordinate;
    }
};