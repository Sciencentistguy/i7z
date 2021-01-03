#pragma once
#include "i7z.h"

int Single_Socket();

void print_i7z_socket_single(struct cpu_socket_info socket_0, int printw_offset, int PLATFORM_INFO_MSR, int PLATFORM_INFO_MSR_high, int PLATFORM_INFO_MSR_low,
                             int* online_cpus, double cpu_freq_cpuinfo, struct timespec one_second_sleep, char TURBO_MODE, char* HT_ON_str, int* kk_1,
                             uint64_t* old_val_CORE, uint64_t* old_val_REF, uint64_t* old_val_C3, uint64_t* old_val_C6, uint64_t* old_val_C7,
                             uint64_t* old_TSC, int estimated_mhz, uint64_t* new_val_CORE, uint64_t* new_val_REF, uint64_t* new_val_C3, uint64_t* new_val_C6,
                             uint64_t* new_val_C7, uint64_t* new_TSC, double* _FREQ, double* _MULT, long double* C0_time, long double* C1_time,
                             long double* C3_time, long double* C6_time, long double* C7_time, struct timeval* tvstart, struct timeval* tvstop,
                             int* max_observed_cpu);

void print_i7z_single();
