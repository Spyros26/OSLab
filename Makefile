all: help

help: help.c
	gcc -Wall help.c -o help

