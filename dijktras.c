#include <stdio.h>
#include <stdbool.h>
#define MAX_VERTICES 100
#define INF 9999999
int graph[MAX_VERTICES][MAX_VERTICES];
int numVertices;
void dijkstra(int startVertex) {
 int distance[MAX_VERTICES];
 bool visited[MAX_VERTICES];
 for (int i = 0; i < numVertices; i++) {
 distance[i] = INF;
 visited[i] = false;
 }
 distance[startVertex] = 0;
 for (int count = 0; count < numVertices - 1; count++) {
 int u = -1;
 for (int v = 0; v < numVertices; v++) {
 if (!visited[v] && (u == -1 || distance[v] < distance[u])) {
 u = v;
 }
 }
 visited[u] = true;
 for (int v = 0; v < numVertices; v++) {
 if (!visited[v] && graph[u][v] && distance[u] + graph[u][v] < distance[v]) {
 distance[v] = distance[u] + graph[u][v];
 }
 }
 }
 printf("Vertex\tDistance from %d\n", startVertex);
 for (int i = 0; i < numVertices; i++) {
 printf("%d\t%d\n", i, distance[i]);
 }
}
int main() {
 printf("Enter the number of vertices: ");
 scanf("%d", &numVertices);
 printf("Enter the adjacency matrix:\n");
 for (int i = 0; i < numVertices; i++) {
 for (int j = 0; j < numVertices; j++) {
 scanf("%d", &graph[i][j]);
 }
 }
 int startVertex;
 printf("Enter the starting vertex: ");
 scanf("%d", &startVertex);
 dijkstra(startVertex);
 return 0;
}
