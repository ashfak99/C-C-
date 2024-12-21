#include <stdio.h>

#define MAX_NODES 100

int main() {
    int n, i, j;
    int inDegree[MAX_NODES] = {0};  // Array to store in-degrees
    int outDegree[MAX_NODES] = {0}; // Array to store out-degrees

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int graph[MAX_NODES][MAX_NODES];

    // Input the adjacency matrix
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == 1) {
                outDegree[i]++;
                inDegree[j]++;
            }
        }
    }

    // Display in-degrees and out-degrees
    printf("\nNode\tIn-Degree\tOut-Degree\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\n", i, inDegree[i], outDegree[i]);
    }

    return 0;
}
