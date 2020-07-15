/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:33:10 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/15 08:40:00 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_strrev(char *str)
{
	int count;
	int i;
	char c;
	count = count -1;
	while (i < ((count +1)/2))
	{
		c = str[i];
		str[count-1] = c;
		i++;
	}
	return(str);
