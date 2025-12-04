#include<unistd.h>
void ft_putchar(char c){write(1,&c,1);}
int main(int ac, char**av){int i=0;int start=0;int end=0;if(ac==2){while(av[1][i])i++;i--;while(i>=0 && ((av[1][i]>=9&&av[1][i]<=13)||av[1][i]==32))i--;end=i;
while(i>=0&&!((av[1][i]>=9 &&av[1][i]<=13)||av[1][i]==32)){i--;}start=i+1;while(start<=end)ft_putchar(av[1][start++]);}ft_putchar('\n');}
