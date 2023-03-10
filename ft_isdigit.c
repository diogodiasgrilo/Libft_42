/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:38:15 by diogpere          #+#    #+#             */
/*   Updated: 2023/03/05 14:38:16 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

// int main()
// {
// 	int i;

// 	i = -1;
// 	while (i < 530)
// 	{
// 		printf("%d: %d\n", i, ft_isdigit(i));
// 		i++;
// 	}
// }
