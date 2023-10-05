package java.com.thoughtworks.command;

import java.com.thoughtworks.rover.Rover;

public interface Command {
    public abstract void execute(Rover rover);
};