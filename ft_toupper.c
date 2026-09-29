/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:42:11 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/29 12:04:13 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include <ctype.h>
#include<stdio.h>
int ft_toupper(int c)
{
  if ( c >= 'a' && c <= 'z')
  {
    c = c - 32;
  }
  return (c);
}
int main()
{
  printf("%d",ft_toupper(EOF));
    printf("%d",toupper(EOF));
  
}
