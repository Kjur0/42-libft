cmake_minimum_required(VERSION 3.20)

project(libft LANGUAGES C CXX)

add_library(ft STATIC)

if(MSVC)
	target_compile_options(ft PRIVATE /W4 /WX)
else()
	target_compile_options(ft PRIVATE -Wall -Wextra -Werror)
endif()

target_include_directories(ft PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_sources(ft PRIVATE
	src/ft_char/ft_isalnum.c
	src/ft_char/ft_isalpha.c
	src/ft_char/ft_islower.c
	src/ft_char/ft_isupper.c
	src/ft_char/ft_isdigit.c
	src/ft_char/ft_isxdigit.c
	src/ft_char/ft_iscntrl.c
	src/ft_char/ft_isgraph.c
	src/ft_char/ft_isspace.c
	src/ft_char/ft_isblank.c
	src/ft_char/ft_isprint.c
	src/ft_char/ft_ispunct.c
	src/ft_char/ft_isascii.c
	src/ft_char/ft_tolower.c
	src/ft_char/ft_toupper.c
	src/ft_str/ft_strlcpy.c
	src/ft_str/ft_strlcat.c
	src/ft_str/ft_strdup.c
	src/ft_str/ft_substr.c
	src/ft_str/ft_strjoin.c
	src/ft_str/ft_strtrim.c
	src/ft_str/ft_split.c
	src/ft_str/ft_strmapi.c
	src/ft_str/ft_striteri.c
	src/ft_str/ft_strlen.c
	src/ft_str/ft_strncmp.c
	src/ft_str/ft_strchr.c
	src/ft_str/ft_strrchr.c
	src/ft_str/ft_strnstr.c
	src/ft_str/ft_atoi.c
	src/ft_str/ft_atol.c
	src/ft_str/ft_itoa.c
	src/ft_mem/ft_calloc.c
	src/ft_mem/ft_memchr.c
	src/ft_mem/ft_memrchr.c
	src/ft_mem/ft_memcmp.c
	src/ft_mem/ft_memset.c
	src/ft_mem/ft_bzero.c
	src/ft_mem/ft_memcpy.c
	src/ft_mem/ft_memmove.c
	src/ft_io/ft_putchar_fd.c
	src/ft_io/ft_putstr_fd.c
	src/ft_io/ft_putendl_fd.c
	src/ft_io/ft_putnbr_fd.c
	src/ft_printf/ft_printf.c
	src/ft_printf/ft_printf_utils.c
	src/ft_printf/ft_printf_flags.c
	src/ft_printf/ft_printf_c.c
	src/ft_printf/ft_printf_s.c
	src/ft_printf/ft_printf_p.c
	src/ft_printf/ft_printf_di.c
	src/ft_printf/ft_printf_u.c
	src/ft_printf/ft_printf_x.c
	src/ft_printf/ft_eprintf.c
	src/ft_lst/ft_lstnew.c
	src/ft_lst/ft_lstadd_front.c
	src/ft_lst/ft_lstadd_back.c
	src/ft_lst/ft_lstsize.c
	src/ft_lst/ft_lstlast.c
	src/ft_lst/ft_lstdelone.c
	src/ft_lst/ft_lstclear.c
	src/ft_lst/ft_lstiter.c
	src/ft_lst/ft_lstmap.c
	src/ft_math/ft_abs.c
	src/ft_math/ft_max.c
	src/ft_math/ft_min.c
	src/ft_math/ft_clamp.c
	src/ft_math/ft_pow.c
	src/ft_math/ft_sqrt.c
	src/ft_math/ft_fabs.c
	src/ft_math/ft_fmax.c
	src/ft_math/ft_fmin.c
	src/ft_math/ft_fclamp.c
	src/ft_math/ft_fpow.c
	src/ft_math/ft_ceil.c
	src/ft_math/ft_floor.c
	src/ft_math/ft_round.c
)

enable_testing()

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

add_executable(libft-test ${TEST_SRCS})

target_include_directories(libft-test PRIVATE 
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/tests>
)

target_link_libraries(libft-test PRIVATE
	ft
	GTest::gtest
	GTest::gtest_main
	Threads::Threads
)

set_target_properties(libft-test PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
	CXX_EXTENSIONS OFF
)

target_sources(libft-test PRIVATE
	tests/ft_char/ft_isalnum_tests.cpp
	tests/ft_char/ft_isalpha_tests.cpp
	tests/ft_char/ft_isblank_tests.cpp
	tests/ft_char/ft_iscntrl_tests.cpp
	tests/ft_char/ft_isdigit_tests.cpp
	tests/ft_char/ft_isgraph_tests.cpp
	tests/ft_char/ft_islower_tests.cpp
	tests/ft_char/ft_isprint_tests.cpp
	tests/ft_char/ft_ispunct_tests.cpp
	tests/ft_char/ft_isspace_tests.cpp
	tests/ft_char/ft_isupper_tests.cpp
	tests/ft_char/ft_isxdigit_tests.cpp
	tests/ft_char/ft_isascii_tests.cpp
	tests/ft_char/ft_toupper_tests.cpp
	tests/ft_char/ft_tolower_tests.cpp
	tests/ft_str/ft_strlcpy_tests.cpp
	tests/ft_str/ft_strlcat_tests.cpp
	tests/ft_str/ft_strdup_tests.cpp
	tests/ft_str/ft_substr_tests.cpp
	tests/ft_str/ft_strjoin_tests.cpp
	tests/ft_str/ft_strtrim_tests.cpp
	tests/ft_str/ft_split_tests.cpp
	tests/ft_str/ft_strmapi_tests.cpp
	tests/ft_str/ft_striteri_tests.cpp
	tests/ft_str/ft_strlen_tests.cpp
	tests/ft_str/ft_strncmp_tests.cpp
	tests/ft_str/ft_strchr_tests.cpp
	tests/ft_str/ft_strrchr_tests.cpp
	tests/ft_str/ft_strnstr_tests.cpp
	tests/ft_str/ft_atoi_tests.cpp
	tests/ft_str/ft_atol_tests.cpp
	tests/ft_str/ft_itoa_tests.cpp
	tests/ft_mem/ft_memset_tests.cpp
	tests/ft_mem/ft_bzero_tests.cpp
)

include(GoogleTest)
gtest_discover_tests(libft-test)