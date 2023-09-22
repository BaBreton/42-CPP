/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babreton <babreton@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:04:08 by babreton          #+#    #+#             */
/*   Updated: 2023/09/22 13:15:24 by babreton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.cpp"

int	main()
{
	int		t;
	Array<int> array1(5);
	Array<int> array2(1);

	std::cout << "create array1 of size 5 and array2 of size 1" << std::endl << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = array1[i];
			std::cout << "array1[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = array2[i];
			std::cout << "array2[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		array1[i] = i;
	std::cout << "setup array1 value" << std::endl;
	std::cout << "size of array1 is : " << array1.size() << std::endl;
	std::cout << "size of array2 is : " << array2.size() << std::endl;
	array2 = array1;
	std::cout << "array2 = array1" << std::endl;
	std::cout << "size of array1 is : " << array1.size() << std::endl;
	std::cout << "size of array2 is : " << array2.size() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = array1[i];
			std::cout << "array1[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = array2[i];
			std::cout << "array2[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		array1[i] = 5 - i;
	std::cout <<"change value of array 1" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = array1[i];
			std::cout << "array1[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try
		{
			t = array2[i];
			std::cout << "array2[" << i << "] = " << t << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}