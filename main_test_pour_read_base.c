/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:42:32 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/21 18:45:53 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char*	read_base(void);

int		main()
{
	char*	base;

	base = read_base();
	printf("%s", base);
	return (0);
}
