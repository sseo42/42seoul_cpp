/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:09:54 by sseo              #+#    #+#             */
/*   Updated: 2021/02/17 17:19:17 by sseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "hello!\n";
}

Pony::~Pony()
{
	std::cout << "bye...\n";
}

void	ponyOnTheHeap(void)
{
	Pony	*pony_heap;

	pony_heap = new Pony();
	std::cout << "i'm pony on the heap: " << (void *)pony_heap << "\n";
	delete pony_heap;
}

void	ponyOnTheStack(void)
{
	Pony	pony_stack;

	std::cout << "i'm pony on the stack: " << (void *)(&pony_stack) << "\n";
}
