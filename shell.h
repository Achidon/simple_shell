#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

<<<<<<< HEAD
/* This is for write and read buffer */
=======
/* for read/write buffers */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

<<<<<<< HEAD
/* This is for convert_number() */
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/* This is for command chaining */
=======
/* for command chaining */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
#define CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	3

<<<<<<< HEAD
/* Set to 1 if using system getline() */
#define USE_GETLINE 0
#define USE_STRTOK 0

#define HIST_FILE   ".simple_shell_history"
#define HIST_MAX    4096

extern char **environ;

/**
 * struct liststr - This is singly linked list
 * @num: for the number field
 * @str: This is a string
 * @next: This will points to the next node
 */

=======
/* for convert_number() */
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/* 1 if using system getline() */
#define USE_GETLINE 0
#define USE_STRTOK 0

#define HIST_FILE	".simple_shell_history"
#define HIST_MAX	4096

extern char **environ;


/**
 * struct liststr - singly linked list
 * @num: the number field
 * @str: a string
 * @next: points to the next node
 */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
typedef struct liststr
{
	int num;
	char *str;
	struct liststr *next;
} list_t;

/**
<<<<<<< HEAD
 *struct builtin - This will contain the builtin string and function
 *@type: This is the builtin for command flag
 *@func: This is the function
 */

typedef struct builtin
{
	char *type;
	int (*func)(ino_t *);
} builtin_table;

/* For toem_shloop.c */
int hsh(ino_t *, char **);
int find_builtin(ino_t *);
void find_cmd(ino_t *);
void fork_cmd(ino_t *);

/* For toem_parser.c */
int is_cmd(ino_t *, char *);
char *dup_chars(char *, int, int);
char *find_path(ino_t *, char *, char *);

=======
 * struct passinfo - contains pseudo-arguements that passes into a function,
 * allowing uniform prototype for function pointer structure
 * @arg: the string generated from getline containing arguments
 * @argv:an array of strings generated from arguments
 * @path: current command string path
 * @argc: argument count
 * @line_count: error count
 * @err_num: error code for exit/s
 * @linecount_flag: line of output
 * @fname: program filename
 * @env: list local copy of environment
 * @environ: modified custom copy of env from list local env
 * @history: history node
 * @alias: alias node
 * @env_changed: turns on if env was changed
 * @status: return status of the last exec'd command
 * @cmd_buf: address of pointer to command_buffer, on if chaining
 * @cmd_buf_type: Command_type ||, &&, ;
 * @readfd: perform the read operation
 * @histcount: history line count
 */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *history;
	list_t *alias;
	char **environ;
	int env_changed;
	int status;

<<<<<<< HEAD
	char **cmd_buf; /* pointer to cmd ; chain buffer, for memory mangement */
	int cmd_buf_type; /* CMD_type ||, &&, ; */
=======
	char **cmd_buf; /* pointer to command ; chain buf, for memory management */
	int cmd_buf_type; /* Command_type ||, &&, ; */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
	int readfd;
	int histcount;
} info_t;

#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
<<<<<<< HEAD
	0, 0, 0}

int loophsh(char **);
=======
		0, 0, 0}

/**
 * struct builtin - contains a builtin string and structure function
 * @type: builtin command flag
 * @func: it is the function
 */
typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
} builtin_table;


/* toem_shloop.c */
int hsh(info_t *, char **);
int find_builtin(info_t *);
void find_cmd(info_t *);
void fork_cmd(info_t *);

/* toem_parser.c */
int is_cmd(info_t *, char *);
char *dup_chars(char *, int, int);
char *find_path(info_t *, char *, char *);

/* loophsh.c */
int loophsh(char **);

/* toem_errors.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
void _eputs(char *);
int _eputchar(char);
int _putfd(char c, int fd);
int _putsfd(char *str, int fd);
<<<<<<< HEAD
=======

/* toem_string.c */
int _strlen(char *);
int _strcmp(char *, char *);
char *starts_with(const char *, const char *);
char *_strcat(char *, char *);

