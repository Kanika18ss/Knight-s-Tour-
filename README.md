Knight's Tour
=======

## Project Abstract
A Knight in a chessboard can move from any square on the standard chessboard to any other square on the board, given enough turns. Its basic move is two steps forward and one step sideways depending on the direction it is moving. Our task in the project is to build a function that returns the path a knight can move from one square to another in the simplest way, outputting all the squares the Knight will pass through.

## Algorithm Used
In this project I have implemented Dijkstra's algorithm for finding the shortest path between nodes in a weighted graph i.e. represented through (8*8) chessboard. In this context, it optimally determines the shortest path from the knight's initial position to the destination on the chessboard.

### Dijkstra's Algorithm
1. Create a set sptSet (shortest path tree set) that keeps track of vertices included in the shortest path tree, i.e., whose minimum 
   distance from the source is calculated and finalized. Initially, this set is empty. 
2. Assign a distance value to all vertices in the input graph. Initialize all distance values as INFINITE. Assign the distance value as 0 
   for the source vertex so that it is picked first. 
3. While sptSet doesn’t include all vertices 
    * Pick a vertex u that is not there in sptSet and has a minimum distance value. 
    * Include u to sptSet. 
4. Then update the distance value of all adjacent vertices of u. 
    * To update the distance values, iterate through all adjacent vertices. 
    * For every adjacent vertex v, if the sum of the distance value of u (from source) and weight of edge u-v, is less than the     
         distance value of v, then update the distance value of v.
      
## Implementation Output

![image](https://github.com/Kanika18ss/Knight-s-Tour-/assets/110254553/fbc5e1cb-af86-463a-bf3b-d6d540657ce5)

## Data Structures Used
1. **Dijkstra's Algorithm:** Ensures the computation of the shortest path from the source vertex to every other vertex in the graph, assuming non-negative weights. Widely used in routing and network protocols for optimal path determination.
  
2. **Priority Queue:** A data structure storing elements with associated priorities, facilitating efficient retrieval of the element with the highest (or lowest) priority. In the project, it tracks vertices and their tentative distances from the source vertex.

3. **Queues:** A linear data structure that operates in First In First Out (FIFO) order. Employed for managing elements in the project, following the FIFO principle.

4. **Concept of OOPs (Objects and Classes):** The project leverages object-oriented programming principles, utilizing classes and objects to model and implement the knight's movement.



                        

Note: This is C++ code run it on cpp compiler otherwise save your code with file_name.cpp and run on any coding platform.

