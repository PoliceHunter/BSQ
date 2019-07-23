/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:20:59 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/07/23 15:14:32 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SPACE '1'
#define SEPARATOR '1'

#include "../include/ft.h"
#include "../include/list.h"

int find_and_check(char *str, char symbol, char space)
{
	int index = -1;
	while (str[index] != symbol)
	{
		if (str[index] == '\0')
		{
			return -1;
		}
		if (str[index] != space)
		{
			printf("map error");
			exit(1);
		}
		++index;
	}
	return index;
}

int		find_in_line(char *str, char symbol)
{
	int index;

	index = 0;
	while (str[index] != '\n' && str[index] != '\0')
	{
		if (str[index] == symbol)
		{
			return (index);
		}
		++index;
	}
	return (-1);
}

int		find(char *str, char symbol) //по идее, эта функция вообще не нужна, так как она проверяет только 0 символ. Find_in_line вместо нее дб
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == symbol)
			return (index); // ЛИБО ЗДЕСЬ INDEX++ !!!!!

	}
	return (-1);
}

unsigned int get_square_size(char *str, int size_line, char separator)
{
	int square_size;
	int line_index;

	square_size = -1; // мб 0, так как иначе он не зайдет в  цикл никогда. Ну или только если find возвращает всегда -1. Не втыкаю что-то
	line_index = 0;
	while (*str != SEPARATOR && line_index <= square_size) // спаситеПамагите, почему капс? Откуда значение приходит?
	{
		int len_in_line;
	   	
		len_in_line = find(str, separator);
		if (square_size == -1 || square_size > len_in_line)
		{
			square_size = len_in_line;
		}
		str += size_line + 1;
		++line_index;
	}
	return min(square_size, line_index);
}       

int		find_biggest_square(char *input)
{
	int input_square_size;
	int size;
	int offset;
	int index;

	index = 0;
	size = 0;
	offset = 0; //за что отвечает данная переменная?
	input_square_size = find(input, '\n');
	while (input[index] != '\0')
	{
		if (input[index] == SPACE) 
		{
			int square_size;
		   
			square_size	= get_square_size(input + index, input_square_size); //поясни(за передаваемые аргументы в скобках)!! :&
			if (square_size > size)
			{
				size = square_size;
				offset = index;
			}
			index = index + square_size;
		}
		++index;
	}
}
