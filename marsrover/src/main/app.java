
import java.com.thoughtworks.rover.Rover;
import java.util.ArrayList;
import java.com.thoughtworks.command.Command;
import java.com.thoughtworks.command.CommandLookup;
import java.com.thoughtworks.direction.Direction;
import java.com.thoughtworks.direction.DirectionLookup;
import java.com.thoughtworks.grid.GridComponent;
import java.com.thoughtworks.grid.GridSurface;
import java.com.thoughtworks.grid.ObstacleCell;

public class app {
    public static void main(String args[]) {
        GridSurface grid = new GridSurface(10, 10);

        int[] xObstacles = { 2, 3 };
        int[] yObstacles = { 2, 5 };

        for (int i = 0; i < 2; i++) {
            GridComponent o = new ObstacleCell(xObstacles[i], yObstacles[i]);
            grid.addObstacles(o);
        }

        Direction direction = DirectionLookup.N.getDirection();
        int x = 0;
        int y = 0;
        Rover rover = new Rover(x, y, direction, grid);

        char[] inputArray = { 'M', 'M', 'R', 'M', 'L', 'M' };
        ArrayList<Command> commandArrayList = new ArrayList<>();

        for (char character : inputArray) {
            Command currentCommand = CommandLookup.valueOf(Character.toString(character)).getCommand();
            commandArrayList.add(currentCommand);
        }

        rover.executeCommandList(commandArrayList);
    }
}
