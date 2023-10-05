package java.com.thoughtworks.direction;
import java.com.thoughtworks.rover.Rover;


public class EastDirection implements Direction {
    @Override
    public Direction spinRight() {
        return new SouthDirection();
    }

    @Override
    public Direction spinLeft() {
        return new NorthDirection();
    }

    @Override
    public void moveForward(Rover rover) {
        rover.setXCoordinate(rover.getXCoordinate() + 1);
    }

    @Override
    public void moveBackward(Rover rover) {
        rover.setXCoordinate(rover.getXCoordinate() - 1);
    }

    @Override
    public char getDirectionChar() {
        return 'E';
    }
};