# Rec0v3r h4rv4rd
## CS50 

### Goal:
__Implement a program that recovers JPEGs from a forensic image, per the below.__

```cmd
$ ./recover card.raw
```

### Specification 
Implement a program called recover ``recover`` that recovers JPEGs from a forensic image.

* Implement your program in a file called ``recover.c`` ~~in a directory called ``recover``~~

* Your program should accept exactly one command-line argument, the name of a forensic image from which to recover JPEGs.

* If your program is not executed with exactly one command-line argument, it should remind the user of correct usage, and ``main`` should return ``1``.

* Your program, if it uses ``malloc``, must not leak any memory.

### Usage 

Your program should behave per the examples below.

```cmd
$ ./recover
Usage: ./recover image
```

```cmd
$ ./recover card.raw
```

