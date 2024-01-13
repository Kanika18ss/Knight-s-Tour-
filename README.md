#<< Knight-s-Tour >>


## # Project Abstract
A Knight in a chessboard can move from any square on the standard chessboard to any other square on the board, given enough turns. Its basic move is two steps forward and one step sideways depending on the direction it is moving. Our task in the project is to build a function that returns the path a knight can move from one square to another in the simplest way, outputting all the squares the Knight will pass through.

## Algorithm Used
In this project I have implemented Dijkstra's algorithm for finding the shortest path between nodes in a weighted graph i.e. represented through (8*8) chessboard. In this context, it optimally determines the shortest path from the knight's initial position to the destination on the chessboard.

![image](https://github.com/Kanika18ss/Knight-s-Tour-/assets/110254553/fbc5e1cb-af86-463a-bf3b-d6d540657ce5)

## Data Structures Used
1. **Dijkstra's Algorithm:** Ensures the computation of the shortest path from the source vertex to every other vertex in the graph, assuming non-negative weights. Widely used in routing and network protocols for optimal path determination.
  
2. **Priority Queue:** A data structure storing elements with associated priorities, facilitating efficient retrieval of the element with the highest (or lowest) priority. In the project, it tracks vertices and their tentative distances from the source vertex.

3. **Queues:** A linear data structure that operates in First In First Out (FIFO) order. Employed for managing elements in the project, following the FIFO principle.

4. **Concept of OOPs (Objects and Classes):** The project leverages object-oriented programming principles, utilizing classes and objects to model and implement the knight's movement.


