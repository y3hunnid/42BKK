#include "ft_header.h"

int main(int agrc, char **argv)
{
    char **clues;


    clues = convert_in_array(argv[1]);

    if(!is_correct_params(argv) || agrc != 2)
        print_error();
    else
        rush(clues);
    return(0);
}