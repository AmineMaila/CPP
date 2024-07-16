/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:23:21 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/12 15:05:47 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Replace
{
public :
	Replace(std::string file1);
	~Replace();
    void	replace(std::string old,std::string _new, std::string out);
    
private :
    std::ifstream	infile;
};

#endif