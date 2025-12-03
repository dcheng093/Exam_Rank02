#include<unistd.h>
void ft_putchar(char c){write(1,&c,1);}
int	main(int ac, char**av){int i=0;if(ac==2){while((av[1][i]>=9&&av[1][i]<=13)||(av[1][i]==32))i++;
while(av[1][i]&&!(((av[1][i]>=9&&av[1][i]<=13)||(av[1][i]==32)))){ft_putchar(av[1][i]);i++;}}ft_putchar('\n');}