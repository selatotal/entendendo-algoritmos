#include <stdio.h>
#include <stdlib.h>
#include "uthash.h"
#include "utlist.h"

typedef struct list_element_t {
    char *name;
    struct list_element_t *next, *prev;
} list_element_t;

typedef struct graph_t {
    char *name;
    list_element_t *list_head;
    UT_hash_handle hh;
} graph_t;

void add_to_list(graph_t *graph, char *key, char *name){
    graph_t *entry;
    HASH_FIND_STR(graph, key, entry);
    if (!entry){
        entry = (graph_t *)malloc(sizeof *entry);
        entry->list_head = NULL;
        entry->name = key;
        HASH_ADD_STR(graph, name, entry);
    }
    if (name != NULL){
        list_element_t *element;
        element = (list_element_t *)malloc(sizeof *element);
        element->name = name;
        DL_APPEND(entry->list_head, element);
    }
}

int main(){

    struct graph_t *graph;
    add_to_list(graph, "voce", "alice");
    add_to_list(graph, "voce", "bob");
    add_to_list(graph, "voce", "claire");
    add_to_list(graph, "bob", "anuj");
    add_to_list(graph, "bob", "peggy");
    add_to_list(graph, "alice", "peggy");
    add_to_list(graph, "claire", "thom");
    add_to_list(graph, "claire", "jonny");
    add_to_list(graph, "anuj", NULL);
    add_to_list(graph, "peggy", NULL);
    add_to_list(graph, "thom", NULL);
    add_to_list(graph, "jonny", NULL);
    return 0;
}