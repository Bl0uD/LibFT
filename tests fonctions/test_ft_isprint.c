#include "../libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test (ft_isprint_test, min_printable_char){
int nb = ft_isprint(32);
cr_assert(nb == 1);
}

Test (ft_isprint_test, non_printable_char){
int nb = ft_isprint(31);
cr_assert(nb == 0);
}

Test (ft_isprint_test, max_ascii){
int nb = ft_isprint(127);
cr_assert(nb == 0);
}

Test (ft_isprint_test, max_ascii_printable){
int nb = ft_isprint(126);
cr_assert(nb == 1);
}

Test (ft_isprint_test, zero){
int nb = ft_isprint(0);
cr_assert(nb == 0);
}
