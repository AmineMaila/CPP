/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:10:24 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/14 21:59:47 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string file1)
{
    infile.open(file1);
    if (!infile.is_open())
        throw std::runtime_error("failed to open " + file1);
}

Replace::~Replace() {}

int _strstr(std::string &line, std::string &word, size_t lastIndex)
{
    for (size_t i = lastIndex; i < line.length(); i++)
    {
        size_t j = 0;
        while (line[i + j] == word[j])
        {
            if (j == word.length() - 1)
                return (i);
            j++;
        }
    }
    return (-1);
}

void    Replace::replace(std::string old, std::string _new, std::string out)
{
    std::ofstream   outfile;
    std::string     line;
    std::string     all;

    while (std::getline(infile, line))
    {
        if (!infile.eof())
            line += '\n';
        all.append(line);
    }
    if (all.empty())
    {
        std::cerr << "Error : empty file" << std::endl;
        return ;
    }
    int index = 0;
    while (true)
    {
        index = _strstr(all, old, index);
        if (index == -1)
            break ;
        all.erase(index, old.length());
        all.insert(index, _new);
        index += _new.length();
    }
    outfile.open(out.append(".replace"));
    if (!outfile.is_open())
        throw std::runtime_error("failed to open outfile");
    outfile << all;
}
