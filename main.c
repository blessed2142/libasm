#include "libasm.h"

int	main(void)
{
	// printf(“\033[0;30m”); // BLACK
	// printf("\033[0;31m"); // RED
	// printf("\033[0;32m"); // GREEN
	// printf("\033[0;33m"); //	YELLOW
	// printf("\033[0;34m"); // BLUE
	// printf("\033[0;35m"); // PURPLE
	// printf("\033[0;36m"); // CYAN 
	// printf("\033[0;37m"); // WHITE
	////////////////////////////////////////////////////////////
	/////				FT_STRLEN							////
	////////////////////////////////////////////////////////////

	printf("\033[0;34m"); // BLUE
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*********");
	printf("\033[0;33m"); //	YELLOW
	printf("📏FT_STRLEN TESTS📏");
	printf("\033[0;34m"); // BLUE
	printf("*********\n");
	printf("*************************************\n");
	printf("*************************************\n");
	printf("                                     \n");


	printf("\033[0;32m"); // GREEN
	printf("Empty string\n");

	printf("\033[0;37m"); // WHITE
	printf("my: %zu\n", ft_strlen(""));
	printf("system's: %lu\n", strlen(""));

	printf("\033[0;32m"); // GREEN
	printf("Common string\n");

	printf("\033[0;37m"); // WHITE
	printf("my: %zu\n", ft_strlen("Literally this string!"));
	printf("system's: %zu\n", strlen("Literally this string!"));

	printf("\033[0;32m"); // GREEN
	printf("Very long string\n");

	printf("\033[0;37m"); // WHITE
	printf("my: %zu\n", ft_strlen("Literally this string! But a little bit longer, blue face baby, blessed baby, baby gun baby Dota2 Baby, 424242424242424242424242412121212121212121211211212212312321342134gbfgdsgfhddfghgfhhfggffhffhgfffhfghfhgfhfhgfghfhgfhfhfghfghfh1"));
	printf("system's: %zu\n", strlen("Literally this string! But a little bit longer, blue face baby, blessed baby, baby gun baby Dota2 Baby, 424242424242424242424242412121212121212121211211212212312321342134gbfgdsgfhddfghgfhhfggffhffhgfffhfghfhgfhfhgfghfhgfhfhfghfghfh1"));
	printf("                                     \n");


	////////////////////////////////////////////////////////////
	/////				FT_STRCPY							////
	////////////////////////////////////////////////////////////

	printf("\033[0;34m"); // BLUE
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*********");
	printf("\033[0;33m"); //	YELLOW
	printf("📝FT_STRCPY TESTS📝");
	printf("\033[0;34m"); // BLUE
	printf("*********\n");
	printf("*************************************\n");
	printf("*************************************\n");
	printf("                                     \n");

	printf("\033[0;32m"); // GREEN
	printf("Empty string\n");

	printf("\033[0;37m"); // WHITE
	char str[1];
	char str_[1];
	printf("my: %s\n", ft_strcpy(str, ""));
	printf("system's: %s\n", strcpy(str_, ""));

	printf("\033[0;32m"); // GREEN
	printf("Common string\n");

	printf("\033[0;37m"); // WHITE
	char str1[23];
	char str1_[23];
	printf("my: %s\n", ft_strcpy(str1,"Literally this string!"));
	printf("system's: %s\n", strcpy(str1_,"Literally this string!"));

	printf("\033[0;32m"); // GREEN
	printf("Very long string\n");

	printf("\033[0;37m"); // WHITE
	char str2[233];
	char str2_[233];
	printf("my: %s\n", ft_strcpy(str2,"Literally this string! But a little bit longer, blue face baby, blessed baby, baby gun baby Dota2 Baby, 424242424242424242424242412121212121212121211211212212312321342134gbfgdsgfhddfghgfhhfggffhffhgfffhfghfhgfhfhgfghfhgfhfhfghfghfh1"));
	printf("system's: %s\n", strcpy(str2_,"Literally this string! But a little bit longer, blue face baby, blessed baby, baby gun baby Dota2 Baby, 424242424242424242424242412121212121212121211211212212312321342134gbfgdsgfhddfghgfhhfggffhffhgfffhfghfhgfhfhgfghfhgfhfhfghfghfh1"));
	printf("                                     \n");

	////////////////////////////////////////////////////////////
	/////				FT_STRCMP							////
	////////////////////////////////////////////////////////////

	printf("\033[0;34m"); // BLUE
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*********");
	printf("\033[0;33m"); //	YELLOW
	printf("𐄷 FT_STRCMP TESTS 𐄷");
	printf("\033[0;34m"); // BLUE
	printf("*********\n");
	printf("*************************************\n");
	printf("*************************************\n");
	printf("                                     \n");

	printf("\033[0;32m"); // GREEN
	printf("2 empty strings\n");

	printf("\033[0;37m"); // WHITE
	printf("my: %d\n", ft_strcmp("", ""));
	printf("system's: %d\n", strcmp("", ""));

	printf("\033[0;32m"); // GREEN
	printf("First empty strings\n");

	printf("\033[0;37m"); // WHITE
	char *string = ft_strdup("");
	char *string1 = ft_strdup("Hello");
	printf("my: %d\n", ft_strcmp(string, string1));
	printf("system's: %d\n", strcmp(string, string1));

	printf("\033[0;32m"); // GREEN
	printf("Second empty strings\n");

	printf("\033[0;37m"); // WHITE
	free(string);
	free(string1);
	string1 = ft_strdup("");
	string = ft_strdup("Hello");
	printf("my: %d\n", ft_strcmp(string1, string));
	printf("system's: %d\n", strcmp(string1, string));

	printf("\033[0;32m"); // GREEN
	printf("Different strings\n");

	printf("\033[0;37m"); // WHITE
	free(string);
	free(string1);
	string1 = ft_strdup("Hello");
	string = ft_strdup("Hello");
	printf("my: %d\n", ft_strcmp(string, string1));
	printf("system's: %d\n", strcmp(string, string1));

	free(string);
	free(string1);
	string1 = ft_strdup("Hello");
	string = ft_strdup("Helloo");
	printf("my: %d\n", ft_strcmp(string, string1));
	printf("system's: %d\n", strcmp(string, string1));

	printf("my: %d\n", ft_strcmp(string1, string));
	printf("system's: %d\n", strcmp(string1, string));

	free(string);
	free(string1);
	string = ft_strdup("Hello");
	string1 = ft_strdup("         Hello");
	printf("my: %d\n", ft_strcmp(string, string1));
	printf("system's: %d\n", strcmp(string, string1));
	free(string);
	free(string1);

	////////////////////////////////////////////////////////////
	/////				FT_WRITE							////
	////////////////////////////////////////////////////////////
	printf("                                     \n");
	printf("\033[0;34m"); // BLUE
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*********");
	printf("\033[0;33m"); //	YELLOW
	printf("✍🏻  FT_WRITE TESTS ✍🏻");
	printf("\033[0;34m"); // BLUE
	printf(" ********\n");
	printf("*************************************\n");
	printf("*************************************\n");
	printf("                                     \n");

	printf("\033[0;32m"); // GREEN
	printf("Standart output\n");
	printf("\033[0;37m"); // WHITE

	errno = 0;
	printf("\n");
	printf("my: %ld\n", ft_write(1, "Blessed Baby\n\n", 14));
	printf("my errno: %d\n", errno);

	errno = 0;
	printf("\n");
	printf("system's: %ld\n", write(1, "Blessed Baby\n\n", 14));
	printf("system's errno: %d\n", errno);

	printf("\033[0;32m"); // GREEN
	printf("\nBad FD\n");
	printf("\033[0;37m"); // WHITE

	errno = 0;
	printf("\n");
	printf("my: %ld\n", ft_write(-1, "Blessed Baby\n\n", 14));
	printf("my errno: %d\n", errno);

	errno = 0;
	printf("\n");
	printf("system's: %ld\n", write(-1, "Blessed Baby\n\n", 14));
	printf("system's errno: %d\n", errno);

	printf("\033[0;32m"); // GREEN
	printf("\nGood FD\n");
	printf("\033[0;37m"); // WHITE

	// int fd = open("file.txt", O_RDWR);
	int fd = open("file.txt", O_RDWR);
	errno = 0;
	printf("\n");
	printf("my: %ld\n", ft_write(fd, "Blessed Baby\n\n", 14));
	printf("my errno: %d\n", errno);

	errno = 0;
	printf("\n");
	printf("system's: %ld\n", write(fd, "Blessed Baby\n\n", 14));
	printf("system's errno: %d\n", errno);

	////////////////////////////////////////////////////////////
	/////				FT_READ  							////
	////////////////////////////////////////////////////////////
	printf("                                     \n");
	printf("\033[0;34m"); // BLUE
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*********");
	printf("\033[0;33m"); //	YELLOW
	printf("📚  FT_READ TESTS 📚");
	printf("\033[0;34m"); // BLUE
	printf("********\n");
	printf("*************************************\n");
	printf("*************************************\n");
	printf("                                     \n");

	printf("\033[0;32m"); // GREEN
	printf("Standart output\n");
	printf("\033[0;37m"); // WHITE

	errno = 0;
	char *buf = malloc(100);
	printf("\n");
	printf("my: %ld\n", ft_read(1, buf, 20));
	printf("my errno: %d\n", errno);

	errno = 0;
	free(buf);
	buf = malloc(100);
	printf("\n");
	printf("my: %ld\n", ft_read(1, buf, 20));
	printf("system's errno: %d\n", errno);

	printf("\033[0;32m"); // GREEN
	printf("\nBad FD\n");
	printf("\033[0;37m"); // WHITE

	errno = 0;
	free(buf);
	buf = malloc(100);
	printf("\n");
	printf("my: %ld\n", ft_read(-1, buf, 14));
	printf("my errno: %d\n", errno);

	errno = 0;
	free(buf);
	buf = malloc(100);
	printf("\n");
	printf("system's: %ld\n", read(-1, buf, 14));
	printf("system's errno: %d\n", errno);

	printf("\033[0;32m"); // GREEN
	printf("\nGood FD\n");
	printf("\033[0;37m"); // WHITE

	// int fd = open("file.txt", O_RDWR);
	fd = open("file.txt", O_RDWR);
	errno = 0;
	printf("\n");
	free(buf);
	buf = malloc(100);
	printf("my: %ld\n", ft_read(fd, buf, 14));
	printf("my buf: %s\n", buf);
	printf("my errno: %d\n", errno);

	errno = 0;
	printf("\n");
	free(buf);
	buf = malloc(100);
	printf("system's: %ld\n", read(fd, buf, 14));
	printf("system's buf: %s\n", buf);
	printf("system's errno: %d\n", errno);
	free(buf);
	////////////////////////////////////////////////////////////
	/////				FT_STRDUP							////
	////////////////////////////////////////////////////////////

	printf("\033[0;34m"); // BLUE
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*********");
	printf("\033[0;33m"); //	YELLOW
	printf("🎭FT_STRDUP TESTS🎭");
	printf("\033[0;34m"); // BLUE
	printf("*********\n");
	printf("*************************************\n");
	printf("*************************************\n");
	printf("                                     \n");

	printf("\033[0;32m"); // GREEN
	printf("Empty string\n");

	printf("\033[0;37m"); // WHITE
	char *strc = ft_strdup("");
	char *strc_ = strdup("");
	printf("my: %s\n", strc);
	printf("system's: %s\n", strc_);
	free(strc);
	free(strc_);
	printf("\033[0;32m"); // GREEN
	printf("Common string\n");

	printf("\033[0;37m"); // WHITE
	char *str1c = ft_strdup("Literally this string!");
	char *str1c_ = strdup("Literally this string!");
	printf("my: %s\n", str1c);
	printf("system's: %s\n", str1c_);
	free(str1c);
	free(str1c_);
	printf("\033[0;32m"); // GREEN
	printf("Very long string\n");

	printf("\033[0;37m"); // WHITE
	char *str2c = ft_strdup("Literally this string! But a little bit longer, blue face baby, blessed baby, baby gun baby Dota2 Baby, 424242424242424242424242412121212121212121211211212212312321342134gbfgdsgfhddfghgfhhfggffhffhgfffhfghfhgfhfhgfghfhgfhfhfghfghfh1");
	char *str2c_ = strdup("Literally this string! But a little bit longer, blue face baby, blessed baby, baby gun baby Dota2 Baby, 424242424242424242424242412121212121212121211211212212312321342134gbfgdsgfhddfghgfhhfggffhffhgfffhfghfhgfhfhgfghfhgfhfhfghfghfh1");
	printf("my: %s\n", ft_strcpy(str2, "Literally this string! But a little bit longer, blue face baby, blessed baby, baby gun baby Dota2 Baby, 424242424242424242424242412121212121212121211211212212312321342134gbfgdsgfhddfghgfhhfggffhffhgfffhfghfhgfhfhgfghfhgfhfhfghfghfh1"));
	printf("system's: %s\n", strcpy(str2_, "Literally this string! But a little bit longer, blue face baby, blessed baby, baby gun baby Dota2 Baby, 424242424242424242424242412121212121212121211211212212312321342134gbfgdsgfhddfghgfhhfggffhffhgfffhfghfhgfhfhgfghfhgfhfhfghfghfh1"));
	printf("                                     \n");
	free(str2c);
	free(str2c_);
}
