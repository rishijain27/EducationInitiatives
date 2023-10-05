package java.com.thoughtworks.direction;

import java.com.thoughtworks.rover.Rover;

public interface Direction {

    public abstract Direction spinRight();

    public abstract Direction spinLeft();

    public abstract void moveForward(Rover rover);

    public abstract void moveBackward(Rover rover);

    public abstract char getDirectionChar();
};
