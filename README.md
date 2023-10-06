# Rover
- The x, y, and a letter designating one of the four cardinal compass points are used to represent a rover's position and location. To make navigation easier, the plateau has been divided into a grid that contains -barriers that the rover cannot manoeuvre around. The rover is in the bottom left corner, facing north, in an example position of (0, 0, N).

- The rover is able to move in any of the four directions—North, South, East, or West—but it is unable to move when there are obstacles in the grid and it is also unable to leave the grid.

# Desgin Patterns
- In order to implement my code in a clear and understandable manner, I decided against heavily commenting it and instead chose to name my methods and variables in a way that anyone can understand. I tried to make the code as short and clear as I could.

- I started by figuring out the objects and interfaces I would require, including the Grid, Rover, Direction, and Command. I created these using the most fundamental POJOs (plain old Java objects).  I then started researching how to apply design patterns.

- I have attempted to implement two Design Patterns that I studied for this task in order to show, as per the specification, that I can use strong Object Oriented (OO) programming concepts. To represent the Grid, which contained a Grid Component as a composite and Obstacle Cells as Leaf nodes, I first studied and applied the Composite design pattern. Second, for sending and carrying out the various Commands the Rover needed to carry out, I studied and applied the Command design pattern. Since this is my first solo exploration of these Design Patterns, I understand that it may not be an exact implementation of them.

- Finally, I'd love the chance to talk about Design Pattern implementations because I'm sure there's a lot I can learn and do to get better in these areas.

# Assumed

- The bottom right coordinates are always (0, 0) when a Plateau is created.
- (X, Y + 1) is the square to the north of (X, Y).

# Validations

The rover does not leave the grid component, and if it lands on obstacles, an error is thorwn, and the rover is moved backwards in accordance with that.


