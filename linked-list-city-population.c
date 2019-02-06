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
 * Example: 8623000NewYork
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

int compare_nodes(link a, link b)
{
    // returns -1, 0, or 1 => if data in a is less than, equal to, greater than b

    if (a->population != b->population)
        return(a->population - b->population);

    return strcmp(a->city, b->city);
}

void create_list(void)
{
    head=NULL;
    node_count=0;
}

void show_nodes(void)
{
    link pn;
    int count, median;

    // count the nodes
    for (count = 0, pn=head; pn; pn = pn->next)
        count += 1;

    median = count / 2 + 1;

    // step through the list, printing cities and populations.
    if (count)
    {
        count = 0;
        for(pn=head; pn; pn=pn->next)
        {
            printf("%-20s: %3d", pn->city, pn->population);
            count += 1;
            if (count == median)
                printf(" <-- Median ");
            printf("\n");
        }
    }
    else
        printf("Empty list\n");
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

int main(int argc, char *argv[])
{
    FILE *fin;          // file read from
    char buffer[128];  // where file is read into
    struct node n;     // the node we add each time

    if (argc != 2)
    {
        fprintf(stderr, "Usage: linked-list-city-population.ext\n");
        exit(EXIT_FAILURE);
    }

    fin = fopen(argv[1], "rt");

    if (fin == NULL)
    {
        fprintf(stderr, "Cannot open file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    // create and initialize empty linked list
    create_list();

    // main loop
    while(!feof(fin))
    {
        if(fgets(buffer, 127, fin) == NULL)
            break;

        // get rid of the trailing return
        buffer [strlen(buffer) - 1] = '\0';

        n.city = strdup(buffer+3);

        buffer[7] = '\0';

        n.population = atoi(buffer);

        if (add_node(&n) == 0)
        {
            fprintf(stderr, "Error adding node! Exiting program.");
            exit(EXIT_FAILURE);
        }
    }

    show_nodes();

    printf("\n");
    delete_node(head);
    show_nodes();

    while (head && head->next)
    {
        printf("\n");
        delete_node(head->next);
        show_nodes();
    }

    printf("\n");
    delete_node(head);
    show_nodes();

    fclose(fin);
    return(EXIT_SUCCESS);
}
