/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:25:02 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/15 08:27:40 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_strlen(char *str)
{
	int count;
	count = 0;
	while (str[count] ! = '\0')
		count++;
	return(count);
}
