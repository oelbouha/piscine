/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:14:22 by oelbouha          #+#    #+#             */
/*   Updated: 2022/06/01 20:15:01 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int full_strlen(int size, char **strgs, char *sep)
{
    int i;
    int flen;
    i = 0;
    flen = 0;
    while (i < size)
    {
        flen = flen + ft_strlen(strgs[i]) + ft_strlen(sep);
        i++;
    }
    return (flen);
}
char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
            j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
char    *ft_strjoin(int size, char **strs, char *sep)
{
    int     len;
    char    *string;
    int     i;
    if (size == 0)
    {
        string = (char *)malloc(len * sizeof(char));
        if (string == NULL)
            return (NULL);
        return (string);
    }
    len = full_strlen(size, strs, sep);
    string = (char *)malloc(len * sizeof(char) + 1);
    if (string == NULL)
        return (NULL);
    string[0] = '\0';
    i = 0;
    while (i < size)
    {
        ft_strcat(string, strs[i]);
        if (i < size - 1)
            ft_strcat(string, sep);
        i++;
    }
    return (string);
}
int main()
{
  char  *strs[3];
  char  *separator;
  char  *result;
  int size;
  size = 2;
  strs[0] = "Hello";
  strs[1] = "friend,";
  separator = "++++";
  result = ft_strjoin(size, strs, separator);
  printf("%s\n", result);
  free(result);
	return 0;
}
     
