# c-academic-projects

Projects made for my academic classes in the first term. They are  written in C.

I am the author of every file and wrote them by myself.

#### quadratic-equation.c

The program reads 3 real numbers *a*,*b* and *c*, then computes quadratic equation a·x^2 + b·x + c = 0. It prints information whether there are no results in real numbers or one result when delta is 0 or two results when delta is positive.

#### amount-in-cash.c

The program reads the amount in złoty and groszy given as integer numbers. It prints this amount in the least number of bills and coins possible.

Program czyta kwotę podaną w postaci całkowitej liczby złoty i całkowitej liczby groszy, a następnie drukuje w jaki sposób wypłacić ją jak najmniejszą liczbą banknotów i monet.

#### arithmetic-mean.c

The program reads integer number *n*, then reads *n* of real numbers. As result, it prints the arithmetic mean of given values.

Program czyta liczbę całkowitą *n*, a następnie wczytuje *n* liczb rzeczywistych. Na koniec drukuje średnią arytmetyczną wczytanych wartości rzeczywistych.

#### euler.c

Euler function: τ(n) = |{(a,b) ∈ {1,...,n}^2 : NWD(a,b) = 1}| is a number of relatively prime pairs and both numbers in the pair are from boundary of 1 to n.
The program prints in the following lines the *n* and *τ(n)* separeted by semicolon (CSV format).

Funkcja Eulera: τ(n) = |{(a,b) ∈ {1,...,n}^2 : NWD(a,b) = 1}| wyznacza liczbę par liczb względnie pierwszych, gdzie obie liczby w parze są z zakresu 1,..., n.
Program drukuje w kolejnych wierszach po dwie oddzielone średnikiem liczby n i τ(n), dla n = 1,...,1000 (CSV).

#### match.c

```c
bool match(char* pattern, char* chain)
```

The function determines the compability of the pattern with a chain. Sign '*?*' in the patter means the compability with any other sign. Sign ’\*’ means the compability with any, even empty, series of signs in the chain. Other signs means compability only with itselves.

Funkcja ustala zgodność wzorca z łańcuchem. Znak ’?’ we wzorcu oznacza zgodność z dowolnym innym znakiem. Znak ’\*’ oznacza zgodność z dowolnym, również pustym, ciągiem znaków w łańcuchu. Znak różny od ’?’ i ’\*’ oznacza zgodność tylko z samym sobą.

#### mastermind.c

Mastermind game. The computer is a decoder. In a pill, pick up 4 digits from 1 to 6 in order and computer will try to figure them out.
