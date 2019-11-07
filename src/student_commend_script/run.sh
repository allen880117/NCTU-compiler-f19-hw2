#!/bin/sh
make clean
yacc -d parser.y
make
