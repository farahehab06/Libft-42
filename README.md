
  ## About the Project

**Libft** is one of the first projects in the **42 School curriculum**.

The goal is to recreate a collection of standard C library functions from scratch, gaining a deeper understanding of how these functions work internally.

This project helped me strengthen my knowledge of **C programming, memory management, pointers, strings, and linked lists**, while building a reusable library for future projects at 42.

##  Features

The library includes several categories of functions:

### 1. Libc Functions

Reimplementations of common functions from the C standard library.

- **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String operations:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`
- **Memory operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Conversions:** `ft_atoi`, `ft_toupper`, `ft_tolower`
- **Memory allocation:** `ft_calloc`, `ft_strdup`

### 2. Additional Functions

Useful functions for manipulating strings and working with memory.

- `ft_substr` — Extracts a substring.
- `ft_strjoin` — Joins two strings.
- `ft_strtrim` — Removes specified characters from both ends of a string.
- `ft_split` — Splits a string into an array.
- `ft_itoa` — Converts an integer into a string.
- `ft_strmapi` — Applies a function to each character of a string.
- `ft_striteri` — Iterates over a string and applies a function.
- `ft_putchar_fd` — Writes a character to a file descriptor.
- `ft_putstr_fd` — Writes a string to a file descriptor.
- `ft_putendl_fd` — Writes a string followed by a newline.
- `ft_putnbr_fd` — Writes an integer to a file descriptor.

### 3. Linked List Functions

Functions for creating, managing, and manipulating singly linked lists.

ft_lstnew — Creates a new list node.

ft_lstadd_front — Adds a node to the beginning of a list.

ft_lstsize — Counts the number of nodes.

ft_lstlast — Returns the last node.

ft_lstadd_back — Adds a node to the end of a list.

ft_lstdelone — Deletes a single node.

ft_lstclear — Deletes an entire list.

ft_lstiter — Applies a function to each node.

ft_lstmap — Creates a new list by applying a function to each node.

##  Installation

Clone the repository:

```bash
git clone https://github.com/farahehab06/libft.git
cd libft
```

Compile the library:

```bash
make
```

This generates the static library:

```bash
libft.a
```

##  Usage

Include the library header in your C program:

```c
#include "libft.h"
```

Example:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, 42!";

    printf("Length: %zu\n", ft_strlen(str));
    printf("Is digit: %d\n", ft_isdigit('5'));

    return (0);
}
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Run it:

```bash
./program
```

##  Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Recompiles the library from scratch |

## What I Learned

Through this project, I improved my understanding of:

- Memory allocation and deallocation
- Pointers and pointer arithmetic
- String and memory manipulation
- Linked list data structures
- Makefiles and static libraries
- Writing clean, reusable C code
- Debugging and handling edge cases

##  42 School

This project is part of the **42 curriculum**.
