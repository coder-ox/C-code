//
// Created by CoderToro on 2/12/23.
//
#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define WIDTH 25
#define HEIGHT 20

struct node {
    int x, y;
};

struct node snake[100];
int length = 3;
int direction = RIGHT;
int food_x, food_y;

void init_food() {
    food_x = rand() % WIDTH;
    food_y = rand() % HEIGHT;
}

void init_snake() {
    for (int i = 0; i < length; i++) {
        snake[i].x = i;
        snake[i].y = 0;
    }
}

void draw_food() {
    COORD coord;
    coord.X = food_x;
    coord.Y = food_y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    printf("*");
}

void draw_snake() {
    COORD coord;
    for (int i = 0; i < length; i++) {
        coord.X = snake[i].x;
        coord.Y = snake[i].y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        printf("#");
    }
}

void move_snake() {
    for (int i = length - 1; i > 0; i--) {
        snake[i].x = snake[i - 1].x;
        snake[i].y = snake[i - 1].y;
    }
    switch (direction) {
        case UP:
            snake[0].y--;
            break;
        case DOWN:
            snake[0].y++;
            break;
        case LEFT:
            snake[0].x--;
            break;
        case RIGHT:
            snake[0].x++;
            break;
    }
    if (snake[0].x == food_x && snake[0].y == food_y) {
        length++;
        init_food();
    }
}

int main() {
    srand(time(NULL));
    init_food();
    init_snake();

    while (1) {
        system("cls");
        draw_food();
        draw_snake();
        move_snake();

        if (snake[0].x >= WIDTH || snake[0].x < 0 || snake[0].y >= HEIGHT || snake[0].y < 0) {
            break;
        }

        for (int i = 1; i < length; i++) {
            if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
                break;
            }
        }

        if (kbhit()) {
            switch (getch()) {
                case UP:
            }
        }}}

