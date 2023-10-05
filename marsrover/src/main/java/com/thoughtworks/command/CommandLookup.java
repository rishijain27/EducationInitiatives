package java.com.thoughtworks.command;

public enum CommandLookup {
    R(new SpinRight()),

    L(new SpinLeft()),

    M(new MoveForward()),

    B(new MoveBack());

    private final Command command;

    CommandLookup(Command command) {
        this.command = command;
    }

    public Command getCommand() {
        return command;
    }
}
