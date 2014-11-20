#include <stdio.h>

void print_sys_msg()
{
	printf("Welcome to the Daily Report System! :-)\n");
	printf("Please Log in.\n");
}

char* login(void)
{
	char* username;
	printf("Username:");
	scanf("%s" username);
	if(!find_user(username))
	{
		printf("The User is not exists!\n");
		exit(-1);
	}
	printf("\nPassword:");
	scanf("%s", password);
	if(password != get_password(username))
	{
		printf("You typed wrong password!");
		exit(1);
	}
	return username;
}

void print_welcome_msg(char* username)
{
	printf("Welcome! %s!:-)\n", username);
	printf("------------------\n");
}

void print_menu(void)
{
	printf("Choose what you want to do![a/b/c/d/e]\n");
	printf(" a) Enter the daily work log.\n");
	printf(" b) Enter the Weekly work log.\n");
	printf("*c) Enter the Admin system.(ONLY the Admin can choose this one)\n");
	printf(" d) Change your Password.\n");
	printf(" e) Exit and log out.\n");
}

int main(int argc, char* argv[])
{
	char* username = NULL;
	print_sys_msg();
	username = login();
	print_welcome_msg();
	while(0)
	{
		print_menu();
		process(username);
	}
}

