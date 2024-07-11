/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:10:24 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/11 18:09:43 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int _strstr(std::string &line, std::string &word)
{
    for (size_t i = 0; i < line.length(); i++)
    {
        size_t j = 0;
        while (line[i] == word[j])
        {
            if (j == word.length() - 1)
                return (i - j);
            j++;
            i++;
        }
        i -= j;
    }
    return (-1);
}

Replace::Replace(std::string file1)
{
    infile.open(file1);
    if (!infile.is_open())
        throw std::runtime_error("failed to open " + file1);
    outfile.open(file1.append(".replace"));
    if (!outfile.is_open())
    {
        infile.close();
        throw std::runtime_error("failed to open outfile");
    }
}

Replace::~Replace()
{
    infile.close();
    outfile.close();
}

void    Replace::replace(std::string old,std::string _new)
{
    std::string line;
    while (std::getline(infile, line))
    {
        if (!infile.eof())
            line += '\n';
        while (true)
        {
            int index = _strstr(line, old);
            if (index == -1)
                break ;
            line.erase(index, old.length());
            line.insert(index, _new);
        }
        outfile << line;
    }
}
