package java.com.thoughtworks.command;

import java.com.thoughtworks.rover.Rover;

public class MoveBack implements Command {

    @Override
    public void execute(Rover rover) {
        rover.moveBack();
    }
};