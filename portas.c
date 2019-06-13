#include <stdio.h>




int porta_not(a):
    '''Porta NOT. Necessário retorno pela função int para converter tipo booleano'''
    
    return int(not a)


def p2_and(a, b):
    '''Porta AND com 2 entradas'''
    
    return a and b

def p3_and(a, b, c):
    '''Porta AND com 3 entradas'''
    
    return a and b and c


def p2_or(a, b):
    '''Porta OR com 2 entradas'''
    
    return a or b


def p4_or(a, b, c, d):
    '''Porta OR com 4 entradas'''
    
    return a or b or c or d


def p_xor(a, b):
    '''Porta XOR. Necessário retorno pela função int para converter tipo booleano'''
    
    return int(a != b)


print(p_not(0))
print(p_xor(0, 1))
print(p_xor(1, 1))
print(p4_or(0, 0, 0, 1))