#pragma once
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>

void gameSetInit();
void startScene();
void gotoxy(int, int);
int keyControl();
int menuMoveCouser();
void clearConsole();

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SUBMIT 0

