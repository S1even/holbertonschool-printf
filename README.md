

![images (1)](https://github.com/user-attachments/assets/bb7314f4-363b-446b-bd09-8a73af010f2a)

## Presentation project 

The goal of this collaboration project we are created a function called `_printf`  
The function `_printf` is used to print a character string and returns it to the terminal output


## Format Specifiers

### The format specifiers for this project
```
Prototype : int _printf(const char *format, ...);

c : character
s : string
% : percent sign
d : decimal number 
i : integer

```

## Compilation

```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

## Requirements
```
All the files will be compiled on Ubuntu 20.04 LTS using gcc
All files that contain code use the Betty style

The header files : Main.h
Allowed editors  : vi, vim, emacs

```

## The examples

### String
```
#include "main.h"

int main(void)
{
      _printf("Hello, %s!\n", "everyone")
      return (0)
}
```
`output`
```
Hello, everyone
```

### Integer
```
#include "main.h"

int main(void)
{
      _printf("Number: %d\n", 24)
      return (0)
}
```
`output`
```
Number: 24
```
### Character
```
#include "main.h"

int main(void)
{
      _printf("The character is: %c\n", 'A')
      return (0)
}
```
`Output`
```
The character is: A
```




## Flowchart
![images (1)](https://github.com/user-attachments/assets/9f40a5ed-d97f-4379-8904-df29bd00bb87)


## Man page
You can check the  [Man page](https://github.com/S1even/holbertonschool-printf/blob/main/man_3_printf) of the function here.

## Authors

- [Steven](https://github.com/S1even)
- [Dylan](https://github.com/Bruqui)
