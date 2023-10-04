#include <bits/stdc++.h>
#include "../rover/Rover.cpp"
#include "DirectionVisitor.cpp"
using namespace std;

class Direction
{
public:
    virtual Direction spinRight() = 0;
    virtual Direction spinLeft() = 0;
    virtual void moveForward(Rover rover) = 0;
    virtual void moveBack(Rover rover) = 0;
    virtual char getDirectionChar() = 0;
};