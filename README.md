*This project has been created as part of the 42 curriculum by **kjurkows***

# libft

## Description

`libft` is a substitute library for `libc` & `libbsd`.

All functions are prefixed by `ft_`.

It implements most used `libc`/`libbsd` functions in a safe way, while also implementing additional functions used in **42 curriculum**, those include advanced string operations as well as linked lists.

See [Detailed description](#detailed-description) for list of implemented functions.

## Instructions

### Compilation

To compile `libft` just use `make`

#### `make` targets

> `all` : compile and link everything (default)  
> `libft.a` : link `libft`  
> `clean` : clean objects (remove `*.o` files)  
> `fclean` : full clean (remove everything compiled)  
> `re` : recompile and relink everything  

### Testing

The library is tested with a custom test suite, which can be found [here](https://github.com/Kjur0/42-libft-test).

## Resources

* `man`
* [doxygen manual](https://www.doxygen.nl/manual/index.html)
* C language section on [cppreference](https://en.cppreference.com/c/language)
* [GCC git repository](https://gcc.gnu.org/git.html)

### AI Usage

#### Google search AI mode & AI summaries

AI mode was used for searching through documentations and references.

AI summaries were used to summarize extensive documentations/references (for ease of reading).

#### GitHub Copilot (via VS Code)

AI inline suggestions were used for repetative tasks, such as:
* Writing doxygen docs in `libft.h`
* Creating `Makefile`

### Tools

Main IDE used was VS Code with a few extensions:
- [`42 ft count line`](https://marketplace.visualstudio.com/items?itemName=DoKca.42-ft-count-line), [`42 Header`](https://marketplace.visualstudio.com/items?itemName=kube.42header) and [`42 Norminette Highlighter`](https://marketplace.visualstudio.com/items?itemName=MariusvanWijk-JoppeKoers.codam-norminette-3) were used as aid for **La Norme** compliance
- [`C/C++`](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools), [`C/C++ DevTools`](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpp-devtools) and [`Makefile Tools`](https://marketplace.visualstudio.com/items?itemName=ms-vscode.makefile-tools) were used for IntelliSense

[`norminette`](https://github.com/42school/norminette) was used to check **La Norme** compliance

`make`, `gcc` & `ar` are used for compilation

## Detailed description

`libft` consists of 3 parts:
1. `libc` functions
2. Additional functions
3. linked list

Each function is implemented in a separate file and compliant with **The Norme**

See below for a list of implemented functions and their brief descriptions.  
For detailed descriptions look inside [`libf.h`](libft.h) or specific files.

### Part 1 - `libc` functions

Functions from `libc` that are most commonly needed during **42 curriculum**

#### character checking functions

* [`ft_isalpha`](ft_isalpha.c) - check for an alphabetic character
* [`ft_isdigit`](ft_isdigit.c) - check for a digit
* [`ft_isalnum`](ft_isalnum.c) - check for an alphanumeric character
* [`ft_isascii`](ft_isascii.c) - check is the character in ASCII range
* [`ft_isprint`](ft_isprint.c) - check is the character printable (non-control)

#### character convering functions

* [`ft_tolower`](ft_tolower.c) - convert character to uppercase
* [`ft_toupper`](ft_toupper.c) - convert character to lowercase

#### string manipulation functions

* [`ft_strlen`](ft_strlen.c) - calculate string length
* [`ft_strlcpy`](ft_strlcpy.c)[^bsd] - safely copy a string
* [`ft_strlcat`](ft_strlcat.c)[^bsd] - safely concatenate two strings
* [`ft_strchr`](ft_strchr.c) - locate character in a string
* [`ft_strrchr`](ft_strrchr.c) - locate character in a string (reverse)
* [`ft_strncmp`](ft_strncmp.c) - compare two strings
* [`ft_strnstr`](ft_strnstr.c)[^bsd] - locate a substring in a string
* [`ft_strdup`](ft_strdup.c) - duplicate a string

#### memory manipulating functions

* [`ft_memset`](ft_memset.c) - fill memory area with constant byte
* [`ft_bzero`](ft_bzero.c) - fill memory area with zero
* [`ft_memcpy`](ft_memcpy.c) - copy memory area
* [`ft_memmove`](ft_memmove.c) - move memory area
* [`ft_memchr`](ft_memchr.c) - scan memory for a byte
* [`ft_memcmp`](ft_memcmp.c) - compare memory areas
* [`ft_calloc`](ft_calloc.c) - allocate dynamic memory for an array

#### string converting functions

* [`ft_atoi`](ft_atoi.c) - convert string to a number

[^bsd]: Functions are from `libbsd` not `libc`

### Part 2 - Additional functions

#### string creation function

* [`ft_substr`](ft_substr.c) - create a substring from a string
* [`ft_strjoin`](ft_strjoin.c) - join two strings into a new one
* [`ft_strtrim`](ft_strtrim.c) - trim a string
* [`ft_split`](ft_split.c) - split a string
* [`ft_itoa`](ft_itoa.c) - convert number to string
* [`ft_strmapi`](ft_strmapi.c) - map a string
* [`ft_striteri`](ft_striteri.c) - iterate over a string

#### output writing functions

* [`ft_putchar_fd`](ft_putchar_fd.c) - write a character
* [`ft_putstr_fd`](ft_putstr_fd.c) - write a string
* [`ft_putendl_fd`](ft_putendl_fd.c) - write a string ending with new line
* [`ft_putnbr_fd`](ft_putnbr_fd.c) - write a number

### Part - linked list

#### type definition

Linked list node is implemented as such:
```c
/// linked list node
typedef struct s_list
{
	void			*content; ///< data contained in the node
	struct s_list	*next; ///< pointer to the next node or `0` (last node)
}	t_list;
```

#### functions

* [`ft_lstnew`](ft_lstnew.c) - create a new list node
* [`ft_lstadd_front`](ft_lstadd_front.c) - add node to front of list
* [`ft_lstsize`](ft_lstsize.c) - count nodes in a list
* [`ft_lstlast`](ft_lstlast.c) - get last node of a list
* [`ft_lstadd_back`](ft_lstadd_back.c) - add node to the back of a list
* [`ft_lstdelone`](ft_lstdelone.c) - delete a node
* [`ft_lstclear`](ft_lstclear.c) - delete a list
* [`ft_lstiter`](ft_lstiter.c) - iterate over a list
* [`ft_lstmap`](ft_lstmap.c) - map a list
