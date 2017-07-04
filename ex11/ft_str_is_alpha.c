/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 21:04:22 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/03 21:10:03 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else if (*str >= 'A' && *str <= 'Z')
			str++;
		else if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}
