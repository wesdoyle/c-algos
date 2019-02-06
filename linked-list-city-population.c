#include "linked-list-city-population.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
int delete_node (link);
int duplicate_node(link);
void free_node (link);
void show_nodes (void);
int compare_nodes (link, link);

int add_node(link to_add)
{
    link copy, prev, curr;
    struct node dummy;
    int i;

    // copy the input node
    copy = (link) malloc(sizeof(struct node));
    if (copy == NULL)
        return 0;

    memcpy(copy, to_add, sizeof(struct node));

    // create a dummy node
    dummy.next = head;
    prev = &dummy;
    curr = head;

    // insert node copy
    for (;; prev=curr, curr=curr->next)
    {
        if (curr == NULL)
            break; // the end has been reached
        i = compare_nodes(copy, curr);

        if (i <= 0)
            break; // copy precedes current
    }

    if (curr && i == 0) // duplicate
        if (duplicate_node(copy) == 0)
            return (1);

    prev -> next = copy;
    copy -> next = curr;
    head = dummy.next;

    return (1);
}

int duplicate_node(link dupe)
{
    free_node(dupe);
    return (0);
}

void free_node(link n)
{
    free(n->city);
    free(n);
}

int delete_node(link to_delete)
{
    link curr, prev;
    int i;

    // is there anything in the list?
    if (head==NULL)
        return (0);

    // step through the list looking for the node
    for (prev=NULL, curr=head;
            curr != NULL && (i = compare_nodes(to_delete, curr)) < 0;
            prev=curr, curr=curr->next); // loop around

    // a match is found; delete it.
    if (curr != NULL && i == 0)
    {
        if (prev)
            prev->next = curr->next;
        else
            head = curr->next;

        free_node(curr);
        node_count -= 1;
        return (1);
    }

    return (0);
}
