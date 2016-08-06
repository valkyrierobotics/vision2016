#! /bin/sh
# Recursively touch all the files in the current directory
# because sometimes the clock becomes skewed and the Makefile
# cannot make the files correctly

find . -exec touch {} \
