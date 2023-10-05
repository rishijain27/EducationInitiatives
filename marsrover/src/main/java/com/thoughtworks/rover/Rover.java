package java.com.thoughtworks.rover;

import java.com.thoughtworks.grid.GridSurface;
import java.com.thoughtworks.direction.Direction;
import java.com.thoughtworks.grid.ObstacleCell;
import java.com.thoughtworks.command.Command;
import java.util.ArrayList;

public class Rover {

    private int xCoordinate;
    private int yCoordinate;
    private Direction direction;
    private GridSurface grid;

    public Rover(int xCoordinate, int yCoordinate, Direction direction, GridSurface grid) {
        this.grid = grid;
        this.xCoordinate = xCoordinate;
        this.yCoordinate = yCoordinate;
        this.direction = direction;
    }

    public GridSurface getGrid() {
        return this.grid;
    }

    public void setXCoordinate(int xCoordinate) {
        this.xCoordinate = xCoordinate;
    }

    public int getXCoordinate() {
        return this.xCoordinate;
    }

    public void setYCoordinate(int yCoordinate) {
        this.yCoordinate = yCoordinate;
    }

    public int getYCoordinate() {
        return this.yCoordinate;
    }

    public void setDirection(Direction direction) {
        this.direction = direction;
    }

    public Direction getDirection() {
        return this.direction;
    }

    private void validateMove() {
        if (this.xCoordinate > grid.getXUpperCoordinate() ||
                this.yCoordinate > grid.getYUpperCoordinate() ||
                this.xCoordinate < grid.getXLowerCoordinate() ||
                this.yCoordinate < grid.getYLowerCoordinate()) {
            throw new Error("Out of bounds");
        }
        if (grid.getObstacles().contains(new ObstacleCell(this.xCoordinate, this.yCoordinate))) {
            throw new Error("Obstacle Detected");
        }
    }

    public void executeCommandList(ArrayList<Command> commands){
        for(Command command: commands ){
            command.execute(this);
        }
    } 

    public void moveForward() {
        getDirection().moveForward(this);
        try {
            validateMove();
        } catch (Exception err) {
            getDirection().moveBackward(this);
            System.out.print(xCoordinate);
            System.out.print(" ");
            System.out.print(yCoordinate);
            System.out.print(" ");
            System.out.println(getDirection().getDirectionChar());
            System.out.println(err);
            throw err;
        }
    }

    public void moveBack() {
        getDirection().moveBackward(this);
        try {
            validateMove();
        } catch (Exception err) {
            getDirection().moveBackward(this);
            System.out.print(xCoordinate);
            System.out.print(" ");
            System.out.print(yCoordinate);
            System.out.print(" ");
            System.out.println(getDirection().getDirectionChar());
            System.out.println(err);
            throw err;
        }
    }

    public void spinLeft() {
        this.direction = getDirection().spinLeft();
    }

    public void spinRight() {
        this.direction = getDirection().spinRight();
    }
};