
package java.com.thoughtworks.command;

import java.com.thoughtworks.rover.Rover;
class MoveForward implements Command
{
    @Override
    public void execute(Rover rover)
    {
        rover.moveForward();
    }
};