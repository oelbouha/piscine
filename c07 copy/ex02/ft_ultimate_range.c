/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:21:32 by oelbouha          #+#    #+#             */
/*   Updated: 2022/05/31 10:16:49 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *arr;
    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    arr = malloc((max - min) * sizeof (int));
    *range = arr;
    if (!arr)
    {
        *range = 0;
        return (-1);
    }
    i = 0;
    while (i < max - min)
    {
        arr[i] = min + i;
        i++;
    }
    return (i);
}
   
int main()
{
    int min = 0;
    int max = 10;
    int i;
    int *arr;
      printf("%d", ft_ultimate_range(&arr, min, max));
    return (0);
}
