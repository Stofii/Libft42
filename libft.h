/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:21:07 by dstopfer          #+#    #+#             */
/*   Updated: 2022/04/03 18:23:05 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * Checks if c is a alpha numeric character (alphabetic or number)
 * @param c The character.
 * @return Whether c is a alphanumeric character.
 */
int		ft_isalnum(int c);
/**
 * Checks if c is an alphabetical character.
 * @param c The character.
 * @return Whether c is an alphabetical character.
 */
int		ft_isalpha(int c);
/**
 * Checks if c is an ASCII character.
 * @param c The character.
 * @return Whether c is an ASCII character.
 */
int		ft_isascii(int c);
/**
 * Checks if c is a number.
 * @param c The character.
 * @return Whether c is a number.
 */
int		ft_isdigit(int c);
/**
 * Checks if c is a printable character.
 * @param c The character.
 * @return Whether c is a a printable character.
 */
int		ft_isprint(int c);
/**
 * Allocates memory for an array of num objects of size and 
 * initializes all bytes in the allocated storage to zero.
 * @param num Number of objects.
 * @param size Size of each object.
 * @return If allocation succeeds return a pointer to the first 
 * allocated byte that is suitably aligned for any object type. 
 * On failure, returns a null pointer.
 */
int		ft_atoi(const char *str);
/**
 * Copies up to size - 1 characters from the NUL-terminated 
 * string src to dst, NUL-terminating the result. as long as size 
 * is larger than 0. A byte for NUL 
 * should be included in size. Src must be NUL-terminated.
 * @param dest Where src is to be copied to.
 * @param src The string to be copied to dest.
 * @param size How many characters are to be copied.
 * @return The total length of the string it tried to create: 
 * the initial length of dst plus the length of src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/** 
 * Checks the length of str.
 * @param str A string.
 * @return The length of the string.
 */
size_t	ft_strlen(const char *s);
/**
 * Searches for the first occurance of c in ptr up to n. 
 * Checks a memory area instead of just a string 
 * and checks after null terminators.
 * @param ptr Memory area in which the character will be searched.
 * @param value Value to be located.
 * @param n Number of bytes to be analyzed.
 * @return A pointer to the first occurance of c in str 
 * or NULL if t he character does not occur.
 */
int		ft_strncmp(const char *str1, const char *str2, unsigned int n);
/**
 * Converts uppercase letters to lowercase.
 * @param c Letter to be converted if it is uppercase.
 * @return A lowercase letter.
 */
int		ft_tolower(int c);
/**
 * Converts lowercase letters to uppercase.
 * @param c Letter to be converted if it is lowercase.
 * @return An uppercase letter.
 */
int		ft_toupper(int c);
/**
 * Compares str1 and str2 up to n bytes.
 * @param str1 First string to be compared.
 * @param str2 Second string to be compared.
* @param n Amount of bytes to be compared.
 * @return < 0 if str1 is less than str2, > 0 if str2 is less than str1, 
 * 0 if they are equal.
 */
char	*ft_strrchr(const char *str, int c);
/**
 * Returns a pointer to the last occurance of c in str.
 * @param str String in which the character will be searched.
 * @param c Character to be searched for in the string.
 * @return A pointer to the last occurance of c in str.
 */
char	*ft_strchr(const char *str, int c);
/** 
 * Fills src up to n with c.
 * @param src Appointed memory to be filled.
 * @param c Byte to fill src with.
 * @param n The amount of bytes the memory is filled with c.
 * @return A pointer to the memory area of src.
 */
void	*ft_memset(void *str, int c, size_t n);
/** 
 * Fills src up to n with null terminators.
 * @param src Appointed memory to be filled.
 * @param n The amount of bytes the memory is filled with null terminators.
 * @return A pointer to the memory area of src.
 */
void	ft_bzero(void *s, size_t n);
/**
 * Appends the NUL-terminated string src to the end of dst. 
 * It will append at most size - strlen(dst) - 1 bytes, 
 * NUL-terminating the result.
 * @param dest The string that is to be appended upon. 
 * @param src The string that is to be appended to dest.
 * @param size How many characters are to be appended to dest.
 * @return The total length of the string it tried to create: the length of src.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/**
 * Converts a string to integers.
 * @param str The string to be converted.
 * @return The converted value or 0 on error.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * Compares str1 and str2 up to n bytes. It differs from strcmp 
 * in that it compares not just strings and it continues 
 * to check after null terminators.
 * @param ptr1 First memory area to be compared.
 * @param ptr2 Second memory area to be compared.
 * @param n Amount of bytes to be compared.
 * @return < 0 if str1 is less than str2, > 0 if str2 is less than str1, 
 * 0 if they are equal.
 */
