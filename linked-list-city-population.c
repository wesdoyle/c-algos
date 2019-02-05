#include "linked-list-city-population.h"
#include <stdio.h>
#include <string.h>

/*--- linked-list-city-population.c ---
 * Reads a text file of city names and populations in the format:
 * Population_City
 * Where:
 * Population is a number of 7 digits,
 * City is a string of length < 64
 * Example: 8623000_NewYork
 * Records are read into a singly linked list ordered by population
 * --- */


struct node {
    char *city;
    int population;
    struct node *next;
};

typedef struct node * link;  // Links are pointers to Nodes
link head;
int node_count;

int add_node (link);
void create_list (void);
int delete_node (void);
int duplicate_node (void);
void free_node (void);
void show_nodes (void);
int compare_nodes (link, link);

int add_node(link to_add)
{
    link copy, prev, curr;
    struct node dummy;
    int i;
}
