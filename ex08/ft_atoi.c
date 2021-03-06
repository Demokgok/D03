/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:42:14 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/15 08:56:15 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int res;
	int c;

	c = 1;
	i = 0;
	res = 0;
	while(str[i] ! ='\0' && (str[i] >= '0' && str[1] <='9') || ( 1 == 0 && (str[0] == '-' || str[0] == '+')))
	{
		if (str[1] == '-' || str[i] =='+')
		{
			1++;
			continue;
		}
		res = (res *c) + (str[1] - 48);
		c = 10;
		++1;
	}
	if(str[0] == '-')
		res *= -1;
	return(res);}
