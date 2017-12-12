/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uboumedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:01:14 by uboumedj          #+#    #+#             */
/*   Updated: 2017/11/14 12:12:33 by uboumedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return ((c == '\t') || (c == '\v')
			|| (c == '\n') || (c == '\r')
			|| (c == '\f') || (c == ' '));
}
