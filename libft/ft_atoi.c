/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:25:48 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/20 15:36:22 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	c = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = (c * 10) + (str[i++] - '0');
	}
	return (sign * c);
}

/* int	main()
{
	int val;
	char *str;
	str = " +-1509.10E";
	val = atoi(str);
	printf("integral number = %d\n", val);
	val = ft_atoi(str);
	printf("asdasd: %d\n", val);
}
 */