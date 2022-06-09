#include "shell.h"

void assist_env(void);
void assist_setenv(void);
void assist_unsetenv(void);
void assist_history(void);

/**
 * assist_env - Displays information on the TesTed builtin command 'env'.
 */
void assist_env(void)
{
char *msg = "env: env\n\tPrints the current environment.\n";

write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * assist_setenv - Displays information on the TesTed builtin command 'setenv'.
 */
void assist_setenv(void)
{
char *msg = "setenv: setenv [VARIABLE] [VALUE]\n\tInitializes a new";

write(STDOUT_FILENO, msg, _strlen(msg));
msg = "environment variable, or modifies an existing one.\n\n";
write(STDOUT_FILENO, msg, _strlen(msg));
msg = "\tUpon failure, prints a message to stderr.\n";
write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * assist_unsetenv - Displays information on the TesTed builtin command
 * 'unsetenv'.
 */
void assist_unsetenv(void)
{
char *msg = "unsetenv: unsetenv [VARIABLE]\n\tRemoves an ";

write(STDOUT_FILENO, msg, _strlen(msg));
msg = "environmental variable.\n\n\tUpon failure, prints a ";
write(STDOUT_FILENO, msg, _strlen(msg));
msg = "message to stderr.\n";
write(STDOUT_FILENO, msg, _strlen(msg));
}
