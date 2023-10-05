package java.com.thoughtworks.grid;

public class ObstacleCell implements GridComponent {

    private int x;
    private int y;

    public ObstacleCell(int x, int y) {
        this.x = x;
        this.y = y;
    }

    @Override
    public void display() {
        System.out.print(this.x);
        System.out.print(" ");
        System.out.print(this.y);
    }

    public int getX() {
        return this.x;
    }

    public int getY() {
        return this.y;
    }
};
