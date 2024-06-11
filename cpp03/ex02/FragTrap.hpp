/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:02:48 by elisevanite       #+#    #+#             */
/*   Updated: 2024/06/11 11:51:47 by elisevanite      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAG_HPP
#define FRAGTRAG_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
  FragTrap(const std::string& name);
  ~FragTrap();

  void highFivesGuys(void);

};

#endif
