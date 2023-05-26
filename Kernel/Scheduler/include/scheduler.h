#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "process.h"
#include "roundRobin.h"

rr_queue_ptr rr_scheduler;                  // la queue definida globalmente, para que las fuciones la puedan utilizar.

rr_queue_ptr create_scheduler(void);
process_ptr current_process(void);
void * scheduler(void * rsp);

int scheduler_enqueue_process(process_ptr p);
int scheduler_create_process(char* name, int argc, char** argv, void (*fn)(int, char **), int visibility, int fd[2]);
int scheduler_dequeue_process(process_ptr p);


uint64_t context_switch(process_ptr process);
void save_rsp(process_ptr process, uint64_t * to_save);

void free_scheduler(void);

#endif
