# Simple Linux project homework

[![Build Status](https://travis-ci.org/foiht/simple_proj.svg?branch=master)](https://travis-ci.org/joemccann/simple_proj)

To run the project follow instructions below:
## Installation

- Clone the repository
- In the project directory run the command to create an enviroment
```aclocal```
- If you get an error **aclocal not found** - install it and run again *aclocal*
```sudo apt-get install automake```
```aclocal```
- Run autoconf to turn our configure.ac into a configure script
```autoconf```
- Run automake to turn our Makefile.am into a Makefile.in
```automake --add-missing```
- Generate Makefile from Makefile.in:
```./configure```
- To build executable program run *make*
```make```
- Install binary file (might require sudo)
```sudo make install```
- Run *simple_proj* from anywhere!
```simple_proj```

## Deinstallation
- Run the command from the project directory (might require sudo)
```sudo make clean-all```