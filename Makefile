CC = gcc
FLAGS=-Wall -Werror -Wextra -std=c11 -g -fsanitize=address


all: s21_fabs.c
	$(CC) $(FLAGS) s21_fabs.c -o s21_fabs
	./s21_fabs