void	*ft_memchr(const void *str, int c, size_t n);
/**
 * Checks if the entirity of the needle occurs in the haystack up to n bytes.
 * @param needle The string that has to be searched for in the haystack
 * @param haystack The string that has to be searched in.
 * @param n Number of bytes to be analyzed.
 * @return A pointer to the first character of the first occurance 
 * of needle in the haystack. NULL if haystack doesn't occur anywhere. 
 * Haystack if needle is empty.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * Copies n bytes from memory area src to memory area dest. 
 * Memory areas may not overlap
 * @param dst Appointed memory to be filled.
 * @param src Memory area to be copied from.
 * @param n The amount of bytes copied from src to dest.
 * @return A pointer to the memory area of dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t size);
/**
 * Copies n bytes from memory area src to memory area dest. 
 * Memory areas may overlap
 * @param dst Appointed memory to be filled.
 * @param src Memory area to be copied from.
 * @param n The amount of bytes copied from src to dest.
 * @return A pointer to the memory area of dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t size);
/**
 * Copies str to a new memory location and returns a pointer to that string.
 * @param str The string to be duplicated.
 * @return A pointer to a new memory location with the duplicated string.
 */
void	*ft_calloc(size_t n, size_t size);
/**
 * Copies str to a new memory location and returns a pointer to that string.
 * @param str The string to be duplicated.
 * @return A pointer to a new memory location with the duplicated string.
 */
char	*ft_strdup(const char *s);
/**
 * Allocates (with malloc(3)) and returns a new string, 
 * which is the result of the concatenation of `s1` and `s2`.
 * @param str1 The prefix string.
 * @param str2 The suffix string.
 * @return The new string. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * Allocates (with malloc(3)) and returns a copy of `s1` 
 * with the characters specified in `set` removed from the beginning 
 * and the end of the string.
 * @param str1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);
/**
 * Outputs the character `c` to the given file descriptor.
 * @param str The character to output.
 * @param f The file descriptor on which to write.
 * @return None.
 */
void	ft_putchar_fd(char c, int fd);
/**
 * Outputs the string `s` to the given file descriptor.
 * @param str The string to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * Outputs the string `s` to the given file descriptor, followed by a newline.
 * @param str The string to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putendl_fd(char *s, int fd);
/**
 * Allocates (with malloc(3)) and returns a copy of `s1` 
 * with the characters specified in `set` removed from the beginning 
 * and the end of the string.
 * @param str1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);
/**
 * Outputs the integer `n` to the given file descriptor.
 * @param nbr The integer to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putnbr_fd(int n, int fd);
/**
 * Allocates (with malloc(3)) and returns a string representing 
 * the integer received as an argument. Negative numbers must be handled.
 * @param n the integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n);
/**
 * Allocates (with malloc(3)) and returns an array of strings 
 * obtained by splitting `s` using the character `c` as a delimiter. 
 * The array must be ended by a NULL pointer.
 * @param str The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split. 
 * NULL if the allocation fails.
 */
char	**ft_split(const char *s, char c);
/**
 * Applies the function `f` to each character of the string `s` 
 * to create a new string (with malloc(3)) resulting from 
 * successive applications of `f`.
 * @param str The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications 
 * of `f`. Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * Applies the function f to each character of the string 
 * passed as argument, and passing its index as first argument. 
 * Each character is passed by address to f to be modified if necessary
 * @param str The string on which to iterate.
 * @param f The function to apply to each character.
 * @return None.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
// Bonus content:
/**
 * Allocates (with malloc(3)) and returns a new element. 
 * The variable `content` is initialized with the value 
 * of the parameter `content`. The variable `next` is initialized to NULL.
 * @param content The content to create the new element with.
 * @return The new element.
 */
t_list	*ft_lstnew(void *content);
/**
 * Adds the element `new` at the beginning of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 * @return None
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/**
 * Counts the number of elements in a list.
 * @param lst The beginning of the list.
 * @return Length of the list.
 */
int		ft_lstsize(t_list *lst);
/**
 * Returns the last element of the list.
 * @param lst The beginning of the list.
 * @return Last element of the list.
 */
t_list	*ft_lstlast(t_list *lst);
/**
 * Adds the element `new` at the end of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 * @return none
 */
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * Takes as a parameter an element and frees the memory 
 * of the element`s content using the function `del` 
 * given as a parameter and free the element. 
 * The memory of `next` must not be freed.
 * @param lst The element to free.
 * @param del The address of the function used to delete the content.
 * @return None.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/**
 * Deletes and frees the given element and every successor 
 * of that element, using the function `del` and free(3). 
 * Finally, the pointer to the list must be set to NULL.
 * @param lst The adress of a pointer to an element.
 * @param del The adress of the function 
 * used to delete the content of the element.
 * @return None
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));
/**
 * Iterates the list `lst` and applies the function `f` 
 * to the content of each element.
 * @param lst The adress of a pointer to an element.
 * @param f The adress of the function used to iterate on the list.
 * @return None.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * Iterates the list `lst` and applies the function `f` 
 * to the content of each element. Creates a new list resulting 
 * of the successive applications of the function `f`. 
 * The `del` function is used to delete the content of an element if needed.
 * @param lst The adress of a pointer to an element.
 * @param f The adress of the function used to iterate on the list.
 * @param del The adress of the function used to 
 * delete the content of an element if needed.
 * @return The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
