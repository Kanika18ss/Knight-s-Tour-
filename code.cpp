#include <iostream>

#include <queue>

#include <vector>

#include <climits>

#include <stack>

using namespace std;

class Node {
  public: int x,
  y;
  int dist;
  Node(int x, int y, int dist): x(x),
  y(y),
  dist(dist) {}
};

struct CompareDistance {
  bool operator()(const Node & a,
    const Node & b) {
    return a.dist > b.dist;
  }
};

bool valid(int x, int y) {
  return (x >= 0 && y >= 0 && x < 8 && y < 8);
}

int dijkstraShortestPath(Node src, Node dest, vector < vector < int >> & distance, vector < vector < Node >> & parent) {
  priority_queue < Node, vector < Node > , CompareDistance > pq;
  int dx[] = {
    -2,
    -1,
    1,
    2,
    -2,
    -1,
    1,
    2
  };
  int dy[] = {
    -1,
    -2,
    -2,
    -1,
    1,
    2,
    2,
    1
  };
  pq.push(src);
  distance[src.x][src.y] = 0;

  while (!pq.empty()) {
    Node current = pq.top();
    pq.pop();

    if (current.x == dest.x && current.y == dest.y)
      return distance[current.x][current.y];

    for (int i = 0; i < 8; ++i) {
      int newX = current.x + dx[i];
      int newY = current.y + dy[i];

      if (valid(newX, newY)) {
        int newDist = current.dist + 1;

        if (newDist < distance[newX][newY]) {
          distance[newX][newY] = newDist;
          parent[newX][newY] = current;
          pq.push(Node(newX, newY, newDist));
        }
      }
    }
  }

  return INT_MAX; // If destination is unreachable
}

void printPath(Node src, Node dest,
  const vector < vector < Node >> & parent) {
  stack < Node > path;
  Node current = dest;

  while (!(current.x == src.x && current.y == src.y)) {
    path.push(current);
    current = parent[current.x][current.y];
  }

  path.push(src);
  cout << "The Path of the Knight is: ";

  while (!path.empty()) {
    Node node = path.top();
    cout << "[" << node.x << "," << node.y << "]";
    path.pop();

    if (!path.empty())
      cout << " -> ";
  }

  cout << endl;
}

int main() {
  cout << "\n-------WELCOME TO THE CHESS BOARD GAME ARRANGED BY TANMAY, SAKSHAM AND ANIMA -------*\n\n";
  cout << "Enter the initial coordinates of the knight (x y): ";
  int startX, startY;
  cin >> startX >> startY;

  cout << "Enter the final coordinates (x y): ";
  int endX, endY;
  cin >> endX >> endY;

  Node src(startX, startY, 0);
  Node dest(endX, endY, 0);

  if (!valid(src.x, src.y) || !valid(dest.x, dest.y)) {
    cout << "Invalid coordinates.\n";
    return 0;
  }

  vector < vector < int >> distance(8, vector < int > (8, INT_MAX));
  vector < vector < Node >> parent(8, vector < Node > (8, Node(-1, -1, INT_MAX)));

  int shortestPath = dijkstraShortestPath(src, dest, distance, parent);

  if (shortestPath != INT_MAX) {
    cout << "Shortest path length: " << shortestPath << endl;
    printPath(src, dest, parent);
  } else {
    cout << "No valid path found.\n";
  }

  cout << "\n\n\t\t\t\tTHANK YOU";
  return 0;
}
