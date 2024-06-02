/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:23:21 by mmaila            #+#    #+#             */
/*   Updated: 2024/06/02 20:39:35 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <string>
#include <fstream>

class Replace
{
public :
	Replace(std::string file1);
	~Replace();

    void	replace(std::string old,std::string _new);
    
private :
    std::ifstream	infile;
    std::ofstream	outfile;
};

#endif