/* toem_string1.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
char *_strcpy(char *, char *);
char *_strdup(const char *);
void _puts(char *);
int _putchar(char);
<<<<<<< HEAD
char *_strncpy(char *, char *, int);
char *_strncat(char *, char *, int);
char *_strchr(char *, char);
int _strlen(char *);
int _strcmp(char *, char *);
char *starts_with(const char *, const char *);
char *_strcat(char *, char *);

char **strtow(char *, char *);
char **strtow2(char *, char);

=======

/* toem_exits.c */
char *_strncpy(char *, char *, int);
char *_strncat(char *, char *, int);
char *_strchr(char *, char);

/* toem_tokenizer.c */
char **strtow(char *, char *);
char **strtow2(char *, char);

/* toem_realloc.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
char *_memset(char *, char, unsigned int);
void ffree(char **);
void *_realloc(void *, unsigned int, unsigned int);

<<<<<<< HEAD
int bfree(void **);

=======
/* toem_memory.c */
int bfree(void **);

/* toem_atoi.c */
int interactive(info_t *);
int is_delim(char, char *);
int _isalpha(int);
int _atoi(char *);

/* toem_errors1.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
int _erratoi(char *);
void print_error(info_t *, char *);
int print_d(int, int);
char *convert_number(long int, int, int);
void remove_comments(char *);

<<<<<<< HEAD
int interactive(info_t *);
int is_delim(char, char *);
int _isalpha(int);
int _atoi(char *);

=======
/* toem_builtin.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
int _myexit(info_t *);
int _mycd(info_t *);
int _myhelp(info_t *);

<<<<<<< HEAD
int _myhistory(info_t *);
int _myalias(info_t *);

void clear_info(info_t *);
void set_info(info_t *, char **);
void free_info(info_t *, int);

=======
/* toem_builtin1.c */
int _myhistory(info_t *);
int _myalias(info_t *);

/*toem_getline.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
ssize_t get_input(info_t *);
int _getline(info_t *, char **, size_t *);
void sigintHandler(int);

<<<<<<< HEAD
=======
/* toem_getinfo.c */
void clear_info(info_t *);
void set_info(info_t *, char **);
void free_info(info_t *, int);

/* toem_environ.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
char *_getenv(info_t *, const char *);
int _myenv(info_t *);
int _mysetenv(info_t *);
int _myunsetenv(info_t *);
int populate_env_list(info_t *);

<<<<<<< HEAD
=======
/* toem_getenv.c */
char **get_environ(info_t *);
int _unsetenv(info_t *, char *);
int _setenv(info_t *, char *, char *);

/* toem_history.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
char *get_history_file(info_t *info);
int write_history(info_t *info);
int read_history(info_t *info);
int build_history_list(info_t *info, char *buf, int linecount);
int renumber_history(info_t *info);

<<<<<<< HEAD
char **get_environ(info_t *);
int _unsetenv(info_t *, char *);
int _setenv(info_t *, char *, char *);

=======
/* toem_lists.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
list_t *add_node(list_t **, const char *, int);
list_t *add_node_end(list_t **, const char *, int);
size_t print_list_str(const list_t *);
int delete_node_at_index(list_t **, unsigned int);
void free_list(list_t **);

<<<<<<< HEAD
=======
/* toem_lists1.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
size_t list_len(const list_t *);
char **list_to_strings(list_t *);
size_t print_list(const list_t *);
list_t *node_starts_with(list_t *, char *, char);
ssize_t get_node_index(list_t *, list_t *);

<<<<<<< HEAD
=======
/* toem_vars.c */
>>>>>>> 0712d623063e235d02521a5ea12e6566c70393d2
int is_chain(info_t *, char *, size_t *);
void check_chain(info_t *, char *, size_t *, size_t, size_t);
int replace_alias(info_t *);
int replace_vars(info_t *);
int replace_string(char **, char *);

#endif
