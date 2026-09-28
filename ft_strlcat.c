/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:51:48 by fabuassa          #+#    #+#             */
/*   Updated: 2026/09/28 17:31:23 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <bsd/string.h>
size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
size_t srclen;
size_t deslen;
size_t i;

srclen = 0;
deslen = 0;
i = 0;
while (src[srclen] != '\0')
{
    srclen++;
}
while (dst[deslen] != '\0')
{
deslen++;
}
while(i + deslen < size - 1 && src[i] !='\0' )
{
    dst[deslen + i] = src[i];
    i++; 
}
return (deslen + i);
}
int main(){
char	f[] = "farah";
	char	j[] = "jood";

    printf("%zu",strlcat(j,f,5)); 
    printf("%zu",ft_strlcat(j,f,5));
    return (0);
    
    
    
    
}