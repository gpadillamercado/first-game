#include <stddef.h>
#include <stdlib.h>
#include "weaver.h"

void push_col(struct Tile * this_tile, float angle, int flow, int tile_type) {
    struct Tile* head = this_tile;
    // Traverse to right-most Tile
    while (head->right != NULL) {
        head = head->right;
    }
    // Allocates new memory to the right
    head->right = malloc(sizeof(struct Tile));
    // Set the values
    head->right->x_coord = (*head).x_coord++;
    head->right->y_coord = (*head).y_coord;
    head->right->angle = angle;
    head->right->flow = flow;
    head->right->tile_type = tile_type;
    head->right->filled = 0;
    // Set bidirectionality
    head->right->left = head;
}

void push_row(struct Tile * this_tile, float angle, int flow, int tile_type) {
    struct Tile* head = this_tile;
    // Traverse to bottom-most Tile
    while (head->bottom != NULL) {
        head = head->bottom;
    }
    // Allocates new memory to the bottom
    head->bottom = malloc(sizeof(struct Tile));
    // Set the values
    head->bottom->x_coord = (*head).x_coord;
    head->bottom->y_coord = (*head).y_coord++;
    head->bottom->angle = angle;
    head->bottom->flow = flow;
    head->bottom->tile_type = tile_type;
    head->bottom->filled = 0;
    // Set bidirectionality
    head->bottom->top = head;
}

int tile_row(struct Tile* this_tile) {
    int counter = 0;
    struct Tile* head = this_tile;
    while (head->bottom != NULL) {
        ++counter;
        head = head->bottom;
    }
    return counter;
}

int tile_col(struct Tile* this_tile) {
    int counter = 0;
    struct Tile* head = this_tile;
    while (head->left != NULL){
        ++counter;
        head->bottom;
    }
    return counter;
}

// Needed to tie any loose connections
void weave(struct Tile * this_tile) {

}