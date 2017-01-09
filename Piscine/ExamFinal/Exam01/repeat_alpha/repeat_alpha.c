/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofitch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:28:31 by ofitch            #+#    #+#             */
/*   Updated: 2016/11/15 15:38:30 by ofitch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	//Two counters one to iterate through the array and the other to store whatever our result will be
	int i;
	int count;
	
	//Out loop will start from 0
	i = 0;
	//If my argc is not 2 then we just print a new line
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	//Else we set our count equal to 0 and run this statement
	else
	{
		count = 0;
		//Create a while loop to iterate thorugh the string
		while (argv[1][i] != '\0')
		{
			//If we encounter a lowercaser char then we run this statement.
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				//Store the reult in count variable substract 96 and whatever is left will be in the count.
				count = argv[1][i] - 96;
			}
			//If we encounter an uppercase char then run this 
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				//Same as above store the result, but in this case because 'A' is 65 we want to substract 65 to get 1 for our index.
				count = argv[1][i] - 64;
			}
			//If we encounter a char that is not in the alphabet then we just print and keep going.
			else if (argv[1][i])
			{
				write(1, &argv[1][i], 1);
			}
			//Whatever our counter is for the letter we are going to print it with a while loop. Our count will be the condition
			//We are going to print it until it reaches the index
			while (count > 0)
			{
				write(1, &argv[1][i], 1);
				//take one out until it reaches 0.
				count--;

			}
			//Increase i so the loop repeat for each char.
			i++;
		}
		//When the string is printed write a new line.
		write(1, "\n", 1);
	}
	return (0);
}
