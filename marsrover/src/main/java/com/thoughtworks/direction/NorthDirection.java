package java.com.thoughtworks.direction;

import java.com.thoughtworks.rover.Rover;

public class NorthDirection implements Direction {
    @Override
    public Direction spinRight() {
        return new EastDirection();
    }

    @Override
    public Direction spinLeft() {
        return new WestDirection();
    }

    @Override
    public void moveForward(Rover rover) {
        rover.setYCoordinate(rover.getYCoordinate() + 1);
    }

    @Override
    public void moveBackward(Rover rover) {
        rover.setYCoordinate(rover.getYCoordinate() - 1);
    }

    @Override
    public char getDirectionChar() {
        return 'N';
    }
};