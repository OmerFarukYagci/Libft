*This project has been created as part of the 42 curriculum by omyagci.*

# Libft

## Description
**Libft** is a foundational project that plays a central role in the educational philosophy of the 42 curriculum. The primary objective of this project is to construct a customized C library architecture by analyzing standard C library functions down to the finest detail, re-coding them from scratch, and developing functional additional tools. This generated `libft.a` static library serves as a fundamental building block in subsequent projects within the curriculum; functioning as a comprehensive, developer-specific technical toolkit that provides complete mastery over string manipulation, precise memory management, and linked list data structures.

## Instructions

### Compilation
To compile the library, navigate to the project root and run:

```bash
make
```

This command generates the `libft.a` static library.

**Other Make commands:**
- `make clean`: Removes object files (`.o`).
- `make fclean`: Removes object files and the `libft.a` library.
- `make re`: Recompiles the library from scratch.

### Usage
To use `libft` in your projects:
1. Include the header file in your C source code:
   ```c
   #include "libft.h"
   ```
2. Compile your code linking against the library:
   ```bash
   cc main.c -L. -lft -o my_program
   ```

## Resources

### References and Documentation
The following resources were utilized during the development of this project:

- **Official Documentation:**
  - **Linux Man Pages (`man 3`):** Used as the primary source to examine the behaviors, parameters, and return values of standard C library functions.
  - **C Standard Library Documentation:** Official reference for ensuring `libc` function compliance.

- **Academic Resources:**
  - **Istanbul Technical University - Introduction to Programming Lecture Notes:** Lecture materials prepared by Dr. H. Turgut Uyar were used to thoroughly reinforce fundamental concepts.

- **Online Resources:**
  The following websites were consulted for code examples, technical explanations, and best practices:
  - [IBM Documentation](https://www.ibm.com/docs)
  - [Tutorialspoint](https://www.tutorialspoint.com)
  - [GeeksforGeeks](https://www.geeksforgeeks.org)

### AI Usage
As per project requirements, Artificial Intelligence tools were used in the following capacity:
- **Conceptual Reinforcement:** The logic and algorithms of the code were created through personal reasoning. AI was used not to get direct code solutions, but rather as a "consultant" to understand the edge cases of original `libc` functions, clarify memory management concepts, and better grasp the technical terminology in `man` pages.

## Library Contents

The library includes the following functions:

### Libc Functions
Re-implementations of standard C functions:
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`
- `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`
- `ft_calloc`, `ft_strdup`

### Additional Functions
Utility functions for strings and memory:
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Linked List Functions
Functions for manipulating lists:
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`