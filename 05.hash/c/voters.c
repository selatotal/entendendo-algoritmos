#include <stdio.h>
#include <stdlib.h>
#include "uthash.h"

struct voter {
    char name[100];
    UT_hash_handle hh;
};

struct voter *voters = NULL;

int check_voter(char *name){
    struct voter *s;
    HASH_FIND_STR(voters, name, s);
    if (s){
        return 1;
    }
    return 0;
}

void add_voter(char *name){
    struct voter *s;
    s = (struct voter *)malloc(sizeof *s);
    strcpy(s->name, name);
    HASH_ADD_STR(voters, name, s);
}

void verify_voter(char *name){
    if (check_voter(name)){
        printf("Go Away %s!\n", name);
    } else {
        add_voter(name);
        printf("Let %s vote!\n", name);
    }
}

int main(){
    verify_voter("Tales");
    verify_voter("Adriana");
    verify_voter("Tales");
    return 0;
}