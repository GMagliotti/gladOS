#ifndef _SYSCALL_H
#define _SYSCALL_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/user_syscalls.h"
#include "../include/funclib.h"
#include <string.h>
#include "test_util.h"

int64_t my_getpid();
int64_t my_create_process(char *name, uint64_t argc, char *argv[]);
int64_t my_nice(uint64_t pid, uint64_t newPrio);
int64_t my_kill(uint64_t pid);
int64_t my_block(uint64_t pid);
int64_t my_unblock(uint64_t pid);
int64_t my_sem_open(char *sem_id, uint64_t initialValue);
int64_t my_sem_wait(char *sem_id);
int64_t my_sem_post(char *sem_id);
int64_t my_sem_close(char *sem_id);
int64_t my_yield();
int64_t my_wait(int64_t pid);


#endif