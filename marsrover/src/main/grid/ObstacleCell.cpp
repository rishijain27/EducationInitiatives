#include "GridComponent.cpp"

class ObstacleCell : public GridComponent
{
private:
    int x;
    int y;

public:
    ObstacleCell(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout << this->x << " " << this->y << endl;
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
};