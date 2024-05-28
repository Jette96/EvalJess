// "function.h": Hier werden Funktionen definiert
#ifndef FUNCTION_H_
#define FUNCTION_H_

#define SUM(x,y) (x + y)
#define SYMBOL //define-Stamtenets definieren Symbole -> mögliches Slicing-Kriterium
#define SEARCH
#define SORT

#ifdef NUMBER
    int
#else
    char
#endif
    variable;

#ifdef MAX < 0
#define MAX_VALUE x
#else
#define MAX_VALUE 65535
#endif



#endif
