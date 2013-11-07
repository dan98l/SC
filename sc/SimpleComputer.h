#ifndef __GUARD_SIMLECOMPUTER_H
#define __GUARD_SIMLECOMPUTER_H

#include <sys/types.h>
#include <fcntl.h>
#include "myTerm.h"
#include "myBigChars.h"
#include "mySimpleComputer.h"
#include "myReadkey.h"

extern int inst_counter;
extern int accumulator;
extern int big_chars[256];

void print_keys(int x, int y);
void print_flags(int x, int y);
void print_memory(int x, int y, int position);
void print_boxes();
void print_labels();
void print_counter();
int print_mcell(int *bigchars);
void refresh_gui(int position);
int scan_num(int *plus_flag, int *n);
int change_acc(int pos);
int change_cnt(int pos);
int change_mcell(int pos);
int main();

#endif /* __GUARD_SIMLECOMPUTER_H */
