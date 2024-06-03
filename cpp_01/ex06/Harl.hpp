/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:26:20 by mmaila            #+#    #+#             */
/*   Updated: 2024/06/03 17:53:49 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class   Harl
{
public :
    void complain( std::string level );
    Harl( void );
    ~Harl( void );

private :
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
};

#endif