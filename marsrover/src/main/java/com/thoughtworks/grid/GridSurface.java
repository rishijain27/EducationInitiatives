package java.com.thoughtworks.grid;

import java.util.*;
// import java.util.Iterator;

public class GridSurface implements GridComponent {

    private final int xUpperCoordinate;
    private final int yUpperCoordinate;
    private final int xLowerCordinate = 0;
    private final int yLowerCoordinate = 0;
    private Set<GridComponent> obstacles;

    public GridSurface(int xUpperCoordinate, int yUpperCoordinate) {
        this.xUpperCoordinate = xUpperCoordinate;
        this.yUpperCoordinate = yUpperCoordinate;
    }

    public void addObstacles(GridComponent obstacle) {
        obstacles.add(obstacle);
    }

    @Override
    public void display() {
        // Iterator iter = obstacles.iterator();
        // while (iter.hasNext()) {
        // iter.next();
        // }
    }

    public Set<GridComponent> getObstacles() {
        return this.obstacles;
    }

    public int getXUpperCoordinate() {
        return this.xUpperCoordinate;
    }

    public int getYUpperCoordinate() {
        return this.yUpperCoordinate;
    }

    public int getXLowerCoordinate() {
        return this.xLowerCordinate;
    }

    public int getYLowerCoordinate() {
        return this.yLowerCoordinate;
    }
};
