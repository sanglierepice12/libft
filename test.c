#include <stdio.h>
#include <string.h>

int main() {
    unsigned int	a = 5;
	unsigned int	b = 4;
	unsigned int	c = 12;
	unsigned int result = a&b&c;
	printf("result = %d", result);
    return 0;
}
