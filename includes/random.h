#ifndef RANDOM_H
# define RANDOM_H

# include <strings.h>
# include <types.h>

void		ft_srand(t_u64 seed);
t_u64		ft_rand(t_u64 a, t_u64 b);

t_u8		rand_next_u8(void);
t_u16		rand_next_u16(void);
t_u32		rand_next_u32(void);
t_u64		rand_next_u64(void);

t_i8		rand_next_i8(void);
t_i16		rand_next_i16(void);
t_i32		rand_next_i32(void);
t_i64		rand_next_i64(void);

t_string	rand_next_string(t_u64 len);
bool		rand_coinflip(void);

#endif // RANDOM_H
