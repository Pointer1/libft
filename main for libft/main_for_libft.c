/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_for_libft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:42:42 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/07 14:00:44 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char s1[] = "hello world";
	//char d1[] = "123456789";
	char s[] = "hello world";
	//char d[] = "123456789";
	printf("%s -  memmove\n",memmove(s+2, s, 2));
	printf("%s -  ft_memmove\n",ft_memmove(s1+2, s1, 2));
	printf("\n");
	printf("%s - string  memmove\n",s);
	printf("%s - string  ft_memmove\n",s1);
	

	//****************__COLOR__***********************
	//printf("\x1B[1;31;43mHello, World!\x1B[0m\n");
	//printf("%s\n",d);
	 printf("\x1b[31m%s\x1b[0m - string  ft_memmove\n",s1);
	// printf("\x1b[32mThis is 32\x1b[0m\n");
	// printf("\x1b[33mThis is 33\x1b[0m\n");
	// printf("\x1b[34mThis is 34\x1b[0m\n");
	// printf("\x1b[35mThis is 35\x1b[0m\n");
	// printf("\x1b[36mThis is 36\x1b[0m\n");
	// printf("\n");
	// printf("\x1b[41mThis is 41\x1b[0m\n");
	// printf("\x1b[42mThis is 42\x1b[0m\n");
	// printf("\x1b[43mThis is 43\x1b[0m\n");
	// printf("\x1b[44mThis is 44\x1b[0m\n");
	// printf("\x1b[45mThis is 45\x1b[0m\n");
	// printf("\x1b[46mThis is 46\x1b[0m\n");
	// printf("\n");
	// printf("\x1b[1mThis is 1\x1b[0m\n");
	// printf("\x1b[2mThis is 2\x1b[0m\n");
	// printf("\x1b[3mThis is 3\x1b[0m\n");
	// printf("\x1b[4mThis is 4\x1b[0m\n");
	// printf("\n");
	// printf("\x1b[7mThis is 7\x1b[0m\n");
	//****************__COLOR__************************
}