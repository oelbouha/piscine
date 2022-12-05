/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:09:19 by oelbouha          #+#    #+#             */
/*   Updated: 2022/05/30 11:47:17 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int *ft_range(int min, int max)
{
    int i;
    int *rng;
    if (min >= max)
        return (0);
    else
    {
        i = 0;
        rng = malloc((max - min) * sizeof (int));
        while (min < max)
        {
            rng[i] = min;
            min++;
            i++;
        }
    }
    return (rng);
}
    
int main()
{
    int i;
    int *array;
	int max = 0;
	int min = 10;
    array = ft_range(min, max);
    i = 0;
 	while (i < max - min)
	{	
        printf("%d", array[i]);
		i++;
	}
        return 0;
}
