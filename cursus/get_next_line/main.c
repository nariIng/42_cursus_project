#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int	fd;
	char	*str;

	fd = open("test", O_RDONLY);
	str = get_next_line(fd);
	printf("%s",str);
	free (str);
	close(fd);
}
