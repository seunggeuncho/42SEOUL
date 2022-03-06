/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seucho <seucho@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:04:37 by seucho            #+#    #+#             */
/*   Updated: 2022/03/06 22:31:36 by seucho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*append_str(char const *save, char const *buf);
char	*ft_strchr(char const *s, int c);
size_t	ft_strlen(const char *s);
char	*update_remain(char **save, size_t offset);
char	*iter_read(char **save, int fd);
char	*get_line(char const *save);
char	*get_next_line(int fd);

#endif
