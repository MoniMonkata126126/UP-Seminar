# Функции
Функцията е парче код, който има име и връща стойност.

```cpp
<тип> <име>(<параметър1>, <параметър2>, ...)
{
    // код
    return <стойност>;
}
```

Типът на изразa след `return` ще бъде преобразуван към типът на функцията!

Пример:

```cpp
int makeItDouble(int x)
{
    return x * 2;
}
```

```cpp
float halveIt(float x)
{
    return x / 2;
}
```

```cpp
int sum(int a, int b)
{
    return a + b;
}
```

```cpp
int isEven(int x)
{
    return x % 2 == 0;
}
```

```cpp
void sayHello()
{
    printf("Hello!");
}
``` 
*void е тип, който не съдържа информация, следователно return не е задължителен. Когато се използва return при void, се пише само ``return;`` без израз/стойност.*

```cpp
void sayHelloOnlyIfEven(int x)
{
    if (!isEven(x))
        return;
    
    printf("Hello!");
}
``` 

Входната функция на програмата е специална, тя ще бъде задължително извикана при стартиране на програмата и не може да липсва.

```cpp
int main()
{
    return 0;
}
```

За да използваме функция, тя трябва да бъде *декларирана* над мястото, където ще бъде извикана.  

*Декларацията* и *дефиницията* не задължително се случват на едно и също място.

```cpp
int sum(int a, int b) // declaration + definition
{
    return a + b;
}

int main()
{
    printf("%d", sum(11, 53)); // OK
    return 0;
}
```

```cpp
int sum(int a, int b); // declaration

int main()
{
    printf("%d", sum(11, 53)); // OK
    return 0;
}

int sum(int a, int b) // definition
{
    return a + b;
}
```

```cpp
int main()
{
    printf("%d", sum(11, 53)); // ERROR!!!
    return 0;
}

int sum(int a, int b) // declaration + definition
{
    return a + b;
}
```