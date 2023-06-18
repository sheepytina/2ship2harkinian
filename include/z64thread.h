#ifndef Z64THREAD_H
#define Z64THREAD_H

#define Z_THREAD_ID_IDLE     1
#define Z_THREAD_ID_SLOWLY   2
#define Z_THREAD_ID_MAIN     3
#define Z_THREAD_ID_GRAPH    4
#define Z_THREAD_ID_SCHED    5
#define Z_THREAD_ID_FLASHROM 13
#define Z_THREAD_ID_DMAMGR  18
#define Z_THREAD_ID_IRQMGR  19

#define Z_PRIORITY_SLOWLY    5
#define Z_PRIORITY_GRAPH     9
#define Z_PRIORITY_AUDIOMGR 11
#define Z_PRIORITY_IDLE     12
#define Z_PRIORITY_MAIN     12
#define Z_PRIORITY_FLASHROM 13
#define Z_PRIORITY_PADMGR   15
#define Z_PRIORITY_SCHED    16
#define Z_PRIORITY_DMAMGR   17
#define Z_PRIORITY_IRQMGR   18

#endif