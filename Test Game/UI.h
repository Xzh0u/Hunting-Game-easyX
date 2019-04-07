﻿#pragma once
#ifndef UI_H
#define UI_H
#define WIDTH 800
#define HEIGHT 600
#define GAME_WIDTH 650
#define GAME_HEIGHT 450

#define ANIMAL_HEIGHT 120
#define ANIMAL_WIDTH 160
#define LINE_ONE 130
#define LINE_TWO 290

#define BULLET_GAP 163
#define BULLET_HEIGHT 117

#define BUTTON_GAP 100

#define SUCCESS 0;
#define FAIL -1;

#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

typedef struct animal{
	int x;
	int y;
	float v;
	int typeNumber;
//	struct animal *next;
	IMAGE animal;
	IMAGE backplace;
}ANIMAL;

typedef struct question{
	int first;
	int second;
	char sign;
	bool choice;
	struct question *next;
	ANIMAL *animal;
}QUESTION;

typedef struct bullet{
	int x;
	int y;
	int value;
	struct bullet *next;
}BULLET;

typedef struct background {
	int indexOfBackground;
	IMAGE background[5];
}BKGD;


typedef struct user {
	int score;
	char username[20];
}USER;

int setBackground(BKGD *pointer);
int displayBackground(BKGD *bk);
int displayWindow(USER *pointer);
int displayButton(IMAGE *button, BKGD *bk, USER *head);
int initButton(IMAGE *head);
int displayBullet();
int displayScore(USER *user);
void displayAnimal(QUESTION *head, IMAGE *animal, IMAGE *animal_r);
void imageLoading(IMAGE *animal, IMAGE *animal_r);
int displayBulletNumber(BULLET *head);
int displayQuestion(QUESTION *head);
#endif