/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:00:46 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/15 08:03:25 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void ft_div_mod(int a, int b, int *div, int mod)
{
	*div = a / b;
	*mod = a % b;
}

