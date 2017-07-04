/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:08:00 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/03 18:02:09 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *ft_strstr(char *str, char *to_find)
{
	int i;
	int find_index;
	int remember;

	find_index = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[find_index])
		{
			remember = i;
			while (str[i] == to_find[find_index])
			{
				if (to_find[find_index++ + 1] == '\0')
					return (&str[remember]);
				i++;
			}
			find_index = 0;
			i = remember;
		}
		i++;
	}
	return (0);
}
