package java.com.thoughtworks.direction;

import java.com.thoughtworks.rover.Rover;

public class SouthDirection implements Direction {
    @Override
    public Direction spinRight() {
        return new WestDirection();
    }

    @Override
    public Direction spinLeft() {
        return new EastDirection();
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
        return 'S';
    }
};
