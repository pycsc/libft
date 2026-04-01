*This project has been created as part of the 42 curriculum by lutsiara.*

# Libft

A custom C library reimplementing standard libc functions alongside additional utility
functions and linked list operations. This library serves as a foundational toolset
used throughout the 42 curriculum.

## Description

Libft provides three categories of functions:

### Part 1 — Libc Reimplementations

Standard C library functions prefixed with `ft_`:

| Category   | Functions                                                                                  |
| ---------- | ------------------------------------------------------------------------------------------ |
| Character  | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower` |
| String     | `ft_strlen` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strlcpy` `ft_strlcat`   |
| Memory     | `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp`                    |
| Conversion | `ft_atoi` `ft_calloc` `ft_strdup`                                                          |

### Part 2 — Additional Functions

Utility functions not found in the standard libc:

| Function        | Description                                     |
| --------------- | ----------------------------------------------- |
| `ft_substr`     | Extract substring from a string                 |
| `ft_strjoin`    | Concatenate two strings into a new one          |
| `ft_strtrim`    | Trim characters from both ends of a string      |
| `ft_split`      | Split a string by a delimiter into an array     |
| `ft_itoa`       | Convert an integer to a string                  |
| `ft_strmapi`    | Apply a function to each character (new string) |
| `ft_striteri`   | Apply a function to each character (in-place)   |
| `ft_putchar_fd` | Write a character to a file descriptor          |
| `ft_putstr_fd`  | Write a string to a file descriptor             |
| `ft_putendl_fd` | Write a string followed by newline to a fd      |
| `ft_putnbr_fd`  | Write an integer to a file descriptor           |

### Part 3 — Linked List (Bonus)

Singly-linked list operations using the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function          | Description                             |
| ----------------- | --------------------------------------- |
| `ft_lstnew`       | Create a new list node                  |
| `ft_lstadd_front` | Add a node at the beginning             |
| `ft_lstadd_back`  | Add a node at the end                   |
| `ft_lstsize`      | Count nodes in the list                 |
| `ft_lstlast`      | Get the last node                       |
| `ft_lstdelone`    | Delete a single node                    |
| `ft_lstclear`     | Delete all nodes                        |
| `ft_lstiter`      | Apply a function to each node           |
| `ft_lstmap`       | Create a new list by mapping a function |

## Instructions

### Requirements

- A C compiler (`cc`, `gcc`, or `clang`)
- `make`

### Compilation

```sh
# Build mandatory part
make

# Build with bonus (linked list functions)
make bonus

# Clean object files
make clean

# Full clean (objects + library)
make fclean

# Rebuild from scratch
make re
```

### Usage

Include the header and link the library when compiling your project:

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror -I/path/to/libft -L/path/to/libft -lft your_file.c
```

## Resources

- [C Standard Library Reference (cppreference)](https://en.cppreference.com/w/c)
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/)
- [BSD libc man pages](https://man.freebsd.org/) — reference for `strlcpy`, `strlcat`

