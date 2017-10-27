/*
 * scull.h -- definitions for the char module
 *
 * Copyright (C) Ding Peilong <77676182@qq.com>
 */

#ifndef _SCULL_H_
#define _SCULL_H_

#ifndef SCULL_MAJOR
#define SCULL_MAJOR 0   /* dynamic major by default */
#endif

#ifndef SCULL_NR_DEVS
#define SCULL_NR_DEVS 4    /* scull0 through scull3 */
#endif

/*
 * The bare device is a variable-length region of memory.
 * Use a linked list of indirect blocks.
 *
 * "scull_dev->data" points to an array of pointers, each
 * pointer refers to a memory area of SCULL_QUANTUM bytes.
 *
 * The array (quantum-set) is SCULL_QSET long.
 */
#ifndef SCULL_QUANTUM
#define SCULL_QUANTUM 4000
#endif

#ifndef SCULL_QSET
#define SCULL_QSET    1000
#endif

struct scull_dev {
    int quantum;        /* the current quantum size */
    int qset;           /* the current array size */
    struct cdev cdev;   /* Char device structure */
};

#endif /* _SCULL_H_ */
