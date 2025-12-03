#include<unistd.h>
void ft_putchar(char c){write(1,&c,1);}
void ft_putnbr(int n){long nb=n;if(nb<0){ft_putchar('-');nb*=-1;}if(nb>9){ft_putnbr(nb / 10);ft_putnbr(nb % 10);}else ft_putchar(nb + '0');}
int	main(void){int i=1;while(i<=100){if((i%3==0)&&(i%5==0))write(1,"fizzbuzz",8);else if(i%3==0)write(1,"fizz",4);else if(i%5==0)
write(1,"buzz",4);else ft_putnbr(i);ft_putchar('\n');i++;}}