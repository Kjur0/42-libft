*This project has been created as part of the 42 curriculum by **kjurkows***

# ![libft](../../../../ayogun/42-project-badges/blob/main/badges/libftm.png) - Version Extra

> [!IMPORTANT]
> This is the extra version  
> It does not pass `moulinette`

Extra features:
* `ft_printf` & `ft_eprintf`
* Better types (like `bool`)

> [!NOTE]
> The header was split into multiple smaller one (the `libft.h` is kept for compatibility)  
> All headers have been moved to `/include`  
> All source file have been also moved to `/src`

## Description

`libft` is a substitute library for `libc` & `libbsd`.

All functions are prefixed by `ft_`.

It implements most used `libc`/`libbsd` functions in a safe way, while also implementing additional functions used in **42 curriculum**, those include advanced string operations as well as linked lists.

See [Detailed description](#detailed-description) for list of implemented functions.

### Testing

The library is tested with a custom test suite found in `/test`

Most tests for parts 1-3 are taken from [my `libft` tester](https://github.com/Kjur0/42-libft-test).

## Instructions

### Compilation

To compile `libft` just use `make`

#### `make` targets

> `all` : compile and link everything (default)  
> `libft.a` : link `libft`  
> `clean` : clean objects (remove `*.o` files)  
> `fclean` : full clean (remove everything compiled)  
> `re` : recompile and relink everything  
> `test` : test the library

### Usage (inclusion & linking)

#### Inclusion of header files

To include the library just use the `<>` syntax

e.g.:
```c
#include <libft.h>
```

And during the compilation provide the `-I` flag to the includes directory

```shell
cc ... -Ilibft/includes ...
```

#### Linking the library

While linking you need to manually specify the library to use with the `-lft` flag.

Additionally you need to specify the path to library with `-Llibft`.

```shell
cc ... -Llibft -lft
```

Alternatively you can just pass the `libft.a` file to your compiler:

```shell
cc ... libft/libft.a
```

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

AI inline suggestions were used for repetitive tasks, such as:
* Writing doxygen docs in `libft.h`
* Creating `Makefile`

### Tools

Main IDE used was VS Code with a few extensions:
- [`42 ft count line`](https://marketplace.visualstudio.com/items?itemName=DoKca.42-ft-count-line), [`42 Header`](https://marketplace.visualstudio.com/items?itemName=kube.42header) and [`42 Norminette Highlighter`](https://marketplace.visualstudio.com/items?itemName=MariusvanWijk-JoppeKoers.codam-norminette-3) were used as aid for **La Norme** compliance
- [`C/C++`](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools), [`C/C++ DevTools`](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpp-devtools) and [`Makefile Tools`](https://marketplace.visualstudio.com/items?itemName=ms-vscode.makefile-tools) were used for IntelliSense

[`norminette`](https://github.com/42school/norminette) was used to check **La Norme** compliance

`make`, `gcc` & `ar` are used for compilation

## Detailed description

Each function is implemented in a separate file and compliant with **The Norme**

See below for a list of implemented functions and their brief descriptions.  
For detailed descriptions look inside [`libf.h`](include/libft.h) or specific files.

#### character classification ([`ft_char.h`](include/ft_char.h))

* [`ft_isalnum`](src/ft_char/ft_isalnum.c) - check for an alphanumeric character
* [`ft_isalpha`](src/ft_char/ft_isalpha.c) - check for an alphabetic character
* [`ft_islower`](src/ft_char/ft_islower.c) - check for a lowercase letter
* [`ft_isupper`](src/ft_char/ft_isupper.c) - check for an uppercase letter
* [`ft_isdigit`](src/ft_char/ft_isdigit.c) - check for a digit
* [`ft_isxdigit`](src/ft_char/ft_isxdigit.c) - check for a hexadecimal digit
* [`ft_iscntrl`](src/ft_char/ft_iscntrl.c) - check for a control character
* [`ft_isgraph`](src/ft_char/ft_isgraph.c) - check for a graphical symbol
* [`ft_isspace`](src/ft_char/ft_isspace.c) - checks for whitespace character
* [`ft_isblank`](src/ft_char/ft_isblank.c) - check for a blank character
* [`ft_isprint`](src/ft_char/ft_isprint.c) - check is the character printable (non-control)
* [`ft_ispunct`](src/ft_char/ft_ispunct.c) - check for punctaation
* [`ft_isascii`](src/ft_char/ft_isascii.c) - check is the character in ASCII range

#### character manipulation ([`ft_char.h`](include/ft_char.h))

* [`ft_tolower`](src/ft_char/ft_tolower.c) - convert character to uppercase
* [`ft_toupper`](src/ft_char/ft_toupper.c) - convert character to lowercase

#### string manipulation ([`ft_str.h`](include/ft_str.h))

* [`ft_strlcpy`](src/ft_str/ft_strlcpy.c) - safely copy a string
* [`ft_strlcat`](src/ft_str/ft_strlcat.c) - safely concatenate two strings
* [`ft_strdup`](src/ft_str/ft_strdup.c) - duplicate a string
* [`ft_substr`](src/ft_str/ft_substr.c) - create a substring from a string
* [`ft_strjoin`](src/ft_str/ft_strjoin.c) - join two strings into a new one
* [`ft_strtrim`](src/ft_str/ft_strtrim.c) - trim a string
* [`ft_split`](src/ft_str/ft_split.c) - split a string
* [`ft_strmapi`](src/ft_str/ft_strmapi.c) - map a string
* [`ft_striteri`](src/ft_str/ft_striteri.c) - iterate over a string

#### string examination ([`ft_str.h`](include/ft_str.h))

* [`ft_strlen`](src/ft_str/ft_strlen.c) - calculate string length
* [`ft_strncmp`](src/ft_str/ft_strncmp.c) - compare two strings
* [`ft_strchr`](src/ft_str/ft_strchr.c) - locate character in a string
* [`ft_strrchr`](src/ft_str/ft_strrchr.c) - locate character in a string (reverse)
* [`ft_strnstr`](src/ft_str/ft_strnstr.c) - locate a substring in a string

#### numeric convertion ([`ft_str.h`](include/ft_str.h))

* [`ft_atoi`](src/ft_str/ft_atoi.c) - convert string to a number
* [`ft_itoa`](src/ft_str/ft_itoa.c) - convert number to string

#### memory manipulation ([`ft_mem.h`](include/ft_mem.h))

A special type `t_byte` for storing bytes is used.

* [`ft_calloc`](src/ft_mem/ft_calloc.c) - allocate dynamic memory for an array
* [`ft_memchr`](src/ft_mem/ft_memchr.c) - scan memory for a byte
* [`ft_memrchr`](src/ft_mem/ft_memrchr.c) - scan memory for a byte (reverse)
* [`ft_memcmp`](src/ft_mem/ft_memcmp.c) - compare memory areas
* [`ft_memset`](src/ft_mem/ft_memset.c) - fill memory area with constant byte
* [`ft_bzero`](src/ft_mem/ft_bzero.c) - fill memory area with zero
* [`ft_memcpy`](src/ft_mem/ft_memcpy.c) - copy memory area
* [`ft_memmove`](src/ft_mem/ft_memmove.c) - move memory area

#### I/O ([`ft_io.h`](include/ft_io.h))

A basic MACROS (`FD_STDIN`, `FD_STDOUT`, `FD_STDERR`) have been created.

* [`ft_putchar_fd`](src/ft_io/ft_putchar_fd.c) - write a character
* [`ft_putstr_fd`](src/ft_io/ft_putstr_fd.c) - write a string
* [`ft_putendl_fd`](src/ft_io/ft_putendl_fd.c) - write a string ending with new line
* [`ft_putnbr_fd`](src/ft_io/ft_putnbr_fd.c) - write a number

#### `ft_printf` ([`ft_printf.h`](include/ft_printf.h))

> [!NOTE]
> Due to complexity required by `ft_printf` it does not follow the standard of 1 file/function

### linked list ([`ft_lst.h`](include/ft_lst.h))

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

* [`ft_lstnew`](src/ft_lst/ft_lstnew.c) - create a new list node
* [`ft_lstadd_front`](src/ft_lst/ft_lstadd_front.c) - add node to front of list
* [`ft_lstadd_back`](src/ft_lst/ft_lstadd_back.c) - add node to the back of a list
* [`ft_lstsize`](src/ft_lst/ft_lstsize.c) - count nodes in a list
* [`ft_lstlast`](src/ft_lst/ft_lstlast.c) - get last node of a list
* [`ft_lstdelone`](src/ft_lst/ft_lstdelone.c) - delete a node
* [`ft_lstclear`](src/ft_lst/ft_lstclear.c) - delete a list
* [`ft_lstiter`](src/ft_lst/ft_lstiter.c) - iterate over a list
* [`ft_lstmap`](src/ft_lst/ft_lstmap.c) - map a list
