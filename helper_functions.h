#pragma once

#include <ctype.h>

#include "i7z.h"

int Get_Bits_Value(unsigned long val, int highbit, int lowbit);
int Read_Thermal_Status_CPU(int cpu_num);
float Read_Voltage_CPU(int cpu_num);
void print_family_info(struct family_info* proc_info);
static inline void cpuid(unsigned int info, unsigned int* eax, unsigned int* ebx, unsigned int* ecx, unsigned int* edx);
static inline void get_vendor(char* vendor_string);
int turbo_status();
static inline void get_familyinformation(struct family_info* proc_info);
double estimate_MHz();
uint64_t get_msr_value(int cpu, uint32_t reg, unsigned int highbit, unsigned int lowbit, int* error_indx);
uint64_t set_msr_value(int cpu, uint32_t reg, uint64_t data);
void Print_Version_Information();
void Print_Information_Processor(bool* nehalem, bool* sandy_bridge, bool* ivy_bridge, bool* haswell);
void Test_Or_Make_MSR_DEVICE_FILES();
double cpufreq_info();
int check_and_return_processor(char* strinfo);
int check_and_return_physical_id(char* strinfo);
int check_and_return_core_id(char* strinfo);
void construct_sibling_list(struct cpu_heirarchy_info* chi);
void construct_socket_information(struct cpu_heirarchy_info* chi, struct cpu_socket_info* socket_0, struct cpu_socket_info* socket_1, int socket_0_num,
                                  int socket_1_num);
void print_socket_information(struct cpu_socket_info* socket);
void construct_CPU_Heirarchy_info(struct cpu_heirarchy_info* chi);
void print_CPU_Heirarchy(struct cpu_heirarchy_info chi);
int in_core_list(int ii, int* core_list);
bool file_exists(char* filename);
