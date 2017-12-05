# 1 "linux-2.6.26/kernel/sysctl.c"
# 1 "/data/harsha/mpi_project/ns-allinone-3.13/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "linux-2.6.26/include/linux/config.h" 1





# 1 "linux-2.6.26/include/linux/autoconf.h" 1
# 7 "linux-2.6.26/include/linux/config.h" 2
# 1 "<command-line>" 2
# 1 "linux-2.6.26/nsc/nsc_override.h" 1




#include "num_stacks.h"
static inline struct task_struct * nsc_get_task(void)
{
  typedef  struct task_struct   _GLOBAL_0_T; extern  _GLOBAL_0_T  * _GLOBAL_0_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_1_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_2_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_3_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_4_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_5_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_6_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_7_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_8_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_9_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_10_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_11_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_12_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_13_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_14_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_15_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_16_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_17_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_18_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_19_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_20_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_21_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_22_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_23_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_24_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_25_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_26_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_27_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_28_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_29_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_30_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_31_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_32_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_33_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_34_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_35_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_36_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_37_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_38_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_39_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_40_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_41_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_42_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_43_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_44_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_45_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_46_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_47_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_48_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_49_nsc_task_I ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_nsc_task_I) *_GLOBAL_nsc_task_0_A[NUM_STACKS] = { &_GLOBAL_0_nsc_task_I, &_GLOBAL_1_nsc_task_I, &_GLOBAL_2_nsc_task_I, &_GLOBAL_3_nsc_task_I, &_GLOBAL_4_nsc_task_I, &_GLOBAL_5_nsc_task_I, &_GLOBAL_6_nsc_task_I, &_GLOBAL_7_nsc_task_I, &_GLOBAL_8_nsc_task_I, &_GLOBAL_9_nsc_task_I, &_GLOBAL_10_nsc_task_I, &_GLOBAL_11_nsc_task_I, &_GLOBAL_12_nsc_task_I, &_GLOBAL_13_nsc_task_I, &_GLOBAL_14_nsc_task_I, &_GLOBAL_15_nsc_task_I, &_GLOBAL_16_nsc_task_I, &_GLOBAL_17_nsc_task_I, &_GLOBAL_18_nsc_task_I, &_GLOBAL_19_nsc_task_I, &_GLOBAL_20_nsc_task_I, &_GLOBAL_21_nsc_task_I, &_GLOBAL_22_nsc_task_I, &_GLOBAL_23_nsc_task_I, &_GLOBAL_24_nsc_task_I, &_GLOBAL_25_nsc_task_I, &_GLOBAL_26_nsc_task_I, &_GLOBAL_27_nsc_task_I, &_GLOBAL_28_nsc_task_I, &_GLOBAL_29_nsc_task_I, &_GLOBAL_30_nsc_task_I, &_GLOBAL_31_nsc_task_I, &_GLOBAL_32_nsc_task_I, &_GLOBAL_33_nsc_task_I, &_GLOBAL_34_nsc_task_I, &_GLOBAL_35_nsc_task_I, &_GLOBAL_36_nsc_task_I, &_GLOBAL_37_nsc_task_I, &_GLOBAL_38_nsc_task_I, &_GLOBAL_39_nsc_task_I, &_GLOBAL_40_nsc_task_I, &_GLOBAL_41_nsc_task_I, &_GLOBAL_42_nsc_task_I, &_GLOBAL_43_nsc_task_I, &_GLOBAL_44_nsc_task_I, &_GLOBAL_45_nsc_task_I, &_GLOBAL_46_nsc_task_I, &_GLOBAL_47_nsc_task_I, &_GLOBAL_48_nsc_task_I, &_GLOBAL_49_nsc_task_I, };   
  return (*_GLOBAL_nsc_task_0_A[get_stack_id()]);
}
# 1 "<command-line>" 2
# 1 "linux-2.6.26/kernel/sysctl.c"
# 21 "linux-2.6.26/kernel/sysctl.c"
# 1 "linux-2.6.26/include/linux/module.h" 1
# 9 "linux-2.6.26/include/linux/module.h"
# 1 "linux-2.6.26/include/linux/list.h" 1



# 1 "linux-2.6.26/include/linux/stddef.h" 1



# 1 "linux-2.6.26/include/linux/compiler.h" 1
# 40 "linux-2.6.26/include/linux/compiler.h"
# 1 "linux-2.6.26/include/linux/compiler-gcc4.h" 1





# 1 "linux-2.6.26/include/linux/compiler-gcc.h" 1
# 7 "linux-2.6.26/include/linux/compiler-gcc4.h" 2
# 41 "linux-2.6.26/include/linux/compiler.h" 2
# 5 "linux-2.6.26/include/linux/stddef.h" 2
# 15 "linux-2.6.26/include/linux/stddef.h"
enum {
 false = 0,
 true = 1
};
# 5 "linux-2.6.26/include/linux/list.h" 2
# 1 "linux-2.6.26/include/linux/poison.h" 1
# 6 "linux-2.6.26/include/linux/list.h" 2
# 1 "linux-2.6.26/include/linux/prefetch.h" 1
# 13 "linux-2.6.26/include/linux/prefetch.h"
# 1 "linux-2.6.26/include/linux/types.h" 1
# 11 "linux-2.6.26/include/linux/types.h"
# 1 "linux-2.6.26/include/linux/posix_types.h" 1
# 36 "linux-2.6.26/include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "linux-2.6.26/include/asm/posix_types.h" 1




# 1 "linux-2.6.26/include/asm/posix_types_64.h" 1
# 10 "linux-2.6.26/include/asm/posix_types_64.h"
typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef unsigned long __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef __kernel_uid_t __kernel_uid32_t;
typedef __kernel_gid_t __kernel_gid32_t;

typedef unsigned long __kernel_old_dev_t;




static inline  __attribute__((always_inline)) void __FD_SET(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] |= (1UL<<_rem);
}


static inline  __attribute__((always_inline)) void __FD_CLR(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] &= ~(1UL<<_rem);
}


static inline  __attribute__((always_inline)) int __FD_ISSET(unsigned long fd, __const__ __kernel_fd_set *p)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 return (p->fds_bits[_tmp] & (1UL<<_rem)) != 0;
}






static inline  __attribute__((always_inline)) void __FD_ZERO(__kernel_fd_set *p)
{
 unsigned long *tmp = p->fds_bits;
 int i;

 if (__builtin_constant_p((1024/(8 * sizeof(unsigned long))))) {
  switch ((1024/(8 * sizeof(unsigned long)))) {
  case 32:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
   tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
   tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
   tmp[16] = 0; tmp[17] = 0; tmp[18] = 0; tmp[19] = 0;
   tmp[20] = 0; tmp[21] = 0; tmp[22] = 0; tmp[23] = 0;
   tmp[24] = 0; tmp[25] = 0; tmp[26] = 0; tmp[27] = 0;
   tmp[28] = 0; tmp[29] = 0; tmp[30] = 0; tmp[31] = 0;
   return;
  case 16:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
   tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
   tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
   return;
  case 8:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
   return;
  case 4:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   return;
  }
 }
 i = (1024/(8 * sizeof(unsigned long)));
 while (i) {
  i--;
  *tmp = 0;
  tmp++;
 }
}
# 6 "linux-2.6.26/include/asm/posix_types.h" 2
# 48 "linux-2.6.26/include/linux/posix_types.h" 2
# 12 "linux-2.6.26/include/linux/types.h" 2
# 1 "linux-2.6.26/include/asm/types.h" 1



# 1 "linux-2.6.26/include/asm-generic/int-ll64.h" 1
# 17 "linux-2.6.26/include/asm-generic/int-ll64.h"
typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 40 "linux-2.6.26/include/asm-generic/int-ll64.h"
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;
# 5 "linux-2.6.26/include/asm/types.h" 2



typedef unsigned short umode_t;
# 25 "linux-2.6.26/include/asm/types.h"
typedef u64 dma64_addr_t;


typedef u64 dma_addr_t;
# 13 "linux-2.6.26/include/linux/types.h" 2



typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;


typedef _Bool bool;

typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;

typedef unsigned long uintptr_t;
# 57 "linux-2.6.26/include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 66 "linux-2.6.26/include/linux/types.h"
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
# 142 "linux-2.6.26/include/linux/types.h"
typedef unsigned long sector_t;
# 151 "linux-2.6.26/include/linux/types.h"
typedef unsigned long blkcnt_t;
# 180 "linux-2.6.26/include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;


typedef unsigned gfp_t;




typedef u32 resource_size_t;


struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 14 "linux-2.6.26/include/linux/prefetch.h" 2
# 1 "linux-2.6.26/include/asm/processor.h" 1



# 1 "linux-2.6.26/include/asm/processor-flags.h" 1
# 5 "linux-2.6.26/include/asm/processor.h" 2


struct task_struct;
struct mm_struct;

# 1 "linux-2.6.26/include/asm/vm86.h" 1
# 68 "linux-2.6.26/include/asm/vm86.h"
struct vm86_regs {



 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 long __null_ds;
 long __null_es;
 long __null_fs;
 long __null_gs;
 long orig_eax;
 long eip;
 unsigned short cs, __csh;
 long eflags;
 long esp;
 unsigned short ss, __ssh;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct revectored_struct {
 unsigned long __map[8];
};

struct vm86_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
};






struct vm86plus_info_struct {
 unsigned long force_return_for_pic:1;
 unsigned long vm86dbg_active:1;
 unsigned long vm86dbg_TFpendig:1;
 unsigned long unused:28;
 unsigned long is_vm86pus:1;
 unsigned char vm86dbg_intxxtab[32];
};

struct vm86plus_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
};
# 144 "linux-2.6.26/include/asm/vm86.h"
# 1 "linux-2.6.26/include/asm/ptrace.h" 1




# 1 "linux-2.6.26/include/asm/ptrace-abi.h" 1
# 90 "linux-2.6.26/include/asm/ptrace-abi.h"
struct ptrace_bts_config {

 __u32 size;

 __u32 flags;

 __u32 signal;

 __u32 bts_size;
};
# 6 "linux-2.6.26/include/asm/ptrace.h" 2
# 97 "linux-2.6.26/include/asm/ptrace.h"
struct pt_regs {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long bp;
 unsigned long bx;

 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long ax;
 unsigned long cx;
 unsigned long dx;
 unsigned long si;
 unsigned long di;
 unsigned long orig_ax;


 unsigned long ip;
 unsigned long cs;
 unsigned long flags;
 unsigned long sp;
 unsigned long ss;

};







# 1 "linux-2.6.26/include/asm/ds.h" 1
# 24 "linux-2.6.26/include/asm/ds.h"
# 1 "linux-2.6.26/include/linux/init.h" 1
# 135 "linux-2.6.26/include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


extern char  __attribute__ ((__section__(".init.data"))) boot_command_line[];
typedef  char  _GLOBAL_1_T; extern  _GLOBAL_1_T  * global_saved_command_line[NUM_STACKS];   
typedef  unsigned int   _GLOBAL_2_T; extern  _GLOBAL_2_T  global_reset_devices[NUM_STACKS];    


void setup_arch(char **);
void prepare_namespace(void);

typedef  void   ( *_GLOBAL_4_T  )  ( void  ) ; extern  _GLOBAL_4_T global_late_time_init[NUM_STACKS];   
# 209 "linux-2.6.26/include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 240 "linux-2.6.26/include/linux/init.h"
void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) parse_early_param(void);
# 25 "linux-2.6.26/include/asm/ds.h" 2

struct cpuinfo_x86;







enum bts_qualifier {
 BTS_INVALID = 0,
 BTS_BRANCH,
 BTS_TASK_ARRIVES,
 BTS_TASK_DEPARTS
};

struct bts_struct {
 u64 qualifier;
 union {

  struct {
   u64 from_ip;
   u64 to_ip;
  } lbr;


  u64 jiffies;
 } variant;
};





extern int ds_allocate(void **, size_t);
extern int ds_free(void **);
extern int ds_get_bts_size(void *);
extern int ds_get_bts_end(void *);
extern int ds_get_bts_index(void *);
extern int ds_set_overflow(void *, int);
extern int ds_get_overflow(void *);
extern int ds_clear(void *);
extern int ds_read_bts(void *, int, struct bts_struct *);
extern int ds_write_bts(void *, const struct bts_struct *);
extern unsigned long ds_debugctl_mask(void);
extern void   __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) ds_init_intel(struct cpuinfo_x86 *c);
# 132 "linux-2.6.26/include/asm/ptrace.h" 2

struct task_struct;

extern void ptrace_bts_take_timestamp(struct task_struct *, enum bts_qualifier);

extern unsigned long profile_pc(struct pt_regs *regs);

extern unsigned long
convert_ip_to_linear(struct task_struct *child, struct pt_regs *regs);





void signal_fault(struct pt_regs *regs, void *frame, char *where);


static inline  __attribute__((always_inline)) unsigned long regs_return_value(struct pt_regs *regs)
{
 return regs->ax;
}
# 161 "linux-2.6.26/include/asm/ptrace.h"
static inline  __attribute__((always_inline)) int user_mode(struct pt_regs *regs)
{



 return !!(regs->cs & 3);

}

static inline  __attribute__((always_inline)) int user_mode_vm(struct pt_regs *regs)
{




 return user_mode(regs);

}

static inline  __attribute__((always_inline)) int v8086_mode(struct pt_regs *regs)
{



 return 0;

}







static inline  __attribute__((always_inline)) unsigned long kernel_trap_sp(struct pt_regs *regs)
{



 return regs->sp;

}

static inline  __attribute__((always_inline)) unsigned long instruction_pointer(struct pt_regs *regs)
{
 return regs->ip;
}

static inline  __attribute__((always_inline)) unsigned long frame_pointer(struct pt_regs *regs)
{
 return regs->bp;
}





extern void user_enable_single_step(struct task_struct *);
extern void user_disable_single_step(struct task_struct *);

extern void user_enable_block_step(struct task_struct *);






struct user_desc;
extern int do_get_thread_area(struct task_struct *p, int idx,
         struct user_desc *info);
extern int do_set_thread_area(struct task_struct *p, int idx,
         struct user_desc *info, int can_allocate);
# 145 "linux-2.6.26/include/asm/vm86.h" 2

struct kernel_vm86_regs {



 struct pt_regs pt;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct kernel_vm86_struct {
 struct kernel_vm86_regs regs;
# 171 "linux-2.6.26/include/asm/vm86.h"
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
 struct pt_regs *regs32;
# 188 "linux-2.6.26/include/asm/vm86.h"
};
# 204 "linux-2.6.26/include/asm/vm86.h"
static inline  __attribute__((always_inline)) int handle_vm86_trap(struct kernel_vm86_regs *a, long b, int c)
{
 return 0;
}
# 11 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/math_emu.h" 1







struct info {
 long ___orig_eip;
 long ___ebx;
 long ___ecx;
 long ___edx;
 long ___esi;
 long ___edi;
 long ___ebp;
 long ___eax;
 long ___ds;
 long ___es;
 long ___fs;
 long ___orig_eax;
 long ___eip;
 long ___cs;
 long ___eflags;
 long ___esp;
 long ___ss;
 long ___vm86_es;
 long ___vm86_ds;
 long ___vm86_fs;
 long ___vm86_gs;
};
# 12 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/segment.h" 1
# 140 "linux-2.6.26/include/asm/segment.h"
# 1 "linux-2.6.26/include/asm/cache.h" 1
# 141 "linux-2.6.26/include/asm/segment.h" 2
# 201 "linux-2.6.26/include/asm/segment.h"
extern const char early_idt_handlers[32][10];
# 13 "linux-2.6.26/include/asm/processor.h" 2

# 1 "linux-2.6.26/include/asm/sigcontext.h" 1
# 121 "linux-2.6.26/include/asm/sigcontext.h"
struct _fpstate {
 __u16 cwd;
 __u16 swd;
 __u16 twd;

 __u16 fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 reserved2[24];
};


struct sigcontext {
 unsigned long r8;
 unsigned long r9;
 unsigned long r10;
 unsigned long r11;
 unsigned long r12;
 unsigned long r13;
 unsigned long r14;
 unsigned long r15;
 unsigned long di;
 unsigned long si;
 unsigned long bp;
 unsigned long bx;
 unsigned long dx;
 unsigned long ax;
 unsigned long cx;
 unsigned long sp;
 unsigned long ip;
 unsigned long flags;
 unsigned short cs;
 unsigned short gs;
 unsigned short fs;
 unsigned short __pad0;
 unsigned long err;
 unsigned long trapno;
 unsigned long oldmask;
 unsigned long cr2;
 struct _fpstate *fpstate;
 unsigned long reserved1[8];
};
# 15 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/current.h" 1



# 1 "linux-2.6.26/include/asm/current_64.h" 1




struct task_struct;

# 1 "linux-2.6.26/include/asm/pda.h" 1






# 1 "linux-2.6.26/include/linux/cache.h" 1



# 1 "linux-2.6.26/include/linux/kernel.h" 1
# 10 "linux-2.6.26/include/linux/kernel.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 98 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "linux-2.6.26/include/linux/kernel.h" 2
# 1 "linux-2.6.26/include/linux/linkage.h" 1



# 1 "linux-2.6.26/include/asm/linkage.h" 1
# 5 "linux-2.6.26/include/linux/linkage.h" 2
# 12 "linux-2.6.26/include/linux/kernel.h" 2



# 1 "linux-2.6.26/include/linux/bitops.h" 1
# 17 "linux-2.6.26/include/linux/bitops.h"
# 1 "linux-2.6.26/include/asm/bitops.h" 1
# 13 "linux-2.6.26/include/asm/bitops.h"
# 1 "linux-2.6.26/include/asm/alternative.h" 1





# 1 "linux-2.6.26/include/asm/asm.h" 1
# 7 "linux-2.6.26/include/asm/alternative.h" 2
# 42 "linux-2.6.26/include/asm/alternative.h"
# 1 "linux-2.6.26/include/asm/cpufeature.h" 1






# 1 "linux-2.6.26/include/asm/required-features.h" 1
# 8 "linux-2.6.26/include/asm/cpufeature.h" 2
# 118 "linux-2.6.26/include/asm/cpufeature.h"
# 1 "linux-2.6.26/include/linux/bitops.h" 1
# 119 "linux-2.6.26/include/asm/cpufeature.h" 2


# 120 "linux-2.6.26/include/asm/cpufeature.h"
extern const char * const x86_cap_flags[8*32];
extern const char * const x86_power_flags[32];
# 43 "linux-2.6.26/include/asm/alternative.h" 2

struct alt_instr {
 u8 *instr;
 u8 *replacement;
 u8 cpuid;
 u8 instrlen;
 u8 replacementlen;
 u8 pad1;

 u32 pad2;

};

extern void alternative_instructions(void);
extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;
# 68 "linux-2.6.26/include/asm/alternative.h"
static inline  __attribute__((always_inline)) void alternatives_smp_module_add(struct module *mod, char *name,
            void *locks, void *locks_end,
            void *text, void *text_end) {}
static inline  __attribute__((always_inline)) void alternatives_smp_module_del(struct module *mod) {}
static inline  __attribute__((always_inline)) void alternatives_smp_switch(int smp) {}
# 146 "linux-2.6.26/include/asm/alternative.h"
struct paravirt_patch_site;




static inline  __attribute__((always_inline)) void apply_paravirt(struct paravirt_patch_site *start,
      struct paravirt_patch_site *end)
{}




extern void add_nops(void *insns, unsigned int len);
# 178 "linux-2.6.26/include/asm/alternative.h"
extern void *text_poke(void *addr, const void *opcode, size_t len);
extern void *text_poke_early(void *addr, const void *opcode, size_t len);
# 14 "linux-2.6.26/include/asm/bitops.h" 2
# 46 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void set_bit(int nr, volatile void *addr)
{
 asm volatile("" "bts %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");
}
# 60 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __set_bit(int nr, volatile void *addr)
{
 asm volatile("bts %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");
}
# 75 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void clear_bit(int nr, volatile void *addr)
{
 asm volatile("" "btr %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr));
}
# 88 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void clear_bit_unlock(unsigned nr, volatile void *addr)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit(nr, addr);
}

static inline  __attribute__((always_inline)) void __clear_bit(int nr, volatile void *addr)
{
 asm volatile("btr %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr));
}
# 111 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __clear_bit_unlock(unsigned nr, volatile void *addr)
{
 __asm__ __volatile__("": : :"memory");
 __clear_bit(nr, addr);
}
# 129 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __change_bit(int nr, volatile void *addr)
{
 asm volatile("btc %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr));
}
# 143 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void change_bit(int nr, volatile void *addr)
{
 asm volatile("" "btc %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr));
}
# 156 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_set_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("" "bts %2,%1\n\t"
       "sbb %0,%0" : "=r" (oldbit), "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");

 return oldbit;
}
# 173 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_set_bit_lock(int nr, volatile void *addr)
{
 return test_and_set_bit(nr, addr);
}
# 187 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int __test_and_set_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm("bts %2,%1\n\t"
     "sbb %0,%0"
     : "=r" (oldbit), "+m" (*(volatile long *) addr)
     : "Ir" (nr));
 return oldbit;
}
# 206 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_clear_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("" "btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");

 return oldbit;
}
# 226 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int __test_and_clear_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) addr)
       : "Ir" (nr));
 return oldbit;
}


static inline  __attribute__((always_inline)) int __test_and_change_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) addr)
       : "Ir" (nr) : "memory");

 return oldbit;
}
# 258 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_change_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("" "btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");

 return oldbit;
}

static inline  __attribute__((always_inline)) int constant_test_bit(int nr, const volatile void *addr)
{
 return ((1UL << (nr % 64)) &
  (((unsigned long *)addr)[nr / 64])) != 0;
}

static inline  __attribute__((always_inline)) int variable_test_bit(int nr, volatile const void *addr)
{
 int oldbit;

 asm volatile("bt %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit)
       : "m" (*(unsigned long *)addr), "Ir" (nr));

 return oldbit;
}
# 307 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) unsigned long __ffs(unsigned long word)
{
 asm("bsf %1,%0"
  : "=r" (word)
  : "rm" (word));
 return word;
}







static inline  __attribute__((always_inline)) unsigned long ffz(unsigned long word)
{
 asm("bsf %1,%0"
  : "=r" (word)
  : "r" (~word));
 return word;
}







static inline  __attribute__((always_inline)) unsigned long __fls(unsigned long word)
{
 asm("bsr %1,%0"
     : "=r" (word)
     : "rm" (word));
 return word;
}
# 355 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int ffs(int x)
{
 int r;





 asm("bsfl %1,%0\n\t"
     "jnz 1f\n\t"
     "movl $-1,%0\n"
     "1:" : "=r" (r) : "rm" (x));

 return r + 1;
}
# 382 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int fls(int x)
{
 int r;





 asm("bsrl %1,%0\n\t"
     "jnz 1f\n\t"
     "movl $-1,%0\n"
     "1:" : "=r" (r) : "rm" (x));

 return r + 1;
}




static inline  __attribute__((always_inline)) void set_bit_string(unsigned long *bitmap,
  unsigned long i, int len)
{
 unsigned long end = i + len;
 while (i < end) {
  __set_bit(i, bitmap);
  i++;
 }
}



# 1 "linux-2.6.26/include/asm-generic/bitops/sched.h" 1
# 12 "linux-2.6.26/include/asm-generic/bitops/sched.h"
static inline  __attribute__((always_inline)) int sched_find_first_bit(const unsigned long *b)
{

 if (b[0])
  return __ffs(b[0]);
 return __ffs(b[1]) + 64;
# 29 "linux-2.6.26/include/asm-generic/bitops/sched.h"
}
# 414 "linux-2.6.26/include/asm/bitops.h" 2



# 1 "linux-2.6.26/include/asm-generic/bitops/hweight.h" 1





extern unsigned int hweight32(unsigned int w);
extern unsigned int hweight16(unsigned int w);
extern unsigned int hweight8(unsigned int w);
extern unsigned long hweight64(__u64 w);
# 418 "linux-2.6.26/include/asm/bitops.h" 2



# 1 "linux-2.6.26/include/asm-generic/bitops/fls64.h" 1
# 26 "linux-2.6.26/include/asm-generic/bitops/fls64.h"
static inline  __attribute__((always_inline)) int fls64(__u64 x)
{
 if (x == 0)
  return 0;
 return __fls(x) + 1;
}
# 422 "linux-2.6.26/include/asm/bitops.h" 2



# 1 "linux-2.6.26/include/asm-generic/bitops/ext2-non-atomic.h" 1



# 1 "linux-2.6.26/include/asm-generic/bitops/le.h" 1




# 1 "linux-2.6.26/include/asm/byteorder.h" 1
# 51 "linux-2.6.26/include/asm/byteorder.h"
static inline   __attribute__((always_inline)) __attribute__((__const__)) __u64 ___arch__swab64(__u64 x)
{
 asm("bswapq %0"
     : "=r" (x)
     : "0" (x));
 return x;
}

static inline   __attribute__((always_inline)) __attribute__((__const__)) __u32 ___arch__swab32(__u32 x)
{
 asm("bswapl %0"
     : "=r" (x)
     : "0" (x));
 return x;
}
# 79 "linux-2.6.26/include/asm/byteorder.h"
# 1 "linux-2.6.26/include/linux/byteorder/little_endian.h" 1
# 12 "linux-2.6.26/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.26/include/linux/byteorder/swab.h" 1
# 64 "linux-2.6.26/include/linux/byteorder/swab.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u16 ___swab16(__u16 x)
{
 return x<<8 | x>>8;
}
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 ___swab32(__u32 x)
{
 return x<<24 | x>>24 |
  (x & (__u32)0x0000ff00UL)<<8 |
  (x & (__u32)0x00ff0000UL)>>8;
}
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 ___swab64(__u64 x)
{
 return x<<56 | x>>56 |
  (x & (__u64)0x000000000000ff00ULL)<<40 |
  (x & (__u64)0x0000000000ff0000ULL)<<24 |
  (x & (__u64)0x00000000ff000000ULL)<< 8 |
         (x & (__u64)0x000000ff00000000ULL)>> 8 |
  (x & (__u64)0x0000ff0000000000ULL)>>24 |
  (x & (__u64)0x00ff000000000000ULL)>>40;
}
# 163 "linux-2.6.26/include/linux/byteorder/swab.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u16 __fswab16(__u16 x)
{
 return ___swab16(x);
}
static __inline__  __attribute__((always_inline)) __u16 __swab16p(const __u16 *x)
{
 return ___swab16(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab16s(__u16 *addr)
{
 ((void)(*(addr) = ___swab16(*(addr))));
}

static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswab32(__u32 x)
{
 return ___arch__swab32(x);
}
static __inline__  __attribute__((always_inline)) __u32 __swab32p(const __u32 *x)
{
 return ___arch__swab32(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab32s(__u32 *addr)
{
 ((void)(*(addr) = ___arch__swab32(*(addr))));
}


static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 __fswab64(__u64 x)
{





 return ___arch__swab64(x);

}
static __inline__  __attribute__((always_inline)) __u64 __swab64p(const __u64 *x)
{
 return ___arch__swab64(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab64s(__u64 *addr)
{
 ((void)(*(addr) = ___arch__swab64(*(addr))));
}
# 13 "linux-2.6.26/include/linux/byteorder/little_endian.h" 2
# 43 "linux-2.6.26/include/linux/byteorder/little_endian.h"
static inline  __attribute__((always_inline)) __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline  __attribute__((always_inline)) __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline  __attribute__((always_inline)) __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline  __attribute__((always_inline)) __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline  __attribute__((always_inline)) __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline  __attribute__((always_inline)) __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline  __attribute__((always_inline)) __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline  __attribute__((always_inline)) __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline  __attribute__((always_inline)) __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline  __attribute__((always_inline)) __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline  __attribute__((always_inline)) __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline  __attribute__((always_inline)) __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 105 "linux-2.6.26/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.26/include/linux/byteorder/generic.h" 1
# 143 "linux-2.6.26/include/linux/byteorder/generic.h"
static inline  __attribute__((always_inline)) void le16_add_cpu(__le16 *var, u16 val)
{
 *var = (( __le16)(__u16)((( __u16)(__le16)(*var)) + val));
}

static inline  __attribute__((always_inline)) void le32_add_cpu(__le32 *var, u32 val)
{
 *var = (( __le32)(__u32)((( __u32)(__le32)(*var)) + val));
}

static inline  __attribute__((always_inline)) void le64_add_cpu(__le64 *var, u64 val)
{
 *var = (( __le64)(__u64)((( __u64)(__le64)(*var)) + val));
}

static inline  __attribute__((always_inline)) void be16_add_cpu(__be16 *var, u16 val)
{
 *var = (( __be16)__fswab16((__fswab16(( __u16)(__be16)(*var)) + val)));
}

static inline  __attribute__((always_inline)) void be32_add_cpu(__be32 *var, u32 val)
{
 *var = (( __be32)__fswab32((__fswab32(( __u32)(__be32)(*var)) + val)));
}

static inline  __attribute__((always_inline)) void be64_add_cpu(__be64 *var, u64 val)
{
 *var = (( __be64)__fswab64((__fswab64(( __u64)(__be64)(*var)) + val)));
}
# 106 "linux-2.6.26/include/linux/byteorder/little_endian.h" 2
# 80 "linux-2.6.26/include/asm/byteorder.h" 2
# 6 "linux-2.6.26/include/asm-generic/bitops/le.h" 2
# 5 "linux-2.6.26/include/asm-generic/bitops/ext2-non-atomic.h" 2
# 426 "linux-2.6.26/include/asm/bitops.h" 2






# 1 "linux-2.6.26/include/asm-generic/bitops/minix.h" 1
# 433 "linux-2.6.26/include/asm/bitops.h" 2
# 18 "linux-2.6.26/include/linux/bitops.h" 2







static __inline__  __attribute__((always_inline)) int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__  __attribute__((always_inline)) int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline  __attribute__((always_inline)) unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? hweight32(w) : hweight64(w);
}






static inline  __attribute__((always_inline)) __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}






static inline  __attribute__((always_inline)) __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}






static inline  __attribute__((always_inline)) __u16 rol16(__u16 word, unsigned int shift)
{
 return (word << shift) | (word >> (16 - shift));
}






static inline  __attribute__((always_inline)) __u16 ror16(__u16 word, unsigned int shift)
{
 return (word >> shift) | (word << (16 - shift));
}






static inline  __attribute__((always_inline)) __u8 rol8(__u8 word, unsigned int shift)
{
 return (word << shift) | (word >> (8 - shift));
}






static inline  __attribute__((always_inline)) __u8 ror8(__u8 word, unsigned int shift)
{
 return (word >> shift) | (word << (8 - shift));
}

static inline  __attribute__((always_inline)) unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 125 "linux-2.6.26/include/linux/bitops.h"
extern unsigned long find_first_bit(const unsigned long *addr,
        unsigned long size);
# 135 "linux-2.6.26/include/linux/bitops.h"
extern unsigned long find_first_zero_bit(const unsigned long *addr,
      unsigned long size);
# 148 "linux-2.6.26/include/linux/bitops.h"
extern unsigned long find_next_bit(const unsigned long *addr,
       unsigned long size, unsigned long offset);
# 158 "linux-2.6.26/include/linux/bitops.h"
extern unsigned long find_next_zero_bit(const unsigned long *addr,
     unsigned long size,
     unsigned long offset);
# 16 "linux-2.6.26/include/linux/kernel.h" 2
# 1 "linux-2.6.26/include/linux/log2.h" 1
# 21 "linux-2.6.26/include/linux/log2.h"
extern 
__attribute__((const, noreturn)) int ____ilog2_NaN(void);
# 31 "linux-2.6.26/include/linux/log2.h"
static inline  
__attribute__((always_inline)) __attribute__((const)) int __ilog2_u32(u32 n)
{
 return fls(n) - 1;
}



static inline  
__attribute__((always_inline)) __attribute__((const)) int __ilog2_u64(u64 n)
{
 return fls64(n) - 1;
}







static inline  
__attribute__((always_inline)) __attribute__((const)) bool is_power_of_2(unsigned long n)
{
 return (n != 0 && ((n & (n - 1)) == 0));
}




static inline  
__attribute__((always_inline)) __attribute__((const)) unsigned long __roundup_pow_of_two(unsigned long n)
{
 return 1UL << fls_long(n - 1);
}




static inline  
__attribute__((always_inline)) __attribute__((const)) unsigned long __rounddown_pow_of_two(unsigned long n)
{
 return 1UL << (fls_long(n) - 1);
}
# 17 "linux-2.6.26/include/linux/kernel.h" 2

# 1 "linux-2.6.26/include/asm/bug.h" 1
# 38 "linux-2.6.26/include/asm/bug.h"
# 1 "linux-2.6.26/include/asm-generic/bug.h" 1
# 10 "linux-2.6.26/include/asm-generic/bug.h"
struct bug_entry {
 unsigned long bug_addr;




 unsigned short flags;
};
# 36 "linux-2.6.26/include/asm-generic/bug.h"
extern void warn_on_slowpath(const char *file, const int line);
# 39 "linux-2.6.26/include/asm/bug.h" 2
# 19 "linux-2.6.26/include/linux/kernel.h" 2

extern const char linux_banner[];
extern const char linux_proc_banner[];
# 92 "linux-2.6.26/include/linux/kernel.h"
typedef  int  _GLOBAL_5_T; extern  _GLOBAL_5_T  _GLOBAL_0_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_1_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_2_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_3_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_4_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_5_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_6_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_7_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_8_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_9_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_10_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_11_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_12_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_13_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_14_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_15_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_16_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_17_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_18_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_19_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_20_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_21_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_22_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_23_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_24_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_25_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_26_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_27_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_28_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_29_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_30_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_31_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_32_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_33_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_34_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_35_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_36_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_37_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_38_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_39_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_40_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_41_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_42_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_43_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_44_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_45_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_46_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_47_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_48_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_49_console_printk_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_console_printk_I) *_GLOBAL_console_printk_1_A[NUM_STACKS] = { &_GLOBAL_0_console_printk_I, &_GLOBAL_1_console_printk_I, &_GLOBAL_2_console_printk_I, &_GLOBAL_3_console_printk_I, &_GLOBAL_4_console_printk_I, &_GLOBAL_5_console_printk_I, &_GLOBAL_6_console_printk_I, &_GLOBAL_7_console_printk_I, &_GLOBAL_8_console_printk_I, &_GLOBAL_9_console_printk_I, &_GLOBAL_10_console_printk_I, &_GLOBAL_11_console_printk_I, &_GLOBAL_12_console_printk_I, &_GLOBAL_13_console_printk_I, &_GLOBAL_14_console_printk_I, &_GLOBAL_15_console_printk_I, &_GLOBAL_16_console_printk_I, &_GLOBAL_17_console_printk_I, &_GLOBAL_18_console_printk_I, &_GLOBAL_19_console_printk_I, &_GLOBAL_20_console_printk_I, &_GLOBAL_21_console_printk_I, &_GLOBAL_22_console_printk_I, &_GLOBAL_23_console_printk_I, &_GLOBAL_24_console_printk_I, &_GLOBAL_25_console_printk_I, &_GLOBAL_26_console_printk_I, &_GLOBAL_27_console_printk_I, &_GLOBAL_28_console_printk_I, &_GLOBAL_29_console_printk_I, &_GLOBAL_30_console_printk_I, &_GLOBAL_31_console_printk_I, &_GLOBAL_32_console_printk_I, &_GLOBAL_33_console_printk_I, &_GLOBAL_34_console_printk_I, &_GLOBAL_35_console_printk_I, &_GLOBAL_36_console_printk_I, &_GLOBAL_37_console_printk_I, &_GLOBAL_38_console_printk_I, &_GLOBAL_39_console_printk_I, &_GLOBAL_40_console_printk_I, &_GLOBAL_41_console_printk_I, &_GLOBAL_42_console_printk_I, &_GLOBAL_43_console_printk_I, &_GLOBAL_44_console_printk_I, &_GLOBAL_45_console_printk_I, &_GLOBAL_46_console_printk_I, &_GLOBAL_47_console_printk_I, &_GLOBAL_48_console_printk_I, &_GLOBAL_49_console_printk_I, };  






struct completion;
struct pt_regs;
struct user;
# 135 "linux-2.6.26/include/linux/kernel.h"
extern struct atomic_notifier_head panic_notifier_list;
typedef  long   ( *_GLOBAL_7_T  )  ( long  time  ) ; extern  _GLOBAL_7_T global_panic_blink[NUM_STACKS];    
 void panic(const char * fmt, ...)
  __attribute__ ((noreturn, format (printf, 1, 2))) __attribute__((__cold__)) ;
extern void oops_enter(void);
extern void oops_exit(void);
extern int oops_may_print(void);
 void do_exit(long error_code)
 __attribute__((noreturn)) ;
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn)) ;
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);
extern int strict_strtoul(const char *, unsigned int, unsigned long *);
extern int strict_strtol(const char *, unsigned int, long *);
extern int strict_strtoull(const char *, unsigned int, unsigned long long *);
extern int strict_strtoll(const char *, unsigned int, long long *);
extern int sprintf(char * buf, const char * fmt, ...)
 __attribute__ ((format (printf, 2, 3))) ;
extern int vsprintf(char *buf, const char *, va_list)
 __attribute__ ((format (printf, 2, 0))) ;
extern int snprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0))) ;
extern int scnprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0))) ;
extern char *kasprintf(gfp_t gfp, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3))) ;
extern char *kvasprintf(gfp_t gfp, const char *fmt, va_list args);

extern int sscanf(const char *, const char *, ...)
 __attribute__ ((format (scanf, 2, 3))) ;
extern int vsscanf(const char *, const char *, va_list)
 __attribute__ ((format (scanf, 2, 0))) ;

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
struct pid;
extern struct pid *session_of_pgrp(struct pid *pgrp);


 int vprintk(const char *fmt, va_list args)
 __attribute__ ((format (printf, 1, 0))) ;
 int printk(const char * fmt, ...)
  __attribute__ ((format (printf, 1, 2))) __attribute__((__cold__)) ;
extern int log_buf_get_len(void);
extern int log_buf_read(int idx);
extern int log_buf_copy(char *dest, int idx, int len);

typedef  int  _GLOBAL_8_T; extern  _GLOBAL_8_T  global_printk_ratelimit_jiffies[NUM_STACKS];   
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_printk_ratelimit_burst[NUM_STACKS];   
extern int printk_ratelimit(void);
extern int __ratelimit(int ratelimit_jiffies, int ratelimit_burst);
extern int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst);
extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
       unsigned int interval_msec);
# 219 "linux-2.6.26/include/linux/kernel.h"
extern void 
 __attribute__((format(printf, 1, 2))) early_printk(const char *fmt, ...);

unsigned long int_sqrt(unsigned long);

static inline  __attribute__((always_inline)) void console_silent(void)
{
 ((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]) = 0;
}

static inline  __attribute__((always_inline)) void console_verbose(void)
{
 if (((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]))
  ((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]) = 15;
}

extern void bust_spinlocks(int yes);
extern void wake_up_klogd(void);
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_oops_in_progress[NUM_STACKS];   
typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_panic_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_panic_on_oops[NUM_STACKS];   
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_panic_on_unrecovered_nmi[NUM_STACKS];   
typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_tainted[NUM_STACKS];   
extern const char *print_tainted(void);
extern void add_taint(unsigned);
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_root_mountflags[NUM_STACKS];   


typedef  enum system_states { SYSTEM_BOOTING , SYSTEM_RUNNING  , SYSTEM_HALT  , SYSTEM_POWER_OFF  , SYSTEM_RESTART  , SYSTEM_SUSPEND_DISK  , }   _GLOBAL_16_T; extern  _GLOBAL_16_T  global_system_state[NUM_STACKS];    
 
 
 
 
 
 
 
# 267 "linux-2.6.26/include/linux/kernel.h"
extern void dump_stack(void) __attribute__((__cold__)) ;

enum {
 DUMP_PREFIX_NONE,
 DUMP_PREFIX_ADDRESS,
 DUMP_PREFIX_OFFSET
};
extern void hex_dump_to_buffer(const void *buf, size_t len,
    int rowsize, int groupsize,
    char *linebuf, size_t linebuflen, bool ascii);
extern void print_hex_dump(const char *level, const char *prefix_str,
    int prefix_type, int rowsize, int groupsize,
    const void *buf, size_t len, bool ascii);
extern void print_hex_dump_bytes(const char *prefix_str, int prefix_type,
   const void *buf, size_t len);

extern const char hex_asc[];



static inline  __attribute__((always_inline)) char *pack_hex_byte(char *buf, u8 byte)
{
 *buf++ = hex_asc[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc[((byte) & 0x0f)];
 return buf;
}
# 470 "linux-2.6.26/include/linux/kernel.h"
struct sysinfo;
extern int do_sysinfo(struct sysinfo *info);




struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};
# 5 "linux-2.6.26/include/linux/cache.h" 2
# 8 "linux-2.6.26/include/asm/pda.h" 2
# 1 "linux-2.6.26/include/asm/page.h" 1



# 1 "linux-2.6.26/include/linux/const.h" 1
# 5 "linux-2.6.26/include/asm/page.h" 2
# 40 "linux-2.6.26/include/asm/page.h"
# 1 "linux-2.6.26/include/asm/page_64.h" 1
# 58 "linux-2.6.26/include/asm/page_64.h"
void clear_page(void *page);
void copy_page(void *to, void *from);

typedef  unsigned long   _GLOBAL_17_T; extern  _GLOBAL_17_T  global_end_pfn[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_18_T; extern  _GLOBAL_18_T  global_phys_base[NUM_STACKS];    

extern unsigned long __phys_addr(unsigned long);





typedef unsigned long pteval_t;
typedef unsigned long pmdval_t;
typedef unsigned long pudval_t;
typedef unsigned long pgdval_t;
typedef unsigned long pgprotval_t;
typedef unsigned long phys_addr_t;

typedef struct page *pgtable_t;

typedef struct { pteval_t pte; } pte_t;



extern unsigned long init_memory_mapping(unsigned long start,
      unsigned long end);
# 41 "linux-2.6.26/include/asm/page.h" 2
# 54 "linux-2.6.26/include/asm/page.h"
extern int page_is_ram(unsigned long pagenr);
extern int devmem_is_allowed(unsigned long pagenr);

typedef  unsigned long   _GLOBAL_19_T; extern  _GLOBAL_19_T  global_max_pfn_mapped[NUM_STACKS];    

struct page;

static inline  __attribute__((always_inline)) void clear_user_page(void *page, unsigned long vaddr,
    struct page *pg)
{
 clear_page(page);
}

static inline  __attribute__((always_inline)) void copy_user_page(void *to, void *from, unsigned long vaddr,
    struct page *topage)
{
 copy_page(to, from);
}





typedef struct { pgdval_t pgd; } pgd_t;
typedef struct { pgprotval_t pgprot; } pgprot_t;

static inline  __attribute__((always_inline)) pgd_t native_make_pgd(pgdval_t val)
{
 return (pgd_t) { val };
}

static inline  __attribute__((always_inline)) pgdval_t native_pgd_val(pgd_t pgd)
{
 return pgd.pgd;
}



typedef struct { pudval_t pud; } pud_t;

static inline  __attribute__((always_inline)) pud_t native_make_pud(pmdval_t val)
{
 return (pud_t) { val };
}

static inline  __attribute__((always_inline)) pudval_t native_pud_val(pud_t pud)
{
 return pud.pud;
}
# 112 "linux-2.6.26/include/asm/page.h"
typedef struct { pmdval_t pmd; } pmd_t;

static inline  __attribute__((always_inline)) pmd_t native_make_pmd(pmdval_t val)
{
 return (pmd_t) { val };
}

static inline  __attribute__((always_inline)) pmdval_t native_pmd_val(pmd_t pmd)
{
 return pmd.pmd;
}
# 132 "linux-2.6.26/include/asm/page.h"
static inline  __attribute__((always_inline)) pte_t native_make_pte(pteval_t val)
{
 return (pte_t) { .pte = val };
}

static inline  __attribute__((always_inline)) pteval_t native_pte_val(pte_t pte)
{
 return pte.pte;
}
# 183 "linux-2.6.26/include/asm/page.h"
# 1 "linux-2.6.26/include/asm-generic/memory_model.h" 1
# 184 "linux-2.6.26/include/asm/page.h" 2
# 1 "linux-2.6.26/include/asm-generic/page.h" 1
# 9 "linux-2.6.26/include/asm-generic/page.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) int get_order(unsigned long size)
{
 int order;

 size = (size - 1) >> (12 - 1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}
# 185 "linux-2.6.26/include/asm/page.h" 2
# 9 "linux-2.6.26/include/asm/pda.h" 2


struct x8664_pda {
 struct task_struct *pcurrent;
 unsigned long data_offset;

 unsigned long kernelstack;
 unsigned long oldrsp;
 int irqcount;
 unsigned int cpunumber;





 char *irqstackptr;
 unsigned int __softirq_pending;
 unsigned int __nmi_count;
 short mmu_state;
 short isidle;
 struct mm_struct *active_mm;
 unsigned apic_timer_irqs;
 unsigned irq0_irqs;
 unsigned irq_resched_count;
 unsigned irq_call_count;
 unsigned irq_tlb_count;
 unsigned irq_thermal_count;
 unsigned irq_threshold_count;
 unsigned irq_spurious_count;
} ;

typedef  struct x8664_pda   _GLOBAL_20_T; extern  _GLOBAL_20_T  * _GLOBAL_0__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_1__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_2__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_3__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_4__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_5__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_6__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_7__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_8__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_9__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_10__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_11__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_12__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_13__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_14__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_15__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_16__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_17__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_18__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_19__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_20__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_21__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_22__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_23__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_24__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_25__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_26__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_27__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_28__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_29__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_30__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_31__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_32__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_33__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_34__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_35__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_36__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_37__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_38__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_39__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_40__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_41__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_42__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_43__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_44__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_45__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_46__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_47__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_48__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_49__cpu_pda_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__cpu_pda_I) *_GLOBAL__cpu_pda_2_A[NUM_STACKS];   
typedef  struct x8664_pda   _GLOBAL_21_T; extern  _GLOBAL_21_T  _GLOBAL_0_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_1_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_2_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_3_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_4_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_5_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_6_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_7_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_8_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_9_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_10_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_11_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_12_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_13_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_14_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_15_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_16_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_17_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_18_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_19_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_20_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_21_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_22_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_23_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_24_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_25_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_26_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_27_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_28_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_29_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_30_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_31_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_32_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_33_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_34_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_35_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_36_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_37_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_38_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_39_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_40_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_41_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_42_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_43_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_44_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_45_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_46_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_47_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_48_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_49_boot_cpu_pda_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_cpu_pda_I) *_GLOBAL_boot_cpu_pda_3_A[NUM_STACKS];   
extern void pda_init(int);







extern void __bad_pda_field(void) __attribute__((noreturn)) ;





typedef  struct x8664_pda   _GLOBAL_22_T; extern  _GLOBAL_22_T  global__proxy_pda[NUM_STACKS];    
# 8 "linux-2.6.26/include/asm/current_64.h" 2
# 5 "linux-2.6.26/include/asm/current.h" 2
# 16 "linux-2.6.26/include/asm/processor.h" 2

# 1 "linux-2.6.26/include/asm/system.h" 1






# 1 "linux-2.6.26/include/asm/cmpxchg.h" 1



# 1 "linux-2.6.26/include/asm/cmpxchg_64.h" 1
# 11 "linux-2.6.26/include/asm/cmpxchg_64.h"
static inline  __attribute__((always_inline)) void set_64bit(volatile unsigned long *ptr, unsigned long val)
{
 *ptr = val;
}
# 23 "linux-2.6.26/include/asm/cmpxchg_64.h"
static inline  __attribute__((always_inline)) unsigned long __xchg(unsigned long x, volatile void *ptr,
       int size)
{
 switch (size) {
 case 1:
  asm volatile("xchgb %b0,%1"
        : "=q" (x)
        : "m" (*((volatile long *)(ptr))), "0" (x)
        : "memory");
  break;
 case 2:
  asm volatile("xchgw %w0,%1"
        : "=r" (x)
        : "m" (*((volatile long *)(ptr))), "0" (x)
        : "memory");
  break;
 case 4:
  asm volatile("xchgl %k0,%1"
        : "=r" (x)
        : "m" (*((volatile long *)(ptr))), "0" (x)
        : "memory");
  break;
 case 8:
  asm volatile("xchgq %0,%1"
        : "=r" (x)
        : "m" (*((volatile long *)(ptr))), "0" (x)
        : "memory");
  break;
 }
 return x;
}
# 63 "linux-2.6.26/include/asm/cmpxchg_64.h"
static inline  __attribute__((always_inline)) unsigned long __cmpxchg(volatile void *ptr, unsigned long old,
          unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  asm volatile("" "cmpxchgb %b1,%2"
        : "=a"(prev)
        : "q"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 2:
  asm volatile("" "cmpxchgw %w1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 4:
  asm volatile("" "cmpxchgl %k1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 8:
  asm volatile("" "cmpxchgq %1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 }
 return old;
}

static inline  __attribute__((always_inline)) unsigned long __cmpxchg_local(volatile void *ptr,
         unsigned long old,
         unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  asm volatile("cmpxchgb %b1,%2"
        : "=a"(prev)
        : "q"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 2:
  asm volatile("cmpxchgw %w1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 4:
  asm volatile("cmpxchgl %k1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 8:
  asm volatile("cmpxchgq %1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 }
 return old;
}
# 5 "linux-2.6.26/include/asm/cmpxchg.h" 2
# 8 "linux-2.6.26/include/asm/system.h" 2
# 1 "linux-2.6.26/include/asm/nops.h" 1
# 9 "linux-2.6.26/include/asm/system.h" 2


# 1 "linux-2.6.26/include/linux/irqflags.h" 1
# 12 "linux-2.6.26/include/asm/system.h" 2
# 139 "linux-2.6.26/include/asm/system.h"
extern void load_gs_index(unsigned);
# 165 "linux-2.6.26/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long get_limit(unsigned long segment)
{
 unsigned long __limit;
 asm("lsll %1,%0" : "=r" (__limit) : "r" (segment));
 return __limit + 1;
}

static inline  __attribute__((always_inline)) void native_clts(void)
{
 asm volatile("clts");
}
# 184 "linux-2.6.26/include/asm/system.h"
typedef  unsigned long   _GLOBAL_23_T; static  _GLOBAL_23_T  global___force_order[NUM_STACKS];    

static inline  __attribute__((always_inline)) unsigned long native_read_cr0(void)
{
 unsigned long val;
 asm volatile("mov %%cr0,%0\n\t" : "=r" (val), "=m" (global___force_order[get_stack_id()]));
 return val;
}

static inline  __attribute__((always_inline)) void native_write_cr0(unsigned long val)
{
 asm volatile("mov %0,%%cr0": : "r" (val), "m" (global___force_order[get_stack_id()]));
}

static inline  __attribute__((always_inline)) unsigned long native_read_cr2(void)
{
 unsigned long val;
 asm volatile("mov %%cr2,%0\n\t" : "=r" (val), "=m" (global___force_order[get_stack_id()]));
 return val;
}

static inline  __attribute__((always_inline)) void native_write_cr2(unsigned long val)
{
 asm volatile("mov %0,%%cr2": : "r" (val), "m" (global___force_order[get_stack_id()]));
}

static inline  __attribute__((always_inline)) unsigned long native_read_cr3(void)
{
 unsigned long val;
 asm volatile("mov %%cr3,%0\n\t" : "=r" (val), "=m" (global___force_order[get_stack_id()]));
 return val;
}

static inline  __attribute__((always_inline)) void native_write_cr3(unsigned long val)
{
 asm volatile("mov %0,%%cr3": : "r" (val), "m" (global___force_order[get_stack_id()]));
}

static inline  __attribute__((always_inline)) unsigned long native_read_cr4(void)
{
 unsigned long val;
 asm volatile("mov %%cr4,%0\n\t" : "=r" (val), "=m" (global___force_order[get_stack_id()]));
 return val;
}

static inline  __attribute__((always_inline)) unsigned long native_read_cr4_safe(void)
{
 unsigned long val;
# 240 "linux-2.6.26/include/asm/system.h"
 val = native_read_cr4();

 return val;
}

static inline  __attribute__((always_inline)) void native_write_cr4(unsigned long val)
{
 asm volatile("mov %0,%%cr4": : "r" (val), "m" (global___force_order[get_stack_id()]));
}


static inline  __attribute__((always_inline)) unsigned long native_read_cr8(void)
{
 unsigned long cr8;
 asm volatile("movq %%cr8,%0" : "=r" (cr8));
 return cr8;
}

static inline  __attribute__((always_inline)) void native_write_cr8(unsigned long val)
{
 asm volatile("movq %0,%%cr8" :: "r" (val) : "memory");
}


static inline  __attribute__((always_inline)) void native_wbinvd(void)
{
 asm volatile("wbinvd": : :"memory");
}
# 296 "linux-2.6.26/include/asm/system.h"
static inline  __attribute__((always_inline)) void clflush(volatile void *__p)
{
 asm volatile("clflush %0" : "+m" (*(volatile char *)__p));
}



void disable_hlt(void);
void enable_hlt(void);

typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_es7000_plat[NUM_STACKS];   
void cpu_idle_wait(void);

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);

void default_idle(void);
# 416 "linux-2.6.26/include/asm/system.h"
static inline  __attribute__((always_inline)) void rdtsc_barrier(void)
{
 asm volatile ("661:\n\t" ".byte 0x66,0x66,0x90\n" "\n662:\n" ".section .altinstructions,\"a\"\n" " .balign 8 " "\n" " .quad " "661b\n" " .quad " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "mfence" "\n664:\n" ".previous" :: "i" ((3*32+17)) : "memory");
 asm volatile ("661:\n\t" ".byte 0x66,0x66,0x90\n" "\n662:\n" ".section .altinstructions,\"a\"\n" " .balign 8 " "\n" " .quad " "661b\n" " .quad " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "lfence" "\n664:\n" ".previous" :: "i" ((3*32+18)) : "memory");
}
# 18 "linux-2.6.26/include/asm/processor.h" 2

# 1 "linux-2.6.26/include/asm/percpu.h" 1
# 21 "linux-2.6.26/include/asm/percpu.h"
# 1 "linux-2.6.26/include/asm-generic/percpu.h" 1



# 1 "linux-2.6.26/include/linux/threads.h" 1
# 5 "linux-2.6.26/include/asm-generic/percpu.h" 2
# 22 "linux-2.6.26/include/asm/percpu.h" 2

typedef  __typeof__ ( struct x8664_pda  )   _GLOBAL_25_T; extern  _GLOBAL_25_T  global_per_cpu__pda[NUM_STACKS];    
# 20 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/msr.h" 1



# 1 "linux-2.6.26/include/asm/msr-index.h" 1
# 5 "linux-2.6.26/include/asm/msr.h" 2
# 14 "linux-2.6.26/include/asm/msr.h"
# 1 "linux-2.6.26/include/asm/errno.h" 1
# 1 "linux-2.6.26/include/asm-generic/errno.h" 1



# 1 "linux-2.6.26/include/asm-generic/errno-base.h" 1
# 5 "linux-2.6.26/include/asm-generic/errno.h" 2
# 1 "linux-2.6.26/include/asm/errno.h" 2
# 15 "linux-2.6.26/include/asm/msr.h" 2

static inline  __attribute__((always_inline)) unsigned long long native_read_tscp(unsigned int *aux)
{
 unsigned long low, high;
 asm volatile(".byte 0x0f,0x01,0xf9"
       : "=a" (low), "=d" (high), "=c" (*aux));
 return low | ((u64)high << 32);
}
# 42 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) unsigned long long native_read_msr(unsigned int msr)
{
 unsigned low, high;

 asm volatile("rdmsr" : "=a" (low), "=d" (high) : "c" (msr));
 return ((low) | ((u64)(high) << 32));
}

static inline  __attribute__((always_inline)) unsigned long long native_read_msr_safe(unsigned int msr,
            int *err)
{
 unsigned low, high;

 asm volatile("2: rdmsr ; xor %0,%0\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %3,%0 ; jmp 1b\n\t"
       ".previous\n\t"
       " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "2b" "," "3b" "\n" " .previous\n"
       : "=r" (*err), "=a" (low), "=d" (high)
       : "c" (msr), "i" (-14));
 return ((low) | ((u64)(high) << 32));
}

static inline  __attribute__((always_inline)) void native_write_msr(unsigned int msr,
        unsigned low, unsigned high)
{
 asm volatile("wrmsr" : : "c" (msr), "a"(low), "d" (high));
}

static inline  __attribute__((always_inline)) int native_write_msr_safe(unsigned int msr,
     unsigned low, unsigned high)
{
 int err;
 asm volatile("2: wrmsr ; xor %0,%0\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %4,%0 ; jmp 1b\n\t"
       ".previous\n\t"
       " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "2b" "," "3b" "\n" " .previous\n"
       : "=a" (err)
       : "c" (msr), "0" (low), "d" (high),
       "i" (-14));
 return err;
}

extern unsigned long long native_read_tsc(void);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long long __native_read_tsc(void)
{
 unsigned low, high;

 rdtsc_barrier();
 asm volatile("rdtsc" : "=a" (low), "=d" (high));
 rdtsc_barrier();

 return ((low) | ((u64)(high) << 32));
}

static inline  __attribute__((always_inline)) unsigned long long native_read_pmc(int counter)
{
 unsigned low, high;

 asm volatile("rdpmc" : "=a" (low), "=d" (high) : "c" (counter));
 return ((low) | ((u64)(high) << 32));
}




# 1 "linux-2.6.26/include/linux/errno.h" 1



# 1 "linux-2.6.26/include/asm/errno.h" 1
# 5 "linux-2.6.26/include/linux/errno.h" 2
# 113 "linux-2.6.26/include/asm/msr.h" 2
# 126 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) void wrmsr(unsigned msr, unsigned low, unsigned high)
{
 native_write_msr(msr, low, high);
}
# 138 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) int wrmsr_safe(unsigned msr, unsigned low, unsigned high)
{
 return native_write_msr_safe(msr, low, high);
}
# 153 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) int rdmsrl_safe(unsigned msr, unsigned long long *p)
{
 int err;

 *p = native_read_msr_safe(msr, &err);
 return err;
}
# 200 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) void rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h)
{
 do { u64 __val = native_read_msr((msr_no)); (*l) = (u32)__val; (*h) = (u32)(__val >> 32); } while (0);
}
static inline  __attribute__((always_inline)) void wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h)
{
 wrmsr(msr_no, l, h);
}
static inline  __attribute__((always_inline)) int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no,
        u32 *l, u32 *h)
{
 return ({ int __err; u64 __val = native_read_msr_safe((msr_no), &__err); (*l) = (u32)__val; (*h) = (u32)(__val >> 32); __err; });
}
static inline  __attribute__((always_inline)) int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h)
{
 return wrmsr_safe(msr_no, l, h);
}
# 21 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/desc_defs.h" 1
# 22 "linux-2.6.26/include/asm/desc_defs.h"
struct desc_struct {
 union {
  struct {
   unsigned int a;
   unsigned int b;
  };
  struct {
   u16 limit0;
   u16 base0;
   unsigned base1: 8, type: 4, s: 1, dpl: 2, p: 1;
   unsigned limit: 4, avl: 1, l: 1, d: 1, g: 1, base2: 8;
  };
 };
} __attribute__((packed)) ;

enum {
 GATE_INTERRUPT = 0xE,
 GATE_TRAP = 0xF,
 GATE_CALL = 0xC,
 GATE_TASK = 0x5,
};


struct gate_struct64 {
 u16 offset_low;
 u16 segment;
 unsigned ist : 3, zero0 : 5, type : 5, dpl : 2, p : 1;
 u16 offset_middle;
 u32 offset_high;
 u32 zero1;
} __attribute__((packed)) ;





enum {
 DESC_TSS = 0x9,
 DESC_LDT = 0x2,
 DESCTYPE_S = 0x10,
};


struct ldttss_desc64 {
 u16 limit0;
 u16 base0;
 unsigned base1 : 8, type : 5, dpl : 2, p : 1;
 unsigned limit1 : 4, zero0 : 3, g : 1, base2 : 8;
 u32 base3;
 u32 zero1;
} __attribute__((packed)) ;


typedef struct gate_struct64 gate_desc;
typedef struct ldttss_desc64 ldt_desc;
typedef struct ldttss_desc64 tss_desc;






struct desc_ptr {
 unsigned short size;
 unsigned long address;
}  __attribute__((packed)) ;
# 22 "linux-2.6.26/include/asm/processor.h" 2


# 1 "linux-2.6.26/include/linux/personality.h" 1
# 10 "linux-2.6.26/include/linux/personality.h"
struct exec_domain;
struct pt_regs;

extern int register_exec_domain(struct exec_domain *);
extern int unregister_exec_domain(struct exec_domain *);
extern int __set_personality(unsigned long);
# 24 "linux-2.6.26/include/linux/personality.h"
enum {
 ADDR_NO_RANDOMIZE = 0x0040000,
 FDPIC_FUNCPTRS = 0x0080000,


 MMAP_PAGE_ZERO = 0x0100000,
 ADDR_COMPAT_LAYOUT = 0x0200000,
 READ_IMPLIES_EXEC = 0x0400000,
 ADDR_LIMIT_32BIT = 0x0800000,
 SHORT_INODE = 0x1000000,
 WHOLE_SECONDS = 0x2000000,
 STICKY_TIMEOUTS = 0x4000000,
 ADDR_LIMIT_3GB = 0x8000000,
};
# 51 "linux-2.6.26/include/linux/personality.h"
enum {
 PER_LINUX = 0x0000,
 PER_LINUX_32BIT = 0x0000 | ADDR_LIMIT_32BIT,
 PER_LINUX_FDPIC = 0x0000 | FDPIC_FUNCPTRS,
 PER_SVR4 = 0x0001 | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_SVR3 = 0x0002 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_SCOSVR3 = 0x0003 | STICKY_TIMEOUTS |
      WHOLE_SECONDS | SHORT_INODE,
 PER_OSR5 = 0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS,
 PER_WYSEV386 = 0x0004 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_ISCR4 = 0x0005 | STICKY_TIMEOUTS,
 PER_BSD = 0x0006,
 PER_SUNOS = 0x0006 | STICKY_TIMEOUTS,
 PER_XENIX = 0x0007 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_LINUX32 = 0x0008,
 PER_LINUX32_3GB = 0x0008 | ADDR_LIMIT_3GB,
 PER_IRIX32 = 0x0009 | STICKY_TIMEOUTS,
 PER_IRIXN32 = 0x000a | STICKY_TIMEOUTS,
 PER_IRIX64 = 0x000b | STICKY_TIMEOUTS,
 PER_RISCOS = 0x000c,
 PER_SOLARIS = 0x000d | STICKY_TIMEOUTS,
 PER_UW7 = 0x000e | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_OSF4 = 0x000f,
 PER_HPUX = 0x0010,
 PER_MASK = 0x00ff,
};
# 86 "linux-2.6.26/include/linux/personality.h"
typedef void (*handler_t)(int, struct pt_regs *);

struct exec_domain {
 const char *name;
 handler_t handler;
 unsigned char pers_low;
 unsigned char pers_high;
 unsigned long *signal_map;
 unsigned long *signal_invmap;
 struct map_segment *err_map;
 struct map_segment *socktype_map;
 struct map_segment *sockopt_map;
 struct map_segment *af_map;
 struct module *module;
 struct exec_domain *next;
};
# 25 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/linux/cpumask.h" 1
# 90 "linux-2.6.26/include/linux/cpumask.h"
# 1 "linux-2.6.26/include/linux/bitmap.h" 1







# 1 "linux-2.6.26/include/linux/string.h" 1
# 14 "linux-2.6.26/include/linux/string.h"
extern char *strndup_user(const char *, long);




# 1 "linux-2.6.26/include/asm/string.h" 1



# 1 "linux-2.6.26/include/asm/string_64.h" 1
# 9 "linux-2.6.26/include/asm/string_64.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *__inline_memcpy(void *to, const void *from, size_t n)
{
 unsigned long d0, d1, d2;
 asm volatile("rep ; movsl\n\t"
       "testb $2,%b4\n\t"
       "je 1f\n\t"
       "movsw\n"
       "1:\ttestb $1,%b4\n\t"
       "je 2f\n\t"
       "movsb\n"
       "2:"
       : "=&c" (d0), "=&D" (d1), "=&S" (d2)
       : "0" (n / 4), "q" (n), "1" ((long)to), "2" ((long)from)
       : "memory");
 return to;
}






extern void *memcpy(void *to, const void *from, size_t len);
# 47 "linux-2.6.26/include/asm/string_64.h"
void *memset(void *s, int c, size_t n);


void *memmove(void *dest, const void *src, size_t count);

int memcmp(const void *cs, const void *ct, size_t count);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
int strcmp(const char *cs, const char *ct);
# 5 "linux-2.6.26/include/asm/string.h" 2
# 20 "linux-2.6.26/include/linux/string.h" 2


extern char * strcpy(char *,const char *);


extern char * strncpy(char *,const char *, __kernel_size_t);


size_t strlcpy(char *, const char *, size_t);


extern char * strcat(char *, const char *);


extern char * strncat(char *, const char *, __kernel_size_t);


extern size_t strlcat(char *, const char *, __kernel_size_t);


extern int strcmp(const char *,const char *);


extern int strncmp(const char *,const char *,__kernel_size_t);


extern int strnicmp(const char *, const char *, __kernel_size_t);


extern int strcasecmp(const char *s1, const char *s2);


extern int strncasecmp(const char *s1, const char *s2, size_t n);


extern char * strchr(const char *,int);


extern char * strnchr(const char *, size_t, int);


extern char * strrchr(const char *,int);

extern char * strstrip(char *);

extern char * strstr(const char *,const char *);


extern __kernel_size_t strlen(const char *);


extern __kernel_size_t strnlen(const char *,__kernel_size_t);


extern char * strpbrk(const char *,const char *);


extern char * strsep(char **,const char *);


extern __kernel_size_t strspn(const char *,const char *);


extern __kernel_size_t strcspn(const char *,const char *);
# 96 "linux-2.6.26/include/linux/string.h"
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp(const void *,const void *,__kernel_size_t);


extern void * memchr(const void *,int,__kernel_size_t);


extern char *kstrdup(const char *s, gfp_t gfp);
extern char *kstrndup(const char *s, size_t len, gfp_t gfp);
extern void *kmemdup(const void *src, size_t len, gfp_t gfp);

extern char **argv_split(gfp_t gfp, const char *str, int *argcp);
extern void argv_free(char **argv);

extern bool sysfs_streq(const char *s1, const char *s2);
# 9 "linux-2.6.26/include/linux/bitmap.h" 2
# 87 "linux-2.6.26/include/linux/bitmap.h"
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int __bitmap_parse(const char *buf, unsigned int buflen, int is_user,
   unsigned long *dst, int nbits);
extern int bitmap_parse_user(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern void bitmap_onto(unsigned long *dst, const unsigned long *orig,
  const unsigned long *relmap, int bits);
extern void bitmap_fold(unsigned long *dst, const unsigned long *orig,
  int sz, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);







static inline  __attribute__((always_inline)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if (nbits <= 64)
  *dst = 0UL;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline  __attribute__((always_inline)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 if (nlongs > 1) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
}

static inline  __attribute__((always_inline)) void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = *src;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline  __attribute__((always_inline)) void bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & *src2;
 else
  __bitmap_and(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & ~(*src2);
 else
  __bitmap_andnot(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = ~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 ^ *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ((*src1 & *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_empty(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_full(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_weight(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return hweight_long(*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = (*src << n) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_parse(const char *buf, unsigned int buflen,
   unsigned long *maskp, int nmaskbits)
{
 return __bitmap_parse(buf, buflen, 0, maskp, nmaskbits);
}
# 91 "linux-2.6.26/include/linux/cpumask.h" 2

typedef struct { unsigned long bits[(((1) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } cpumask_t;
extern cpumask_t _unused_cpumask_arg_;


static inline  __attribute__((always_inline)) void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline  __attribute__((always_inline)) int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline  __attribute__((always_inline)) void __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_complement(cpumask_t *dstp,
     const cpumask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_full(const cpumask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_right(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}
# 286 "linux-2.6.26/include/linux/cpumask.h"
static inline  __attribute__((always_inline)) int __cpumask_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpumask_parse_user(const char *buf, int len,
     cpumask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpulist_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpulist_parse(const char *buf, cpumask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpu_remap(int oldbit,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_remap(cpumask_t *dstp, const cpumask_t *srcp,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_onto(cpumask_t *dstp, const cpumask_t *origp,
  const cpumask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_fold(cpumask_t *dstp, const cpumask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
# 416 "linux-2.6.26/include/linux/cpumask.h"
typedef  cpumask_t  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_cpu_possible_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_cpu_online_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_cpu_present_map[NUM_STACKS];   
# 26 "linux-2.6.26/include/asm/processor.h" 2
# 34 "linux-2.6.26/include/asm/processor.h"
static inline  __attribute__((always_inline)) void *current_text_addr(void)
{
 void *pc;

 asm volatile("mov $1f, %0; 1:":"=r" (pc));

 return pc;
}
# 57 "linux-2.6.26/include/asm/processor.h"
struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
# 75 "linux-2.6.26/include/asm/processor.h"
 int x86_tlbsize;
 __u8 x86_virt_bits;
 __u8 x86_phys_bits;

 __u8 x86_coreid_bits;

 __u32 extended_cpuid_level;


 int cpuid_level;
 __u32 x86_capability[8];
 char x86_vendor_id[16];
 char x86_model_id[64];

 int x86_cache_size;
 int x86_cache_alignment;
 int x86_power;
 unsigned long loops_per_jiffy;





 u16 x86_max_cores;
 u16 apicid;
 u16 initial_apicid;
 u16 x86_clflush_size;
# 112 "linux-2.6.26/include/asm/processor.h"
} __attribute__((__aligned__((1 << (5))))) ;
# 128 "linux-2.6.26/include/asm/processor.h"
typedef  struct cpuinfo_x86   _GLOBAL_29_T; extern  _GLOBAL_29_T  global_boot_cpu_data[NUM_STACKS];    
typedef  struct cpuinfo_x86   _GLOBAL_30_T; extern  _GLOBAL_30_T  global_new_cpu_data[NUM_STACKS];    

extern struct tss_struct doublefault_tss;
extern __u32 cleared_cpu_caps[8];
# 143 "linux-2.6.26/include/asm/processor.h"
static inline  __attribute__((always_inline)) int hlt_works(int cpu)
{



 return 1;

}



extern void cpu_detect(struct cpuinfo_x86 *c);

extern void identify_cpu(struct cpuinfo_x86 *);
extern void identify_boot_cpu(void);
extern void identify_secondary_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
typedef  unsigned short   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_num_cache_leaves[NUM_STACKS];    


extern void detect_ht(struct cpuinfo_x86 *c);




static inline  __attribute__((always_inline)) void native_cpuid(unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{

 asm("cpuid"
     : "=a" (*eax),
       "=b" (*ebx),
       "=c" (*ecx),
       "=d" (*edx)
     : "0" (*eax), "2" (*ecx));
}

static inline  __attribute__((always_inline)) void load_cr3(pgd_t *pgdir)
{
 (native_write_cr3(__phys_addr((unsigned long)(pgdir))));
}
# 221 "linux-2.6.26/include/asm/processor.h"
struct x86_hw_tss {
 u32 reserved1;
 u64 sp0;
 u64 sp1;
 u64 sp2;
 u64 reserved2;
 u64 ist[7];
 u32 reserved3;
 u32 reserved4;
 u16 reserved5;
 u16 io_bitmap_base;

}  __attribute__((packed)) __attribute__((__aligned__((1 << (5))))) ;
# 246 "linux-2.6.26/include/asm/processor.h"
struct tss_struct {



 struct x86_hw_tss x86_tss;







 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];



 unsigned long io_bitmap_max;
 struct thread_struct *io_bitmap_owner;




 unsigned long __cacheline_filler[35];



 unsigned long stack[64];

} __attribute__((packed)) ;

typedef  __typeof__ ( struct tss_struct  )   _GLOBAL_32_T; extern  _GLOBAL_32_T  global_per_cpu__init_tss[NUM_STACKS];    




struct orig_ist {
 unsigned long ist[7];
};



struct i387_fsave_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;


 u32 st_space[20];


 u32 status;
};

struct i387_fxsave_struct {
 u16 cwd;
 u16 swd;
 u16 twd;
 u16 fop;
 union {
  struct {
   u64 rip;
   u64 rdp;
  };
  struct {
   u32 fip;
   u32 fcs;
   u32 foo;
   u32 fos;
  };
 };
 u32 mxcsr;
 u32 mxcsr_mask;


 u32 st_space[32];


 u32 xmm_space[64];

 u32 padding[24];

} __attribute__((aligned(16))) ;

struct i387_soft_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;

 u32 st_space[20];
 u8 ftop;
 u8 changed;
 u8 lookahead;
 u8 no_update;
 u8 rm;
 u8 alimit;
 struct info *info;
 u32 entry_eip;
};

union thread_xstate {
 struct i387_fsave_struct fsave;
 struct i387_fxsave_struct fxsave;
 struct i387_soft_struct soft;
};


typedef  __typeof__ ( struct orig_ist  )   _GLOBAL_33_T; extern  _GLOBAL_33_T  global_per_cpu__orig_ist[NUM_STACKS];    


extern void print_cpu_info(struct cpuinfo_x86 *);
typedef  unsigned int   _GLOBAL_34_T; extern  _GLOBAL_34_T  global_xstate_size[NUM_STACKS];    
extern void free_thread_xstate(struct task_struct *);
extern struct kmem_cache *task_xstate_cachep;
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
typedef  unsigned short   _GLOBAL_35_T; extern  _GLOBAL_35_T  global_num_cache_leaves[NUM_STACKS];    

struct thread_struct {

 struct desc_struct tls_array[3];
 unsigned long sp0;
 unsigned long sp;



 unsigned long usersp;
 unsigned short es;
 unsigned short ds;
 unsigned short fsindex;
 unsigned short gsindex;

 unsigned long ip;
 unsigned long fs;
 unsigned long gs;

 unsigned long debugreg0;
 unsigned long debugreg1;
 unsigned long debugreg2;
 unsigned long debugreg3;
 unsigned long debugreg6;
 unsigned long debugreg7;

 unsigned long cr2;
 unsigned long trap_no;
 unsigned long error_code;

 union thread_xstate *xstate;
# 412 "linux-2.6.26/include/asm/processor.h"
 unsigned long *io_bitmap_ptr;
 unsigned long iopl;

 unsigned io_bitmap_max;

 unsigned long debugctlmsr;


 unsigned long ds_area_msr;
};

static inline  __attribute__((always_inline)) unsigned long native_get_debugreg(int regno)
{
 unsigned long val = 0;

 switch (regno) {
 case 0:
  asm("mov %%db0, %0" :"=r" (val));
  break;
 case 1:
  asm("mov %%db1, %0" :"=r" (val));
  break;
 case 2:
  asm("mov %%db2, %0" :"=r" (val));
  break;
 case 3:
  asm("mov %%db3, %0" :"=r" (val));
  break;
 case 6:
  asm("mov %%db6, %0" :"=r" (val));
  break;
 case 7:
  asm("mov %%db7, %0" :"=r" (val));
  break;
 default:
  do { asm volatile("ud2"); for (;;) ; } while (0);
 }
 return val;
}

static inline  __attribute__((always_inline)) void native_set_debugreg(int regno, unsigned long value)
{
 switch (regno) {
 case 0:
  asm("mov %0, %%db0" ::"r" (value));
  break;
 case 1:
  asm("mov %0, %%db1" ::"r" (value));
  break;
 case 2:
  asm("mov %0, %%db2" ::"r" (value));
  break;
 case 3:
  asm("mov %0, %%db3" ::"r" (value));
  break;
 case 6:
  asm("mov %0, %%db6" ::"r" (value));
  break;
 case 7:
  asm("mov %0, %%db7" ::"r" (value));
  break;
 default:
  do { asm volatile("ud2"); for (;;) ; } while (0);
 }
}




static inline  __attribute__((always_inline)) void native_set_iopl_mask(unsigned mask)
{
# 495 "linux-2.6.26/include/asm/processor.h"
}

static inline  __attribute__((always_inline)) void
native_load_sp0(struct tss_struct *tss, struct thread_struct *thread)
{
 tss->x86_tss.sp0 = thread->sp0;







}

static inline  __attribute__((always_inline)) void native_swapgs(void)
{

 asm volatile("swapgs" ::: "memory");

}
# 531 "linux-2.6.26/include/asm/processor.h"
static inline  __attribute__((always_inline)) void load_sp0(struct tss_struct *tss,
       struct thread_struct *thread)
{
 native_load_sp0(tss, thread);
}
# 547 "linux-2.6.26/include/asm/processor.h"
typedef  unsigned long   _GLOBAL_36_T; extern  _GLOBAL_36_T  global_mmu_cr4_features[NUM_STACKS];    

static inline  __attribute__((always_inline)) void set_in_cr4(unsigned long mask)
{
 unsigned cr4;

 global_mmu_cr4_features[get_stack_id()] |= mask;
 cr4 = (native_read_cr4());
 cr4 |= mask;
 (native_write_cr4(cr4));
}

static inline  __attribute__((always_inline)) void clear_in_cr4(unsigned long mask)
{
 unsigned cr4;

 global_mmu_cr4_features[get_stack_id()] &= ~mask;
 cr4 = (native_read_cr4());
 cr4 &= ~mask;
 (native_write_cr4(cr4));
}

struct microcode_header {
 unsigned int hdrver;
 unsigned int rev;
 unsigned int date;
 unsigned int sig;
 unsigned int cksum;
 unsigned int ldrver;
 unsigned int pf;
 unsigned int datasize;
 unsigned int totalsize;
 unsigned int reserved[3];
};

struct microcode {
 struct microcode_header hdr;
 unsigned int bits[0];
};

typedef struct microcode microcode_t;
typedef struct microcode_header microcode_header_t;


struct extended_signature {
 unsigned int sig;
 unsigned int pf;
 unsigned int cksum;
};

struct extended_sigtable {
 unsigned int count;
 unsigned int cksum;
 unsigned int reserved[3];
 struct extended_signature sigs[0];
};

typedef struct {
 unsigned long seg;
} mm_segment_t;





extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);


extern void release_thread(struct task_struct *);


extern void prepare_to_copy(struct task_struct *tsk);

unsigned long get_wchan(struct task_struct *p);






static inline  __attribute__((always_inline)) void cpuid(unsigned int op,
    unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = 0;
 native_cpuid(eax, ebx, ecx, edx);
}


static inline  __attribute__((always_inline)) void cpuid_count(unsigned int op, int count,
          unsigned int *eax, unsigned int *ebx,
          unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = count;
 native_cpuid(eax, ebx, ecx, edx);
}




static inline  __attribute__((always_inline)) unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return eax;
}

static inline  __attribute__((always_inline)) unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ebx;
}

static inline  __attribute__((always_inline)) unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ecx;
}

static inline  __attribute__((always_inline)) unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return edx;
}


static inline  __attribute__((always_inline)) void rep_nop(void)
{
 asm volatile("rep; nop" ::: "memory");
}

static inline  __attribute__((always_inline)) void cpu_relax(void)
{
 rep_nop();
}


static inline  __attribute__((always_inline)) void sync_core(void)
{
 int tmp;

 asm volatile("cpuid" : "=a" (tmp) : "0" (1)
       : "ebx", "ecx", "edx", "memory");
}

static inline  __attribute__((always_inline)) void __monitor(const void *eax, unsigned long ecx,
        unsigned long edx)
{

 asm volatile(".byte 0x0f, 0x01, 0xc8;"
       :: "a" (eax), "c" (ecx), "d"(edx));
}

static inline  __attribute__((always_inline)) void __mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(".byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

static inline  __attribute__((always_inline)) void __sti_mwait(unsigned long eax, unsigned long ecx)
{
 do { } while (0);

 asm volatile("sti; .byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

extern void mwait_idle_with_hints(unsigned long eax, unsigned long ecx);

typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_force_mwait[NUM_STACKS];   

extern void select_idle_routine(const struct cpuinfo_x86 *c);

typedef  unsigned long   _GLOBAL_38_T; extern  _GLOBAL_38_T  global_boot_option_idle_override[NUM_STACKS];    

extern void enable_sep_cpu(void);
extern int sysenter_setup(void);


typedef  struct desc_ptr   _GLOBAL_39_T; extern  _GLOBAL_39_T  global_early_gdt_descr[NUM_STACKS];    

extern void cpu_set_gdt(int);
extern void switch_to_new_gdt(void);
extern void cpu_init(void);
extern void init_gdt(int cpu);

static inline  __attribute__((always_inline)) void update_debugctlmsr(unsigned long debugctlmsr)
{

 if (global_boot_cpu_data[get_stack_id()].x86 < 6)
  return;

 native_write_msr((0x000001d9), (u32)((u64)(debugctlmsr)), (u32)((u64)(debugctlmsr) >> 32));
}





typedef  unsigned int   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_machine_id[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_41_T; extern  _GLOBAL_41_T  global_machine_submodel_id[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_BIOS_revision[NUM_STACKS];    


typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_bootloader_type[NUM_STACKS];   

typedef  char  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_ignore_fpu_irq[NUM_STACKS];   
# 786 "linux-2.6.26/include/asm/processor.h"
static inline  __attribute__((always_inline)) void prefetch(const void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" " .balign 8 " "\n" " .quad " "661b\n" " .quad " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchnta (%1)" "\n664:\n" ".previous" :: "i" ((0*32+25)), "r" (x))


             ;
}






static inline  __attribute__((always_inline)) void prefetchw(const void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" " .balign 8 " "\n" " .quad " "661b\n" " .quad " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchw (%1)" "\n664:\n" ".previous" :: "i" ((1*32+31)), "r" (x))


             ;
}

static inline  __attribute__((always_inline)) void spin_lock_prefetch(const void *x)
{
 prefetchw(x);
}
# 910 "linux-2.6.26/include/asm/processor.h"
extern void start_thread(struct pt_regs *regs, unsigned long new_ip,
            unsigned long new_sp);
# 925 "linux-2.6.26/include/asm/processor.h"
extern int get_tsc_mode(unsigned long adr);
extern int set_tsc_mode(unsigned int val);
# 15 "linux-2.6.26/include/linux/prefetch.h" 2
# 53 "linux-2.6.26/include/linux/prefetch.h"
static inline  __attribute__((always_inline)) void prefetch_range(void *addr, size_t len)
{







}
# 7 "linux-2.6.26/include/linux/list.h" 2
# 19 "linux-2.6.26/include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};






static inline  __attribute__((always_inline)) void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
# 41 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 65 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 82 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}







static inline  __attribute__((always_inline)) void __list_add_rcu(struct list_head * new,
  struct list_head * prev, struct list_head * next)
{
 new->next = next;
 new->prev = prev;
 __asm__ __volatile__("": : :"memory");
 next->prev = new;
 prev->next = new;
}
# 119 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 140 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 153 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
# 166 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100);
 entry->prev = ((void *) 0x00200200);
}
# 200 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_del_rcu(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200);
}
# 213 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline  __attribute__((always_inline)) void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}
# 237 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_replace_rcu(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->prev = old->prev;
 __asm__ __volatile__("": : :"memory");
 new->next->prev = new;
 new->prev->next = new;
 old->prev = ((void *) 0x00200200);
}





static inline  __attribute__((always_inline)) void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 INIT_LIST_HEAD(entry);
}






static inline  __attribute__((always_inline)) void list_move(struct list_head *list, struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add(list, head);
}






static inline  __attribute__((always_inline)) void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add_tail(list, head);
}






static inline  __attribute__((always_inline)) int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline  __attribute__((always_inline)) int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 314 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}





static inline  __attribute__((always_inline)) int list_is_singular(const struct list_head *head)
{
 return !list_empty(head) && (head->next == head->prev);
}

static inline  __attribute__((always_inline)) void __list_splice(const struct list_head *list,
     struct list_head *head)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 first->prev = head;
 head->next = first;

 last->next = at;
 at->prev = last;
}






static inline  __attribute__((always_inline)) void list_splice(const struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 362 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  INIT_LIST_HEAD(list);
 }
}
# 388 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_splice_init_rcu(struct list_head *list,
     struct list_head *head,
     void (*sync)(void))
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 if (list_empty(head))
  return;



 INIT_LIST_HEAD(list);
# 410 "linux-2.6.26/include/linux/list.h"
 sync();
# 420 "linux-2.6.26/include/linux/list.h"
 last->next = at;
 __asm__ __volatile__("": : :"memory");
 head->next = first;
 first->prev = head;
 at->prev = last;
}
# 690 "linux-2.6.26/include/linux/list.h"
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};




static inline  __attribute__((always_inline)) void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}

static inline  __attribute__((always_inline)) int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline  __attribute__((always_inline)) int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline  __attribute__((always_inline)) void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline  __attribute__((always_inline)) void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100);
 n->pprev = ((void *) 0x00200200);
}
# 752 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200);
}

static inline  __attribute__((always_inline)) void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}
# 773 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *new)
{
 struct hlist_node *next = old->next;

 new->next = next;
 new->pprev = old->pprev;
 __asm__ __volatile__("": : :"memory");
 if (next)
  new->next->pprev = &new->next;
 *new->pprev = new;
 old->pprev = ((void *) 0x00200200);
}

static inline  __attribute__((always_inline)) void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}
# 817 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 n->pprev = &h->first;
 __asm__ __volatile__("": : :"memory");
 if (first)
  first->pprev = &n->next;
 h->first = n;
}


static inline  __attribute__((always_inline)) void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline  __attribute__((always_inline)) void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}
# 868 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 __asm__ __volatile__("": : :"memory");
 next->pprev = &n->next;
 *(n->pprev) = n;
}
# 896 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 __asm__ __volatile__("": : :"memory");
 prev->next = n;
 if (n->next)
  n->next->pprev = &n->next;
}
# 10 "linux-2.6.26/include/linux/module.h" 2
# 1 "linux-2.6.26/include/linux/stat.h" 1





# 1 "linux-2.6.26/include/asm/stat.h" 1
# 68 "linux-2.6.26/include/asm/stat.h"
struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned long st_nlink;

 unsigned int st_mode;
 unsigned int st_uid;
 unsigned int st_gid;
 unsigned int __pad0;
 unsigned long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;

 unsigned long st_atime;
 unsigned long st_atime_nsec;
 unsigned long st_mtime;
 unsigned long st_mtime_nsec;
 unsigned long st_ctime;
 unsigned long st_ctime_nsec;
 long __unused[3];
};



struct __old_kernel_stat {
 unsigned short st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned short st_rdev;






 unsigned int st_size;
 unsigned int st_atime;
 unsigned int st_mtime;
 unsigned int st_ctime;

};
# 7 "linux-2.6.26/include/linux/stat.h" 2
# 60 "linux-2.6.26/include/linux/stat.h"
# 1 "linux-2.6.26/include/linux/time.h" 1







# 1 "linux-2.6.26/include/linux/seqlock.h" 1
# 29 "linux-2.6.26/include/linux/seqlock.h"
# 1 "linux-2.6.26/include/linux/spinlock.h" 1
# 49 "linux-2.6.26/include/linux/spinlock.h"
# 1 "linux-2.6.26/include/linux/preempt.h" 1
# 9 "linux-2.6.26/include/linux/preempt.h"
# 1 "linux-2.6.26/include/linux/thread_info.h" 1
# 12 "linux-2.6.26/include/linux/thread_info.h"
struct timespec;
struct compat_timespec;




struct restart_block {
 long (*fn)(struct restart_block *);
 union {
  struct {
   unsigned long arg0, arg1, arg2, arg3;
  };

  struct {
   u32 *uaddr;
   u32 val;
   u32 flags;
   u32 bitset;
   u64 time;
  } futex;

  struct {
   clockid_t index;
   struct timespec *rmtp;



   u64 expires;
  } nanosleep;
 };
};

extern long do_no_restart_syscall(struct restart_block *parm);


# 1 "linux-2.6.26/include/asm/thread_info.h" 1




# 1 "linux-2.6.26/include/asm/thread_info_64.h" 1
# 22 "linux-2.6.26/include/asm/thread_info_64.h"
struct task_struct;
struct exec_domain;


struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 __u32 flags;
 __u32 status;
 __u32 cpu;
 int preempt_count;

 mm_segment_t addr_limit;
 struct restart_block restart_block;



};
# 63 "linux-2.6.26/include/asm/thread_info_64.h"
static inline  __attribute__((always_inline)) struct thread_info *current_thread_info(void)
{

 extern struct thread_info *nsc_get_current_thread_info(void);
 return nsc_get_current_thread_info();





}


static inline  __attribute__((always_inline)) struct thread_info *stack_thread_info(void)
{

 extern struct thread_info *nsc_get_current_thread_info(void);
 return nsc_get_current_thread_info();





}
# 195 "linux-2.6.26/include/asm/thread_info_64.h"
static inline  __attribute__((always_inline)) void set_restore_sigmask(void)
{
 struct thread_info *ti = current_thread_info();
 ti->status |= 0x0008;
 set_bit(2, &ti->flags);
}
# 6 "linux-2.6.26/include/asm/thread_info.h" 2



extern void arch_task_cache_init(void);
extern void free_thread_info(struct thread_info *ti);
extern int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src);
# 48 "linux-2.6.26/include/linux/thread_info.h" 2
# 56 "linux-2.6.26/include/linux/thread_info.h"
static inline  __attribute__((always_inline)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag, (unsigned long *)&ti->flags);
}

static inline  __attribute__((always_inline)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag, (unsigned long *)&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline  __attribute__((always_inline)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p((flag)) ? constant_test_bit((flag), ((unsigned long *)&ti->flags)) : variable_test_bit((flag), ((unsigned long *)&ti->flags)));
}
# 10 "linux-2.6.26/include/linux/preempt.h" 2
# 50 "linux-2.6.26/include/linux/spinlock.h" 2




# 1 "linux-2.6.26/include/linux/stringify.h" 1
# 55 "linux-2.6.26/include/linux/spinlock.h" 2
# 1 "linux-2.6.26/include/linux/bottom_half.h" 1



extern void local_bh_disable(void);
extern void __local_bh_enable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);
# 56 "linux-2.6.26/include/linux/spinlock.h" 2
# 79 "linux-2.6.26/include/linux/spinlock.h"
# 1 "linux-2.6.26/include/linux/spinlock_types.h" 1
# 15 "linux-2.6.26/include/linux/spinlock_types.h"
# 1 "linux-2.6.26/include/linux/spinlock_types_up.h" 1
# 25 "linux-2.6.26/include/linux/spinlock_types_up.h"
typedef struct { } raw_spinlock_t;





typedef struct {

} raw_rwlock_t;
# 16 "linux-2.6.26/include/linux/spinlock_types.h" 2


# 1 "linux-2.6.26/include/linux/lockdep.h" 1
# 12 "linux-2.6.26/include/linux/lockdep.h"
struct task_struct;
struct lockdep_map;
# 313 "linux-2.6.26/include/linux/lockdep.h"
static inline  __attribute__((always_inline)) void lockdep_off(void)
{
}

static inline  __attribute__((always_inline)) void lockdep_on(void)
{
}
# 340 "linux-2.6.26/include/linux/lockdep.h"
struct lock_class_key { };
# 373 "linux-2.6.26/include/linux/lockdep.h"
static inline  __attribute__((always_inline)) void early_init_irq_lock_class(void)
{
}







static inline  __attribute__((always_inline)) void early_boot_irqs_off(void)
{
}
static inline  __attribute__((always_inline)) void early_boot_irqs_on(void)
{
}
static inline  __attribute__((always_inline)) void print_irqtrace_events(struct task_struct *curr)
{
}
# 19 "linux-2.6.26/include/linux/spinlock_types.h" 2

typedef struct {
 raw_spinlock_t raw_lock;
# 32 "linux-2.6.26/include/linux/spinlock_types.h"
} spinlock_t;



typedef struct {
 raw_rwlock_t raw_lock;
# 48 "linux-2.6.26/include/linux/spinlock_types.h"
} rwlock_t;
# 80 "linux-2.6.26/include/linux/spinlock.h" 2

extern int  __attribute__((section(".spinlock.text"))) generic__raw_read_trylock(raw_rwlock_t *lock);







# 1 "linux-2.6.26/include/linux/spinlock_up.h" 1
# 90 "linux-2.6.26/include/linux/spinlock.h" 2
# 141 "linux-2.6.26/include/linux/spinlock.h"
# 1 "linux-2.6.26/include/linux/spinlock_api_up.h" 1
# 142 "linux-2.6.26/include/linux/spinlock.h" 2
# 302 "linux-2.6.26/include/linux/spinlock.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1



# 1 "linux-2.6.26/include/asm/atomic_64.h" 1




# 1 "linux-2.6.26/include/asm/cmpxchg.h" 1
# 6 "linux-2.6.26/include/asm/atomic_64.h" 2
# 25 "linux-2.6.26/include/asm/atomic_64.h"
typedef struct {
 int counter;
} atomic_t;
# 55 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) void atomic_add(int i, atomic_t *v)
{
 asm volatile("" "addl %1,%0"
       : "=m" (v->counter)
       : "ir" (i), "m" (v->counter));
}
# 69 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) void atomic_sub(int i, atomic_t *v)
{
 asm volatile("" "subl %1,%0"
       : "=m" (v->counter)
       : "ir" (i), "m" (v->counter));
}
# 85 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_sub_and_test(int i, atomic_t *v)
{
 unsigned char c;

 asm volatile("" "subl %2,%0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "ir" (i), "m" (v->counter) : "memory");
 return c;
}







static inline  __attribute__((always_inline)) void atomic_inc(atomic_t *v)
{
 asm volatile("" "incl %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}







static inline  __attribute__((always_inline)) void atomic_dec(atomic_t *v)
{
 asm volatile("" "decl %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}
# 129 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_dec_and_test(atomic_t *v)
{
 unsigned char c;

 asm volatile("" "decl %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 147 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_inc_and_test(atomic_t *v)
{
 unsigned char c;

 asm volatile("" "incl %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 166 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_add_negative(int i, atomic_t *v)
{
 unsigned char c;

 asm volatile("" "addl %2,%0; sets %1"
       : "=m" (v->counter), "=qm" (c)
       : "ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 183 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_add_return(int i, atomic_t *v)
{
 int __i = i;
 asm volatile("" "xaddl %0, %1"
       : "+r" (i), "+m" (v->counter)
       : : "memory");
 return i + __i;
}

static inline  __attribute__((always_inline)) int atomic_sub_return(int i, atomic_t *v)
{
 return atomic_add_return(-i, v);
}






typedef struct {
 long counter;
} atomic64_t;
# 233 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) void atomic64_add(long i, atomic64_t *v)
{
 asm volatile("" "addq %1,%0"
       : "=m" (v->counter)
       : "ir" (i), "m" (v->counter));
}
# 247 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) void atomic64_sub(long i, atomic64_t *v)
{
 asm volatile("" "subq %1,%0"
       : "=m" (v->counter)
       : "ir" (i), "m" (v->counter));
}
# 263 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_sub_and_test(long i, atomic64_t *v)
{
 unsigned char c;

 asm volatile("" "subq %2,%0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "ir" (i), "m" (v->counter) : "memory");
 return c;
}







static inline  __attribute__((always_inline)) void atomic64_inc(atomic64_t *v)
{
 asm volatile("" "incq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}







static inline  __attribute__((always_inline)) void atomic64_dec(atomic64_t *v)
{
 asm volatile("" "decq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}
# 307 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_dec_and_test(atomic64_t *v)
{
 unsigned char c;

 asm volatile("" "decq %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 325 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_inc_and_test(atomic64_t *v)
{
 unsigned char c;

 asm volatile("" "incq %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 344 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_add_negative(long i, atomic64_t *v)
{
 unsigned char c;

 asm volatile("" "addq %2,%0; sets %1"
       : "=m" (v->counter), "=qm" (c)
       : "ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 361 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) long atomic64_add_return(long i, atomic64_t *v)
{
 long __i = i;
 asm volatile("" "xaddq %0, %1;"
       : "+r" (i), "+m" (v->counter)
       : : "memory");
 return i + __i;
}

static inline  __attribute__((always_inline)) long atomic64_sub_return(long i, atomic64_t *v)
{
 return atomic64_add_return(-i, v);
}
# 393 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_add_unless(atomic_t *v, int a, int u)
{
 int c, old;
 c = ((v)->counter);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = (((__typeof__(*(&(((v))->counter))))__cmpxchg((&(((v))->counter)), (unsigned long)((c)), (unsigned long)((c + (a))), sizeof(*(&(((v))->counter))))));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c != (u);
}
# 419 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_add_unless(atomic64_t *v, long a, long u)
{
 long c, old;
 c = ((v)->counter);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = (((__typeof__(*(&(((v))->counter))))__cmpxchg((&(((v))->counter)), (unsigned long)((c)), (unsigned long)((c + (a))), sizeof(*(&(((v))->counter))))));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c != (u);
}
# 452 "linux-2.6.26/include/asm/atomic_64.h"
# 1 "linux-2.6.26/include/asm-generic/atomic.h" 1
# 23 "linux-2.6.26/include/asm-generic/atomic.h"
typedef atomic64_t atomic_long_t;



static inline  __attribute__((always_inline)) long atomic_long_read(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)((v)->counter);
}

static inline  __attribute__((always_inline)) void atomic_long_set(atomic_long_t *l, long i)
{
 atomic64_t *v = (atomic64_t *)l;

 (((v)->counter) = (i));
}

static inline  __attribute__((always_inline)) void atomic_long_inc(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_inc(v);
}

static inline  __attribute__((always_inline)) void atomic_long_dec(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_dec(v);
}

static inline  __attribute__((always_inline)) void atomic_long_add(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_add(i, v);
}

static inline  __attribute__((always_inline)) void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_sub(i, v);
}

static inline  __attribute__((always_inline)) int atomic_long_sub_and_test(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_sub_and_test(i, v);
}

static inline  __attribute__((always_inline)) int atomic_long_dec_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_dec_and_test(v);
}

static inline  __attribute__((always_inline)) int atomic_long_inc_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_inc_and_test(v);
}

static inline  __attribute__((always_inline)) int atomic_long_add_negative(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_add_negative(i, v);
}

static inline  __attribute__((always_inline)) long atomic_long_add_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_return(i, v);
}

static inline  __attribute__((always_inline)) long atomic_long_sub_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_sub_return(i, v);
}

static inline  __attribute__((always_inline)) long atomic_long_inc_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_add_return(1, (v)));
}

static inline  __attribute__((always_inline)) long atomic_long_dec_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_sub_return(1, (v)));
}

static inline  __attribute__((always_inline)) long atomic_long_add_unless(atomic_long_t *l, long a, long u)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_unless(v, a, u);
}
# 453 "linux-2.6.26/include/asm/atomic_64.h" 2
# 5 "linux-2.6.26/include/asm/atomic.h" 2
# 303 "linux-2.6.26/include/linux/spinlock.h" 2
# 311 "linux-2.6.26/include/linux/spinlock.h"
extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 30 "linux-2.6.26/include/linux/seqlock.h" 2


typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 60 "linux-2.6.26/include/linux/seqlock.h"
static inline  __attribute__((always_inline)) void write_seqlock(seqlock_t *sl)
{
 do { do { } while (0); (void)0; (void)(&sl->lock); } while (0);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_sequnlock(seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 do { do { } while (0); (void)0; (void)(&sl->lock); } while (0);
}

static inline  __attribute__((always_inline)) int write_tryseqlock(seqlock_t *sl)
{
 int ret = (({ do { do { } while (0); (void)0; (void)(&sl->lock); } while (0); 1; }));

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}


static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned read_seqbegin(const seqlock_t *sl)
{
 unsigned ret;

repeat:
 ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 if (__builtin_expect(!!(ret & 1), 0)) {
  cpu_relax();
  goto repeat;
 }

 return ret;
}






static inline   __attribute__((always_inline)) __attribute__((always_inline)) int read_seqretry(const seqlock_t *sl, unsigned start)
{
 __asm__ __volatile__("": : :"memory");

 return (sl->sequence != start);
}
# 121 "linux-2.6.26/include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline  __attribute__((always_inline)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret;

repeat:
 ret = s->sequence;
 __asm__ __volatile__("": : :"memory");
 if (__builtin_expect(!!(ret & 1), 0)) {
  cpu_relax();
  goto repeat;
 }
 return ret;
}




static inline  __attribute__((always_inline)) int read_seqcount_retry(const seqcount_t *s, unsigned start)
{
 __asm__ __volatile__("": : :"memory");

 return s->sequence != start;
}






static inline  __attribute__((always_inline)) void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 9 "linux-2.6.26/include/linux/time.h" 2
# 1 "linux-2.6.26/include/linux/math64.h" 1




# 1 "linux-2.6.26/include/asm/div64.h" 1
# 57 "linux-2.6.26/include/asm/div64.h"
# 1 "linux-2.6.26/include/asm-generic/div64.h" 1
# 58 "linux-2.6.26/include/asm/div64.h" 2
# 6 "linux-2.6.26/include/linux/math64.h" 2
# 15 "linux-2.6.26/include/linux/math64.h"
static inline  __attribute__((always_inline)) u64 div_u64_rem(u64 dividend, u32 divisor, u32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline  __attribute__((always_inline)) s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline  __attribute__((always_inline)) u64 div64_u64(u64 dividend, u64 divisor)
{
 return dividend / divisor;
}
# 66 "linux-2.6.26/include/linux/math64.h"
static inline  __attribute__((always_inline)) u64 div_u64(u64 dividend, u32 divisor)
{
 u32 remainder;
 return div_u64_rem(dividend, divisor, &remainder);
}






static inline  __attribute__((always_inline)) s64 div_s64(s64 dividend, s32 divisor)
{
 s32 remainder;
 return div_s64_rem(dividend, divisor, &remainder);
}


u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) u32
__iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
{
 u32 ret = 0;

 while (dividend >= divisor) {


  asm("" : "+rm"(dividend));

  dividend -= divisor;
  ret++;
 }

 *remainder = dividend;

 return ret;
}
# 10 "linux-2.6.26/include/linux/time.h" 2




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 41 "linux-2.6.26/include/linux/time.h"
static inline  __attribute__((always_inline)) int timespec_equal(const struct timespec *a,
                                 const struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline  __attribute__((always_inline)) int timespec_compare(const struct timespec *lhs, const struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline  __attribute__((always_inline)) int timeval_compare(const struct timeval *lhs, const struct timeval *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_usec - rhs->tv_usec;
}

extern unsigned long mktime(const unsigned int year, const unsigned int mon,
       const unsigned int day, const unsigned int hour,
       const unsigned int min, const unsigned int sec);

extern void set_normalized_timespec(struct timespec *ts, time_t sec, long nsec);




static inline  __attribute__((always_inline)) struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}







typedef  struct timespec   _GLOBAL_45_T; extern  _GLOBAL_45_T  global_xtime[NUM_STACKS];    
typedef  struct timespec   _GLOBAL_46_T; extern  _GLOBAL_46_T  global_wall_to_monotonic[NUM_STACKS];    
typedef  seqlock_t  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_xtime_lock[NUM_STACKS];   

extern unsigned long read_persistent_clock(void);
extern int update_persistent_clock(struct timespec now);
typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_no_sync_cmos_clock[NUM_STACKS] __attribute__((__section__(".data.read_mostly")))  ;    
void timekeeping_init(void);

unsigned long get_seconds(void);
struct timespec current_kernel_time(void);




extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);

extern long do_utimes(int dfd, char *filename, struct timespec *times, int flags);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday(struct timespec *tv);
extern void getboottime(struct timespec *ts);
extern void monotonic_to_bootbased(struct timespec *ts);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_valid_for_hres(void);
extern void update_wall_time(void);
extern void update_xtime_cache(u64 nsec);
# 135 "linux-2.6.26/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timespec_to_ns(const struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
# 147 "linux-2.6.26/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timeval_to_ns(const struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec(const s64 nsec);







extern struct timeval ns_to_timeval(const s64 nsec);
# 177 "linux-2.6.26/include/linux/time.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 a->tv_sec += __iter_div_u64_rem(a->tv_nsec + ns, 1000000000L, &ns);
 a->tv_nsec = ns;
}
# 200 "linux-2.6.26/include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 61 "linux-2.6.26/include/linux/stat.h" 2

struct kstat {
 u64 ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 uid_t uid;
 gid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long long blocks;
};
# 11 "linux-2.6.26/include/linux/module.h" 2


# 1 "linux-2.6.26/include/linux/kmod.h" 1
# 33 "linux-2.6.26/include/linux/kmod.h"
static inline  __attribute__((always_inline)) int request_module(const char * name, ...) { return -38; }




struct key;
struct file;
struct subprocess_info;


struct subprocess_info *call_usermodehelper_setup(char *path,
        char **argv, char **envp);


void call_usermodehelper_setkeys(struct subprocess_info *info,
     struct key *session_keyring);
int call_usermodehelper_stdinpipe(struct subprocess_info *sub_info,
      struct file **filp);
void call_usermodehelper_setcleanup(struct subprocess_info *info,
        void (*cleanup)(char **argv, char **envp));

enum umh_wait {
 UMH_NO_WAIT = -1,
 UMH_WAIT_EXEC = 0,
 UMH_WAIT_PROC = 1,
};


int call_usermodehelper_exec(struct subprocess_info *info, enum umh_wait wait);



void call_usermodehelper_freeinfo(struct subprocess_info *info);

static inline  __attribute__((always_inline)) int
call_usermodehelper(char *path, char **argv, char **envp, enum umh_wait wait)
{
 struct subprocess_info *info;

 info = call_usermodehelper_setup(path, argv, envp);
 if (info == ((void *)0))
  return -12;
 return call_usermodehelper_exec(info, wait);
}

static inline  __attribute__((always_inline)) int
call_usermodehelper_keys(char *path, char **argv, char **envp,
    struct key *session_keyring, enum umh_wait wait)
{
 struct subprocess_info *info;

 info = call_usermodehelper_setup(path, argv, envp);
 if (info == ((void *)0))
  return -12;

 call_usermodehelper_setkeys(info, session_keyring);
 return call_usermodehelper_exec(info, wait);
}

extern void usermodehelper_init(void);

struct file;
extern int call_usermodehelper_pipe(char *path, char *argv[], char *envp[],
        struct file **filp);
# 14 "linux-2.6.26/include/linux/module.h" 2
# 1 "linux-2.6.26/include/linux/elf.h" 1




# 1 "linux-2.6.26/include/linux/elf-em.h" 1
# 6 "linux-2.6.26/include/linux/elf.h" 2

# 1 "linux-2.6.26/include/asm/elf.h" 1
# 9 "linux-2.6.26/include/asm/elf.h"
# 1 "linux-2.6.26/include/asm/user.h" 1



# 1 "linux-2.6.26/include/asm/user_64.h" 1
# 50 "linux-2.6.26/include/asm/user_64.h"
struct user_i387_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;

 unsigned short fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 padding[24];
};




struct user_regs_struct {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long bp;
 unsigned long bx;
 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long ax;
 unsigned long cx;
 unsigned long dx;
 unsigned long si;
 unsigned long di;
 unsigned long orig_ax;
 unsigned long ip;
 unsigned long cs;
 unsigned long flags;
 unsigned long sp;
 unsigned long ss;
 unsigned long fs_base;
 unsigned long gs_base;
 unsigned long ds;
 unsigned long es;
 unsigned long fs;
 unsigned long gs;
};





struct user {


  struct user_regs_struct regs;

  int u_fpvalid;

  int pad0;
  struct user_i387_struct i387;

  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long start_code;
  unsigned long start_stack;



  long int signal;
  int reserved;
  int pad1;
  unsigned long u_ar0;

  struct user_i387_struct *u_fpstate;
  unsigned long magic;
  char u_comm[32];
  unsigned long u_debugreg[8];
  unsigned long error_code;
  unsigned long fault_address;
};
# 5 "linux-2.6.26/include/asm/user.h" 2
# 10 "linux-2.6.26/include/asm/elf.h" 2
# 1 "linux-2.6.26/include/asm/auxvec.h" 1
# 11 "linux-2.6.26/include/asm/elf.h" 2

typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof(struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;
# 75 "linux-2.6.26/include/asm/elf.h"
# 1 "linux-2.6.26/include/asm/vdso.h" 1




typedef  const char   _GLOBAL_49_T; extern  _GLOBAL_49_T  _GLOBAL_0_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_1_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_2_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_3_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_4_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_5_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_6_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_7_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_8_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_9_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_10_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_11_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_12_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_13_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_14_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_15_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_16_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_17_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_18_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_19_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_20_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_21_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_22_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_23_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_24_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_25_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_26_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_27_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_28_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_29_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_30_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_31_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_32_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_33_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_34_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_35_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_36_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_37_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_38_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_39_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_40_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_41_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_42_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_43_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_44_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_45_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_46_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_47_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_48_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_49_VDSO64_PRELINK_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_VDSO64_PRELINK_I) *_GLOBAL_VDSO64_PRELINK_4_A[NUM_STACKS];   
# 36 "linux-2.6.26/include/asm/vdso.h"
extern void __kernel_sigreturn;
extern void __kernel_rt_sigreturn;
# 76 "linux-2.6.26/include/asm/elf.h" 2

typedef  unsigned int   _GLOBAL_50_T; extern  _GLOBAL_50_T  global_vdso_enabled[NUM_STACKS];    
# 149 "linux-2.6.26/include/asm/elf.h"
static inline  __attribute__((always_inline)) void start_ia32_thread(struct pt_regs *regs, u32 ip, u32 sp)
{
 asm volatile("movl %0,%%fs" :: "r" (0));
 asm volatile("movl %0,%%es; movl %0,%%ds" : : "r" (0x2b));
 load_gs_index(0);
 regs->ip = ip;
 regs->sp = sp;
 regs->flags = 0x00000200;
 regs->cs = 0x23;
 regs->ss = 0x2b;
}

static inline  __attribute__((always_inline)) void elf_common_init(struct thread_struct *t,
       struct pt_regs *regs, const u16 ds)
{
 regs->ax = regs->bx = regs->cx = regs->dx = 0;
 regs->si = regs->di = regs->bp = 0;
 regs->r8 = regs->r9 = regs->r10 = regs->r11 = 0;
 regs->r12 = regs->r13 = regs->r14 = regs->r15 = 0;
 t->fs = t->gs = 0;
 t->fsindex = t->gsindex = 0;
 t->ds = t->es = ds;
}
# 239 "linux-2.6.26/include/asm/elf.h"
extern void set_personality_64bit(void);
typedef  unsigned int   _GLOBAL_51_T; extern  _GLOBAL_51_T  global_sysctl_vsyscall32[NUM_STACKS];    
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_force_personality32[NUM_STACKS];   
# 278 "linux-2.6.26/include/asm/elf.h"
struct task_struct;
# 323 "linux-2.6.26/include/asm/elf.h"
struct linux_binprm;


extern int arch_setup_additional_pages(struct linux_binprm *bprm,
           int executable_stack);

extern int syscall32_setup_pages(struct linux_binprm *, int exstack);


extern unsigned long arch_randomize_brk(struct mm_struct *mm);
# 8 "linux-2.6.26/include/linux/elf.h" 2


struct file;
# 20 "linux-2.6.26/include/linux/elf.h"
typedef __u32 Elf32_Addr;
typedef __u16 Elf32_Half;
typedef __u32 Elf32_Off;
typedef __s32 Elf32_Sword;
typedef __u32 Elf32_Word;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
# 127 "linux-2.6.26/include/linux/elf.h"
typedef struct dynamic{
  Elf32_Sword d_tag;
  union{
    Elf32_Sword d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct {
  Elf64_Sxword d_tag;
  union {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
# 150 "linux-2.6.26/include/linux/elf.h"
typedef struct elf32_rel {
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;

typedef struct elf64_rel {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;

typedef struct elf32_rela{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct elf64_rela {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;

typedef struct elf32_sym{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Half st_shndx;
} Elf32_Sym;

typedef struct elf64_sym {
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Half st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct elf32_hdr{
  unsigned char e_ident[16];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct elf64_hdr {
  unsigned char e_ident[16];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;







typedef struct elf32_phdr{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 289 "linux-2.6.26/include/linux/elf.h"
typedef struct {
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 365 "linux-2.6.26/include/linux/elf.h"
typedef struct elf32_note {
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;


typedef struct elf64_note {
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 388 "linux-2.6.26/include/linux/elf.h"
extern Elf64_Dyn _DYNAMIC [];
# 398 "linux-2.6.26/include/linux/elf.h"
static inline  __attribute__((always_inline)) int elf_coredump_extra_notes_size(void) { return 0; }
static inline  __attribute__((always_inline)) int elf_coredump_extra_notes_write(struct file *file,
   loff_t *foffset) { return 0; }
# 15 "linux-2.6.26/include/linux/module.h" 2

# 1 "linux-2.6.26/include/linux/kobject.h" 1
# 21 "linux-2.6.26/include/linux/kobject.h"
# 1 "linux-2.6.26/include/linux/sysfs.h" 1
# 18 "linux-2.6.26/include/linux/sysfs.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 19 "linux-2.6.26/include/linux/sysfs.h" 2

struct kobject;
struct module;





struct attribute {
 const char *name;
 struct module *owner;
 mode_t mode;
};

struct attribute_group {
 const char *name;
 mode_t (*is_visible)(struct kobject *,
           struct attribute *, int);
 struct attribute **attrs;
};
# 62 "linux-2.6.26/include/linux/sysfs.h"
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct kobject *, struct bin_attribute *,
   char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, struct bin_attribute *,
    char *, loff_t, size_t);
 int (*mmap)(struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};
# 123 "linux-2.6.26/include/linux/sysfs.h"
static inline  __attribute__((always_inline)) int sysfs_schedule_callback(struct kobject *kobj,
  void (*func)(void *), void *data, struct module *owner)
{
 return -38;
}

static inline  __attribute__((always_inline)) int sysfs_create_dir(struct kobject *kobj)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_dir(struct kobject *kobj)
{
}

static inline  __attribute__((always_inline)) int sysfs_rename_dir(struct kobject *kobj, const char *new_name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_move_dir(struct kobject *kobj,
     struct kobject *new_parent_kobj)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_create_file(struct kobject *kobj,
        const struct attribute *attr)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_chmod_file(struct kobject *kobj,
       struct attribute *attr, mode_t mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_file(struct kobject *kobj,
         const struct attribute *attr)
{
}

static inline  __attribute__((always_inline)) int sysfs_create_bin_file(struct kobject *kobj,
     struct bin_attribute *attr)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_bin_file(struct kobject *kobj,
      struct bin_attribute *attr)
{
}

static inline  __attribute__((always_inline)) int sysfs_create_link(struct kobject *kobj,
        struct kobject *target, const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_link(struct kobject *kobj, const char *name)
{
}

static inline  __attribute__((always_inline)) int sysfs_create_group(struct kobject *kobj,
         const struct attribute_group *grp)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_update_group(struct kobject *kobj,
    const struct attribute_group *grp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_group(struct kobject *kobj,
          const struct attribute_group *grp)
{
}

static inline  __attribute__((always_inline)) int sysfs_add_file_to_group(struct kobject *kobj,
  const struct attribute *attr, const char *group)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_file_from_group(struct kobject *kobj,
  const struct attribute *attr, const char *group)
{
}

static inline  __attribute__((always_inline)) void sysfs_notify(struct kobject *kobj, char *dir, char *attr)
{
}

static inline  __attribute__((always_inline)) int sysfs_init(void)
{
 return 0;
}
# 22 "linux-2.6.26/include/linux/kobject.h" 2


# 1 "linux-2.6.26/include/linux/kref.h" 1
# 19 "linux-2.6.26/include/linux/kref.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 20 "linux-2.6.26/include/linux/kref.h" 2

struct kref {
 atomic_t refcount;
};

void kref_set(struct kref *kref, int num);
void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 25 "linux-2.6.26/include/linux/kobject.h" 2

# 1 "linux-2.6.26/include/linux/wait.h" 1
# 26 "linux-2.6.26/include/linux/wait.h"
# 1 "linux-2.6.26/include/asm/current.h" 1
# 27 "linux-2.6.26/include/linux/wait.h" 2

typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int sync, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);

struct __wait_queue {
 unsigned int flags;

 void *private;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;
};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

struct task_struct;
# 80 "linux-2.6.26/include/linux/wait.h"
extern void init_waitqueue_head(wait_queue_head_t *q);
# 91 "linux-2.6.26/include/linux/wait.h"
static inline  __attribute__((always_inline)) void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->private = p;
 q->func = default_wake_function;
}

static inline  __attribute__((always_inline)) void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->private = ((void *)0);
 q->func = func;
}

static inline  __attribute__((always_inline)) int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}
# 120 "linux-2.6.26/include/linux/wait.h"
extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t *wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);

static inline  __attribute__((always_inline)) void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline  __attribute__((always_inline)) void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline  __attribute__((always_inline)) void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
extern void __wake_up_locked(wait_queue_head_t *q, unsigned int mode);
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
# 409 "linux-2.6.26/include/linux/wait.h"
static inline  __attribute__((always_inline)) void add_wait_queue_exclusive_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}




static inline  __attribute__((always_inline)) void remove_wait_queue_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 __remove_wait_queue(q, wait);
}






extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q,
          signed long timeout);
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q,
        signed long timeout);




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state);
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state);
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 485 "linux-2.6.26/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p((bit)) ? constant_test_bit((bit), (word)) : variable_test_bit((bit), (word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 509 "linux-2.6.26/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 27 "linux-2.6.26/include/linux/kobject.h" 2
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 28 "linux-2.6.26/include/linux/kobject.h" 2







typedef  char  _GLOBAL_53_T; extern  _GLOBAL_53_T  _GLOBAL_0_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_1_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_2_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_3_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_4_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_5_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_6_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_7_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_8_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_9_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_10_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_11_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_12_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_13_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_14_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_15_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_16_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_17_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_18_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_19_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_20_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_21_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_22_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_23_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_24_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_25_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_26_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_27_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_28_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_29_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_30_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_31_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_32_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_33_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_34_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_35_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_36_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_37_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_38_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_39_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_40_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_41_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_42_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_43_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_44_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_45_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_46_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_47_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_48_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_49_uevent_helper_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uevent_helper_I) *_GLOBAL_uevent_helper_5_A[NUM_STACKS];  


typedef  u64  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_uevent_seqnum[NUM_STACKS];   
# 50 "linux-2.6.26/include/linux/kobject.h"
enum kobject_action {
 KOBJ_ADD,
 KOBJ_REMOVE,
 KOBJ_CHANGE,
 KOBJ_MOVE,
 KOBJ_ONLINE,
 KOBJ_OFFLINE,
 KOBJ_MAX
};

struct kobject {
 const char *name;
 struct kref kref;
 struct list_head entry;
 struct kobject *parent;
 struct kset *kset;
 struct kobj_type *ktype;
 struct sysfs_dirent *sd;
 unsigned int state_initialized:1;
 unsigned int state_in_sysfs:1;
 unsigned int state_add_uevent_sent:1;
 unsigned int state_remove_uevent_sent:1;
};

extern int kobject_set_name(struct kobject *kobj, const char *name, ...)
       __attribute__((format(printf, 2, 3))) ;

static inline  __attribute__((always_inline)) const char *kobject_name(const struct kobject *kobj)
{
 return kobj->name;
}

extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern int kobject_add(struct kobject *kobj,
        struct kobject *parent,
        const char *fmt, ...);
extern int kobject_init_and_add(struct kobject *kobj,
          struct kobj_type *ktype,
          struct kobject *parent,
          const char *fmt, ...);

extern void kobject_del(struct kobject *kobj);

extern struct kobject * kobject_create(void);
extern struct kobject * kobject_create_and_add(const char *name,
      struct kobject *parent);

extern int kobject_rename(struct kobject *, const char *new_name);
extern int kobject_move(struct kobject *, struct kobject *);

extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);

extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);

struct kobj_type {
 void (*release)(struct kobject *kobj);
 struct sysfs_ops *sysfs_ops;
 struct attribute **default_attrs;
};

struct kobj_uevent_env {
 char *envp[32];
 int envp_idx;
 char buf[2048];
 int buflen;
};

struct kset_uevent_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 const char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*uevent)(struct kset *kset, struct kobject *kobj,
        struct kobj_uevent_env *env);
};

struct kobj_attribute {
 struct attribute attr;
 ssize_t (*show)(struct kobject *kobj, struct kobj_attribute *attr,
   char *buf);
 ssize_t (*store)(struct kobject *kobj, struct kobj_attribute *attr,
    const char *buf, size_t count);
};

typedef  struct sysfs_ops   _GLOBAL_55_T; extern  _GLOBAL_55_T  global_kobj_sysfs_ops[NUM_STACKS];    
# 152 "linux-2.6.26/include/linux/kobject.h"
struct kset {
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_uevent_ops *uevent_ops;
};

extern void kset_init(struct kset *kset);
extern int kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * kset_create_and_add(const char *name,
      struct kset_uevent_ops *u,
      struct kobject *parent_kobj);

static inline  __attribute__((always_inline)) struct kset *to_kset(struct kobject *kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) struct kset *kset_get(struct kset *k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline  __attribute__((always_inline)) void kset_put(struct kset *k)
{
 kobject_put(&k->kobj);
}

static inline  __attribute__((always_inline)) struct kobj_type *get_ktype(struct kobject *kobj)
{
 return kobj->ktype;
}

extern struct kobject *kset_find_obj(struct kset *, const char *);


typedef  struct kobject   _GLOBAL_56_T; extern  _GLOBAL_56_T  * global_kernel_kobj[NUM_STACKS];    

typedef  struct kobject   _GLOBAL_57_T; extern  _GLOBAL_57_T  * global_hypervisor_kobj[NUM_STACKS];    

typedef  struct kobject   _GLOBAL_58_T; extern  _GLOBAL_58_T  * global_power_kobj[NUM_STACKS];    

typedef  struct kobject   _GLOBAL_59_T; extern  _GLOBAL_59_T  * global_firmware_kobj[NUM_STACKS];    
# 208 "linux-2.6.26/include/linux/kobject.h"
static inline  __attribute__((always_inline)) int kobject_uevent(struct kobject *kobj,
     enum kobject_action action)
{ return 0; }
static inline  __attribute__((always_inline)) int kobject_uevent_env(struct kobject *kobj,
          enum kobject_action action,
          char *envp[])
{ return 0; }

static inline  __attribute__((always_inline)) int add_uevent_var(struct kobj_uevent_env *env,
     const char *format, ...)
{ return 0; }

static inline  __attribute__((always_inline)) int kobject_action_type(const char *buf, size_t count,
          enum kobject_action *type)
{ return -22; }
# 17 "linux-2.6.26/include/linux/module.h" 2
# 1 "linux-2.6.26/include/linux/moduleparam.h" 1
# 29 "linux-2.6.26/include/linux/moduleparam.h"
struct kernel_param;


typedef int (*param_set_fn)(const char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);

struct kernel_param {
 const char *name;
 unsigned int perm;
 param_set_fn set;
 param_get_fn get;
 union {
  void *arg;
  const struct kparam_string *str;
  const struct kparam_array *arr;
 };
};


struct kparam_string {
 unsigned int maxlen;
 char *string;
};


struct kparam_array
{
 unsigned int max;
 unsigned int *num;
 param_set_fn set;
 param_get_fn get;
 unsigned int elemsize;
 void *elem;
};
# 112 "linux-2.6.26/include/linux/moduleparam.h"
extern int parse_args(const char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));







extern int param_set_byte(const char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern int param_set_short(const char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern int param_set_ushort(const char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern int param_set_int(const char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern int param_set_uint(const char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern int param_set_long(const char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern int param_set_ulong(const char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern int param_set_charp(const char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);


extern int param_set_bool(const char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);


extern int param_set_invbool(const char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);
# 176 "linux-2.6.26/include/linux/moduleparam.h"
extern int param_array_set(const char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring(const char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;
# 193 "linux-2.6.26/include/linux/moduleparam.h"
static inline  __attribute__((always_inline)) int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params)
{
 return 0;
}

static inline  __attribute__((always_inline)) void module_param_sysfs_remove(struct module *mod)
{ }
# 18 "linux-2.6.26/include/linux/module.h" 2
# 1 "linux-2.6.26/include/linux/marker.h" 1
# 17 "linux-2.6.26/include/linux/marker.h"
struct module;
struct marker;
# 32 "linux-2.6.26/include/linux/marker.h"
typedef void marker_probe_func(void *probe_private, void *call_private,
  const char *fmt, va_list *args);

struct marker_probe_closure {
 marker_probe_func *func;
 void *probe_private;
};

struct marker {
 const char *name;
 const char *format;


 char state;
 char ptype;
 void (*call)(const struct marker *mdata,
  void *call_private, const char *fmt, ...);
 struct marker_probe_closure single;
 struct marker_probe_closure *multi;
} __attribute__((aligned(8))) ;
# 85 "linux-2.6.26/include/linux/marker.h"
static inline  __attribute__((always_inline)) void marker_update_probe_range(struct marker *begin,
 struct marker *end)
{ }
# 107 "linux-2.6.26/include/linux/marker.h"
static inline  __attribute__((always_inline)) void  __attribute__((format(printf,1,2))) ___mark_check_format(const char *fmt, ...)
{
}







extern marker_probe_func __mark_empty_function;

extern void marker_probe_cb(const struct marker *mdata,
 void *call_private, const char *fmt, ...);
extern void marker_probe_cb_noarg(const struct marker *mdata,
 void *call_private, const char *fmt, ...);





extern int marker_probe_register(const char *name, const char *format,
    marker_probe_func *probe, void *probe_private);




extern int marker_probe_unregister(const char *name,
 marker_probe_func *probe, void *probe_private);



extern int marker_probe_unregister_private_data(marker_probe_func *probe,
 void *probe_private);

extern void *marker_get_private_data(const char *name, marker_probe_func *probe,
 int num);
# 19 "linux-2.6.26/include/linux/module.h" 2
# 1 "linux-2.6.26/include/asm/local.h" 1



# 1 "linux-2.6.26/include/linux/percpu.h" 1




# 1 "linux-2.6.26/include/linux/slab.h" 1
# 12 "linux-2.6.26/include/linux/slab.h"
# 1 "linux-2.6.26/include/linux/gfp.h" 1



# 1 "linux-2.6.26/include/linux/mmzone.h" 1
# 13 "linux-2.6.26/include/linux/mmzone.h"
# 1 "linux-2.6.26/include/linux/numa.h" 1
# 14 "linux-2.6.26/include/linux/mmzone.h" 2


# 1 "linux-2.6.26/include/linux/nodemask.h" 1
# 92 "linux-2.6.26/include/linux/nodemask.h"
typedef struct { unsigned long bits[((((1 << 0)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } nodemask_t;
typedef  nodemask_t  _GLOBAL_60_T; extern  _GLOBAL_60_T  global__unused_nodemask_arg_[NUM_STACKS];   


static inline  __attribute__((always_inline)) void __node_set(int node, volatile nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline  __attribute__((always_inline)) void __node_clear(int node, volatile nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline  __attribute__((always_inline)) void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline  __attribute__((always_inline)) void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline  __attribute__((always_inline)) int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline  __attribute__((always_inline)) void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline  __attribute__((always_inline)) int __first_node(const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 0)); int __min2 = (find_first_bit(srcp->bits, (1 << 0))); __min1 < __min2 ? __min1: __min2; });
}


static inline  __attribute__((always_inline)) int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 0)); int __min2 = (find_next_bit(srcp->bits, (1 << 0), n+1)); __min1 < __min2 ? __min1: __min2; });
}
# 255 "linux-2.6.26/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __min1 = ((1 << 0)); int __min2 = (find_first_zero_bit(maskp->bits, (1 << 0))); __min1 < __min2 ? __min1: __min2; })
                                                  ;
}
# 289 "linux-2.6.26/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodemask_parse_user(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_onto(nodemask_t *dstp, const nodemask_t *origp,
  const nodemask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_fold(nodemask_t *dstp, const nodemask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
# 363 "linux-2.6.26/include/linux/nodemask.h"
enum node_states {
 N_POSSIBLE,
 N_ONLINE,
 N_NORMAL_MEMORY,



 N_HIGH_MEMORY = N_NORMAL_MEMORY,

 N_CPU,
 NR_NODE_STATES
};






typedef  nodemask_t  _GLOBAL_61_T; extern  _GLOBAL_61_T  node_states [ NR_NODE_STATES ] ;   
# 413 "linux-2.6.26/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int node_state(int node, enum node_states state)
{
 return node == 0;
}

static inline  __attribute__((always_inline)) void node_set_state(int node, enum node_states state)
{
}

static inline  __attribute__((always_inline)) void node_clear_state(int node, enum node_states state)
{
}

static inline  __attribute__((always_inline)) int num_node_state(enum node_states state)
{
 return 1;
}
# 17 "linux-2.6.26/include/linux/mmzone.h" 2
# 1 "linux-2.6.26/include/linux/pageblock-flags.h" 1
# 33 "linux-2.6.26/include/linux/pageblock-flags.h"
enum pageblock_bits {
 PB_migrate, PB_migrate_end = (PB_migrate + 3) - 1,
 NR_PAGEBLOCK_BITS
};
# 62 "linux-2.6.26/include/linux/pageblock-flags.h"
struct page;


unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx);
# 18 "linux-2.6.26/include/linux/mmzone.h" 2
# 1 "linux-2.6.26/include/linux/bounds.h" 1
# 19 "linux-2.6.26/include/linux/mmzone.h" 2
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 20 "linux-2.6.26/include/linux/mmzone.h" 2
# 49 "linux-2.6.26/include/linux/mmzone.h"
typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_page_group_by_mobility_disabled[NUM_STACKS];   

static inline  __attribute__((always_inline)) int get_pageblock_migratetype(struct page *page)
{
 if (__builtin_expect(!!(global_page_group_by_mobility_disabled[get_stack_id()]), 0))
  return 0;

 return get_pageblock_flags_group(page, PB_migrate, PB_migrate_end);
}

struct free_area {
 struct list_head free_list[5];
 unsigned long nr_free;
};

struct pglist_data;
# 81 "linux-2.6.26/include/linux/mmzone.h"
enum zone_stat_item {

 NR_FREE_PAGES,
 NR_INACTIVE,
 NR_ACTIVE,
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_FILE_DIRTY,
 NR_WRITEBACK,

 NR_SLAB_RECLAIMABLE,
 NR_SLAB_UNRECLAIMABLE,
 NR_PAGETABLE,
 NR_UNSTABLE_NFS,
 NR_BOUNCE,
 NR_VMSCAN_WRITE,
 NR_WRITEBACK_TEMP,
# 108 "linux-2.6.26/include/linux/mmzone.h"
 NR_VM_ZONE_STAT_ITEMS };

struct per_cpu_pages {
 int count;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp;







} ;
# 136 "linux-2.6.26/include/linux/mmzone.h"
enum zone_type {
# 171 "linux-2.6.26/include/linux/mmzone.h"
 ZONE_NORMAL,
# 183 "linux-2.6.26/include/linux/mmzone.h"
 ZONE_MOVABLE,
 __MAX_NR_ZONES
};
# 207 "linux-2.6.26/include/linux/mmzone.h"
struct zone {

 unsigned long pages_min, pages_low, pages_high;
# 218 "linux-2.6.26/include/linux/mmzone.h"
 unsigned long lowmem_reserve[3];
# 229 "linux-2.6.26/include/linux/mmzone.h"
 struct per_cpu_pageset pageset[1];




 spinlock_t lock;




 struct free_area free_area[11];






 unsigned long *pageblock_flags;






 spinlock_t lru_lock;
 struct list_head active_list;
 struct list_head inactive_list;
 unsigned long nr_scan_active;
 unsigned long nr_scan_inactive;
 unsigned long pages_scanned;
 unsigned long flags;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
# 277 "linux-2.6.26/include/linux/mmzone.h"
 int prev_priority;



# 307 "linux-2.6.26/include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 328 "linux-2.6.26/include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 const char *name;
} ;

typedef enum {
 ZONE_ALL_UNRECLAIMABLE,
 ZONE_RECLAIM_LOCKED,
 ZONE_OOM_LOCKED,
} zone_flags_t;

static inline  __attribute__((always_inline)) void zone_set_flag(struct zone *zone, zone_flags_t flag)
{
 set_bit(flag, &zone->flags);
}

static inline  __attribute__((always_inline)) int zone_test_and_set_flag(struct zone *zone, zone_flags_t flag)
{
 return test_and_set_bit(flag, &zone->flags);
}

static inline  __attribute__((always_inline)) void zone_clear_flag(struct zone *zone, zone_flags_t flag)
{
 clear_bit(flag, &zone->flags);
}

static inline  __attribute__((always_inline)) int zone_is_all_unreclaimable(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_ALL_UNRECLAIMABLE)) ? constant_test_bit((ZONE_ALL_UNRECLAIMABLE), (&zone->flags)) : variable_test_bit((ZONE_ALL_UNRECLAIMABLE), (&zone->flags)));
}

static inline  __attribute__((always_inline)) int zone_is_reclaim_locked(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_RECLAIM_LOCKED)) ? constant_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)));
}

static inline  __attribute__((always_inline)) int zone_is_oom_locked(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_OOM_LOCKED)) ? constant_test_bit((ZONE_OOM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_OOM_LOCKED), (&zone->flags)));
}
# 461 "linux-2.6.26/include/linux/mmzone.h"
struct zonelist_cache;






struct zoneref {
 struct zone *zone;
 int zone_idx;
};
# 490 "linux-2.6.26/include/linux/mmzone.h"
struct zonelist {
 struct zonelist_cache *zlcache_ptr;
 struct zoneref _zonerefs[((1 << 0) * 3) + 1];



};
# 508 "linux-2.6.26/include/linux/mmzone.h"
extern struct page *mem_map;
# 522 "linux-2.6.26/include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[3];
 struct zonelist node_zonelists[1];
 int nr_zones;



 struct bootmem_data *bdata;
# 541 "linux-2.6.26/include/linux/mmzone.h"
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;
# 560 "linux-2.6.26/include/linux/mmzone.h"
# 1 "linux-2.6.26/include/linux/memory_hotplug.h" 1



# 1 "linux-2.6.26/include/linux/mmzone.h" 1
# 5 "linux-2.6.26/include/linux/memory_hotplug.h" 2

# 1 "linux-2.6.26/include/linux/notifier.h" 1
# 13 "linux-2.6.26/include/linux/notifier.h"
# 1 "linux-2.6.26/include/linux/mutex.h" 1
# 18 "linux-2.6.26/include/linux/mutex.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 19 "linux-2.6.26/include/linux/mutex.h" 2
# 48 "linux-2.6.26/include/linux/mutex.h"
struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;
# 61 "linux-2.6.26/include/linux/mutex.h"
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;




};
# 106 "linux-2.6.26/include/linux/mutex.h"
extern void __mutex_init(struct mutex *lock, const char *name,
    struct lock_class_key *key);







static inline  __attribute__((always_inline)) int mutex_is_locked(struct mutex *lock)
{
 return ((&lock->count)->counter) != 1;
}
# 135 "linux-2.6.26/include/linux/mutex.h"
extern void mutex_lock(struct mutex *lock);
extern int mutex_lock_interruptible(struct mutex *lock);
extern int mutex_lock_killable(struct mutex *lock);
# 148 "linux-2.6.26/include/linux/mutex.h"
extern int mutex_trylock(struct mutex *lock);
extern void mutex_unlock(struct mutex *lock);
# 14 "linux-2.6.26/include/linux/notifier.h" 2
# 1 "linux-2.6.26/include/linux/rwsem.h" 1
# 15 "linux-2.6.26/include/linux/rwsem.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 16 "linux-2.6.26/include/linux/rwsem.h" 2

struct rw_semaphore;


# 1 "linux-2.6.26/include/linux/rwsem-spinlock.h" 1
# 22 "linux-2.6.26/include/linux/rwsem-spinlock.h"
struct rwsem_waiter;
# 31 "linux-2.6.26/include/linux/rwsem-spinlock.h"
struct rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 53 "linux-2.6.26/include/linux/rwsem-spinlock.h"
extern void __init_rwsem(struct rw_semaphore *sem, const char *name,
    struct lock_class_key *key);
# 63 "linux-2.6.26/include/linux/rwsem-spinlock.h"
extern void __down_read(struct rw_semaphore *sem);
extern int __down_read_trylock(struct rw_semaphore *sem);
extern void __down_write(struct rw_semaphore *sem);
extern void __down_write_nested(struct rw_semaphore *sem, int subclass);
extern int __down_write_trylock(struct rw_semaphore *sem);
extern void __up_read(struct rw_semaphore *sem);
extern void __up_write(struct rw_semaphore *sem);
extern void __downgrade_write(struct rw_semaphore *sem);

static inline  __attribute__((always_inline)) int rwsem_is_locked(struct rw_semaphore *sem)
{
 return (sem->activity != 0);
}
# 21 "linux-2.6.26/include/linux/rwsem.h" 2







extern void down_read(struct rw_semaphore *sem);




extern int down_read_trylock(struct rw_semaphore *sem);




extern void down_write(struct rw_semaphore *sem);




extern int down_write_trylock(struct rw_semaphore *sem);




extern void up_read(struct rw_semaphore *sem);




extern void up_write(struct rw_semaphore *sem);




extern void downgrade_write(struct rw_semaphore *sem);
# 15 "linux-2.6.26/include/linux/notifier.h" 2
# 1 "linux-2.6.26/include/linux/srcu.h" 1
# 30 "linux-2.6.26/include/linux/srcu.h"
struct srcu_struct_array {
 int c[2];
};

struct srcu_struct {
 int completed;
 struct srcu_struct_array *per_cpu_ref;
 struct mutex mutex;
};







int init_srcu_struct(struct srcu_struct *sp);
void cleanup_srcu_struct(struct srcu_struct *sp);
int srcu_read_lock(struct srcu_struct *sp) ;
void srcu_read_unlock(struct srcu_struct *sp, int idx) ;
void synchronize_srcu(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);
# 16 "linux-2.6.26/include/linux/notifier.h" 2
# 50 "linux-2.6.26/include/linux/notifier.h"
struct notifier_block {
 int (*notifier_call)(struct notifier_block *, unsigned long, void *);
 struct notifier_block *next;
 int priority;
};

struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block *head;
};

struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block *head;
};

struct raw_notifier_head {
 struct notifier_block *head;
};

struct srcu_notifier_head {
 struct mutex mutex;
 struct srcu_struct srcu;
 struct notifier_block *head;
};
# 89 "linux-2.6.26/include/linux/notifier.h"
extern void srcu_init_notifier_head(struct srcu_notifier_head *nh);
# 115 "linux-2.6.26/include/linux/notifier.h"
extern int atomic_notifier_chain_register(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_register(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_register(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int blocking_notifier_chain_cond_register(
  struct blocking_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_unregister(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_call_chain(struct atomic_notifier_head *nh,
  unsigned long val, void *v);
extern int __atomic_notifier_call_chain(struct atomic_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *nh,
  unsigned long val, void *v);
extern int __blocking_notifier_call_chain(struct blocking_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int raw_notifier_call_chain(struct raw_notifier_head *nh,
  unsigned long val, void *v);
extern int __raw_notifier_call_chain(struct raw_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int srcu_notifier_call_chain(struct srcu_notifier_head *nh,
  unsigned long val, void *v);
extern int __srcu_notifier_call_chain(struct srcu_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
# 165 "linux-2.6.26/include/linux/notifier.h"
static inline  __attribute__((always_inline)) int notifier_from_errno(int err)
{
 return 0x8000 | (0x0001 - err);
}


static inline  __attribute__((always_inline)) int notifier_to_errno(int ret)
{
 ret &= ~0x8000;
 return ret > 0x0001 ? 0x0001 - ret : 0;
}
# 247 "linux-2.6.26/include/linux/notifier.h"
typedef  struct blocking_notifier_head   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_reboot_notifier_list[NUM_STACKS];    
# 7 "linux-2.6.26/include/linux/memory_hotplug.h" 2

struct page;
struct zone;
struct pglist_data;
struct mem_section;
# 165 "linux-2.6.26/include/linux/memory_hotplug.h"
static inline  __attribute__((always_inline)) void pgdat_resize_lock(struct pglist_data *p, unsigned long *f) {}
static inline  __attribute__((always_inline)) void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f) {}
static inline  __attribute__((always_inline)) void pgdat_resize_init(struct pglist_data *pgdat) {}

static inline  __attribute__((always_inline)) unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline  __attribute__((always_inline)) int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline  __attribute__((always_inline)) void zone_span_writelock(struct zone *zone) {}
static inline  __attribute__((always_inline)) void zone_span_writeunlock(struct zone *zone) {}
static inline  __attribute__((always_inline)) void zone_seqlock_init(struct zone *zone) {}

static inline  __attribute__((always_inline)) int mhp_notimplemented(const char *func)
{
 printk("<4>" "%s() called, with CONFIG_MEMORY_HOTPLUG disabled\n", func);
 dump_stack();
 return -38;
}

static inline  __attribute__((always_inline)) void register_page_bootmem_info_node(struct pglist_data *pgdat)
{
}







extern int walk_memory_resource(unsigned long start_pfn,
   unsigned long nr_pages, void *arg,
   int (*func)(unsigned long, unsigned long, void *));

extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
        int nr_pages);
extern void sparse_remove_one_section(struct zone *zone, struct mem_section *ms);
extern struct page *sparse_decode_mem_map(unsigned long coded_mem_map,
       unsigned long pnum);
# 561 "linux-2.6.26/include/linux/mmzone.h" 2

void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
enum memmap_context {
 MEMMAP_EARLY,
 MEMMAP_HOTPLUG,
};
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size,
         enum memmap_context context);




static inline  __attribute__((always_inline)) void memory_present(int nid, unsigned long start, unsigned long end) {}
# 591 "linux-2.6.26/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

typedef  int  _GLOBAL_64_T; extern  _GLOBAL_64_T  global_movable_zone[NUM_STACKS];   

static inline  __attribute__((always_inline)) int zone_movable_is_highmem(void)
{



 return 0;

}

static inline  __attribute__((always_inline)) int is_highmem_idx(enum zone_type idx)
{




 return 0;

}

static inline  __attribute__((always_inline)) int is_normal_idx(enum zone_type idx)
{
 return (idx == ZONE_NORMAL);
}







static inline  __attribute__((always_inline)) int is_highmem(struct zone *zone)
{






 return 0;

}

static inline  __attribute__((always_inline)) int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + ZONE_NORMAL;
}

static inline  __attribute__((always_inline)) int is_dma32(struct zone *zone)
{



 return 0;

}

static inline  __attribute__((always_inline)) int is_dma(struct zone *zone)
{



 return 0;

}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  _GLOBAL_0_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_1_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_2_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_3_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_4_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_5_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_6_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_7_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_8_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_9_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_10_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_11_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_12_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_13_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_14_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_15_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_16_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_17_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_18_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_19_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_20_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_21_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_22_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_23_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_24_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_25_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_26_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_27_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_28_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_29_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_30_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_31_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_32_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_33_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_34_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_35_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_36_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_37_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_38_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_39_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_40_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_41_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_42_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_43_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_44_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_45_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_46_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_47_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_48_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_49_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysctl_lowmem_reserve_ratio_I) *_GLOBAL_sysctl_lowmem_reserve_ratio_6_A[NUM_STACKS] = { &_GLOBAL_0_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_1_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_2_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_3_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_4_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_5_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_6_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_7_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_8_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_9_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_10_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_11_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_12_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_13_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_14_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_15_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_16_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_17_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_18_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_19_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_20_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_21_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_22_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_23_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_24_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_25_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_26_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_27_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_28_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_29_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_30_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_31_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_32_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_33_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_34_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_35_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_36_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_37_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_38_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_39_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_40_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_41_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_42_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_43_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_44_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_45_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_46_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_47_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_48_sysctl_lowmem_reserve_ratio_I, &_GLOBAL_49_sysctl_lowmem_reserve_ratio_I, };   
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);

extern int numa_zonelist_order_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
extern char numa_zonelist_order[];


# 1 "linux-2.6.26/include/linux/topology.h" 1
# 33 "linux-2.6.26/include/linux/topology.h"
# 1 "linux-2.6.26/include/linux/smp.h" 1
# 11 "linux-2.6.26/include/linux/smp.h"
extern void cpu_idle(void);
# 89 "linux-2.6.26/include/linux/smp.h"
static inline  __attribute__((always_inline)) int up_smp_call_function(void (*func)(void *), void *info)
{
 return 0;
}
# 102 "linux-2.6.26/include/linux/smp.h"
static inline  __attribute__((always_inline)) void smp_send_reschedule(int cpu) { }
# 144 "linux-2.6.26/include/linux/smp.h"
void smp_setup_processor_id(void);
# 34 "linux-2.6.26/include/linux/topology.h" 2
# 1 "linux-2.6.26/include/asm/topology.h" 1
# 187 "linux-2.6.26/include/asm/topology.h"
# 1 "linux-2.6.26/include/asm-generic/topology.h" 1
# 188 "linux-2.6.26/include/asm/topology.h" 2

extern cpumask_t cpu_coregroup_map(int cpu);
# 198 "linux-2.6.26/include/asm/topology.h"
static inline  __attribute__((always_inline)) void arch_fix_phys_package_id(int num, u32 slot)
{
}

struct pci_bus;
void set_pci_bus_resources_arch_default(struct pci_bus *b);
# 214 "linux-2.6.26/include/asm/topology.h"
static inline  __attribute__((always_inline)) int get_mp_bus_to_node(int busnum)
{
 return 0;
}
static inline  __attribute__((always_inline)) void set_mp_bus_to_node(int busnum, int node)
{
}
# 35 "linux-2.6.26/include/linux/topology.h" 2
# 52 "linux-2.6.26/include/linux/topology.h"
void arch_update_cpu_topology(void);
# 684 "linux-2.6.26/include/linux/mmzone.h" 2







typedef  struct pglist_data   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_contig_page_data[NUM_STACKS];    
# 701 "linux-2.6.26/include/linux/mmzone.h"
extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 725 "linux-2.6.26/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) struct zone *zonelist_zone(struct zoneref *zoneref)
{
 return zoneref->zone;
}

static inline  __attribute__((always_inline)) int zonelist_zone_idx(struct zoneref *zoneref)
{
 return zoneref->zone_idx;
}

static inline  __attribute__((always_inline)) int zonelist_node_idx(struct zoneref *zoneref)
{




 return 0;

}
# 757 "linux-2.6.26/include/linux/mmzone.h"
struct zoneref *next_zones_zonelist(struct zoneref *z,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone);
# 775 "linux-2.6.26/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) struct zoneref *first_zones_zonelist(struct zonelist *zonelist,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone)
{
 return next_zones_zonelist(zonelist->_zonerefs, highest_zoneidx, nodes,
        zone);
}
# 818 "linux-2.6.26/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) unsigned long early_pfn_to_nid(unsigned long pfn)
{
 return 0;
}
# 990 "linux-2.6.26/include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 5 "linux-2.6.26/include/linux/gfp.h" 2



struct vm_area_struct;
# 108 "linux-2.6.26/include/linux/gfp.h"
static inline  __attribute__((always_inline)) int allocflags_to_migratetype(gfp_t gfp_flags)
{
 ({ int __ret_warn_on = !!((gfp_flags & ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))) == ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/include/linux/gfp.h", 110); __builtin_expect(!!(__ret_warn_on), 0); });

 if (__builtin_expect(!!(global_page_group_by_mobility_disabled[get_stack_id()]), 0))
  return 0;


 return (((gfp_flags & (( gfp_t)0x100000u)) != 0) << 1) |
  ((gfp_flags & (( gfp_t)0x80000u)) != 0);
}

static inline  __attribute__((always_inline)) enum zone_type gfp_zone(gfp_t flags)
{
# 130 "linux-2.6.26/include/linux/gfp.h"
 if ((flags & ((( gfp_t)0x02u) | (( gfp_t)0x100000u))) ==
   ((( gfp_t)0x02u) | (( gfp_t)0x100000u)))
  return ZONE_MOVABLE;




 return ZONE_NORMAL;
}
# 147 "linux-2.6.26/include/linux/gfp.h"
static inline  __attribute__((always_inline)) int gfp_zonelist(gfp_t flags)
{
 if (0 && __builtin_expect(!!(flags & (( gfp_t)0x40000u)), 0))
  return 1;

 return 0;
}
# 164 "linux-2.6.26/include/linux/gfp.h"
static inline  __attribute__((always_inline)) struct zonelist *node_zonelist(int nid, gfp_t flags)
{
 return (&global_contig_page_data[get_stack_id()])->node_zonelists + gfp_zonelist(flags);
}


static inline  __attribute__((always_inline)) void arch_free_page(struct page *page, int order) { }


static inline  __attribute__((always_inline)) void arch_alloc_page(struct page *page, int order) { }


extern struct page *__alloc_pages(gfp_t, unsigned int, struct zonelist *);

extern struct page *
__alloc_pages_nodemask(gfp_t, unsigned int,
    struct zonelist *, nodemask_t *nodemask);

static inline  __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);


 if (nid < 0)
  nid = (((void)(0),0));

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}
# 215 "linux-2.6.26/include/linux/gfp.h"
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_page(struct page *page);
extern void free_cold_page(struct page *page);




void page_alloc_init(void);
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp);
void drain_all_pages(void);
void drain_local_pages(void *dummy);
# 13 "linux-2.6.26/include/linux/slab.h" 2
# 56 "linux-2.6.26/include/linux/slab.h"
void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) kmem_cache_init(void);
int slab_is_available(void);

struct kmem_cache *kmem_cache_create(const char *, size_t, size_t,
   unsigned long,
   void (*)(struct kmem_cache *, void *));
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
unsigned int kmem_cache_size(struct kmem_cache *);
const char *kmem_cache_name(struct kmem_cache *);
int kmem_ptr_validate(struct kmem_cache *cachep, const void *ptr);
# 99 "linux-2.6.26/include/linux/slab.h"
void * krealloc(const void *, size_t, gfp_t);
void kfree(const void *);
size_t ksize(const void *);
# 123 "linux-2.6.26/include/linux/slab.h"
# 1 "linux-2.6.26/include/linux/slub_def.h" 1
# 11 "linux-2.6.26/include/linux/slub_def.h"
# 1 "linux-2.6.26/include/linux/workqueue.h" 1







# 1 "linux-2.6.26/include/linux/timer.h" 1




# 1 "linux-2.6.26/include/linux/ktime.h" 1
# 25 "linux-2.6.26/include/linux/ktime.h"
# 1 "linux-2.6.26/include/linux/jiffies.h" 1







# 1 "linux-2.6.26/include/linux/timex.h" 1
# 59 "linux-2.6.26/include/linux/timex.h"
# 1 "linux-2.6.26/include/asm/param.h" 1
# 60 "linux-2.6.26/include/linux/timex.h" 2
# 100 "linux-2.6.26/include/linux/timex.h"
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int tai;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32;
};
# 195 "linux-2.6.26/include/linux/timex.h"
# 1 "linux-2.6.26/include/asm/timex.h" 1





# 1 "linux-2.6.26/include/asm/tsc.h" 1
# 15 "linux-2.6.26/include/asm/tsc.h"
typedef unsigned long long cycles_t;

typedef  unsigned int   _GLOBAL_67_T; extern  _GLOBAL_67_T  global_cpu_khz[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_68_T; extern  _GLOBAL_68_T  global_tsc_khz[NUM_STACKS];    

extern void disable_TSC(void);

static inline  __attribute__((always_inline)) cycles_t get_cycles(void)
{
 unsigned long long ret = 0;


 if (!(__builtin_constant_p((0*32+ 4)) && ( ((((0*32+ 4))>>5)==0 && (1UL<<(((0*32+ 4))&31) & ((1<<((0*32+ 0) & 31))|(1<<((0*32+ 3) & 31))|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|(1<<((0*32+13) & 31))|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+ 4))>>5)==1 && (1UL<<(((0*32+ 4))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+ 4))>>5)==2 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==3 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==4 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==5 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==6 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==7 && (1UL<<(((0*32+ 4))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+ 4))) ? constant_test_bit(((0*32+ 4)), ((unsigned long *)((&global_boot_cpu_data[get_stack_id()])->x86_capability))) : variable_test_bit(((0*32+ 4)), ((unsigned long *)((&global_boot_cpu_data[get_stack_id()])->x86_capability))))))
  return 0;

 ((ret) = native_read_tsc());

 return ret;
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) cycles_t vget_cycles(void)
{





 if (!(__builtin_constant_p((0*32+ 4)) && ( ((((0*32+ 4))>>5)==0 && (1UL<<(((0*32+ 4))&31) & ((1<<((0*32+ 0) & 31))|(1<<((0*32+ 3) & 31))|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|(1<<((0*32+13) & 31))|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+ 4))>>5)==1 && (1UL<<(((0*32+ 4))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+ 4))>>5)==2 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==3 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==4 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==5 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==6 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==7 && (1UL<<(((0*32+ 4))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+ 4))) ? constant_test_bit(((0*32+ 4)), ((unsigned long *)((&global_boot_cpu_data[get_stack_id()])->x86_capability))) : variable_test_bit(((0*32+ 4)), ((unsigned long *)((&global_boot_cpu_data[get_stack_id()])->x86_capability))))))
  return 0;

 return (cycles_t)__native_read_tsc();
}

extern void tsc_init(void);
extern void mark_tsc_unstable(char *reason);
extern int unsynchronized_tsc(void);
extern void init_tsc_clocksource(void);
int check_tsc_unstable(void);





extern void check_tsc_sync_source(int cpu);
extern void check_tsc_sync_target(void);

extern void tsc_calibrate(void);
extern int notsc_setup(char *);
# 7 "linux-2.6.26/include/asm/timex.h" 2
# 196 "linux-2.6.26/include/linux/timex.h" 2






typedef  unsigned long   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_tick_usec[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_70_T; extern  _GLOBAL_70_T  global_tick_nsec[NUM_STACKS];    
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_tickadj[NUM_STACKS];   




typedef  int  _GLOBAL_72_T; extern  _GLOBAL_72_T  global_time_status[NUM_STACKS];   
typedef  long  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_time_maxerror[NUM_STACKS];   
typedef  long  _GLOBAL_74_T; extern  _GLOBAL_74_T  global_time_esterror[NUM_STACKS];   

typedef  long  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_time_adjust[NUM_STACKS];   

extern void ntp_init(void);
extern void ntp_clear(void);





static inline  __attribute__((always_inline)) int ntp_synced(void)
{
 return !(global_time_status[get_stack_id()] & 0x0040);
}
# 244 "linux-2.6.26/include/linux/timex.h"
typedef  u64  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_tick_length[NUM_STACKS];   

extern void second_overflow(void);
extern void update_ntp_one_tick(void);
extern int do_adjtimex(struct timex *);




int read_current_timer(unsigned long *timer_val);
# 9 "linux-2.6.26/include/linux/jiffies.h" 2
# 81 "linux-2.6.26/include/linux/jiffies.h"
typedef  u64   _GLOBAL_77_T; extern  __attribute__((section(".data")))   _GLOBAL_77_T  global_jiffies_64[NUM_STACKS];    
typedef  unsigned long    _GLOBAL_78_T; extern volatile  __attribute__((section(".data")))   _GLOBAL_78_T  global_jiffies[NUM_STACKS];      




static inline  __attribute__((always_inline)) u64 get_jiffies_64(void)
{
 return (u64)global_jiffies[get_stack_id()];
}
# 173 "linux-2.6.26/include/linux/jiffies.h"
typedef  unsigned long   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_preset_lpj[NUM_STACKS];    
# 286 "linux-2.6.26/include/linux/jiffies.h"
extern unsigned int jiffies_to_msecs(const unsigned long j);
extern unsigned int jiffies_to_usecs(const unsigned long j);
extern unsigned long msecs_to_jiffies(const unsigned int m);
extern unsigned long usecs_to_jiffies(const unsigned int u);
extern unsigned long timespec_to_jiffies(const struct timespec *value);
extern void jiffies_to_timespec(const unsigned long jiffies,
    struct timespec *value);
extern unsigned long timeval_to_jiffies(const struct timeval *value);
extern void jiffies_to_timeval(const unsigned long jiffies,
          struct timeval *value);
extern clock_t jiffies_to_clock_t(long x);
extern unsigned long clock_t_to_jiffies(unsigned long x);
extern u64 jiffies_64_to_clock_t(u64 x);
extern u64 nsec_to_clock_t(u64 x);
# 26 "linux-2.6.26/include/linux/ktime.h" 2
# 46 "linux-2.6.26/include/linux/ktime.h"
union ktime {
 s64 tv64;
# 57 "linux-2.6.26/include/linux/ktime.h"
};

typedef union ktime ktime_t;
# 81 "linux-2.6.26/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t ktime_set(const long secs, const unsigned long nsecs)
{

 if (__builtin_expect(!!(secs >= (((s64)~((u64)1 << 63)) / 1000000000L)), 0))
  return (ktime_t){ .tv64 = ((s64)~((u64)1 << 63)) };

 return (ktime_t) { .tv64 = (s64)secs * 1000000000L + (s64)nsecs };
}
# 113 "linux-2.6.26/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t timespec_to_ktime(struct timespec ts)
{
 return ktime_set(ts.tv_sec, ts.tv_nsec);
}


static inline  __attribute__((always_inline)) ktime_t timeval_to_ktime(struct timeval tv)
{
 return ktime_set(tv.tv_sec, tv.tv_usec * 1000L);
}
# 287 "linux-2.6.26/include/linux/ktime.h"
static inline  __attribute__((always_inline)) int ktime_equal(const ktime_t cmp1, const ktime_t cmp2)
{
 return cmp1.tv64 == cmp2.tv64;
}

static inline  __attribute__((always_inline)) s64 ktime_to_us(const ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000000L + tv.tv_usec;
}

static inline  __attribute__((always_inline)) s64 ktime_us_delta(const ktime_t later, const ktime_t earlier)
{
       return ktime_to_us(({ (ktime_t){ .tv64 = (later).tv64 - (earlier).tv64 }; }));
}

static inline  __attribute__((always_inline)) ktime_t ktime_add_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 + (usec * 1000) }; });
}

static inline  __attribute__((always_inline)) ktime_t ktime_sub_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 - (usec * 1000) }; });
}

extern ktime_t ktime_add_safe(const ktime_t lhs, const ktime_t rhs);
# 325 "linux-2.6.26/include/linux/ktime.h"
extern void ktime_get_ts(struct timespec *ts);




static inline  __attribute__((always_inline)) ktime_t ns_to_ktime(u64 ns)
{
 typedef  const ktime_t   _GLOBAL_80_T; static  _GLOBAL_80_T  global_ktime_zero[NUM_STACKS] = {  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  };          
 return ({ (ktime_t){ .tv64 = (global_ktime_zero[get_stack_id()]).tv64 + (ns) }; });
}
# 6 "linux-2.6.26/include/linux/timer.h" 2

# 1 "linux-2.6.26/include/linux/debugobjects.h" 1






enum debug_obj_state {
 ODEBUG_STATE_NONE,
 ODEBUG_STATE_INIT,
 ODEBUG_STATE_INACTIVE,
 ODEBUG_STATE_ACTIVE,
 ODEBUG_STATE_DESTROYED,
 ODEBUG_STATE_NOTAVAILABLE,
 ODEBUG_STATE_MAX,
};

struct debug_obj_descr;
# 26 "linux-2.6.26/include/linux/debugobjects.h"
struct debug_obj {
 struct hlist_node node;
 enum debug_obj_state state;
 void *object;
 struct debug_obj_descr *descr;
};
# 45 "linux-2.6.26/include/linux/debugobjects.h"
struct debug_obj_descr {
 const char *name;

 int (*fixup_init) (void *addr, enum debug_obj_state state);
 int (*fixup_activate) (void *addr, enum debug_obj_state state);
 int (*fixup_destroy) (void *addr, enum debug_obj_state state);
 int (*fixup_free) (void *addr, enum debug_obj_state state);
};
# 66 "linux-2.6.26/include/linux/debugobjects.h"
static inline  __attribute__((always_inline)) void
debug_object_init (void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_activate (void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_deactivate(void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_destroy (void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_free (void *addr, struct debug_obj_descr *descr) { }

static inline  __attribute__((always_inline)) void debug_objects_early_init(void) { }
static inline  __attribute__((always_inline)) void debug_objects_mem_init(void) { }





static inline  __attribute__((always_inline)) void
debug_check_no_obj_freed(const void *address, unsigned long size) { }
# 8 "linux-2.6.26/include/linux/timer.h" 2

struct tvec_base;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 void (*function)(unsigned long);
 unsigned long data;

 struct tvec_base *base;





};

typedef  struct tvec_base   _GLOBAL_81_T; extern  _GLOBAL_81_T  _GLOBAL_0_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_1_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_2_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_3_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_4_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_5_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_6_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_7_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_8_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_9_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_10_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_11_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_12_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_13_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_14_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_15_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_16_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_17_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_18_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_19_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_20_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_21_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_22_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_23_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_24_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_25_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_26_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_27_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_28_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_29_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_30_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_31_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_32_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_33_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_34_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_35_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_36_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_37_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_38_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_39_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_40_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_41_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_42_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_43_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_44_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_45_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_46_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_47_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_48_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_49_boot_tvec_bases_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_tvec_bases_I) *_GLOBAL_boot_tvec_bases_7_A[NUM_STACKS];   
# 40 "linux-2.6.26/include/linux/timer.h"
void init_timer(struct timer_list *timer);
void init_timer_deferrable(struct timer_list *timer);





static inline  __attribute__((always_inline)) void destroy_timer_on_stack(struct timer_list *timer) { }
static inline  __attribute__((always_inline)) void init_timer_on_stack(struct timer_list *timer)
{
 init_timer(timer);
}


static inline  __attribute__((always_inline)) void setup_timer(struct timer_list * timer,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer(timer);
}

static inline  __attribute__((always_inline)) void setup_timer_on_stack(struct timer_list *timer,
     void (*function)(unsigned long),
     unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer_on_stack(timer);
}
# 82 "linux-2.6.26/include/linux/timer.h"
static inline  __attribute__((always_inline)) int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int __mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
# 102 "linux-2.6.26/include/linux/timer.h"
extern unsigned long next_timer_interrupt(void);





extern unsigned long get_next_timer_interrupt(unsigned long now);
# 136 "linux-2.6.26/include/linux/timer.h"
static inline  __attribute__((always_inline)) void init_timer_stats(void)
{
}

static inline  __attribute__((always_inline)) void timer_stats_timer_set_start_info(struct timer_list *timer)
{
}

static inline  __attribute__((always_inline)) void timer_stats_timer_clear_start_info(struct timer_list *timer)
{
}
# 163 "linux-2.6.26/include/linux/timer.h"
static inline  __attribute__((always_inline)) void add_timer(struct timer_list *timer)
{
 do { if (__builtin_expect(!!(timer_pending(timer)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 __mod_timer(timer, timer->expires);
}
# 179 "linux-2.6.26/include/linux/timer.h"
extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern enum hrtimer_restart it_real_fn(struct hrtimer *);

unsigned long __round_jiffies(unsigned long j, int cpu);
unsigned long __round_jiffies_relative(unsigned long j, int cpu);
unsigned long round_jiffies(unsigned long j);
unsigned long round_jiffies_relative(unsigned long j);
# 9 "linux-2.6.26/include/linux/workqueue.h" 2



# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 13 "linux-2.6.26/include/linux/workqueue.h" 2

struct workqueue_struct;

struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);







struct work_struct {
 atomic_long_t data;



 struct list_head entry;
 work_func_t func;



};



struct delayed_work {
 struct work_struct work;
 struct timer_list timer;
};

struct execute_work {
 struct work_struct work;
};
# 150 "linux-2.6.26/include/linux/workqueue.h"
extern struct workqueue_struct *
__create_workqueue_key(const char *name, int singlethread,
         int freezeable, struct lock_class_key *key,
         const char *lock_name);
# 179 "linux-2.6.26/include/linux/workqueue.h"
extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);

extern void flush_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);

extern int schedule_work(struct work_struct *work);
extern int schedule_delayed_work(struct delayed_work *work, unsigned long delay);
extern int schedule_delayed_work_on(int cpu, struct delayed_work *work,
     unsigned long delay);
extern int schedule_on_each_cpu(work_func_t func);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
int execute_in_process_context(work_func_t fn, struct execute_work *);

extern int cancel_work_sync(struct work_struct *work);







static inline  __attribute__((always_inline)) int cancel_delayed_work(struct delayed_work *work)
{
 int ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(0, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}

extern int cancel_delayed_work_sync(struct delayed_work *work);


static inline 
__attribute__((always_inline)) void cancel_rearming_delayed_workqueue(struct workqueue_struct *wq,
     struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}


static inline 
__attribute__((always_inline)) void cancel_rearming_delayed_work(struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}
# 12 "linux-2.6.26/include/linux/slub_def.h" 2


enum stat_item {
 ALLOC_FASTPATH,
 ALLOC_SLOWPATH,
 FREE_FASTPATH,
 FREE_SLOWPATH,
 FREE_FROZEN,
 FREE_ADD_PARTIAL,
 FREE_REMOVE_PARTIAL,
 ALLOC_FROM_PARTIAL,
 ALLOC_SLAB,
 ALLOC_REFILL,
 FREE_SLAB,
 CPUSLAB_FLUSH,
 DEACTIVATE_FULL,
 DEACTIVATE_EMPTY,
 DEACTIVATE_TO_HEAD,
 DEACTIVATE_TO_TAIL,
 DEACTIVATE_REMOTE_FREES,
 ORDER_FALLBACK,
 NR_SLUB_STAT_ITEMS };

struct kmem_cache_cpu {
 void **freelist;
 struct page *page;
 int node;
 unsigned int offset;
 unsigned int objsize;



};

struct kmem_cache_node {
 spinlock_t list_lock;
 unsigned long nr_partial;
 struct list_head partial;





};






struct kmem_cache_order_objects {
 unsigned long x;
};




struct kmem_cache {

 unsigned long flags;
 int size;
 int objsize;
 int offset;
 struct kmem_cache_order_objects oo;





 struct kmem_cache_node local_node;


 struct kmem_cache_order_objects max;
 struct kmem_cache_order_objects min;
 gfp_t allocflags;
 int refcount;
 void (*ctor)(struct kmem_cache *, void *);
 int inuse;
 int align;
 const char *name;
 struct list_head list;
# 107 "linux-2.6.26/include/linux/slub_def.h"
 struct kmem_cache_cpu cpu_slab;

};
# 126 "linux-2.6.26/include/linux/slub_def.h"
extern struct kmem_cache kmalloc_caches[12 + 1];





static inline   __attribute__((always_inline)) __attribute__((always_inline)) int kmalloc_index(size_t size)
{
 if (!size)
  return 0;

 if (size <= 8)
  return ( __builtin_constant_p(8) ? ( (8) < 1 ? ____ilog2_NaN() : (8) & (1ULL << 63) ? 63 : (8) & (1ULL << 62) ? 62 : (8) & (1ULL << 61) ? 61 : (8) & (1ULL << 60) ? 60 : (8) & (1ULL << 59) ? 59 : (8) & (1ULL << 58) ? 58 : (8) & (1ULL << 57) ? 57 : (8) & (1ULL << 56) ? 56 : (8) & (1ULL << 55) ? 55 : (8) & (1ULL << 54) ? 54 : (8) & (1ULL << 53) ? 53 : (8) & (1ULL << 52) ? 52 : (8) & (1ULL << 51) ? 51 : (8) & (1ULL << 50) ? 50 : (8) & (1ULL << 49) ? 49 : (8) & (1ULL << 48) ? 48 : (8) & (1ULL << 47) ? 47 : (8) & (1ULL << 46) ? 46 : (8) & (1ULL << 45) ? 45 : (8) & (1ULL << 44) ? 44 : (8) & (1ULL << 43) ? 43 : (8) & (1ULL << 42) ? 42 : (8) & (1ULL << 41) ? 41 : (8) & (1ULL << 40) ? 40 : (8) & (1ULL << 39) ? 39 : (8) & (1ULL << 38) ? 38 : (8) & (1ULL << 37) ? 37 : (8) & (1ULL << 36) ? 36 : (8) & (1ULL << 35) ? 35 : (8) & (1ULL << 34) ? 34 : (8) & (1ULL << 33) ? 33 : (8) & (1ULL << 32) ? 32 : (8) & (1ULL << 31) ? 31 : (8) & (1ULL << 30) ? 30 : (8) & (1ULL << 29) ? 29 : (8) & (1ULL << 28) ? 28 : (8) & (1ULL << 27) ? 27 : (8) & (1ULL << 26) ? 26 : (8) & (1ULL << 25) ? 25 : (8) & (1ULL << 24) ? 24 : (8) & (1ULL << 23) ? 23 : (8) & (1ULL << 22) ? 22 : (8) & (1ULL << 21) ? 21 : (8) & (1ULL << 20) ? 20 : (8) & (1ULL << 19) ? 19 : (8) & (1ULL << 18) ? 18 : (8) & (1ULL << 17) ? 17 : (8) & (1ULL << 16) ? 16 : (8) & (1ULL << 15) ? 15 : (8) & (1ULL << 14) ? 14 : (8) & (1ULL << 13) ? 13 : (8) & (1ULL << 12) ? 12 : (8) & (1ULL << 11) ? 11 : (8) & (1ULL << 10) ? 10 : (8) & (1ULL << 9) ? 9 : (8) & (1ULL << 8) ? 8 : (8) & (1ULL << 7) ? 7 : (8) & (1ULL << 6) ? 6 : (8) & (1ULL << 5) ? 5 : (8) & (1ULL << 4) ? 4 : (8) & (1ULL << 3) ? 3 : (8) & (1ULL << 2) ? 2 : (8) & (1ULL << 1) ? 1 : (8) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(8) <= 4) ? __ilog2_u32(8) : __ilog2_u64(8) );


 if (size > 64 && size <= 96)
  return 1;
 if (size > 128 && size <= 192)
  return 2;

 if (size <= 8) return 3;
 if (size <= 16) return 4;
 if (size <= 32) return 5;
 if (size <= 64) return 6;
 if (size <= 128) return 7;
 if (size <= 256) return 8;
 if (size <= 512) return 9;
 if (size <= 1024) return 10;
 if (size <= 2 * 1024) return 11;
 if (size <= 4 * 1024) return 12;




 if (size <= 8 * 1024) return 13;
 if (size <= 16 * 1024) return 14;
 if (size <= 32 * 1024) return 15;
 if (size <= 64 * 1024) return 16;
 if (size <= 128 * 1024) return 17;
 if (size <= 256 * 1024) return 18;
 if (size <= 512 * 1024) return 19;
 if (size <= 1024 * 1024) return 20;
 if (size <= 2 * 1024 * 1024) return 21;
 return -1;
# 178 "linux-2.6.26/include/linux/slub_def.h"
}







static inline   __attribute__((always_inline)) __attribute__((always_inline)) struct kmem_cache *kmalloc_slab(size_t size)
{
 int index = kmalloc_index(size);

 if (index == 0)
  return ((void *)0);

 return &kmalloc_caches[index];
}
# 203 "linux-2.6.26/include/linux/slub_def.h"
void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *kmalloc_large(size_t size, gfp_t flags)
{
 return (void *)__get_free_pages(flags | (( gfp_t)0x4000u), get_order(size));
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  if (size > ((1UL) << 12))
   return kmalloc_large(size, flags);

  if (!(flags & ( gfp_t)0)) {
   struct kmem_cache *s = kmalloc_slab(size);

   if (!s)
    return ((void *)16);

   return kmem_cache_alloc(s, flags);
  }
 }
 return __kmalloc(size, flags);
}
# 124 "linux-2.6.26/include/linux/slab.h" 2
# 181 "linux-2.6.26/include/linux/slab.h"
static inline  __attribute__((always_inline)) void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (n != 0 && size > (~0UL) / n)
  return ((void *)0);
 return __kmalloc(n * size, flags | (( gfp_t)0x8000u));
}
# 199 "linux-2.6.26/include/linux/slab.h"
static inline  __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc(size, flags);
}

static inline  __attribute__((always_inline)) void *__kmalloc_node(size_t size, gfp_t flags, int node)
{
 return __kmalloc(size, flags);
}

void *kmem_cache_alloc(struct kmem_cache *, gfp_t);

static inline  __attribute__((always_inline)) void *kmem_cache_alloc_node(struct kmem_cache *cachep,
     gfp_t flags, int node)
{
 return kmem_cache_alloc(cachep, flags);
}
# 227 "linux-2.6.26/include/linux/slab.h"
extern void *__kmalloc_track_caller(size_t, gfp_t, void*);
# 264 "linux-2.6.26/include/linux/slab.h"
static inline  __attribute__((always_inline)) void *kmem_cache_zalloc(struct kmem_cache *k, gfp_t flags)
{
 return kmem_cache_alloc(k, flags | (( gfp_t)0x8000u));
}






static inline  __attribute__((always_inline)) void *kzalloc(size_t size, gfp_t flags)
{
 return kmalloc(size, flags | (( gfp_t)0x8000u));
}







static inline  __attribute__((always_inline)) void *kzalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc_node(size, flags | (( gfp_t)0x8000u), node);
}
# 6 "linux-2.6.26/include/linux/percpu.h" 2
# 89 "linux-2.6.26/include/linux/percpu.h"
static inline  __attribute__((always_inline)) void percpu_depopulate(void *__pdata, int cpu)
{
}

static inline  __attribute__((always_inline)) void __percpu_depopulate_mask(void *__pdata, cpumask_t *mask)
{
}

static inline  __attribute__((always_inline)) void *percpu_populate(void *__pdata, size_t size, gfp_t gfp,
        int cpu)
{
 return ({ (void)(cpu); (__pdata); });
}

static inline  __attribute__((always_inline)) int __percpu_populate_mask(void *__pdata, size_t size, gfp_t gfp,
      cpumask_t *mask)
{
 return 0;
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *__percpu_alloc_mask(size_t size, gfp_t gfp, cpumask_t *mask)
{
 return kzalloc(size, gfp);
}

static inline  __attribute__((always_inline)) void percpu_free(void *__pdata)
{
 kfree(__pdata);
}
# 5 "linux-2.6.26/include/asm/local.h" 2


# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 8 "linux-2.6.26/include/asm/local.h" 2


typedef struct {
 atomic_long_t a;
} local_t;






static inline  __attribute__((always_inline)) void local_inc(local_t *l)
{
 asm volatile(" incq " "%0"
       : "+m" (l->a.counter));
}

static inline  __attribute__((always_inline)) void local_dec(local_t *l)
{
 asm volatile(" decq " "%0"
       : "+m" (l->a.counter));
}

static inline  __attribute__((always_inline)) void local_add(long i, local_t *l)
{
 asm volatile(" addq " "%1,%0"
       : "+m" (l->a.counter)
       : "ir" (i));
}

static inline  __attribute__((always_inline)) void local_sub(long i, local_t *l)
{
 asm volatile(" subq " "%1,%0"
       : "+m" (l->a.counter)
       : "ir" (i));
}
# 54 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) int local_sub_and_test(long i, local_t *l)
{
 unsigned char c;

 asm volatile(" subq " "%2,%0; sete %1"
       : "+m" (l->a.counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}
# 72 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) int local_dec_and_test(local_t *l)
{
 unsigned char c;

 asm volatile(" decq " "%0; sete %1"
       : "+m" (l->a.counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
# 90 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) int local_inc_and_test(local_t *l)
{
 unsigned char c;

 asm volatile(" incq " "%0; sete %1"
       : "+m" (l->a.counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
# 109 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) int local_add_negative(long i, local_t *l)
{
 unsigned char c;

 asm volatile(" addq " "%2,%0; sets %1"
       : "+m" (l->a.counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}
# 126 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) long local_add_return(long i, local_t *l)
{
 long __i;

 unsigned long flags;
 if (__builtin_expect(!!(global_boot_cpu_data[get_stack_id()].x86 <= 3), 0))
  goto no_xadd;


 __i = i;
 asm volatile(" xaddq " "%0, %1;"
       : "+r" (i), "+m" (l->a.counter)
       : : "memory");
 return i + __i;


no_xadd:
 (void)(flags);
 __i = atomic_long_read(&(l)->a);
 atomic_long_set(&(l)->a, (i + __i));
 (void)(flags);
 return i + __i;

}

static inline  __attribute__((always_inline)) long local_sub_return(long i, local_t *l)
{
 return local_add_return(-i, l);
}
# 20 "linux-2.6.26/include/linux/module.h" 2

# 1 "linux-2.6.26/include/asm/module.h" 1




struct mod_arch_specific {};
# 22 "linux-2.6.26/include/linux/module.h" 2
# 33 "linux-2.6.26/include/linux/module.h"
struct kernel_symbol
{
 unsigned long value;
 const char *name;
};

struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_attribute {
        struct attribute attr;
        ssize_t (*show)(struct module_attribute *, struct module *, char *);
        ssize_t (*store)(struct module_attribute *, struct module *,
    const char *, size_t count);
 void (*setup)(struct module *, const char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_kobject
{
 struct kobject kobj;
 struct module *mod;
 struct kobject *drivers_dir;
};


extern int init_module(void);
extern void cleanup_module(void);


struct exception_table_entry;

const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
        const struct exception_table_entry *last,
        unsigned long value);
void sort_extable(struct exception_table_entry *start,
    struct exception_table_entry *finish);
void sort_main_extable(void);
# 163 "linux-2.6.26/include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;
# 461 "linux-2.6.26/include/linux/module.h"
static inline  __attribute__((always_inline)) const struct exception_table_entry *
search_module_extables(unsigned long addr)
{
 return ((void *)0);
}


static inline  __attribute__((always_inline)) struct module *module_text_address(unsigned long addr)
{
 return ((void *)0);
}


static inline  __attribute__((always_inline)) struct module *__module_text_address(unsigned long addr)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) int is_module_address(unsigned long addr)
{
 return 0;
}






static inline  __attribute__((always_inline)) void __module_get(struct module *module)
{
}

static inline  __attribute__((always_inline)) int try_module_get(struct module *module)
{
 return 1;
}

static inline  __attribute__((always_inline)) void module_put(struct module *module)
{
}




static inline  __attribute__((always_inline)) const char *module_address_lookup(unsigned long addr,
       unsigned long *symbolsize,
       unsigned long *offset,
       char **modname,
       char *namebuf)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) int lookup_module_symbol_name(unsigned long addr, char *symname)
{
 return -34;
}

static inline  __attribute__((always_inline)) int lookup_module_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name)
{
 return -34;
}

static inline  __attribute__((always_inline)) int module_get_kallsym(unsigned int symnum, unsigned long *value,
     char *type, char *name,
     char *module_name, int *exported)
{
 return -34;
}

static inline  __attribute__((always_inline)) unsigned long module_kallsyms_lookup_name(const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int register_module_notifier(struct notifier_block * nb)
{

 return 0;
}

static inline  __attribute__((always_inline)) int unregister_module_notifier(struct notifier_block * nb)
{
 return 0;
}



static inline  __attribute__((always_inline)) void print_modules(void)
{
}

static inline  __attribute__((always_inline)) void module_update_markers(void)
{
}



struct device_driver;
# 576 "linux-2.6.26/include/linux/module.h"
static inline  __attribute__((always_inline)) int mod_sysfs_init(struct module *mod)
{
 return 0;
}

static inline  __attribute__((always_inline)) int mod_sysfs_setup(struct module *mod,
      struct kernel_param *kparam,
      unsigned int num_params)
{
 return 0;
}

static inline  __attribute__((always_inline)) int module_add_modinfo_attrs(struct module *mod)
{
 return 0;
}

static inline  __attribute__((always_inline)) void module_remove_modinfo_attrs(struct module *mod)
{ }
# 22 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/mm.h" 1
# 11 "linux-2.6.26/include/linux/mm.h"
# 1 "linux-2.6.26/include/linux/rbtree.h" 1
# 100 "linux-2.6.26/include/linux/rbtree.h"
struct rb_node
{
 unsigned long rb_parent_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long)))) ;


struct rb_root
{
 struct rb_node *rb_node;
};
# 123 "linux-2.6.26/include/linux/rbtree.h"
static inline  __attribute__((always_inline)) void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline  __attribute__((always_inline)) void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
# 139 "linux-2.6.26/include/linux/rbtree.h"
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);


extern struct rb_node *rb_next(struct rb_node *);
extern struct rb_node *rb_prev(struct rb_node *);
extern struct rb_node *rb_first(struct rb_root *);
extern struct rb_node *rb_last(struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline  __attribute__((always_inline)) void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent_color = (unsigned long )parent;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 12 "linux-2.6.26/include/linux/mm.h" 2
# 1 "linux-2.6.26/include/linux/prio_tree.h" 1
# 14 "linux-2.6.26/include/linux/prio_tree.h"
struct raw_prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
};

struct prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
 unsigned long start;
 unsigned long last;
};

struct prio_tree_root {
 struct prio_tree_node *prio_tree_node;
 unsigned short index_bits;
 unsigned short raw;




};

struct prio_tree_iter {
 struct prio_tree_node *cur;
 unsigned long mask;
 unsigned long value;
 int size_level;

 struct prio_tree_root *root;
 unsigned long r_index;
 unsigned long h_index;
};

static inline  __attribute__((always_inline)) void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
 iter->cur = ((void *)0);
}
# 84 "linux-2.6.26/include/linux/prio_tree.h"
static inline  __attribute__((always_inline)) int prio_tree_empty(const struct prio_tree_root *root)
{
 return root->prio_tree_node == ((void *)0);
}

static inline  __attribute__((always_inline)) int prio_tree_root(const struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline  __attribute__((always_inline)) int prio_tree_left_empty(const struct prio_tree_node *node)
{
 return node->left == node;
}

static inline  __attribute__((always_inline)) int prio_tree_right_empty(const struct prio_tree_node *node)
{
 return node->right == node;
}


struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
                struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
                struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);
# 13 "linux-2.6.26/include/linux/mm.h" 2
# 1 "linux-2.6.26/include/linux/debug_locks.h" 1





struct task_struct;

typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_debug_locks[NUM_STACKS];   
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_debug_locks_silent[NUM_STACKS];   




extern int debug_locks_off(void);
# 40 "linux-2.6.26/include/linux/debug_locks.h"
struct task_struct;
# 49 "linux-2.6.26/include/linux/debug_locks.h"
static inline  __attribute__((always_inline)) void debug_show_all_locks(void)
{
}

static inline  __attribute__((always_inline)) void __debug_show_held_locks(struct task_struct *task)
{
}

static inline  __attribute__((always_inline)) void debug_show_held_locks(struct task_struct *task)
{
}

static inline  __attribute__((always_inline)) void
debug_check_no_locks_freed(const void *from, unsigned long len)
{
}

static inline  __attribute__((always_inline)) void
debug_check_no_locks_held(struct task_struct *task)
{
}
# 14 "linux-2.6.26/include/linux/mm.h" 2
# 1 "linux-2.6.26/include/linux/mm_types.h" 1



# 1 "linux-2.6.26/include/linux/auxvec.h" 1
# 5 "linux-2.6.26/include/linux/mm_types.h" 2







# 1 "linux-2.6.26/include/linux/completion.h" 1
# 13 "linux-2.6.26/include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 39 "linux-2.6.26/include/linux/completion.h"
static inline  __attribute__((always_inline)) void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern int wait_for_completion_killable(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
         unsigned long timeout);
extern unsigned long wait_for_completion_interruptible_timeout(
   struct completion *x, unsigned long timeout);

extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 13 "linux-2.6.26/include/linux/mm_types.h" 2

# 1 "linux-2.6.26/include/asm/mmu.h" 1
# 13 "linux-2.6.26/include/asm/mmu.h"
typedef struct {
 void *ldt;

 rwlock_t ldtlock;

 int size;
 struct mutex lock;
 void *vdso;
} mm_context_t;




static inline  __attribute__((always_inline)) void leave_mm(int cpu)
{
}
# 15 "linux-2.6.26/include/linux/mm_types.h" 2






struct address_space;


typedef atomic_long_t mm_counter_t;
# 36 "linux-2.6.26/include/linux/mm_types.h"
struct page {
 unsigned long flags;

 atomic_t _count;
 union {
  atomic_t _mapcount;



  struct {
   u16 inuse;
   u16 objects;
  };
 };
 union {
     struct {
  unsigned long private;






  struct address_space *mapping;






     };

     spinlock_t ptl;

     struct kmem_cache *slab;
     struct page *first_page;
 };
 union {
  unsigned long index;
  void *freelist;
 };
 struct list_head lru;
# 97 "linux-2.6.26/include/linux/mm_types.h"
};







struct vm_area_struct {
 struct mm_struct * vm_mm;
 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next;

 pgprot_t vm_page_prot;
 unsigned long vm_flags;

 struct rb_node vm_rb;







 union {
  struct {
   struct list_head list;
   void *parent;
   struct vm_area_struct *head;
  } vm_set;

  struct raw_prio_tree_node prio_tree_node;
 } shared;







 struct list_head anon_vma_node;
 struct anon_vma *anon_vma;


 struct vm_operations_struct * vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 void * vm_private_data;
 unsigned long vm_truncate_count;


 atomic_t vm_usage;




};

struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;
 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);
 void (*unmap_area) (struct mm_struct *mm, unsigned long addr);
 unsigned long mmap_base;
 unsigned long task_size;
 unsigned long cached_hole_size;
 unsigned long free_area_cache;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 int core_waiters;
 struct rw_semaphore mmap_sem;
 spinlock_t page_table_lock;

 struct list_head mmlist;







 mm_counter_t _file_rss;
 mm_counter_t _anon_rss;

 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm, locked_vm, shared_vm, exec_vm;
 unsigned long stack_vm, reserved_vm, def_flags, nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[(2*(1 + (14 + 2) + 1))];

 cpumask_t cpu_vm_mask;


 mm_context_t context;
# 216 "linux-2.6.26/include/linux/mm_types.h"
 unsigned int faultstamp;
 unsigned int token_priority;
 unsigned int last_interval;

 unsigned long flags;


 struct completion *core_startup_done, core_done;


 rwlock_t ioctx_list_lock;
 struct kioctx *ioctx_list;
# 247 "linux-2.6.26/include/linux/mm_types.h"
};
# 15 "linux-2.6.26/include/linux/mm.h" 2

struct mempolicy;
struct anon_vma;
struct file_ra_state;
struct user_struct;
struct writeback_control;


typedef  unsigned long   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_max_mapnr[NUM_STACKS];    


typedef  unsigned long   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_num_physpages[NUM_STACKS];    
typedef  void  _GLOBAL_86_T; extern  _GLOBAL_86_T  * global_high_memory[NUM_STACKS];    
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_page_cluster[NUM_STACKS];   


typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_sysctl_legacy_va_layout[NUM_STACKS];   




typedef  unsigned long   _GLOBAL_89_T; extern  _GLOBAL_89_T  global_mmap_min_addr[NUM_STACKS];    


# 1 "linux-2.6.26/include/asm/pgtable.h" 1
# 155 "linux-2.6.26/include/asm/pgtable.h"
extern unsigned long empty_zero_page[((1UL) << 12) / sizeof(unsigned long)];


typedef  spinlock_t  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_pgd_lock[NUM_STACKS];   
typedef  struct list_head   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_pgd_list[NUM_STACKS];    





static inline  __attribute__((always_inline)) int pte_dirty(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<6);
}

static inline  __attribute__((always_inline)) int pte_young(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<5);
}

static inline  __attribute__((always_inline)) int pte_write(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<1);
}

static inline  __attribute__((always_inline)) int pte_file(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<6);
}

static inline  __attribute__((always_inline)) int pte_huge(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<7);
}

static inline  __attribute__((always_inline)) int pte_global(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<8);
}

static inline  __attribute__((always_inline)) int pte_exec(pte_t pte)
{
 return !(native_pte_val(pte) & ((1ULL) << 63));
}

static inline  __attribute__((always_inline)) int pte_special(pte_t pte)
{
 return 0;
}

static inline  __attribute__((always_inline)) int pmd_large(pmd_t pte)
{
 return (native_pmd_val(pte) & (((1L)<<7) | ((1L)<<0))) ==
  (((1L)<<7) | ((1L)<<0));
}

static inline  __attribute__((always_inline)) pte_t pte_mkclean(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<6));
}

static inline  __attribute__((always_inline)) pte_t pte_mkold(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<5));
}

static inline  __attribute__((always_inline)) pte_t pte_wrprotect(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<1));
}

static inline  __attribute__((always_inline)) pte_t pte_mkexec(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1ULL) << 63));
}

static inline  __attribute__((always_inline)) pte_t pte_mkdirty(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<6));
}

static inline  __attribute__((always_inline)) pte_t pte_mkyoung(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<5));
}

static inline  __attribute__((always_inline)) pte_t pte_mkwrite(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<1));
}

static inline  __attribute__((always_inline)) pte_t pte_mkhuge(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<7));
}

static inline  __attribute__((always_inline)) pte_t pte_clrhuge(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<7));
}

static inline  __attribute__((always_inline)) pte_t pte_mkglobal(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<8));
}

static inline  __attribute__((always_inline)) pte_t pte_clrglobal(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<8));
}

static inline  __attribute__((always_inline)) pte_t pte_mkspecial(pte_t pte)
{
 return pte;
}

typedef  pteval_t  _GLOBAL_92_T; extern  _GLOBAL_92_T  global___supported_pte_mask[NUM_STACKS];   

static inline  __attribute__((always_inline)) pte_t pfn_pte(unsigned long page_nr, pgprot_t pgprot)
{
 return native_make_pte((((phys_addr_t)page_nr << 12) | ((pgprot).pgprot)) & global___supported_pte_mask[get_stack_id()])
                                                   ;
}

static inline  __attribute__((always_inline)) pmd_t pfn_pmd(unsigned long page_nr, pgprot_t pgprot)
{
 return native_make_pmd((((phys_addr_t)page_nr << 12) | ((pgprot).pgprot)) & global___supported_pte_mask[get_stack_id()])
                                                   ;
}

static inline  __attribute__((always_inline)) pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 pteval_t val = native_pte_val(pte);





 val &= (((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<4) | ((1L)<<3) | ((1L)<<5) | ((1L)<<6));
 val |= ((newprot).pgprot) & (~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<4) | ((1L)<<3) | ((1L)<<5) | ((1L)<<6))) & global___supported_pte_mask[get_stack_id()];

 return native_make_pte(val);
}



static inline  __attribute__((always_inline)) pgprot_t pgprot_modify(pgprot_t oldprot, pgprot_t newprot)
{
 pgprotval_t preservebits = ((oldprot).pgprot) & (((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<4) | ((1L)<<3) | ((1L)<<5) | ((1L)<<6));
 pgprotval_t addbits = ((newprot).pgprot);
 return ((pgprot_t) { (preservebits | addbits) } );
}







struct file;
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t vma_prot);
int phys_mem_access_prot_allowed(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t *vma_prot);
# 359 "linux-2.6.26/include/asm/pgtable.h"
# 1 "linux-2.6.26/include/asm/pgtable_64.h" 1
# 16 "linux-2.6.26/include/asm/pgtable_64.h"
typedef  pud_t  _GLOBAL_93_T; extern  _GLOBAL_93_T  _GLOBAL_0_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_1_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_2_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_3_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_4_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_5_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_6_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_7_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_8_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_9_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_10_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_11_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_12_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_13_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_14_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_15_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_16_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_17_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_18_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_19_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_20_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_21_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_22_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_23_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_24_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_25_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_26_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_27_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_28_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_29_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_30_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_31_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_32_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_33_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_34_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_35_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_36_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_37_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_38_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_39_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_40_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_41_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_42_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_43_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_44_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_45_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_46_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_47_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_48_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_93_T  _GLOBAL_49_level3_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_kernel_pgt_I) *_GLOBAL_level3_kernel_pgt_8_A[NUM_STACKS];  
typedef  pud_t  _GLOBAL_94_T; extern  _GLOBAL_94_T  _GLOBAL_0_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_1_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_2_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_3_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_4_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_5_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_6_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_7_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_8_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_9_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_10_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_11_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_12_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_13_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_14_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_15_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_16_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_17_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_18_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_19_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_20_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_21_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_22_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_23_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_24_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_25_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_26_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_27_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_28_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_29_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_30_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_31_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_32_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_33_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_34_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_35_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_36_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_37_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_38_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_39_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_40_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_41_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_42_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_43_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_44_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_45_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_46_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_47_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_48_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_94_T  _GLOBAL_49_level3_ident_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_ident_pgt_I) *_GLOBAL_level3_ident_pgt_9_A[NUM_STACKS];  
typedef  pmd_t  _GLOBAL_95_T; extern  _GLOBAL_95_T  _GLOBAL_0_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_1_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_2_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_3_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_4_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_5_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_6_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_7_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_8_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_9_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_10_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_11_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_12_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_13_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_14_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_15_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_16_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_17_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_18_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_19_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_20_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_21_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_22_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_23_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_24_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_25_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_26_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_27_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_28_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_29_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_30_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_31_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_32_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_33_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_34_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_35_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_36_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_37_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_38_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_39_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_40_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_41_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_42_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_43_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_44_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_45_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_46_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_47_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_48_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_95_T  _GLOBAL_49_level2_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level2_kernel_pgt_I) *_GLOBAL_level2_kernel_pgt_10_A[NUM_STACKS];  
typedef  pgd_t  _GLOBAL_96_T; extern  _GLOBAL_96_T  _GLOBAL_0_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_1_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_2_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_3_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_4_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_5_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_6_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_7_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_8_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_9_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_10_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_11_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_12_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_13_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_14_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_15_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_16_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_17_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_18_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_19_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_20_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_21_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_22_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_23_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_24_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_25_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_26_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_27_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_28_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_29_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_30_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_31_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_32_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_33_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_34_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_35_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_36_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_37_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_38_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_39_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_40_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_41_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_42_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_43_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_44_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_45_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_46_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_47_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_48_init_level4_pgt_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_49_init_level4_pgt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_init_level4_pgt_I) *_GLOBAL_init_level4_pgt_11_A[NUM_STACKS];  



extern void paging_init(void);
# 71 "linux-2.6.26/include/asm/pgtable_64.h"
struct mm_struct;

static inline  __attribute__((always_inline)) void native_pte_clear(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 *ptep = native_make_pte(0);
}

static inline  __attribute__((always_inline)) void native_set_pte(pte_t *ptep, pte_t pte)
{
 *ptep = pte;
}

static inline  __attribute__((always_inline)) void native_set_pte_atomic(pte_t *ptep, pte_t pte)
{
 native_set_pte(ptep, pte);
}

static inline  __attribute__((always_inline)) pte_t native_ptep_get_and_clear(pte_t *xp)
{





 pte_t ret = *xp;
 native_pte_clear(((void *)0), 0, xp);
 return ret;

}

static inline  __attribute__((always_inline)) void native_set_pmd(pmd_t *pmdp, pmd_t pmd)
{
 *pmdp = pmd;
}

static inline  __attribute__((always_inline)) void native_pmd_clear(pmd_t *pmd)
{
 native_set_pmd(pmd, native_make_pmd(0));
}

static inline  __attribute__((always_inline)) void native_set_pud(pud_t *pudp, pud_t pud)
{
 *pudp = pud;
}

static inline  __attribute__((always_inline)) void native_pud_clear(pud_t *pud)
{
 native_set_pud(pud, native_make_pud(0));
}

static inline  __attribute__((always_inline)) void native_set_pgd(pgd_t *pgdp, pgd_t pgd)
{
 *pgdp = pgd;
}

static inline  __attribute__((always_inline)) void native_pgd_clear(pgd_t *pgd)
{
 native_set_pgd(pgd, native_make_pgd(0));
}
# 154 "linux-2.6.26/include/asm/pgtable_64.h"
static inline  __attribute__((always_inline)) int pgd_bad(pgd_t pgd)
{
 return (native_pgd_val(pgd) & ~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<2))) != (((1L)<<0) | ((1L)<<1) | ((1L)<<5) | ((1L)<<6));
}

static inline  __attribute__((always_inline)) int pud_bad(pud_t pud)
{
 return (native_pud_val(pud) & ~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<2))) != (((1L)<<0) | ((1L)<<1) | ((1L)<<5) | ((1L)<<6));
}

static inline  __attribute__((always_inline)) int pmd_bad(pmd_t pmd)
{
 return (native_pmd_val(pmd) & ~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<2))) != (((1L)<<0) | ((1L)<<1) | ((1L)<<5) | ((1L)<<6));
}
# 197 "linux-2.6.26/include/asm/pgtable_64.h"
static inline  __attribute__((always_inline)) int pgd_large(pgd_t pgd) { return 0; }
# 210 "linux-2.6.26/include/asm/pgtable_64.h"
static inline  __attribute__((always_inline)) int pud_large(pud_t pte)
{
 return (native_pud_val(pte) & (((1L)<<7) | ((1L)<<0))) ==
  (((1L)<<7) | ((1L)<<0));
}
# 250 "linux-2.6.26/include/asm/pgtable_64.h"
typedef  int  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_direct_gbpages[NUM_STACKS];   
# 260 "linux-2.6.26/include/asm/pgtable_64.h"
extern int kern_addr_valid(unsigned long addr);
extern void cleanup_highmap(void);
# 360 "linux-2.6.26/include/asm/pgtable.h" 2







enum {
 PG_LEVEL_NONE,
 PG_LEVEL_4K,
 PG_LEVEL_2M,
 PG_LEVEL_1G,
};







extern pte_t *lookup_address(unsigned long address, unsigned int *level);


static inline  __attribute__((always_inline)) pte_t native_local_ptep_get_and_clear(pte_t *ptep)
{
 pte_t res = *ptep;


 native_pte_clear(((void *)0), 0, ptep);
 return res;
}

static inline  __attribute__((always_inline)) void native_set_pte_at(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep , pte_t pte)
{
 native_set_pte(ptep, pte);
}
# 424 "linux-2.6.26/include/asm/pgtable.h"
extern int ptep_set_access_flags(struct vm_area_struct *vma,
     unsigned long address, pte_t *ptep,
     pte_t entry, int dirty);


extern int ptep_test_and_clear_young(struct vm_area_struct *vma,
         unsigned long addr, pte_t *ptep);


extern int ptep_clear_flush_young(struct vm_area_struct *vma,
      unsigned long address, pte_t *ptep);


static inline  __attribute__((always_inline)) pte_t ptep_get_and_clear(struct mm_struct *mm, unsigned long addr,
           pte_t *ptep)
{
 pte_t pte = native_ptep_get_and_clear(ptep);
 do { } while (0);
 return pte;
}


static inline  __attribute__((always_inline)) pte_t ptep_get_and_clear_full(struct mm_struct *mm,
         unsigned long addr, pte_t *ptep,
         int full)
{
 pte_t pte;
 if (full) {




  pte = native_local_ptep_get_and_clear(ptep);
 } else {
  pte = ptep_get_and_clear(mm, addr, ptep);
 }
 return pte;
}


static inline  __attribute__((always_inline)) void ptep_set_wrprotect(struct mm_struct *mm,
          unsigned long addr, pte_t *ptep)
{
 clear_bit(1, (unsigned long *)&ptep->pte);
 do { } while (0);
}
# 481 "linux-2.6.26/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) void clone_pgd_range(pgd_t *dst, pgd_t *src, int count)
{
       memcpy(dst, src, count * sizeof(pgd_t));
}


# 1 "linux-2.6.26/include/asm-generic/pgtable.h" 1
# 488 "linux-2.6.26/include/asm/pgtable.h" 2
# 40 "linux-2.6.26/include/linux/mm.h" 2
# 53 "linux-2.6.26/include/linux/mm.h"
typedef  struct kmem_cache   _GLOBAL_98_T; extern  _GLOBAL_98_T  * global_vm_area_cachep[NUM_STACKS];    






struct vm_list_struct {
 struct vm_list_struct *next;
 struct vm_area_struct *vma;
};


typedef  struct rb_root   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_nommu_vma_tree[NUM_STACKS];    
typedef  struct rw_semaphore   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_nommu_vma_sem[NUM_STACKS];    

extern unsigned int kobjsize(const void *objp);
# 132 "linux-2.6.26/include/linux/mm.h"
extern pgprot_t protection_map[16];
# 147 "linux-2.6.26/include/linux/mm.h"
struct vm_fault {
 unsigned int flags;
 unsigned long pgoff;
 void *virtual_address;

 struct page *page;




};






struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 int (*fault)(struct vm_area_struct *vma, struct vm_fault *vmf);
 unsigned long (*nopfn)(struct vm_area_struct *area,
   unsigned long address);



 int (*page_mkwrite)(struct vm_area_struct *vma, struct page *page);
# 199 "linux-2.6.26/include/linux/mm.h"
};

struct mmu_gather;
struct inode;
# 211 "linux-2.6.26/include/linux/mm.h"
# 1 "linux-2.6.26/include/linux/page-flags.h" 1
# 72 "linux-2.6.26/include/linux/page-flags.h"
enum pageflags {
 PG_locked,
 PG_error,
 PG_referenced,
 PG_uptodate,
 PG_dirty,
 PG_lru,
 PG_active,
 PG_slab,
 PG_owner_priv_1,
 PG_arch_1,
 PG_reserved,
 PG_private,
 PG_writeback,




 PG_compound,

 PG_swapcache,
 PG_mappedtodisk,
 PG_reclaim,
 PG_buddy,



 __NR_PAGEFLAGS
};
# 149 "linux-2.6.26/include/linux/page-flags.h"
struct page;

static inline  __attribute__((always_inline)) int PageLocked(struct page *page) { return (__builtin_constant_p((PG_locked)) ? constant_test_bit((PG_locked), (&page->flags)) : variable_test_bit((PG_locked), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageLocked(struct page *page) { set_bit(PG_locked, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageLocked(struct page *page) { clear_bit(PG_locked, &page->flags); } static inline  __attribute__((always_inline)) int TestSetPageLocked(struct page *page) { return test_and_set_bit(PG_locked, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageLocked(struct page *page) { return test_and_clear_bit(PG_locked, &page->flags); }
static inline  __attribute__((always_inline)) int PageError(struct page *page) { return (__builtin_constant_p((PG_error)) ? constant_test_bit((PG_error), (&page->flags)) : variable_test_bit((PG_error), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageError(struct page *page) { set_bit(PG_error, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageError(struct page *page) { clear_bit(PG_error, &page->flags); }
static inline  __attribute__((always_inline)) int PageReferenced(struct page *page) { return (__builtin_constant_p((PG_referenced)) ? constant_test_bit((PG_referenced), (&page->flags)) : variable_test_bit((PG_referenced), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageReferenced(struct page *page) { set_bit(PG_referenced, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageReferenced(struct page *page) { clear_bit(PG_referenced, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageReferenced(struct page *page) { return test_and_clear_bit(PG_referenced, &page->flags); }
static inline  __attribute__((always_inline)) int PageDirty(struct page *page) { return (__builtin_constant_p((PG_dirty)) ? constant_test_bit((PG_dirty), (&page->flags)) : variable_test_bit((PG_dirty), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageDirty(struct page *page) { set_bit(PG_dirty, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageDirty(struct page *page) { clear_bit(PG_dirty, &page->flags); } static inline  __attribute__((always_inline)) int TestSetPageDirty(struct page *page) { return test_and_set_bit(PG_dirty, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageDirty(struct page *page) { return test_and_clear_bit(PG_dirty, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageDirty(struct page *page) { __clear_bit(PG_dirty, &page->flags); }
static inline  __attribute__((always_inline)) int PageLRU(struct page *page) { return (__builtin_constant_p((PG_lru)) ? constant_test_bit((PG_lru), (&page->flags)) : variable_test_bit((PG_lru), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageLRU(struct page *page) { set_bit(PG_lru, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageLRU(struct page *page) { clear_bit(PG_lru, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageLRU(struct page *page) { __clear_bit(PG_lru, &page->flags); }
static inline  __attribute__((always_inline)) int PageActive(struct page *page) { return (__builtin_constant_p((PG_active)) ? constant_test_bit((PG_active), (&page->flags)) : variable_test_bit((PG_active), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageActive(struct page *page) { set_bit(PG_active, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageActive(struct page *page) { clear_bit(PG_active, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageActive(struct page *page) { __clear_bit(PG_active, &page->flags); }
static inline  __attribute__((always_inline)) int PageSlab(struct page *page) { return (__builtin_constant_p((PG_slab)) ? constant_test_bit((PG_slab), (&page->flags)) : variable_test_bit((PG_slab), (&page->flags))); } static inline  __attribute__((always_inline)) void __SetPageSlab(struct page *page) { __set_bit(PG_slab, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageSlab(struct page *page) { __clear_bit(PG_slab, &page->flags); }
static inline  __attribute__((always_inline)) int PageChecked(struct page *page) { return (__builtin_constant_p((PG_owner_priv_1)) ? constant_test_bit((PG_owner_priv_1), (&page->flags)) : variable_test_bit((PG_owner_priv_1), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageChecked(struct page *page) { set_bit(PG_owner_priv_1, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageChecked(struct page *page) { clear_bit(PG_owner_priv_1, &page->flags); }
static inline  __attribute__((always_inline)) int PagePinned(struct page *page) { return (__builtin_constant_p((PG_owner_priv_1)) ? constant_test_bit((PG_owner_priv_1), (&page->flags)) : variable_test_bit((PG_owner_priv_1), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPagePinned(struct page *page) { set_bit(PG_owner_priv_1, &page->flags); } static inline  __attribute__((always_inline)) void ClearPagePinned(struct page *page) { clear_bit(PG_owner_priv_1, &page->flags); } static inline  __attribute__((always_inline)) int TestSetPagePinned(struct page *page) { return test_and_set_bit(PG_owner_priv_1, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPagePinned(struct page *page) { return test_and_clear_bit(PG_owner_priv_1, &page->flags); }
static inline  __attribute__((always_inline)) int PageReserved(struct page *page) { return (__builtin_constant_p((PG_reserved)) ? constant_test_bit((PG_reserved), (&page->flags)) : variable_test_bit((PG_reserved), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageReserved(struct page *page) { set_bit(PG_reserved, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageReserved(struct page *page) { clear_bit(PG_reserved, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageReserved(struct page *page) { __clear_bit(PG_reserved, &page->flags); }
static inline  __attribute__((always_inline)) int PagePrivate(struct page *page) { return (__builtin_constant_p((PG_private)) ? constant_test_bit((PG_private), (&page->flags)) : variable_test_bit((PG_private), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPagePrivate(struct page *page) { set_bit(PG_private, &page->flags); } static inline  __attribute__((always_inline)) void ClearPagePrivate(struct page *page) { clear_bit(PG_private, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPagePrivate(struct page *page) { __clear_bit(PG_private, &page->flags); }
 static inline  __attribute__((always_inline)) void __SetPagePrivate(struct page *page) { __set_bit(PG_private, &page->flags); }





static inline  __attribute__((always_inline)) int PageWriteback(struct page *page) { return (__builtin_constant_p((PG_writeback)) ? constant_test_bit((PG_writeback), (&page->flags)) : variable_test_bit((PG_writeback), (&page->flags))); } static inline  __attribute__((always_inline)) int TestSetPageWriteback(struct page *page) { return test_and_set_bit(PG_writeback, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageWriteback(struct page *page) { return test_and_clear_bit(PG_writeback, &page->flags); }
static inline  __attribute__((always_inline)) int PageBuddy(struct page *page) { return (__builtin_constant_p((PG_buddy)) ? constant_test_bit((PG_buddy), (&page->flags)) : variable_test_bit((PG_buddy), (&page->flags))); } static inline  __attribute__((always_inline)) void __SetPageBuddy(struct page *page) { __set_bit(PG_buddy, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageBuddy(struct page *page) { __clear_bit(PG_buddy, &page->flags); }
static inline  __attribute__((always_inline)) int PageMappedToDisk(struct page *page) { return (__builtin_constant_p((PG_mappedtodisk)) ? constant_test_bit((PG_mappedtodisk), (&page->flags)) : variable_test_bit((PG_mappedtodisk), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageMappedToDisk(struct page *page) { set_bit(PG_mappedtodisk, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageMappedToDisk(struct page *page) { clear_bit(PG_mappedtodisk, &page->flags); }


static inline  __attribute__((always_inline)) int PageReclaim(struct page *page) { return (__builtin_constant_p((PG_reclaim)) ? constant_test_bit((PG_reclaim), (&page->flags)) : variable_test_bit((PG_reclaim), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageReclaim(struct page *page) { set_bit(PG_reclaim, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageReclaim(struct page *page) { clear_bit(PG_reclaim, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageReclaim(struct page *page) { return test_and_clear_bit(PG_reclaim, &page->flags); }
static inline  __attribute__((always_inline)) int PageReadahead(struct page *page) { return (__builtin_constant_p((PG_reclaim)) ? constant_test_bit((PG_reclaim), (&page->flags)) : variable_test_bit((PG_reclaim), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageReadahead(struct page *page) { set_bit(PG_reclaim, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageReadahead(struct page *page) { clear_bit(PG_reclaim, &page->flags); }
# 183 "linux-2.6.26/include/linux/page-flags.h"
static inline  __attribute__((always_inline)) int PageHighMem(struct page *page) { return 0; }





static inline  __attribute__((always_inline)) int PageSwapCache(struct page *page) { return 0; }





static inline  __attribute__((always_inline)) int PageUncached(struct page *page) { return 0; }


static inline  __attribute__((always_inline)) int PageUptodate(struct page *page)
{
 int ret = (__builtin_constant_p((PG_uptodate)) ? constant_test_bit((PG_uptodate), (&(page)->flags)) : variable_test_bit((PG_uptodate), (&(page)->flags)));
# 210 "linux-2.6.26/include/linux/page-flags.h"
 if (ret)
  __asm__ __volatile__("": : :"memory");

 return ret;
}

static inline  __attribute__((always_inline)) void __SetPageUptodate(struct page *page)
{
 __asm__ __volatile__("": : :"memory");
 __set_bit(PG_uptodate, &(page)->flags);



}

static inline  __attribute__((always_inline)) void SetPageUptodate(struct page *page)
{
# 239 "linux-2.6.26/include/linux/page-flags.h"
 __asm__ __volatile__("": : :"memory");
 set_bit(PG_uptodate, &(page)->flags);

}

static inline  __attribute__((always_inline)) void ClearPageUptodate(struct page *page) { clear_bit(PG_uptodate, &page->flags); }

extern void cancel_dirty_page(struct page *page, unsigned int account_size);

int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline  __attribute__((always_inline)) void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
# 278 "linux-2.6.26/include/linux/page-flags.h"
static inline  __attribute__((always_inline)) int PageCompound(struct page *page) { return (__builtin_constant_p((PG_compound)) ? constant_test_bit((PG_compound), (&page->flags)) : variable_test_bit((PG_compound), (&page->flags))); }
static inline  __attribute__((always_inline)) int PageHead(struct page *page) { return (__builtin_constant_p((PG_compound)) ? constant_test_bit((PG_compound), (&page->flags)) : variable_test_bit((PG_compound), (&page->flags))); } static inline  __attribute__((always_inline)) void __SetPageHead(struct page *page) { __set_bit(PG_compound, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageHead(struct page *page) { __clear_bit(PG_compound, &page->flags); }
# 293 "linux-2.6.26/include/linux/page-flags.h"
static inline  __attribute__((always_inline)) int PageTail(struct page *page)
{
 return ((page->flags & ((1L << PG_compound) | (1L << PG_reclaim))) == ((1L << PG_compound) | (1L << PG_reclaim)));
}

static inline  __attribute__((always_inline)) void __SetPageTail(struct page *page)
{
 page->flags |= ((1L << PG_compound) | (1L << PG_reclaim));
}

static inline  __attribute__((always_inline)) void __ClearPageTail(struct page *page)
{
 page->flags &= ~((1L << PG_compound) | (1L << PG_reclaim));
}
# 212 "linux-2.6.26/include/linux/mm.h" 2
# 235 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) int put_page_testzero(struct page *page)
{
 do { } while(0);
 return atomic_dec_and_test(&page->_count);
}





static inline  __attribute__((always_inline)) int get_page_unless_zero(struct page *page)
{
 do { } while(0);
 return atomic_add_unless((&page->_count), 1, 0);
}


struct page *vmalloc_to_page(const void *addr);
unsigned long vmalloc_to_pfn(const void *addr);







static inline  __attribute__((always_inline)) int is_vmalloc_addr(const void *x)
{





 return 0;

}

static inline  __attribute__((always_inline)) struct page *compound_head(struct page *page)
{
 if (__builtin_expect(!!(PageTail(page)), 0))
  return page->first_page;
 return page;
}

static inline  __attribute__((always_inline)) int page_count(struct page *page)
{
 return ((&compound_head(page)->_count)->counter);
}

static inline  __attribute__((always_inline)) void get_page(struct page *page)
{
 page = compound_head(page);
 do { } while(0);
 atomic_inc(&page->_count);
}

static inline  __attribute__((always_inline)) struct page *virt_to_head_page(const void *x)
{
 struct page *page = (mem_map + ((__phys_addr((unsigned long)(x)) >> 12) - (0UL)));
 return compound_head(page);
}





static inline  __attribute__((always_inline)) void init_page_count(struct page *page)
{
 (((&page->_count)->counter) = (1));
}

void put_page(struct page *page);
void put_pages_list(struct list_head *pages);

void split_page(struct page *page, unsigned int order);






typedef void compound_page_dtor(struct page *);

static inline  __attribute__((always_inline)) void set_compound_page_dtor(struct page *page,
      compound_page_dtor *dtor)
{
 page[1].lru.next = (void *)dtor;
}

static inline  __attribute__((always_inline)) compound_page_dtor *get_compound_page_dtor(struct page *page)
{
 return (compound_page_dtor *)page[1].lru.next;
}

static inline  __attribute__((always_inline)) int compound_order(struct page *page)
{
 if (!PageHead(page))
  return 0;
 return (unsigned long)page[1].lru.prev;
}

static inline  __attribute__((always_inline)) void set_compound_order(struct page *page, unsigned long order)
{
 page[1].lru.prev = (void *)order;
}
# 486 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) enum zone_type page_zonenum(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0))) & ((1UL << 2) - 1);
}
# 499 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) int page_zone_id(struct page *page)
{
 return (page->flags >> ((((((sizeof(unsigned long)*8) - 0) - 0) < ((((sizeof(unsigned long)*8) - 0) - 0) - 2))? (((sizeof(unsigned long)*8) - 0) - 0) : ((((sizeof(unsigned long)*8) - 0) - 0) - 2)) * ((0 + 2) != 0))) & ((1UL << (0 + 2)) - 1);
}

static inline  __attribute__((always_inline)) int zone_to_nid(struct zone *zone)
{



 return 0;

}




static inline  __attribute__((always_inline)) int page_to_nid(struct page *page)
{
 return (page->flags >> ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0))) & ((1UL << 0) - 1);
}


static inline  __attribute__((always_inline)) struct zone *page_zone(struct page *page)
{
 return &(&global_contig_page_data[get_stack_id()])->node_zones[page_zonenum(page)];
}
# 534 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) void set_page_zone(struct page *page, enum zone_type zone)
{
 page->flags &= ~(((1UL << 2) - 1) << (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0)));
 page->flags |= (zone & ((1UL << 2) - 1)) << (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0));
}

static inline  __attribute__((always_inline)) void set_page_node(struct page *page, unsigned long node)
{
 page->flags &= ~(((1UL << 0) - 1) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0)));
 page->flags |= (node & ((1UL << 0) - 1)) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0));
}

static inline  __attribute__((always_inline)) void set_page_section(struct page *page, unsigned long section)
{
 page->flags &= ~(((1UL << 0) - 1) << (((sizeof(unsigned long)*8) - 0) * (0 != 0)));
 page->flags |= (section & ((1UL << 0) - 1)) << (((sizeof(unsigned long)*8) - 0) * (0 != 0));
}

static inline  __attribute__((always_inline)) void set_page_links(struct page *page, enum zone_type zone,
 unsigned long node, unsigned long pfn)
{
 set_page_zone(page, zone);
 set_page_node(page, node);
 set_page_section(page, ((pfn) >> 0));
}





static inline  __attribute__((always_inline)) unsigned long round_hint_to_min(unsigned long hint)
{






 return hint;
}




# 1 "linux-2.6.26/include/linux/vmstat.h" 1





# 1 "linux-2.6.26/include/linux/mm.h" 1
# 7 "linux-2.6.26/include/linux/vmstat.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 9 "linux-2.6.26/include/linux/vmstat.h" 2
# 31 "linux-2.6.26/include/linux/vmstat.h"
enum vm_event_item { PGPGIN, PGPGOUT, PSWPIN, PSWPOUT,
  PGALLOC_NORMAL , PGALLOC_MOVABLE,
  PGFREE, PGACTIVATE, PGDEACTIVATE,
  PGFAULT, PGMAJFAULT,
  PGREFILL_NORMAL , PGREFILL_MOVABLE,
  PGSTEAL_NORMAL , PGSTEAL_MOVABLE,
  PGSCAN_KSWAPD_NORMAL , PGSCAN_KSWAPD_MOVABLE,
  PGSCAN_DIRECT_NORMAL , PGSCAN_DIRECT_MOVABLE,
  PGINODESTEAL, SLABS_SCANNED, KSWAPD_STEAL, KSWAPD_INODESTEAL,
  PAGEOUTRUN, ALLOCSTALL, PGROTATED,



  NR_VM_EVENT_ITEMS
};
# 98 "linux-2.6.26/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void count_vm_event(enum vm_event_item item)
{
}
static inline  __attribute__((always_inline)) void count_vm_events(enum vm_event_item item, long delta)
{
}
static inline  __attribute__((always_inline)) void __count_vm_event(enum vm_event_item item)
{
}
static inline  __attribute__((always_inline)) void __count_vm_events(enum vm_event_item item, long delta)
{
}
static inline  __attribute__((always_inline)) void all_vm_events(unsigned long *ret)
{
}
static inline  __attribute__((always_inline)) void vm_events_fold_cpu(int cpu)
{
}
# 126 "linux-2.6.26/include/linux/vmstat.h"
typedef  atomic_long_t  _GLOBAL_101_T; extern  _GLOBAL_101_T  vm_stat [ NR_VM_ZONE_STAT_ITEMS ] ;   

static inline  __attribute__((always_inline)) void zone_page_state_add(long x, struct zone *zone,
     enum zone_stat_item item)
{
 atomic_long_add(x, &zone->vm_stat[item]);
 atomic_long_add(x, &vm_stat[item]);
}

static inline  __attribute__((always_inline)) unsigned long global_page_state(enum zone_stat_item item)
{
 long x = atomic_long_read(&vm_stat[item]);




 return x;
}

static inline  __attribute__((always_inline)) unsigned long zone_page_state(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);




 return x;
}
# 198 "linux-2.6.26/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void zap_zone_vm_stats(struct zone *zone)
{
 memset(zone->vm_stat, 0, sizeof(zone->vm_stat));
}

extern void inc_zone_state(struct zone *, enum zone_stat_item);
# 226 "linux-2.6.26/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void __mod_zone_page_state(struct zone *zone,
   enum zone_stat_item item, int delta)
{
 zone_page_state_add(delta, zone, item);
}

static inline  __attribute__((always_inline)) void __inc_zone_state(struct zone *zone, enum zone_stat_item item)
{
 atomic_long_inc(&zone->vm_stat[item]);
 atomic_long_inc(&vm_stat[item]);
}

static inline  __attribute__((always_inline)) void __inc_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 __inc_zone_state(page_zone(page), item);
}

static inline  __attribute__((always_inline)) void __dec_zone_state(struct zone *zone, enum zone_stat_item item)
{
 atomic_long_dec(&zone->vm_stat[item]);
 atomic_long_dec(&vm_stat[item]);
}

static inline  __attribute__((always_inline)) void __dec_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 __dec_zone_state(page_zone(page), item);
}
# 264 "linux-2.6.26/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void refresh_cpu_vm_stats(int cpu) { }
# 579 "linux-2.6.26/include/linux/mm.h" 2

static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *lowmem_page_address(struct page *page)
{
 return ((void *)((unsigned long)(((unsigned long)((page) - mem_map) + (0UL)) << 12)+((unsigned long)(0xffff810000000000UL))));
}
# 621 "linux-2.6.26/include/linux/mm.h"
extern struct address_space swapper_space;
static inline  __attribute__((always_inline)) struct address_space *page_mapping(struct page *page)
{
 struct address_space *mapping = page->mapping;

 do { } while(0);





 if (__builtin_expect(!!((unsigned long)mapping & 1), 0))
  mapping = ((void *)0);
 return mapping;
}

static inline  __attribute__((always_inline)) int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline  __attribute__((always_inline)) unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!(PageSwapCache(page)), 0))
  return ((page)->private);
 return page->index;
}






static inline  __attribute__((always_inline)) void reset_page_mapcount(struct page *page)
{
 (((&(page)->_mapcount)->counter) = (-1));
}

static inline  __attribute__((always_inline)) int page_mapcount(struct page *page)
{
 return ((&(page)->_mapcount)->counter) + 1;
}




static inline  __attribute__((always_inline)) int page_mapped(struct page *page)
{
 return ((&(page)->_mapcount)->counter) >= 0;
}
# 703 "linux-2.6.26/include/linux/mm.h"
extern void show_free_areas(void);




static inline  __attribute__((always_inline)) int shmem_lock(struct file *file, int lock,
        struct user_struct *user)
{
 return 0;
}

struct file *shmem_file_setup(char *name, loff_t size, unsigned long flags);

int shmem_zero_setup(struct vm_area_struct *);


extern unsigned long shmem_get_unmapped_area(struct file *file,
          unsigned long addr,
          unsigned long len,
          unsigned long pgoff,
          unsigned long flags);


extern int can_do_mlock(void);
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);




struct zap_details {
 struct vm_area_struct *nonlinear_vma;
 struct address_space *check_mapping;
 unsigned long first_index;
 unsigned long last_index;
 spinlock_t *i_mmap_lock;
 unsigned long truncate_count;
};

struct page *vm_normal_page(struct vm_area_struct *vma, unsigned long addr,
  pte_t pte);

unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
unsigned long unmap_vmas(struct mmu_gather **tlb,
  struct vm_area_struct *start_vma, unsigned long start_addr,
  unsigned long end_addr, unsigned long *nr_accounted,
  struct zap_details *);
# 762 "linux-2.6.26/include/linux/mm.h"
struct mm_walk {
 int (*pgd_entry)(pgd_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pud_entry)(pud_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pmd_entry)(pmd_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pte_entry)(pte_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pte_hole)(unsigned long, unsigned long, struct mm_walk *);
 struct mm_struct *mm;
 void *private;
};

int walk_page_range(unsigned long addr, unsigned long end,
  struct mm_walk *walk);
void free_pgd_range(struct mmu_gather **tlb, unsigned long addr,
  unsigned long end, unsigned long floor, unsigned long ceiling);
void free_pgtables(struct mmu_gather **tlb, struct vm_area_struct *start_vma,
  unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
void unmap_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen, int even_cows);

static inline  __attribute__((always_inline)) void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern int vmtruncate(struct inode * inode, loff_t offset);
extern int vmtruncate_range(struct inode * inode, loff_t offset, loff_t end);





static inline  __attribute__((always_inline)) int handle_mm_fault(struct mm_struct *mm,
   struct vm_area_struct *vma, unsigned long address,
   int write_access)
{

 do { asm volatile("ud2"); for (;;) ; } while (0);
 return 0x0002;
}


extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);

int get_user_pages(struct task_struct *tsk, struct mm_struct *mm, unsigned long start,
  int len, int write, int force, struct page **pages, struct vm_area_struct **vmas);
void print_bad_pte(struct vm_area_struct *, pte_t, unsigned long);

extern int try_to_release_page(struct page * page, gfp_t gfp_mask);
extern void do_invalidatepage(struct page *page, unsigned long offset);

int __set_page_dirty_nobuffers(struct page *page);
int __set_page_dirty_no_writeback(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
int set_page_dirty(struct page *page);
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);

extern unsigned long move_page_tables(struct vm_area_struct *vma,
  unsigned long old_addr, struct vm_area_struct *new_vma,
  unsigned long new_addr, unsigned long len);
extern unsigned long do_mremap(unsigned long addr,
          unsigned long old_len, unsigned long new_len,
          unsigned long flags, unsigned long new_addr);
extern int mprotect_fixup(struct vm_area_struct *vma,
     struct vm_area_struct **pprev, unsigned long start,
     unsigned long end, unsigned long newflags);
# 849 "linux-2.6.26/include/linux/mm.h"
struct shrinker {
 int (*shrink)(int nr_to_scan, gfp_t gfp_mask);
 int seeks;


 struct list_head list;
 long nr;
};

extern void register_shrinker(struct shrinker *);
extern void unregister_shrinker(struct shrinker *);

int vma_wants_writenotify(struct vm_area_struct *vma);

extern pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr, spinlock_t **ptl);
# 872 "linux-2.6.26/include/linux/mm.h"
int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
# 882 "linux-2.6.26/include/linux/mm.h"
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address);


int __pte_alloc(struct mm_struct *mm, pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);
# 928 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) void pgtable_page_ctor(struct page *page)
{
 do { do { *(&((page)->ptl)) = (spinlock_t) { .raw_lock = { }, }; } while (0); } while (0);
 __inc_zone_page_state(page, NR_PAGETABLE);
}

static inline  __attribute__((always_inline)) void pgtable_page_dtor(struct page *page)
{
 ((page)->mapping = ((void *)0));
 __dec_zone_page_state(page, NR_PAGETABLE);
}
# 966 "linux-2.6.26/include/linux/mm.h"
extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, pg_data_t *pgdat,
 unsigned long * zones_size, unsigned long zone_start_pfn,
 unsigned long *zholes_size);
# 1019 "linux-2.6.26/include/linux/mm.h"
extern void set_dma_reserve(unsigned long new_dma_reserve);
extern void memmap_init_zone(unsigned long, int, unsigned long,
    unsigned long, enum memmap_context);
extern void setup_per_zone_pages_min(void);
extern void mem_init(void);
extern void show_mem(void);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);




static inline  __attribute__((always_inline)) void setup_per_cpu_pageset(void) {}



void vma_prio_tree_add(struct vm_area_struct *, struct vm_area_struct *old);
void vma_prio_tree_insert(struct vm_area_struct *, struct prio_tree_root *);
void vma_prio_tree_remove(struct vm_area_struct *, struct prio_tree_root *);
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
 struct prio_tree_iter *iter);





static inline  __attribute__((always_inline)) void vma_nonlinear_insert(struct vm_area_struct *vma,
     struct list_head *list)
{
 vma->shared.vm_set.parent = ((void *)0);
 list_add_tail(&vma->shared.vm_set.list, list);
}


extern int __vm_enough_memory(struct mm_struct *mm, long pages, int cap_sys_admin);
extern void vma_adjust(struct vm_area_struct *vma, unsigned long start,
 unsigned long end, unsigned long pgoff, struct vm_area_struct *insert);
extern struct vm_area_struct *vma_merge(struct mm_struct *,
 struct vm_area_struct *prev, unsigned long addr, unsigned long end,
 unsigned long vm_flags, struct anon_vma *, struct file *, unsigned long,
 struct mempolicy *);
extern struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *);
extern int split_vma(struct mm_struct *,
 struct vm_area_struct *, unsigned long addr, int new_below);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __vma_link_rb(struct mm_struct *, struct vm_area_struct *,
 struct rb_node **, struct rb_node *);
extern void unlink_file_vma(struct vm_area_struct *);
extern struct vm_area_struct *copy_vma(struct vm_area_struct **,
 unsigned long addr, unsigned long len, unsigned long pgoff);
extern void exit_mmap(struct mm_struct *);






static inline  __attribute__((always_inline)) void added_exe_file_vma(struct mm_struct *mm)
{}

static inline  __attribute__((always_inline)) void removed_exe_file_vma(struct mm_struct *mm)
{}


extern int may_expand_vm(struct mm_struct *mm, unsigned long npages);
extern int install_special_mapping(struct mm_struct *mm,
       unsigned long addr, unsigned long len,
       unsigned long flags, struct page **pages);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long pgoff);
extern unsigned long mmap_region(struct file *file, unsigned long addr,
 unsigned long len, unsigned long flags,
 unsigned int vm_flags, unsigned long pgoff,
 int accountable);

static inline  __attribute__((always_inline)) unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + (((len)+((1UL) << 12)-1)&(~(((1UL) << 12)-1)))) < offset)
  goto out;
 if (!(offset & ~(~(((1UL) << 12)-1))))
  ret = do_mmap_pgoff(file, addr, len, prot, flag, offset >> 12);
out:
 return ret;
}

extern int do_munmap(struct mm_struct *, unsigned long, size_t);

extern unsigned long do_brk(unsigned long, unsigned long);


extern unsigned long page_unuse(struct page *);
extern void truncate_inode_pages(struct address_space *, loff_t);
extern void truncate_inode_pages_range(struct address_space *,
           loff_t lstart, loff_t lend);


extern int filemap_fault(struct vm_area_struct *, struct vm_fault *);


int write_one_page(struct page *page, int wait);





int do_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);

void page_cache_sync_readahead(struct address_space *mapping,
          struct file_ra_state *ra,
          struct file *filp,
          unsigned long offset,
          unsigned long size);

void page_cache_async_readahead(struct address_space *mapping,
    struct file_ra_state *ra,
    struct file *filp,
    struct page *pg,
    unsigned long offset,
    unsigned long size);

unsigned long max_sane_readahead(unsigned long nr);


extern int expand_stack(struct vm_area_struct *vma, unsigned long address);



extern int expand_stack_downwards(struct vm_area_struct *vma,
      unsigned long address);


extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline  __attribute__((always_inline)) struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = ((void *)0);
 return vma;
}

static inline  __attribute__((always_inline)) unsigned long vma_pages(struct vm_area_struct *vma)
{
 return (vma->vm_end - vma->vm_start) >> 12;
}

pgprot_t vm_get_page_prot(unsigned long vm_flags);
struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
   unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);
int vm_insert_pfn(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);
int vm_insert_mixed(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);

struct page *follow_page(struct vm_area_struct *, unsigned long address,
   unsigned int foll_flags);





typedef int (*pte_fn_t)(pte_t *pte, pgtable_t token, unsigned long addr,
   void *data);
extern int apply_to_page_range(struct mm_struct *mm, unsigned long address,
          unsigned long size, pte_fn_t fn, void *data);




static inline  __attribute__((always_inline)) void vm_stat_account(struct mm_struct *mm,
   unsigned long flags, struct file *file, long pages)
{
}
# 1224 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) void
kernel_map_pages(struct page *page, int numpages, int enable) {}
static inline  __attribute__((always_inline)) void enable_debug_pagealloc(void)
{
}





extern struct vm_area_struct *get_gate_vma(struct task_struct *tsk);

int in_gate_area_no_task(unsigned long addr);
int in_gate_area(struct task_struct *task, unsigned long addr);





int drop_caches_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
unsigned long shrink_slab(unsigned long scanned, gfp_t gfp_mask,
   unsigned long lru_pages);







const char * arch_vma_name(struct vm_area_struct *vma);
void print_vma_addr(char *prefix, unsigned long rip);

struct page *sparse_mem_map_populate(unsigned long pnum, int nid);
pgd_t *vmemmap_pgd_populate(unsigned long addr, int node);
pud_t *vmemmap_pud_populate(pgd_t *pgd, unsigned long addr, int node);
pmd_t *vmemmap_pmd_populate(pud_t *pud, unsigned long addr, int node);
pte_t *vmemmap_pte_populate(pmd_t *pmd, unsigned long addr, int node);
void *vmemmap_alloc_block(unsigned long size, int node);
void vmemmap_verify(pte_t *, int, unsigned long, unsigned long);
int vmemmap_populate_basepages(struct page *start_page,
      unsigned long pages, int node);
int vmemmap_populate(struct page *start_page, unsigned long pages, int node);
void vmemmap_populate_print_last(void);
# 23 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/swap.h" 1







# 1 "linux-2.6.26/include/linux/memcontrol.h" 1
# 23 "linux-2.6.26/include/linux/memcontrol.h"
struct mem_cgroup;
struct page_cgroup;
struct page;
struct mm_struct;
# 75 "linux-2.6.26/include/linux/memcontrol.h"
static inline  __attribute__((always_inline)) void page_reset_bad_cgroup(struct page *page)
{
}

static inline  __attribute__((always_inline)) struct page_cgroup *page_get_page_cgroup(struct page *page)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) int mem_cgroup_charge(struct page *page,
     struct mm_struct *mm, gfp_t gfp_mask)
{
 return 0;
}

static inline  __attribute__((always_inline)) int mem_cgroup_cache_charge(struct page *page,
     struct mm_struct *mm, gfp_t gfp_mask)
{
 return 0;
}

static inline  __attribute__((always_inline)) void mem_cgroup_uncharge_page(struct page *page)
{
}

static inline  __attribute__((always_inline)) void mem_cgroup_move_lists(struct page *page, bool active)
{
}

static inline  __attribute__((always_inline)) int mm_match_cgroup(struct mm_struct *mm, struct mem_cgroup *mem)
{
 return 1;
}

static inline  __attribute__((always_inline)) int task_in_mem_cgroup(struct task_struct *task,
         const struct mem_cgroup *mem)
{
 return 1;
}

static inline  __attribute__((always_inline)) int mem_cgroup_prepare_migration(struct page *page)
{
 return 0;
}

static inline  __attribute__((always_inline)) void mem_cgroup_end_migration(struct page *page)
{
}

static inline  __attribute__((always_inline)) void
mem_cgroup_page_migration(struct page *page, struct page *newpage)
{
}

static inline  __attribute__((always_inline)) int mem_cgroup_calc_mapped_ratio(struct mem_cgroup *mem)
{
 return 0;
}

static inline  __attribute__((always_inline)) int mem_cgroup_reclaim_imbalance(struct mem_cgroup *mem)
{
 return 0;
}

static inline  __attribute__((always_inline)) int mem_cgroup_get_reclaim_priority(struct mem_cgroup *mem)
{
 return 0;
}

static inline  __attribute__((always_inline)) void mem_cgroup_note_reclaim_priority(struct mem_cgroup *mem,
      int priority)
{
}

static inline  __attribute__((always_inline)) void mem_cgroup_record_reclaim_priority(struct mem_cgroup *mem,
      int priority)
{
}

static inline  __attribute__((always_inline)) long mem_cgroup_calc_reclaim_active(struct mem_cgroup *mem,
     struct zone *zone, int priority)
{
 return 0;
}

static inline  __attribute__((always_inline)) long mem_cgroup_calc_reclaim_inactive(struct mem_cgroup *mem,
     struct zone *zone, int priority)
{
 return 0;
}
# 9 "linux-2.6.26/include/linux/swap.h" 2
# 1 "linux-2.6.26/include/linux/sched.h" 1
# 44 "linux-2.6.26/include/linux/sched.h"
struct sched_param {
 int sched_priority;
};



# 1 "linux-2.6.26/include/linux/capability.h" 1
# 18 "linux-2.6.26/include/linux/capability.h"
struct task_struct;
# 40 "linux-2.6.26/include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;
# 72 "linux-2.6.26/include/linux/capability.h"
struct vfs_cap_data {
 __le32 magic_etc;
 struct {
  __le32 permitted;
  __le32 inheritable;
 } data[2];
};
# 95 "linux-2.6.26/include/linux/capability.h"
typedef struct kernel_cap_struct {
 __u32 cap[2];
} kernel_cap_t;
# 416 "linux-2.6.26/include/linux/capability.h"
static inline  __attribute__((always_inline)) kernel_cap_t cap_combine(const kernel_cap_t a,
           const kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] | b.cap[__capi]; } } while (0);
 return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_intersect(const kernel_cap_t a,
      const kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] & b.cap[__capi]; } } while (0);
 return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop(const kernel_cap_t a,
        const kernel_cap_t drop)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] &~ drop.cap[__capi]; } } while (0);
 return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_invert(const kernel_cap_t c)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = ~ c.cap[__capi]; } } while (0);
 return dest;
}

static inline  __attribute__((always_inline)) int cap_isclear(const kernel_cap_t a)
{
 unsigned __capi;
 for (__capi = 0; __capi < 2; ++__capi) {
  if (a.cap[__capi] != 0)
   return 0;
 }
 return 1;
}

static inline  __attribute__((always_inline)) int cap_issubset(const kernel_cap_t a, const kernel_cap_t set)
{
 kernel_cap_t dest;
 dest = cap_drop(a, set);
 return cap_isclear(dest);
}



static inline  __attribute__((always_inline)) int cap_is_fs_cap(int cap)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))), ((1 << ((32) & 31))) } });
 return !!((1 << ((cap) & 31)) & __cap_fs_set.cap[((cap) >> 5)]);
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop_fs_set(const kernel_cap_t a)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_raise_fs_set(const kernel_cap_t a,
         const kernel_cap_t permitted)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_fs_set));
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop_nfsd_set(const kernel_cap_t a)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31)))|(1 << ((24) & 31)), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_raise_nfsd_set(const kernel_cap_t a,
           const kernel_cap_t permitted)
{
 const kernel_cap_t __cap_nfsd_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31)))|(1 << ((24) & 31)), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_nfsd_set));
}

typedef  const kernel_cap_t   _GLOBAL_102_T; extern  _GLOBAL_102_T  global___cap_empty_set[NUM_STACKS];    
typedef  const kernel_cap_t   _GLOBAL_103_T; extern  _GLOBAL_103_T  global___cap_full_set[NUM_STACKS];    
typedef  const kernel_cap_t   _GLOBAL_104_T; extern  _GLOBAL_104_T  global___cap_init_eff_set[NUM_STACKS];    

kernel_cap_t cap_set_effective(const kernel_cap_t pE_new);

int capable(int cap);
int __capable(struct task_struct *t, int cap);
# 51 "linux-2.6.26/include/linux/sched.h" 2
# 66 "linux-2.6.26/include/linux/sched.h"
# 1 "linux-2.6.26/include/asm/cputime.h" 1
# 1 "linux-2.6.26/include/asm-generic/cputime.h" 1






typedef unsigned long cputime_t;
# 24 "linux-2.6.26/include/asm-generic/cputime.h"
typedef u64 cputime64_t;
# 1 "linux-2.6.26/include/asm/cputime.h" 2
# 67 "linux-2.6.26/include/linux/sched.h" 2


# 1 "linux-2.6.26/include/linux/sem.h" 1



# 1 "linux-2.6.26/include/linux/ipc.h" 1
# 9 "linux-2.6.26/include/linux/ipc.h"
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


# 1 "linux-2.6.26/include/asm/ipcbuf.h" 1
# 14 "linux-2.6.26/include/asm/ipcbuf.h"
struct ipc64_perm {
 __kernel_key_t key;
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_uid32_t cuid;
 __kernel_gid32_t cgid;
 __kernel_mode_t mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 22 "linux-2.6.26/include/linux/ipc.h" 2
# 57 "linux-2.6.26/include/linux/ipc.h"
struct ipc_kludge {
 struct msgbuf *msgp;
 long msgtyp;
};
# 88 "linux-2.6.26/include/linux/ipc.h"
struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 int id;
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
 void *security;
};
# 5 "linux-2.6.26/include/linux/sem.h" 2
# 23 "linux-2.6.26/include/linux/sem.h"
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


# 1 "linux-2.6.26/include/asm/sembuf.h" 1
# 13 "linux-2.6.26/include/asm/sembuf.h"
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 unsigned long __unused1;
 __kernel_time_t sem_ctime;
 unsigned long __unused2;
 unsigned long sem_nsems;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 36 "linux-2.6.26/include/linux/sem.h" 2


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};
# 80 "linux-2.6.26/include/linux/sem.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 81 "linux-2.6.26/include/linux/sem.h" 2

struct task_struct;


struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
 time_t sem_otime;
 time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned long sem_nsems;
};


struct sem_queue {
 struct sem_queue * next;
 struct sem_queue ** prev;
 struct task_struct* sleeper;
 struct sem_undo * undo;
 int pid;
 int status;
 struct sem_array * sma;
 int id;
 struct sembuf * sops;
 int nsops;
 int alter;
};




struct sem_undo {
 struct sem_undo * proc_next;
 struct sem_undo * id_next;
 int semid;
 short * semadj;
};




struct sem_undo_list {
 atomic_t refcnt;
 spinlock_t lock;
 struct sem_undo *proc_list;
};

struct sysv_sem {
 struct sem_undo_list *undo_list;
};







static inline  __attribute__((always_inline)) int copy_semundo(unsigned long clone_flags, struct task_struct *tsk)
{
 return 0;
}

static inline  __attribute__((always_inline)) void exit_sem(struct task_struct *tsk)
{
 return;
}
# 70 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/signal.h" 1



# 1 "linux-2.6.26/include/asm/signal.h" 1
# 10 "linux-2.6.26/include/asm/signal.h"
struct siginfo;
# 28 "linux-2.6.26/include/asm/signal.h"
typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 64)];
} sigset_t;
# 120 "linux-2.6.26/include/asm/signal.h"
# 1 "linux-2.6.26/include/asm-generic/signal.h" 1
# 17 "linux-2.6.26/include/asm-generic/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
# 121 "linux-2.6.26/include/asm/signal.h" 2
# 162 "linux-2.6.26/include/asm/signal.h"
struct sigaction {
 __sighandler_t sa_handler;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;
};



typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;
# 5 "linux-2.6.26/include/linux/signal.h" 2
# 1 "linux-2.6.26/include/asm/siginfo.h" 1







# 1 "linux-2.6.26/include/asm-generic/siginfo.h" 1






typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 40 "linux-2.6.26/include/asm-generic/siginfo.h"
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[((128 - (4 * sizeof(int))) / sizeof(int))];


  struct {
   pid_t _pid;
   uid_t _uid;
  } _kill;


  struct {
   timer_t _tid;
   int _overrun;
   char _pad[sizeof( uid_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   pid_t _pid;
   uid_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   pid_t _pid;
   uid_t _uid;
   int _status;
   clock_t _utime;
   clock_t _stime;
  } _sigchld;


  struct {
   void *_addr;



  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;
 } _sifields;
} siginfo_t;
# 251 "linux-2.6.26/include/asm-generic/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;







struct siginfo;
void do_schedule_next_timer(struct siginfo *info);





static inline  __attribute__((always_inline)) void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  memcpy(to, from, sizeof(*to));
 else

  memcpy(to, from, (4 * sizeof(int)) + sizeof(from->_sifields._sigchld));
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 9 "linux-2.6.26/include/asm/siginfo.h" 2
# 6 "linux-2.6.26/include/linux/signal.h" 2
# 14 "linux-2.6.26/include/linux/signal.h"
struct sigqueue {
 struct list_head list;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
# 38 "linux-2.6.26/include/linux/signal.h"
static inline  __attribute__((always_inline)) void sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] |= 1UL << sig;
 else
  set->sig[sig / 64] |= 1UL << (sig % 64);
}

static inline  __attribute__((always_inline)) void sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] &= ~(1UL << sig);
 else
  set->sig[sig / 64] &= ~(1UL << (sig % 64));
}

static inline  __attribute__((always_inline)) int sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  return 1 & (set->sig[0] >> sig);
 else
  return 1 & (set->sig[sig / 64] >> (sig % 64));
}

static inline  __attribute__((always_inline)) int sigfindinword(unsigned long word)
{
 return ffz(~word);
}



static inline  __attribute__((always_inline)) int sigisemptyset(sigset_t *set)
{
 extern void _NSIG_WORDS_is_unsupported_size(void);
 switch ((64 / 64)) {
 case 4:
  return (set->sig[3] | set->sig[2] |
   set->sig[1] | set->sig[0]) == 0;
 case 2:
  return (set->sig[1] | set->sig[0]) == 0;
 case 1:
  return set->sig[0] == 0;
 default:
  _NSIG_WORDS_is_unsupported_size();
  return 0;
 }
}
# 119 "linux-2.6.26/include/linux/signal.h"
static inline  __attribute__((always_inline)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 149 "linux-2.6.26/include/linux/signal.h"
static inline  __attribute__((always_inline)) void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((64 / 64)) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline  __attribute__((always_inline)) void sigemptyset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, 0, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline  __attribute__((always_inline)) void sigfillset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, -1, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline  __attribute__((always_inline)) void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline  __attribute__((always_inline)) void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline  __attribute__((always_inline)) int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline  __attribute__((always_inline)) void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], 0, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline  __attribute__((always_inline)) void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], -1, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline  __attribute__((always_inline)) void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 INIT_LIST_HEAD(&sig->list);
}

extern void flush_sigqueue(struct sigpending *queue);


static inline  __attribute__((always_inline)) int valid_signal(unsigned long sig)
{
 return sig <= 64 ? 1 : 0;
}

extern int next_signal(struct sigpending *pending, sigset_t *mask);
extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern long do_sigpending(void *, unsigned long);
extern int sigprocmask(int, sigset_t *, sigset_t *);
typedef  int  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_show_unhandled_signals[NUM_STACKS];   

struct pt_regs;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
extern void exit_signals(struct task_struct *tsk);

extern struct kmem_cache *sighand_cachep;

int unhandled_signal(struct task_struct *tsk, int sig);
# 373 "linux-2.6.26/include/linux/signal.h"
void signals_init(void);
# 71 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/fs_struct.h" 1



# 1 "linux-2.6.26/include/linux/path.h" 1



struct dentry;
struct vfsmount;

struct path {
 struct vfsmount *mnt;
 struct dentry *dentry;
};

extern void path_get(struct path *);
extern void path_put(struct path *);
# 5 "linux-2.6.26/include/linux/fs_struct.h" 2

struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct path root, pwd, altroot;
};







extern struct kmem_cache *fs_cachep;

extern void exit_fs(struct task_struct *);
extern void set_fs_altroot(void);
extern void set_fs_root(struct fs_struct *, struct path *);
extern void set_fs_pwd(struct fs_struct *, struct path *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);
# 72 "linux-2.6.26/include/linux/sched.h" 2


# 1 "linux-2.6.26/include/linux/pid.h" 1



# 1 "linux-2.6.26/include/linux/rcupdate.h" 1
# 49 "linux-2.6.26/include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};


# 1 "linux-2.6.26/include/linux/rcuclassic.h" 1
# 45 "linux-2.6.26/include/linux/rcuclassic.h"
struct rcu_ctrlblk {
 long cur;
 long completed;
 int next_pending;

 int signaled;

 spinlock_t lock ;
 cpumask_t cpumask;

} ;


static inline  __attribute__((always_inline)) int rcu_batch_before(long a, long b)
{
 return (a - b) < 0;
}


static inline  __attribute__((always_inline)) int rcu_batch_after(long a, long b)
{
 return (a - b) > 0;
}






struct rcu_data {

 long quiescbatch;
 int passed_quiesc;
 int qs_pending;


 long batch;
 struct rcu_head *nxtlist;
 struct rcu_head **nxttail;
 long qlen;
 struct rcu_head *curlist;
 struct rcu_head **curtail;
 struct rcu_head *donelist;
 struct rcu_head **donetail;
 long blimit;
 int cpu;
 struct rcu_head barrier;
};

typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_per_cpu__rcu_data[NUM_STACKS];    
typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_107_T; extern  _GLOBAL_107_T  global_per_cpu__rcu_bh_data[NUM_STACKS];    







static inline  __attribute__((always_inline)) void rcu_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &global_per_cpu__rcu_data[get_stack_id()]));
 rdp->passed_quiesc = 1;
}
static inline  __attribute__((always_inline)) void rcu_bh_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &global_per_cpu__rcu_bh_data[get_stack_id()]));
 rdp->passed_quiesc = 1;
}

extern int rcu_pending(int cpu);
extern int rcu_needs_cpu(int cpu);
# 154 "linux-2.6.26/include/linux/rcuclassic.h"
extern void __rcu_init(void);
extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);

extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);
# 56 "linux-2.6.26/include/linux/rcupdate.h" 2
# 200 "linux-2.6.26/include/linux/rcupdate.h"
extern void call_rcu(struct rcu_head *head,
         void (*func)(struct rcu_head *head));
# 221 "linux-2.6.26/include/linux/rcupdate.h"
extern void call_rcu_bh(struct rcu_head *head,
   void (*func)(struct rcu_head *head));


extern void synchronize_rcu(void);
extern void rcu_barrier(void);
extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);


extern void rcu_init(void);
extern int rcu_needs_cpu(int cpu);
# 5 "linux-2.6.26/include/linux/pid.h" 2

enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};
# 50 "linux-2.6.26/include/linux/pid.h"
struct upid {

 int nr;
 struct pid_namespace *ns;
 struct hlist_node pid_chain;
};

struct pid
{
 atomic_t count;

 struct hlist_head tasks[PIDTYPE_MAX];
 struct rcu_head rcu;
 unsigned int level;
 struct upid numbers[1];
};

typedef  struct pid   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_init_struct_pid[NUM_STACKS];    

struct pid_link
{
 struct hlist_node node;
 struct pid *pid;
};

static inline  __attribute__((always_inline)) struct pid *get_pid(struct pid *pid)
{
 if (pid)
  atomic_inc(&pid->count);
 return pid;
}

extern void put_pid(struct pid *pid);
extern struct task_struct *pid_task(struct pid *pid, enum pid_type);
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type);

extern struct pid *get_task_pid(struct task_struct *task, enum pid_type type);





extern void attach_pid(struct task_struct *task, enum pid_type type,
   struct pid *pid);
extern void detach_pid(struct task_struct *task, enum pid_type);
extern void change_pid(struct task_struct *task, enum pid_type,
   struct pid *pid);
extern void transfer_pid(struct task_struct *old, struct task_struct *new,
    enum pid_type);

struct pid_namespace;
extern struct pid_namespace init_pid_ns;
# 113 "linux-2.6.26/include/linux/pid.h"
extern struct pid *find_pid_ns(int nr, struct pid_namespace *ns);
extern struct pid *find_vpid(int nr);
extern struct pid *find_pid(int nr);




extern struct pid *find_get_pid(int nr);
extern struct pid *find_ge_pid(int nr, struct pid_namespace *);
int next_pidmap(struct pid_namespace *pid_ns, int last);

extern struct pid *alloc_pid(struct pid_namespace *ns);
extern void free_pid(struct pid *pid);
# 138 "linux-2.6.26/include/linux/pid.h"
static inline  __attribute__((always_inline)) pid_t pid_nr(struct pid *pid)
{
 pid_t nr = 0;
 if (pid)
  nr = pid->numbers[0].nr;
 return nr;
}

pid_t pid_nr_ns(struct pid *pid, struct pid_namespace *ns);
pid_t pid_vnr(struct pid *pid);
# 75 "linux-2.6.26/include/linux/sched.h" 2


# 1 "linux-2.6.26/include/linux/proportions.h" 1
# 12 "linux-2.6.26/include/linux/proportions.h"
# 1 "linux-2.6.26/include/linux/percpu_counter.h" 1
# 78 "linux-2.6.26/include/linux/percpu_counter.h"
struct percpu_counter {
 s64 count;
};

static inline  __attribute__((always_inline)) int percpu_counter_init(struct percpu_counter *fbc, s64 amount)
{
 fbc->count = amount;
 return 0;
}



static inline  __attribute__((always_inline)) void percpu_counter_destroy(struct percpu_counter *fbc)
{
}

static inline  __attribute__((always_inline)) void percpu_counter_set(struct percpu_counter *fbc, s64 amount)
{
 fbc->count = amount;
}




static inline  __attribute__((always_inline)) void
percpu_counter_add(struct percpu_counter *fbc, s64 amount)
{
 do { } while (0);
 fbc->count += amount;
 do { } while (0);
}

static inline  __attribute__((always_inline)) s64 percpu_counter_read(struct percpu_counter *fbc)
{
 return fbc->count;
}

static inline  __attribute__((always_inline)) s64 percpu_counter_read_positive(struct percpu_counter *fbc)
{
 return fbc->count;
}

static inline  __attribute__((always_inline)) s64 percpu_counter_sum_positive(struct percpu_counter *fbc)
{
 return percpu_counter_read_positive(fbc);
}

static inline  __attribute__((always_inline)) s64 percpu_counter_sum(struct percpu_counter *fbc)
{
 return percpu_counter_read(fbc);
}



static inline  __attribute__((always_inline)) void percpu_counter_inc(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, 1);
}

static inline  __attribute__((always_inline)) void percpu_counter_dec(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, -1);
}

static inline  __attribute__((always_inline)) void percpu_counter_sub(struct percpu_counter *fbc, s64 amount)
{
 percpu_counter_add(fbc, -amount);
}
# 13 "linux-2.6.26/include/linux/proportions.h" 2



struct prop_global {





 int shift;






 struct percpu_counter events;
};






struct prop_descriptor {
 int index;
 struct prop_global pg[2];
 struct mutex mutex;
};

int prop_descriptor_init(struct prop_descriptor *pd, int shift);
void prop_change_shift(struct prop_descriptor *pd, int new_shift);





struct prop_local_percpu {



 struct percpu_counter events;




 int shift;
 unsigned long period;
 spinlock_t lock;
};

int prop_local_init_percpu(struct prop_local_percpu *pl);
void prop_local_destroy_percpu(struct prop_local_percpu *pl);
void __prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl);
void prop_fraction_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl,
  long *numerator, long *denominator);

static inline 
__attribute__((always_inline)) void prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl)
{
 unsigned long flags;

 (void)(flags);
 __prop_inc_percpu(pd, pl);
 (void)(flags);
}
# 89 "linux-2.6.26/include/linux/proportions.h"
void __prop_inc_percpu_max(struct prop_descriptor *pd,
      struct prop_local_percpu *pl, long frac);






struct prop_local_single {



 unsigned long events;





 int shift;
 unsigned long period;
 spinlock_t lock;
};





int prop_local_init_single(struct prop_local_single *pl);
void prop_local_destroy_single(struct prop_local_single *pl);
void __prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl);
void prop_fraction_single(struct prop_descriptor *pd, struct prop_local_single *pl,
  long *numerator, long *denominator);

static inline 
__attribute__((always_inline)) void prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl)
{
 unsigned long flags;

 (void)(flags);
 __prop_inc_single(pd, pl);
 (void)(flags);
}
# 78 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/seccomp.h" 1
# 24 "linux-2.6.26/include/linux/seccomp.h"
typedef struct { } seccomp_t;



static inline  __attribute__((always_inline)) long prctl_get_seccomp(void)
{
 return -22;
}

static inline  __attribute__((always_inline)) long prctl_set_seccomp(unsigned long arg2)
{
 return -22;
}
# 79 "linux-2.6.26/include/linux/sched.h" 2

# 1 "linux-2.6.26/include/linux/rtmutex.h" 1
# 16 "linux-2.6.26/include/linux/rtmutex.h"
# 1 "linux-2.6.26/include/linux/plist.h" 1
# 80 "linux-2.6.26/include/linux/plist.h"
struct plist_head {
 struct list_head prio_list;
 struct list_head node_list;



};

struct plist_node {
 int prio;
 struct plist_head plist;
};
# 127 "linux-2.6.26/include/linux/plist.h"
static inline  __attribute__((always_inline)) void
plist_head_init(struct plist_head *head, spinlock_t *lock)
{
 INIT_LIST_HEAD(&head->prio_list);
 INIT_LIST_HEAD(&head->node_list);



}






static inline  __attribute__((always_inline)) void plist_node_init(struct plist_node *node, int prio)
{
 node->prio = prio;
 plist_head_init(&node->plist, ((void *)0));
}

extern void plist_add(struct plist_node *node, struct plist_head *head);
extern void plist_del(struct plist_node *node, struct plist_head *head);
# 195 "linux-2.6.26/include/linux/plist.h"
static inline  __attribute__((always_inline)) int plist_head_empty(const struct plist_head *head)
{
 return list_empty(&head->node_list);
}





static inline  __attribute__((always_inline)) int plist_node_empty(const struct plist_node *node)
{
 return plist_head_empty(&node->plist);
}
# 234 "linux-2.6.26/include/linux/plist.h"
static inline  __attribute__((always_inline)) struct plist_node* plist_first(const struct plist_head *head)
{
 return ({ const typeof( ((struct plist_node *)0)->plist.node_list ) *__mptr = (head->node_list.next); (struct plist_node *)( (char *)__mptr - __builtin_offsetof(struct plist_node,plist.node_list) );})
                                        ;
}
# 17 "linux-2.6.26/include/linux/rtmutex.h" 2
# 26 "linux-2.6.26/include/linux/rtmutex.h"
struct rt_mutex {
 spinlock_t wait_lock;
 struct plist_head wait_list;
 struct task_struct *owner;






};

struct rt_mutex_waiter;
struct hrtimer_sleeper;






 static inline  __attribute__((always_inline)) int rt_mutex_debug_check_no_locks_freed(const void *from,
             unsigned long len)
 {
 return 0;
 }
# 80 "linux-2.6.26/include/linux/rtmutex.h"
static inline  __attribute__((always_inline)) int rt_mutex_is_locked(struct rt_mutex *lock)
{
 return lock->owner != ((void *)0);
}

extern void __rt_mutex_init(struct rt_mutex *lock, const char *name);
extern void rt_mutex_destroy(struct rt_mutex *lock);

extern void rt_mutex_lock(struct rt_mutex *lock);
extern int rt_mutex_lock_interruptible(struct rt_mutex *lock,
      int detect_deadlock);
extern int rt_mutex_timed_lock(struct rt_mutex *lock,
     struct hrtimer_sleeper *timeout,
     int detect_deadlock);

extern int rt_mutex_trylock(struct rt_mutex *lock);

extern void rt_mutex_unlock(struct rt_mutex *lock);
# 81 "linux-2.6.26/include/linux/sched.h" 2


# 1 "linux-2.6.26/include/linux/param.h" 1
# 84 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/resource.h" 1





struct task_struct;
# 24 "linux-2.6.26/include/linux/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};
# 71 "linux-2.6.26/include/linux/resource.h"
# 1 "linux-2.6.26/include/asm/resource.h" 1
# 1 "linux-2.6.26/include/asm-generic/resource.h" 1
# 1 "linux-2.6.26/include/asm/resource.h" 2
# 72 "linux-2.6.26/include/linux/resource.h" 2

int getrusage(struct task_struct *p, int who, struct rusage *ru);
# 85 "linux-2.6.26/include/linux/sched.h" 2

# 1 "linux-2.6.26/include/linux/hrtimer.h" 1
# 24 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer_clock_base;
struct hrtimer_cpu_base;




enum hrtimer_mode {
 HRTIMER_MODE_ABS,
 HRTIMER_MODE_REL,
};




enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};
# 53 "linux-2.6.26/include/linux/hrtimer.h"
enum hrtimer_cb_mode {
 HRTIMER_CB_SOFTIRQ,
 HRTIMER_CB_IRQSAFE,
 HRTIMER_CB_IRQSAFE_NO_RESTART,
 HRTIMER_CB_IRQSAFE_NO_SOFTIRQ,
};
# 112 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer {
 struct rb_node node;
 ktime_t expires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;
 enum hrtimer_cb_mode cb_mode;
 struct list_head cb_entry;





};
# 134 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 153 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 clockid_t index;
 struct rb_root active;
 struct rb_node *first;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t (*get_softirq_time)(void);
 ktime_t softirq_time;






};
# 189 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer_cpu_base {
 spinlock_t lock;
 struct hrtimer_clock_base clock_base[2];
 struct list_head cb_pending;





};
# 241 "linux-2.6.26/include/linux/hrtimer.h"
static inline  __attribute__((always_inline)) void clock_was_set(void) { }

static inline  __attribute__((always_inline)) void hres_timers_resume(void) { }





static inline  __attribute__((always_inline)) ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
{
 return timer->base->softirq_time;
}

static inline  __attribute__((always_inline)) int hrtimer_is_hres_active(struct hrtimer *timer)
{
 return 0;
}


extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);




extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);







static inline  __attribute__((always_inline)) void hrtimer_init_on_stack(struct hrtimer *timer,
      clockid_t which_clock,
      enum hrtimer_mode mode)
{
 hrtimer_init(timer, which_clock, mode);
}
static inline  __attribute__((always_inline)) void destroy_hrtimer_on_stack(struct hrtimer *timer) { }



extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);

static inline  __attribute__((always_inline)) int hrtimer_restart(struct hrtimer *timer)
{
 return hrtimer_start(timer, timer->expires, HRTIMER_MODE_ABS);
}


extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);

extern ktime_t hrtimer_get_next_event(void);





static inline  __attribute__((always_inline)) int hrtimer_active(const struct hrtimer *timer)
{
 return timer->state != 0x00;
}




static inline  __attribute__((always_inline)) int hrtimer_is_queued(struct hrtimer *timer)
{
 return timer->state &
  (0x01 | 0x04);
}





static inline  __attribute__((always_inline)) int hrtimer_callback_running(struct hrtimer *timer)
{
 return timer->state & 0x02;
}


extern u64
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


static inline  __attribute__((always_inline)) u64 hrtimer_forward_now(struct hrtimer *timer,
          ktime_t interval)
{
 return hrtimer_forward(timer, timer->base->get_time(), interval);
}


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);
extern long hrtimer_nanosleep_restart(struct restart_block *restart_block);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);


extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);


extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) hrtimers_init(void);
# 363 "linux-2.6.26/include/linux/hrtimer.h"
extern void sysrq_timer_list_show(void);
# 393 "linux-2.6.26/include/linux/hrtimer.h"
static inline  __attribute__((always_inline)) void timer_stats_account_hrtimer(struct hrtimer *timer)
{
}

static inline  __attribute__((always_inline)) void timer_stats_hrtimer_set_start_info(struct hrtimer *timer)
{
}

static inline  __attribute__((always_inline)) void timer_stats_hrtimer_clear_start_info(struct hrtimer *timer)
{
}
# 87 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/task_io_accounting.h" 1
# 35 "linux-2.6.26/include/linux/task_io_accounting.h"
struct task_io_accounting {
};
# 88 "linux-2.6.26/include/linux/sched.h" 2

# 1 "linux-2.6.26/include/linux/latencytop.h" 1
# 33 "linux-2.6.26/include/linux/latencytop.h"
static inline  __attribute__((always_inline)) void
account_scheduler_latency(struct task_struct *task, int usecs, int inter)
{
}

static inline  __attribute__((always_inline)) void clear_all_latency_tracing(struct task_struct *p)
{
}
# 90 "linux-2.6.26/include/linux/sched.h" 2



struct mem_cgroup;
struct exec_domain;
struct futex_pi_state;
struct robust_list_head;
struct bio;
# 115 "linux-2.6.26/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_109_T; extern  _GLOBAL_109_T  _GLOBAL_0_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_1_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_2_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_3_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_4_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_5_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_6_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_7_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_8_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_9_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_10_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_11_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_12_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_13_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_14_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_15_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_16_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_17_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_18_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_19_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_20_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_21_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_22_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_23_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_24_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_25_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_26_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_27_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_28_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_29_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_30_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_31_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_32_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_33_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_34_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_35_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_36_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_37_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_38_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_39_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_40_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_41_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_42_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_43_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_44_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_45_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_46_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_47_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_48_avenrun_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_49_avenrun_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_avenrun_I) *_GLOBAL_avenrun_12_A[NUM_STACKS];   
# 129 "linux-2.6.26/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_total_forks[NUM_STACKS];    
typedef  int  _GLOBAL_111_T; extern  _GLOBAL_111_T  global_nr_threads[NUM_STACKS];   
typedef  __typeof__ ( unsigned long  )   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_per_cpu__process_counts[NUM_STACKS];    
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_active(void);
extern unsigned long nr_iowait(void);
extern unsigned long weighted_cpuload(const int cpu);

struct seq_file;
struct cfs_rq;
struct task_group;






static inline  __attribute__((always_inline)) void
proc_sched_show_task(struct task_struct *p, struct seq_file *m)
{
}
static inline  __attribute__((always_inline)) void proc_sched_set_task(struct task_struct *p)
{
}
static inline  __attribute__((always_inline)) void
print_cfs_rq(struct seq_file *m, int cpu, struct cfs_rq *cfs_rq)
{
}


typedef  unsigned long long    _GLOBAL_113_T; extern  _GLOBAL_113_T  global_time_sync_thresh[NUM_STACKS];     
# 238 "linux-2.6.26/include/linux/sched.h"
typedef  rwlock_t  _GLOBAL_114_T; extern  _GLOBAL_114_T  global_tasklist_lock[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_mmlist_lock[NUM_STACKS];   

struct task_struct;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void schedule_tail(struct task_struct *prev);
extern void init_idle(struct task_struct *idle, int cpu);
extern void init_idle_bootup_task(struct task_struct *idle);

typedef  cpumask_t  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_nohz_cpu_mask[NUM_STACKS];   



static inline  __attribute__((always_inline)) int select_nohz_load_balancer(int cpu)
{
 return 0;
}


extern unsigned long rt_needs_cpu(int cpu);




extern void show_state_filter(unsigned long state_filter);

static inline  __attribute__((always_inline)) void show_state(void)
{
 show_state_filter(0);
}

extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void account_process_tick(struct task_struct *task, int user);
extern void update_process_times(int user);
extern void scheduler_tick(void);
extern void hrtick_resched(void);

extern void sched_show_task(struct task_struct *p);
# 302 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) void softlockup_tick(void)
{
}
static inline  __attribute__((always_inline)) void spawn_softlockup_task(void)
{
}
static inline  __attribute__((always_inline)) void touch_softlockup_watchdog(void)
{
}
static inline  __attribute__((always_inline)) void touch_all_softlockup_watchdogs(void)
{
}







extern char __sched_text_start[], __sched_text_end[];


extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_killable(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
 void schedule(void);

struct nsproxy;
struct user_namespace;




typedef  int  _GLOBAL_117_T; extern  _GLOBAL_117_T  global_sysctl_max_map_count[NUM_STACKS];   

# 1 "linux-2.6.26/include/linux/aio.h" 1





# 1 "linux-2.6.26/include/linux/aio_abi.h" 1
# 32 "linux-2.6.26/include/linux/aio_abi.h"
typedef unsigned long aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
 IOCB_CMD_PREADV = 7,
 IOCB_CMD_PWRITEV = 8,
};
# 57 "linux-2.6.26/include/linux/aio_abi.h"
struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
# 78 "linux-2.6.26/include/linux/aio_abi.h"
struct iocb {

 __u64 aio_data;
 __u32 aio_key, aio_reserved1;



 __u16 aio_lio_opcode;
 __s16 aio_reqprio;
 __u32 aio_fildes;

 __u64 aio_buf;
 __u64 aio_nbytes;
 __s64 aio_offset;


 __u64 aio_reserved2;


 __u32 aio_flags;





 __u32 aio_resfd;
};
# 7 "linux-2.6.26/include/linux/aio.h" 2
# 1 "linux-2.6.26/include/linux/uio.h" 1
# 16 "linux-2.6.26/include/linux/uio.h"
struct iovec
{
 void *iov_base;
 __kernel_size_t iov_len;
};



struct kvec {
 void *iov_base;
 size_t iov_len;
};
# 45 "linux-2.6.26/include/linux/uio.h"
static inline  __attribute__((always_inline)) size_t iov_length(const struct iovec *iov, unsigned long nr_segs)
{
 unsigned long seg;
 size_t ret = 0;

 for (seg = 0; seg < nr_segs; seg++)
  ret += iov[seg].iov_len;
 return ret;
}

unsigned long iov_shorten(struct iovec *iov, unsigned long nr_segs, size_t to);
# 8 "linux-2.6.26/include/linux/aio.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 10 "linux-2.6.26/include/linux/aio.h" 2





struct kioctx;
# 87 "linux-2.6.26/include/linux/aio.h"
struct kiocb {
 struct list_head ki_run_list;
 unsigned long ki_flags;
 int ki_users;
 unsigned ki_key;

 struct file *ki_filp;
 struct kioctx *ki_ctx;
 int (*ki_cancel)(struct kiocb *, struct io_event *);
 ssize_t (*ki_retry)(struct kiocb *);
 void (*ki_dtor)(struct kiocb *);

 union {
  void *user;
  struct task_struct *tsk;
 } ki_obj;

 __u64 ki_user_data;
 wait_queue_t ki_wait;
 loff_t ki_pos;

 void *private;

 unsigned short ki_opcode;
 size_t ki_nbytes;
 char *ki_buf;
 size_t ki_left;
 struct iovec ki_inline_vec;
  struct iovec *ki_iovec;
  unsigned long ki_nr_segs;
  unsigned long ki_cur_seg;

 struct list_head ki_list;






 struct file *ki_eventfd;
};
# 149 "linux-2.6.26/include/linux/aio.h"
struct aio_ring {
 unsigned id;
 unsigned nr;
 unsigned head;
 unsigned tail;

 unsigned magic;
 unsigned compat_features;
 unsigned incompat_features;
 unsigned header_length;


 struct io_event io_events[0];
};




struct aio_ring_info {
 unsigned long mmap_base;
 unsigned long mmap_size;

 struct page **ring_pages;
 spinlock_t ring_lock;
 long nr_pages;

 unsigned nr, tail;

 struct page *internal_pages[8];
};

struct kioctx {
 atomic_t users;
 int dead;
 struct mm_struct *mm;


 unsigned long user_id;
 struct kioctx *next;

 wait_queue_head_t wait;

 spinlock_t ctx_lock;

 int reqs_active;
 struct list_head active_reqs;
 struct list_head run_list;


 unsigned max_reqs;

 struct aio_ring_info ring_info;

 struct delayed_work wq;
};


typedef  unsigned  _GLOBAL_118_T; extern  _GLOBAL_118_T  global_aio_max_size[NUM_STACKS];   

extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb);
extern int aio_put_req(struct kiocb *iocb);
extern void kick_iocb(struct kiocb *iocb);
extern int aio_complete(struct kiocb *iocb, long res, long res2);
struct mm_struct;
extern void exit_aio(struct mm_struct *mm);





static inline  __attribute__((always_inline)) struct kiocb *list_kiocb(struct list_head *h)
{
 return ({ const typeof( ((struct kiocb *)0)->ki_list ) *__mptr = (h); (struct kiocb *)( (char *)__mptr - __builtin_offsetof(struct kiocb,ki_list) );});
}


typedef  unsigned long   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_aio_nr[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_aio_max_nr[NUM_STACKS];    
# 342 "linux-2.6.26/include/linux/sched.h" 2

extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);
extern void arch_unmap_area(struct mm_struct *, unsigned long);
extern void arch_unmap_area_topdown(struct mm_struct *, unsigned long);
# 389 "linux-2.6.26/include/linux/sched.h"
extern void set_dumpable(struct mm_struct *mm, int value);
extern int get_dumpable(struct mm_struct *mm);
# 411 "linux-2.6.26/include/linux/sched.h"
struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
 wait_queue_head_t signalfd_wqh;
};

struct pacct_struct {
 int ac_flag;
 long ac_exitcode;
 unsigned long ac_mem;
 cputime_t ac_utime, ac_stime;
 unsigned long ac_minflt, ac_majflt;
};
# 433 "linux-2.6.26/include/linux/sched.h"
struct signal_struct {
 atomic_t count;
 atomic_t live;

 wait_queue_head_t wait_chldexit;


 struct task_struct *curr_target;


 struct sigpending shared_pending;


 int group_exit_code;





 struct task_struct *group_exit_task;
 int notify_count;


 int group_stop_count;
 unsigned int flags;


 struct list_head posix_timers;


 struct hrtimer real_timer;
 struct pid *leader_pid;
 ktime_t it_real_incr;


 cputime_t it_prof_expires, it_virt_expires;
 cputime_t it_prof_incr, it_virt_incr;
# 478 "linux-2.6.26/include/linux/sched.h"
 union {
  pid_t pgrp ;
  pid_t __pgrp;
 };

 struct pid *tty_old_pgrp;

 union {
  pid_t session ;
  pid_t __session;
 };


 int leader;

 struct tty_struct *tty;







 cputime_t utime, stime, cutime, cstime;
 cputime_t gtime;
 cputime_t cgtime;
 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;
 unsigned long inblock, oublock, cinblock, coublock;







 unsigned long long sum_sched_runtime;
# 525 "linux-2.6.26/include/linux/sched.h"
 struct rlimit rlim[16];

 struct list_head cpu_timers[3];
# 545 "linux-2.6.26/include/linux/sched.h"
};
# 569 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int signal_group_exit(const struct signal_struct *sig)
{
 return (sig->flags & 0x00000008) ||
  (sig->group_exit_task != ((void *)0));
}




struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;
# 591 "linux-2.6.26/include/linux/sched.h"
 unsigned long locked_shm;







 struct hlist_node uidhash_node;
 uid_t uid;
# 609 "linux-2.6.26/include/linux/sched.h"
};

extern int uids_sysfs_init(void);

extern struct user_struct *find_user(uid_t);

typedef  struct user_struct   _GLOBAL_121_T; extern  _GLOBAL_121_T  global_root_user[NUM_STACKS];    


struct backing_dev_info;
struct reclaim_state;
# 672 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int sched_info_on(void)
{






 return 0;

}

enum cpu_idle_type {
 CPU_IDLE,
 CPU_NOT_IDLE,
 CPU_NEWLY_IDLE,
 CPU_MAX_IDLE_TYPES
};
# 832 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int above_background_load(void)
{
 unsigned long cpu;

 for (((cpu)) = 0; ((cpu)) < 1; ((cpu))++, (void)global_cpu_online_map[get_stack_id()]) {
  if (weighted_cpuload(cpu) >= (1L << 10))
   return 1;
 }
 return 0;
}

struct io_context;


struct group_info {
 int ngroups;
 atomic_t usage;
 gid_t small_block[32];
 int nblocks;
 gid_t *blocks[0];
};
# 869 "linux-2.6.26/include/linux/sched.h"
extern struct group_info *groups_alloc(int gidsetsize);
extern void groups_free(struct group_info *group_info);
extern int set_current_groups(struct group_info *group_info);
extern int groups_search(struct group_info *group_info, gid_t grp);







static inline  __attribute__((always_inline)) void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;
struct pipe_inode_info;
struct uts_namespace;

struct rq;
struct sched_domain;

struct sched_class {
 const struct sched_class *next;

 void (*enqueue_task) (struct rq *rq, struct task_struct *p, int wakeup);
 void (*dequeue_task) (struct rq *rq, struct task_struct *p, int sleep);
 void (*yield_task) (struct rq *rq);
 int (*select_task_rq)(struct task_struct *p, int sync);

 void (*check_preempt_curr) (struct rq *rq, struct task_struct *p);

 struct task_struct * (*pick_next_task) (struct rq *rq);
 void (*put_prev_task) (struct rq *rq, struct task_struct *p);
# 918 "linux-2.6.26/include/linux/sched.h"
 void (*set_curr_task) (struct rq *rq);
 void (*task_tick) (struct rq *rq, struct task_struct *p, int queued);
 void (*task_new) (struct rq *rq, struct task_struct *p);
 void (*set_cpus_allowed)(struct task_struct *p,
     const cpumask_t *newmask);

 void (*join_domain)(struct rq *rq);
 void (*leave_domain)(struct rq *rq);

 void (*switched_from) (struct rq *this_rq, struct task_struct *task,
          int running);
 void (*switched_to) (struct rq *this_rq, struct task_struct *task,
        int running);
 void (*prio_changed) (struct rq *this_rq, struct task_struct *task,
        int oldprio, int running);




};

struct load_weight {
 unsigned long weight, inv_weight;
};
# 953 "linux-2.6.26/include/linux/sched.h"
struct sched_entity {
 struct load_weight load;
 struct rb_node run_node;
 struct list_head group_node;
 unsigned int on_rq;

 u64 exec_start;
 u64 sum_exec_runtime;
 u64 vruntime;
 u64 prev_sum_exec_runtime;

 u64 last_wakeup;
 u64 avg_overlap;
# 1008 "linux-2.6.26/include/linux/sched.h"
};

struct sched_rt_entity {
 struct list_head run_list;
 unsigned int time_slice;
 unsigned long timeout;
 int nr_cpus_allowed;

 struct sched_rt_entity *back;







};

struct task_struct {
 volatile long state;
 void *stack;
 atomic_t usage;
 unsigned int flags;
 unsigned int ptrace;

 int lock_depth;







 int prio, static_prio, normal_prio;
 const struct sched_class *sched_class;
 struct sched_entity se;
 struct sched_rt_entity rt;
# 1059 "linux-2.6.26/include/linux/sched.h"
 unsigned char fpu_counter;
 s8 oomkilladj;




 unsigned int policy;
 cpumask_t cpus_allowed;
# 1077 "linux-2.6.26/include/linux/sched.h"
 struct list_head tasks;




 struct list_head ptrace_children;
 struct list_head ptrace_list;

 struct mm_struct *mm, *active_mm;


 struct linux_binfmt *binfmt;
 int exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned int personality;
 unsigned did_exec:1;
 pid_t pid;
 pid_t tgid;
# 1107 "linux-2.6.26/include/linux/sched.h"
 struct task_struct *real_parent;
 struct task_struct *parent;




 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;


 struct pid_link pids[PIDTYPE_MAX];
 struct list_head thread_group;

 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 unsigned int rt_priority;
 cputime_t utime, stime, utimescaled, stimescaled;
 cputime_t gtime;
 cputime_t prev_utime, prev_stime;
 unsigned long nvcsw, nivcsw;
 struct timespec start_time;
 struct timespec real_start_time;

 unsigned long min_flt, maj_flt;

   cputime_t it_prof_expires, it_virt_expires;
 unsigned long long it_sched_expires;
 struct list_head cpu_timers[3];


 uid_t uid,euid,suid,fsuid;
 gid_t gid,egid,sgid,fsgid;
 struct group_info *group_info;
 kernel_cap_t cap_effective, cap_inheritable, cap_permitted, cap_bset;
 unsigned securebits;
 struct user_struct *user;





 char comm[16];




 int link_count, total_link_count;
# 1167 "linux-2.6.26/include/linux/sched.h"
 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct nsproxy *nsproxy;

 struct signal_struct *signal;
 struct sighand_struct *sighand;

 sigset_t blocked, real_blocked;
 sigset_t saved_sigmask;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;



 struct audit_context *audit_context;




 seccomp_t seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;


 spinlock_t pi_lock;
# 1241 "linux-2.6.26/include/linux/sched.h"
 void *journal_info;


 struct bio *bio_list, **bio_tail;


 struct reclaim_state *reclaim_state;

 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;




 struct task_io_accounting ioac;
# 1288 "linux-2.6.26/include/linux/sched.h"
 atomic_t fs_excl;
 struct rcu_head rcu;




 struct pipe_inode_info *splice_pipe;






 struct prop_local_single dirties;




};
# 1327 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int rt_prio(int prio)
{
 if (__builtin_expect(!!(prio < 100), 0))
  return 1;
 return 0;
}

static inline  __attribute__((always_inline)) int rt_task(struct task_struct *p)
{
 return rt_prio(p->prio);
}

static inline  __attribute__((always_inline)) void set_task_session(struct task_struct *tsk, pid_t session)
{
 tsk->signal->__session = session;
}

static inline  __attribute__((always_inline)) void set_task_pgrp(struct task_struct *tsk, pid_t pgrp)
{
 tsk->signal->__pgrp = pgrp;
}

static inline  __attribute__((always_inline)) struct pid *task_pid(struct task_struct *task)
{
 return task->pids[PIDTYPE_PID].pid;
}

static inline  __attribute__((always_inline)) struct pid *task_tgid(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PID].pid;
}

static inline  __attribute__((always_inline)) struct pid *task_pgrp(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PGID].pid;
}

static inline  __attribute__((always_inline)) struct pid *task_session(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_SID].pid;
}

struct pid_namespace;
# 1385 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) pid_t task_pid_nr(struct task_struct *tsk)
{
 return tsk->pid;
}

pid_t task_pid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline  __attribute__((always_inline)) pid_t task_pid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_pid(tsk));
}


static inline  __attribute__((always_inline)) pid_t task_tgid_nr(struct task_struct *tsk)
{
 return tsk->tgid;
}

pid_t task_tgid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline  __attribute__((always_inline)) pid_t task_tgid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_tgid(tsk));
}


static inline  __attribute__((always_inline)) pid_t task_pgrp_nr(struct task_struct *tsk)
{
 return tsk->signal->__pgrp;
}

pid_t task_pgrp_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline  __attribute__((always_inline)) pid_t task_pgrp_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_pgrp(tsk));
}


static inline  __attribute__((always_inline)) pid_t task_session_nr(struct task_struct *tsk)
{
 return tsk->signal->__session;
}

pid_t task_session_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline  __attribute__((always_inline)) pid_t task_session_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_session(tsk));
}
# 1445 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].pid != ((void *)0);
}







static inline  __attribute__((always_inline)) int is_global_init(struct task_struct *tsk)
{
 return tsk->pid == 1;
}





extern int is_container_init(struct task_struct *tsk);

typedef  struct pid   _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_cad_pid[NUM_STACKS];    

extern void free_task(struct task_struct *tsk);


extern void __put_task_struct(struct task_struct *t);

static inline  __attribute__((always_inline)) void put_task_struct(struct task_struct *t)
{
 if (atomic_dec_and_test(&t->usage))
  __put_task_struct(t);
}
# 1540 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int set_cpus_allowed_ptr(struct task_struct *p,
           const cpumask_t *new_mask)
{
 if (!(__builtin_constant_p(((0))) ? constant_test_bit(((0)), ((*new_mask).bits)) : variable_test_bit(((0)), ((*new_mask).bits))))
  return -22;
 return 0;
}

static inline  __attribute__((always_inline)) int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask)
{
 return set_cpus_allowed_ptr(p, &new_mask);
}

extern unsigned long long sched_clock(void);


static inline  __attribute__((always_inline)) void sched_clock_init(void)
{
}

static inline  __attribute__((always_inline)) u64 sched_clock_cpu(int cpu)
{
 return sched_clock();
}

static inline  __attribute__((always_inline)) void sched_clock_tick(void)
{
}

static inline  __attribute__((always_inline)) void sched_clock_idle_sleep_event(void)
{
}

static inline  __attribute__((always_inline)) void sched_clock_idle_wakeup_event(u64 delta_ns)
{
}
# 1588 "linux-2.6.26/include/linux/sched.h"
extern unsigned long long cpu_clock(int cpu);

extern unsigned long long
task_sched_runtime(struct task_struct *task);
# 1600 "linux-2.6.26/include/linux/sched.h"
extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);




static inline  __attribute__((always_inline)) void idle_task_exit(void) {}


extern void sched_idle_next(void);




static inline  __attribute__((always_inline)) void wake_up_idle_cpu(int cpu) { }
# 1630 "linux-2.6.26/include/linux/sched.h"
typedef  unsigned int   _GLOBAL_123_T; extern  _GLOBAL_123_T  global_sysctl_sched_rt_period[NUM_STACKS];    
typedef  int  _GLOBAL_124_T; extern  _GLOBAL_124_T  global_sysctl_sched_rt_runtime[NUM_STACKS];   

int sched_rt_handler(struct ctl_table *table, int write,
  struct file *filp, void *buffer, size_t *lenp,
  loff_t *ppos);

typedef  unsigned int   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_sysctl_sched_compat_yield[NUM_STACKS];    






static inline  __attribute__((always_inline)) int rt_mutex_getprio(struct task_struct *p)
{
 return p->normal_prio;
}



extern void set_user_nice(struct task_struct *p, long nice);
extern int task_prio(const struct task_struct *p);
extern int task_nice(const struct task_struct *p);
extern int can_nice(const struct task_struct *p, const int nice);
extern int task_curr(const struct task_struct *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int, struct sched_param *);
extern struct task_struct *idle_task(int cpu);
extern struct task_struct *curr_task(int cpu);
extern void set_curr_task(int cpu, struct task_struct *p);

void yield(void);




typedef  struct exec_domain   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_default_exec_domain[NUM_STACKS];    

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[(((1UL) << 12) << 1)/sizeof(long)];
};


static inline  __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & ((((1UL) << 12) << 1)-sizeof(void*)));
}


typedef  union thread_union   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_init_thread_union[NUM_STACKS];    
typedef  struct task_struct   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_init_task[NUM_STACKS];    

typedef  struct mm_struct   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_init_mm[NUM_STACKS];    

extern struct pid_namespace init_pid_ns;
# 1707 "linux-2.6.26/include/linux/sched.h"
extern struct task_struct *find_task_by_pid_type_ns(int type, int pid,
  struct pid_namespace *ns);

static inline  __attribute__((always_inline)) struct task_struct * find_task_by_pid(pid_t nr)
{
 return find_task_by_pid_type_ns(PIDTYPE_PID, nr, &init_pid_ns);
}
extern struct task_struct *find_task_by_vpid(pid_t nr);
extern struct task_struct *find_task_by_pid_ns(pid_t nr,
  struct pid_namespace *ns);

extern void __set_special_pids(struct pid *pid);


extern struct user_struct * alloc_uid(struct user_namespace *, uid_t);
static inline  __attribute__((always_inline)) struct user_struct *get_uid(struct user_struct *u)
{
 atomic_inc(&u->__count);
 return u;
}
extern void free_uid(struct user_struct *);
extern void switch_uid(struct user_struct *);
extern void release_uids(struct user_namespace *ns);

# 1 "linux-2.6.26/include/asm/current.h" 1
# 1732 "linux-2.6.26/include/linux/sched.h" 2

extern void do_timer(unsigned long ticks);

extern int wake_up_state(struct task_struct *tsk, unsigned int state);
extern int wake_up_process(struct task_struct *tsk);
extern void wake_up_new_task(struct task_struct *tsk,
    unsigned long clone_flags);



 static inline  __attribute__((always_inline)) void kick_process(struct task_struct *tsk) { }

extern void sched_fork(struct task_struct *p, int clone_flags);
extern void sched_dead(struct task_struct *p);

extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void ignore_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline  __attribute__((always_inline)) int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 do { (void)(flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);
 ret = dequeue_signal(tsk, mask, info);
 do { (void)(flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pgrp_info(int sig, struct siginfo *info, struct pid *pgrp);
extern int kill_pid_info(int sig, struct siginfo *info, struct pid *pid);
extern int kill_pid_info_as_uid(int, struct siginfo *, struct pid *, uid_t, uid_t, u32);
extern int kill_pgrp(struct pid *pid, int sig, int priv);
extern int kill_pid(struct pid *pid, int sig, int priv);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern void do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern void force_sig_specific(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern void zap_other_threads(struct task_struct *p);
extern int kill_proc(pid_t, int, int);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(struct sigqueue *, struct task_struct *, int group);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);

static inline  __attribute__((always_inline)) int kill_cad_pid(int sig, int priv)
{
 return kill_pid(global_cad_pid[get_stack_id()], sig, priv);
}






static inline  __attribute__((always_inline)) int is_si_special(const struct siginfo *info)
{
 return info <= ((struct siginfo *) 2);
}



static inline  __attribute__((always_inline)) int on_sig_stack(unsigned long sp)
{
 return (sp - nsc_get_task()->sas_ss_sp < nsc_get_task()->sas_ss_size);
}

static inline  __attribute__((always_inline)) int sas_ss_flags(unsigned long sp)
{
 return (nsc_get_task()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}




extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *);
static inline  __attribute__((always_inline)) void mmdrop(struct mm_struct * mm)
{
 if (__builtin_expect(!!(atomic_dec_and_test(&mm->mm_count)), 0))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern struct mm_struct *dup_mm(struct task_struct *tsk);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void __cleanup_signal(struct signal_struct *);
extern void __cleanup_sighand(struct sighand_struct *);

extern void exit_itimers(struct signal_struct *);
extern void flush_itimer_signals(void);

extern void do_group_exit(int);

extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);

extern int do_execve(char *, char * *, char * *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int *, int *);
struct task_struct *fork_idle(int);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern char *get_task_comm(char *to, struct task_struct *tsk);
# 1900 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int has_group_leader_pid(struct task_struct *p)
{
 return p->pid == p->tgid;
}

static inline 
__attribute__((always_inline)) int same_thread_group(struct task_struct *p1, struct task_struct *p2)
{
 return p1->tgid == p2->tgid;
}

static inline  __attribute__((always_inline)) struct task_struct *next_thread(const struct task_struct *p)
{
 return ({ const typeof( ((struct task_struct *)0)->thread_group ) *__mptr = (({ typeof(p->thread_group.next) _________p1 = (*(volatile typeof(p->thread_group.next) *)&(p->thread_group.next)); do { } while (0); (_________p1); })); (struct task_struct *)( (char *)__mptr - __builtin_offsetof(struct task_struct,thread_group) );})
                                      ;
}

static inline  __attribute__((always_inline)) int thread_group_empty(struct task_struct *p)
{
 return list_empty(&p->thread_group);
}
# 1935 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) void task_lock(struct task_struct *p)
{
 do { do { } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}

static inline  __attribute__((always_inline)) void task_unlock(struct task_struct *p)
{
 do { do { } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}

extern struct sighand_struct *lock_task_sighand(struct task_struct *tsk,
       unsigned long *flags);

static inline  __attribute__((always_inline)) void unlock_task_sighand(struct task_struct *tsk,
      unsigned long *flags)
{
 do { (void)(*flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);
}






static inline  __attribute__((always_inline)) void setup_thread_stack(struct task_struct *p, struct task_struct *org)
{
 *((struct thread_info *)(p)->stack) = *((struct thread_info *)(org)->stack);
 ((struct thread_info *)(p)->stack)->task = p;
}

static inline  __attribute__((always_inline)) unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(((struct thread_info *)(p)->stack) + 1);
}



extern void thread_info_cache_init(void);




static inline  __attribute__((always_inline)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) int test_tsk_need_resched(struct task_struct *tsk)
{
 return __builtin_expect(!!(test_tsk_thread_flag(tsk,3)), 0);
}

static inline  __attribute__((always_inline)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

extern int __fatal_signal_pending(struct task_struct *p);

static inline  __attribute__((always_inline)) int fatal_signal_pending(struct task_struct *p)
{
 return signal_pending(p) && __fatal_signal_pending(p);
}

static inline  __attribute__((always_inline)) int signal_pending_state(long state, struct task_struct *p)
{
 if (!(state & (1 | 128)))
  return 0;
 if (!signal_pending(p))
  return 0;

 if (state & (4 | 8))
  return 0;

 return (state & 1) || __fatal_signal_pending(p);
}

static inline  __attribute__((always_inline)) int need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}
# 2054 "linux-2.6.26/include/linux/sched.h"
extern int _cond_resched(void);






static inline  __attribute__((always_inline)) int cond_resched(void)
{
 return _cond_resched();
}

extern int cond_resched_lock(spinlock_t * lock);
extern int cond_resched_softirq(void);
static inline  __attribute__((always_inline)) int cond_resched_bkl(void)
{
 return _cond_resched();
}






static inline  __attribute__((always_inline)) int spin_needbreak(spinlock_t *lock)
{



 return 0;

}







extern void recalc_sigpending_and_wake(struct task_struct *t);
extern void recalc_sigpending(void);

extern void signal_wake_up(struct task_struct *t, int resume_stopped);
# 2112 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) unsigned int task_cpu(const struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void set_task_cpu(struct task_struct *p, unsigned int cpu)
{
}




extern void arch_pick_mmap_layout(struct mm_struct *mm);
# 2134 "linux-2.6.26/include/linux/sched.h"
extern long sched_setaffinity(pid_t pid, const cpumask_t *new_mask);
extern long sched_getaffinity(pid_t pid, cpumask_t *mask);

typedef  int  _GLOBAL_130_T; extern  _GLOBAL_130_T  global_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_130_T  global_sched_smt_power_savings[NUM_STACKS];    

extern void normalize_rt_tasks(void);
# 2186 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) void add_rchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline  __attribute__((always_inline)) void add_wchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline  __attribute__((always_inline)) void inc_syscr(struct task_struct *tsk)
{
}

static inline  __attribute__((always_inline)) void inc_syscw(struct task_struct *tsk)
{
}





static inline  __attribute__((always_inline)) void migration_init(void)
{
}
# 2219 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) void mm_update_next_owner(struct mm_struct *mm)
{
}

static inline  __attribute__((always_inline)) void mm_init_owner(struct mm_struct *mm, struct task_struct *p)
{
}
# 10 "linux-2.6.26/include/linux/swap.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 12 "linux-2.6.26/include/linux/swap.h" 2


struct notifier_block;

struct bio;





static inline  __attribute__((always_inline)) int current_is_kswapd(void)
{
 return nsc_get_task()->flags & 0x00040000;
}
# 57 "linux-2.6.26/include/linux/swap.h"
union swap_header {
 struct {
  char reserved[((1UL) << 12) - 10];
  char magic[10];
 } magic;
 struct {
  char bootbits[1024];
  __u32 version;
  __u32 last_page;
  __u32 nr_badpages;
  unsigned char sws_uuid[16];
  unsigned char sws_volume[16];
  __u32 padding[117];
  __u32 badpages[1];
 } info;
};





typedef struct {
 unsigned long val;
} swp_entry_t;





struct reclaim_state {
 unsigned long reclaimed_slab;
};



struct address_space;
struct sysinfo;
struct writeback_control;
struct zone;
# 105 "linux-2.6.26/include/linux/swap.h"
struct swap_extent {
 struct list_head list;
 unsigned long start_page;
 unsigned long nr_pages;
 sector_t start_block;
};
# 119 "linux-2.6.26/include/linux/swap.h"
enum {
 SWP_USED = (1 << 0),
 SWP_WRITEOK = (1 << 1),
 SWP_ACTIVE = (SWP_USED | SWP_WRITEOK),

 SWP_SCANNING = (1 << 8),
};
# 135 "linux-2.6.26/include/linux/swap.h"
struct swap_info_struct {
 unsigned int flags;
 int prio;
 struct file *swap_file;
 struct block_device *bdev;
 struct list_head extent_list;
 struct swap_extent *curr_swap_extent;
 unsigned old_block_size;
 unsigned short * swap_map;
 unsigned int lowest_bit;
 unsigned int highest_bit;
 unsigned int cluster_next;
 unsigned int cluster_nr;
 unsigned int pages;
 unsigned int max;
 unsigned int inuse_pages;
 int next;
};

struct swap_list_t {
 int head;
 int next;
};





typedef  unsigned long   _GLOBAL_131_T; extern  _GLOBAL_131_T  global_totalram_pages[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_totalreserve_pages[NUM_STACKS];    
typedef  long  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_nr_swap_pages[NUM_STACKS];   
extern unsigned int nr_free_buffer_pages(void);
extern unsigned int nr_free_pagecache_pages(void);






extern void lru_cache_add(struct page *);
extern void lru_cache_add_active(struct page *);
extern void activate_page(struct page *);
extern void mark_page_accessed(struct page *);
extern void lru_add_drain(void);
extern int lru_add_drain_all(void);
extern void rotate_reclaimable_page(struct page *page);
extern void swap_setup(void);


extern unsigned long try_to_free_pages(struct zonelist *zonelist, int order,
     gfp_t gfp_mask);
extern unsigned long try_to_free_mem_cgroup_pages(struct mem_cgroup *mem,
       gfp_t gfp_mask);
extern int __isolate_lru_page(struct page *page, int mode);
extern unsigned long shrink_all_memory(unsigned long nr_pages);
typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_vm_swappiness[NUM_STACKS];   
extern int remove_mapping(struct address_space *mapping, struct page *page);
typedef  long  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_vm_total_pages[NUM_STACKS];   
# 201 "linux-2.6.26/include/linux/swap.h"
static inline  __attribute__((always_inline)) int zone_reclaim(struct zone *z, gfp_t mask, unsigned int order)
{
 return 0;
}


extern int kswapd_run(int nid);






extern void swap_unplug_io_fn(struct backing_dev_info *, struct page *);
# 294 "linux-2.6.26/include/linux/swap.h"
static inline  __attribute__((always_inline)) void show_swap_cache_info(void)
{
}

static inline  __attribute__((always_inline)) void free_swap_and_cache(swp_entry_t swp)
{
}

static inline  __attribute__((always_inline)) int swap_duplicate(swp_entry_t swp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void swap_free(swp_entry_t swp)
{
}

static inline  __attribute__((always_inline)) struct page *swapin_readahead(swp_entry_t swp, gfp_t gfp_mask,
   struct vm_area_struct *vma, unsigned long addr)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) struct page *lookup_swap_cache(swp_entry_t swp)
{
 return ((void *)0);
}



static inline  __attribute__((always_inline)) int add_to_swap_cache(struct page *page, swp_entry_t entry,
       gfp_t gfp_mask)
{
 return -1;
}

static inline  __attribute__((always_inline)) void __delete_from_swap_cache(struct page *page)
{
}

static inline  __attribute__((always_inline)) void delete_from_swap_cache(struct page *page)
{
}



static inline  __attribute__((always_inline)) int remove_exclusive_swap_page(struct page *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) swp_entry_t get_swap_page(void)
{
 swp_entry_t entry;
 entry.val = 0;
 return entry;
}
# 24 "linux-2.6.26/kernel/sysctl.c" 2

# 1 "linux-2.6.26/include/linux/sysctl.h" 1
# 32 "linux-2.6.26/include/linux/sysctl.h"
struct file;
struct completion;






struct __sysctl_args {
 int *name;
 int nlen;
 void *oldval;
 size_t *oldlenp;
 void *newval;
 size_t newlen;
 unsigned long __unused[4];
};
# 60 "linux-2.6.26/include/linux/sysctl.h"
enum
{
 CTL_KERN=1,
 CTL_VM=2,
 CTL_NET=3,
 CTL_PROC=4,
 CTL_FS=5,
 CTL_DEBUG=6,
 CTL_DEV=7,
 CTL_BUS=8,
 CTL_ABI=9,
 CTL_CPU=10,
 CTL_ARLAN=254,
 CTL_S390DBF=5677,
 CTL_SUNRPC=7249,
 CTL_PM=9899,
 CTL_FRV=9898,
};


enum
{
 CTL_BUS_ISA=1
};


enum
{
 INOTIFY_MAX_USER_INSTANCES=1,
 INOTIFY_MAX_USER_WATCHES=2,
 INOTIFY_MAX_QUEUED_EVENTS=3
};


enum
{
 KERN_OSTYPE=1,
 KERN_OSRELEASE=2,
 KERN_OSREV=3,
 KERN_VERSION=4,
 KERN_SECUREMASK=5,
 KERN_PROF=6,
 KERN_NODENAME=7,
 KERN_DOMAINNAME=8,

 KERN_PANIC=15,
 KERN_REALROOTDEV=16,

 KERN_SPARC_REBOOT=21,
 KERN_CTLALTDEL=22,
 KERN_PRINTK=23,
 KERN_NAMETRANS=24,
 KERN_PPC_HTABRECLAIM=25,
 KERN_PPC_ZEROPAGED=26,
 KERN_PPC_POWERSAVE_NAP=27,
 KERN_MODPROBE=28,
 KERN_SG_BIG_BUFF=29,
 KERN_ACCT=30,
 KERN_PPC_L2CR=31,

 KERN_RTSIGNR=32,
 KERN_RTSIGMAX=33,

 KERN_SHMMAX=34,
 KERN_MSGMAX=35,
 KERN_MSGMNB=36,
 KERN_MSGPOOL=37,
 KERN_SYSRQ=38,
 KERN_MAX_THREADS=39,
  KERN_RANDOM=40,
  KERN_SHMALL=41,
  KERN_MSGMNI=42,
  KERN_SEM=43,
  KERN_SPARC_STOP_A=44,
  KERN_SHMMNI=45,
 KERN_OVERFLOWUID=46,
 KERN_OVERFLOWGID=47,
 KERN_SHMPATH=48,
 KERN_HOTPLUG=49,
 KERN_IEEE_EMULATION_WARNINGS=50,
 KERN_S390_USER_DEBUG_LOGGING=51,
 KERN_CORE_USES_PID=52,
 KERN_TAINTED=53,
 KERN_CADPID=54,
 KERN_PIDMAX=55,
   KERN_CORE_PATTERN=56,
 KERN_PANIC_ON_OOPS=57,
 KERN_HPPA_PWRSW=58,
 KERN_HPPA_UNALIGNED=59,
 KERN_PRINTK_RATELIMIT=60,
 KERN_PRINTK_RATELIMIT_BURST=61,
 KERN_PTY=62,
 KERN_NGROUPS_MAX=63,
 KERN_SPARC_SCONS_PWROFF=64,
 KERN_HZ_TIMER=65,
 KERN_UNKNOWN_NMI_PANIC=66,
 KERN_BOOTLOADER_TYPE=67,
 KERN_RANDOMIZE=68,
 KERN_SETUID_DUMPABLE=69,
 KERN_SPIN_RETRY=70,
 KERN_ACPI_VIDEO_FLAGS=71,
 KERN_IA64_UNALIGNED=72,
 KERN_COMPAT_LOG=73,
 KERN_MAX_LOCK_DEPTH=74,
 KERN_NMI_WATCHDOG=75,
 KERN_PANIC_ON_NMI=76,
};




enum
{
 VM_UNUSED1=1,
 VM_UNUSED2=2,
 VM_UNUSED3=3,
 VM_UNUSED4=4,
 VM_OVERCOMMIT_MEMORY=5,
 VM_UNUSED5=6,
 VM_UNUSED7=7,
 VM_UNUSED8=8,
 VM_UNUSED9=9,
 VM_PAGE_CLUSTER=10,
 VM_DIRTY_BACKGROUND=11,
 VM_DIRTY_RATIO=12,
 VM_DIRTY_WB_CS=13,
 VM_DIRTY_EXPIRE_CS=14,
 VM_NR_PDFLUSH_THREADS=15,
 VM_OVERCOMMIT_RATIO=16,
 VM_PAGEBUF=17,
 VM_HUGETLB_PAGES=18,
 VM_SWAPPINESS=19,
 VM_LOWMEM_RESERVE_RATIO=20,
 VM_MIN_FREE_KBYTES=21,
 VM_MAX_MAP_COUNT=22,
 VM_LAPTOP_MODE=23,
 VM_BLOCK_DUMP=24,
 VM_HUGETLB_GROUP=25,
 VM_VFS_CACHE_PRESSURE=26,
 VM_LEGACY_VA_LAYOUT=27,
 VM_SWAP_TOKEN_TIMEOUT=28,
 VM_DROP_PAGECACHE=29,
 VM_PERCPU_PAGELIST_FRACTION=30,
 VM_ZONE_RECLAIM_MODE=31,
 VM_MIN_UNMAPPED=32,
 VM_PANIC_ON_OOM=33,
 VM_VDSO_ENABLED=34,
 VM_MIN_SLAB=35,
};



enum
{
 NET_CORE=1,
 NET_ETHER=2,
 NET_802=3,
 NET_UNIX=4,
 NET_IPV4=5,
 NET_IPX=6,
 NET_ATALK=7,
 NET_NETROM=8,
 NET_AX25=9,
 NET_BRIDGE=10,
 NET_ROSE=11,
 NET_IPV6=12,
 NET_X25=13,
 NET_TR=14,
 NET_DECNET=15,
 NET_ECONET=16,
 NET_SCTP=17,
 NET_LLC=18,
 NET_NETFILTER=19,
 NET_DCCP=20,
 NET_IRDA=412,
};


enum
{
 RANDOM_POOLSIZE=1,
 RANDOM_ENTROPY_COUNT=2,
 RANDOM_READ_THRESH=3,
 RANDOM_WRITE_THRESH=4,
 RANDOM_BOOT_ID=5,
 RANDOM_UUID=6
};


enum
{
 PTY_MAX=1,
 PTY_NR=2
};


enum
{
 BUS_ISA_MEM_BASE=1,
 BUS_ISA_PORT_BASE=2,
 BUS_ISA_PORT_SHIFT=3
};


enum
{
 NET_CORE_WMEM_MAX=1,
 NET_CORE_RMEM_MAX=2,
 NET_CORE_WMEM_DEFAULT=3,
 NET_CORE_RMEM_DEFAULT=4,

 NET_CORE_MAX_BACKLOG=6,
 NET_CORE_FASTROUTE=7,
 NET_CORE_MSG_COST=8,
 NET_CORE_MSG_BURST=9,
 NET_CORE_OPTMEM_MAX=10,
 NET_CORE_HOT_LIST_LENGTH=11,
 NET_CORE_DIVERT_VERSION=12,
 NET_CORE_NO_CONG_THRESH=13,
 NET_CORE_NO_CONG=14,
 NET_CORE_LO_CONG=15,
 NET_CORE_MOD_CONG=16,
 NET_CORE_DEV_WEIGHT=17,
 NET_CORE_SOMAXCONN=18,
 NET_CORE_BUDGET=19,
 NET_CORE_AEVENT_ETIME=20,
 NET_CORE_AEVENT_RSEQTH=21,
 NET_CORE_WARNINGS=22,
};







enum
{
 NET_UNIX_DESTROY_DELAY=1,
 NET_UNIX_DELETE_DELAY=2,
 NET_UNIX_MAX_DGRAM_QLEN=3,
};


enum
{
 NET_NF_CONNTRACK_MAX=1,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_NF_CONNTRACK_BUCKETS=14,
 NET_NF_CONNTRACK_LOG_INVALID=15,
 NET_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_NF_CONNTRACK_TCP_LOOSE=17,
 NET_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_NF_CONNTRACK_TCP_MAX_RETRANS=19,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_NF_CONNTRACK_COUNT=27,
 NET_NF_CONNTRACK_ICMPV6_TIMEOUT=28,
 NET_NF_CONNTRACK_FRAG6_TIMEOUT=29,
 NET_NF_CONNTRACK_FRAG6_LOW_THRESH=30,
 NET_NF_CONNTRACK_FRAG6_HIGH_THRESH=31,
 NET_NF_CONNTRACK_CHECKSUM=32,
};


enum
{

 NET_IPV4_FORWARD=8,
 NET_IPV4_DYNADDR=9,

 NET_IPV4_CONF=16,
 NET_IPV4_NEIGH=17,
 NET_IPV4_ROUTE=18,
 NET_IPV4_FIB_HASH=19,
 NET_IPV4_NETFILTER=20,

 NET_IPV4_TCP_TIMESTAMPS=33,
 NET_IPV4_TCP_WINDOW_SCALING=34,
 NET_IPV4_TCP_SACK=35,
 NET_IPV4_TCP_RETRANS_COLLAPSE=36,
 NET_IPV4_DEFAULT_TTL=37,
 NET_IPV4_AUTOCONFIG=38,
 NET_IPV4_NO_PMTU_DISC=39,
 NET_IPV4_TCP_SYN_RETRIES=40,
 NET_IPV4_IPFRAG_HIGH_THRESH=41,
 NET_IPV4_IPFRAG_LOW_THRESH=42,
 NET_IPV4_IPFRAG_TIME=43,
 NET_IPV4_TCP_MAX_KA_PROBES=44,
 NET_IPV4_TCP_KEEPALIVE_TIME=45,
 NET_IPV4_TCP_KEEPALIVE_PROBES=46,
 NET_IPV4_TCP_RETRIES1=47,
 NET_IPV4_TCP_RETRIES2=48,
 NET_IPV4_TCP_FIN_TIMEOUT=49,
 NET_IPV4_IP_MASQ_DEBUG=50,
 NET_TCP_SYNCOOKIES=51,
 NET_TCP_STDURG=52,
 NET_TCP_RFC1337=53,
 NET_TCP_SYN_TAILDROP=54,
 NET_TCP_MAX_SYN_BACKLOG=55,
 NET_IPV4_LOCAL_PORT_RANGE=56,
 NET_IPV4_ICMP_ECHO_IGNORE_ALL=57,
 NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS=58,
 NET_IPV4_ICMP_SOURCEQUENCH_RATE=59,
 NET_IPV4_ICMP_DESTUNREACH_RATE=60,
 NET_IPV4_ICMP_TIMEEXCEED_RATE=61,
 NET_IPV4_ICMP_PARAMPROB_RATE=62,
 NET_IPV4_ICMP_ECHOREPLY_RATE=63,
 NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES=64,
 NET_IPV4_IGMP_MAX_MEMBERSHIPS=65,
 NET_TCP_TW_RECYCLE=66,
 NET_IPV4_ALWAYS_DEFRAG=67,
 NET_IPV4_TCP_KEEPALIVE_INTVL=68,
 NET_IPV4_INET_PEER_THRESHOLD=69,
 NET_IPV4_INET_PEER_MINTTL=70,
 NET_IPV4_INET_PEER_MAXTTL=71,
 NET_IPV4_INET_PEER_GC_MINTIME=72,
 NET_IPV4_INET_PEER_GC_MAXTIME=73,
 NET_TCP_ORPHAN_RETRIES=74,
 NET_TCP_ABORT_ON_OVERFLOW=75,
 NET_TCP_SYNACK_RETRIES=76,
 NET_TCP_MAX_ORPHANS=77,
 NET_TCP_MAX_TW_BUCKETS=78,
 NET_TCP_FACK=79,
 NET_TCP_REORDERING=80,
 NET_TCP_ECN=81,
 NET_TCP_DSACK=82,
 NET_TCP_MEM=83,
 NET_TCP_WMEM=84,
 NET_TCP_RMEM=85,
 NET_TCP_APP_WIN=86,
 NET_TCP_ADV_WIN_SCALE=87,
 NET_IPV4_NONLOCAL_BIND=88,
 NET_IPV4_ICMP_RATELIMIT=89,
 NET_IPV4_ICMP_RATEMASK=90,
 NET_TCP_TW_REUSE=91,
 NET_TCP_FRTO=92,
 NET_TCP_LOW_LATENCY=93,
 NET_IPV4_IPFRAG_SECRET_INTERVAL=94,
 NET_IPV4_IGMP_MAX_MSF=96,
 NET_TCP_NO_METRICS_SAVE=97,
 NET_TCP_DEFAULT_WIN_SCALE=105,
 NET_TCP_MODERATE_RCVBUF=106,
 NET_TCP_TSO_WIN_DIVISOR=107,
 NET_TCP_BIC_BETA=108,
 NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR=109,
 NET_TCP_CONG_CONTROL=110,
 NET_TCP_ABC=111,
 NET_IPV4_IPFRAG_MAX_DIST=112,
  NET_TCP_MTU_PROBING=113,
 NET_TCP_BASE_MSS=114,
 NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS=115,
 NET_TCP_DMA_COPYBREAK=116,
 NET_TCP_SLOW_START_AFTER_IDLE=117,
 NET_CIPSOV4_CACHE_ENABLE=118,
 NET_CIPSOV4_CACHE_BUCKET_SIZE=119,
 NET_CIPSOV4_RBM_OPTFMT=120,
 NET_CIPSOV4_RBM_STRICTVALID=121,
 NET_TCP_AVAIL_CONG_CONTROL=122,
 NET_TCP_ALLOWED_CONG_CONTROL=123,
 NET_TCP_MAX_SSTHRESH=124,
 NET_TCP_FRTO_RESPONSE=125,
};

enum {
 NET_IPV4_ROUTE_FLUSH=1,
 NET_IPV4_ROUTE_MIN_DELAY=2,
 NET_IPV4_ROUTE_MAX_DELAY=3,
 NET_IPV4_ROUTE_GC_THRESH=4,
 NET_IPV4_ROUTE_MAX_SIZE=5,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL=6,
 NET_IPV4_ROUTE_GC_TIMEOUT=7,
 NET_IPV4_ROUTE_GC_INTERVAL=8,
 NET_IPV4_ROUTE_REDIRECT_LOAD=9,
 NET_IPV4_ROUTE_REDIRECT_NUMBER=10,
 NET_IPV4_ROUTE_REDIRECT_SILENCE=11,
 NET_IPV4_ROUTE_ERROR_COST=12,
 NET_IPV4_ROUTE_ERROR_BURST=13,
 NET_IPV4_ROUTE_GC_ELASTICITY=14,
 NET_IPV4_ROUTE_MTU_EXPIRES=15,
 NET_IPV4_ROUTE_MIN_PMTU=16,
 NET_IPV4_ROUTE_MIN_ADVMSS=17,
 NET_IPV4_ROUTE_SECRET_INTERVAL=18,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS=19,
};

enum
{
 NET_PROTO_CONF_ALL=-2,
 NET_PROTO_CONF_DEFAULT=-3


};

enum
{
 NET_IPV4_CONF_FORWARDING=1,
 NET_IPV4_CONF_MC_FORWARDING=2,
 NET_IPV4_CONF_PROXY_ARP=3,
 NET_IPV4_CONF_ACCEPT_REDIRECTS=4,
 NET_IPV4_CONF_SECURE_REDIRECTS=5,
 NET_IPV4_CONF_SEND_REDIRECTS=6,
 NET_IPV4_CONF_SHARED_MEDIA=7,
 NET_IPV4_CONF_RP_FILTER=8,
 NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE=9,
 NET_IPV4_CONF_BOOTP_RELAY=10,
 NET_IPV4_CONF_LOG_MARTIANS=11,
 NET_IPV4_CONF_TAG=12,
 NET_IPV4_CONF_ARPFILTER=13,
 NET_IPV4_CONF_MEDIUM_ID=14,
 NET_IPV4_CONF_NOXFRM=15,
 NET_IPV4_CONF_NOPOLICY=16,
 NET_IPV4_CONF_FORCE_IGMP_VERSION=17,
 NET_IPV4_CONF_ARP_ANNOUNCE=18,
 NET_IPV4_CONF_ARP_IGNORE=19,
 NET_IPV4_CONF_PROMOTE_SECONDARIES=20,
 NET_IPV4_CONF_ARP_ACCEPT=21,
 __NET_IPV4_CONF_MAX
};


enum
{
 NET_IPV4_NF_CONNTRACK_MAX=1,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_IPV4_NF_CONNTRACK_BUCKETS=14,
 NET_IPV4_NF_CONNTRACK_LOG_INVALID=15,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_IPV4_NF_CONNTRACK_TCP_LOOSE=17,
 NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS=19,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_IPV4_NF_CONNTRACK_COUNT=27,
 NET_IPV4_NF_CONNTRACK_CHECKSUM=28,
};


enum {
 NET_IPV6_CONF=16,
 NET_IPV6_NEIGH=17,
 NET_IPV6_ROUTE=18,
 NET_IPV6_ICMP=19,
 NET_IPV6_BINDV6ONLY=20,
 NET_IPV6_IP6FRAG_HIGH_THRESH=21,
 NET_IPV6_IP6FRAG_LOW_THRESH=22,
 NET_IPV6_IP6FRAG_TIME=23,
 NET_IPV6_IP6FRAG_SECRET_INTERVAL=24,
 NET_IPV6_MLD_MAX_MSF=25,
};

enum {
 NET_IPV6_ROUTE_FLUSH=1,
 NET_IPV6_ROUTE_GC_THRESH=2,
 NET_IPV6_ROUTE_MAX_SIZE=3,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL=4,
 NET_IPV6_ROUTE_GC_TIMEOUT=5,
 NET_IPV6_ROUTE_GC_INTERVAL=6,
 NET_IPV6_ROUTE_GC_ELASTICITY=7,
 NET_IPV6_ROUTE_MTU_EXPIRES=8,
 NET_IPV6_ROUTE_MIN_ADVMSS=9,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS=10
};

enum {
 NET_IPV6_FORWARDING=1,
 NET_IPV6_HOP_LIMIT=2,
 NET_IPV6_MTU=3,
 NET_IPV6_ACCEPT_RA=4,
 NET_IPV6_ACCEPT_REDIRECTS=5,
 NET_IPV6_AUTOCONF=6,
 NET_IPV6_DAD_TRANSMITS=7,
 NET_IPV6_RTR_SOLICITS=8,
 NET_IPV6_RTR_SOLICIT_INTERVAL=9,
 NET_IPV6_RTR_SOLICIT_DELAY=10,
 NET_IPV6_USE_TEMPADDR=11,
 NET_IPV6_TEMP_VALID_LFT=12,
 NET_IPV6_TEMP_PREFERED_LFT=13,
 NET_IPV6_REGEN_MAX_RETRY=14,
 NET_IPV6_MAX_DESYNC_FACTOR=15,
 NET_IPV6_MAX_ADDRESSES=16,
 NET_IPV6_FORCE_MLD_VERSION=17,
 NET_IPV6_ACCEPT_RA_DEFRTR=18,
 NET_IPV6_ACCEPT_RA_PINFO=19,
 NET_IPV6_ACCEPT_RA_RTR_PREF=20,
 NET_IPV6_RTR_PROBE_INTERVAL=21,
 NET_IPV6_ACCEPT_RA_RT_INFO_MAX_PLEN=22,
 NET_IPV6_PROXY_NDP=23,
 NET_IPV6_ACCEPT_SOURCE_ROUTE=25,
 __NET_IPV6_MAX
};


enum {
 NET_IPV6_ICMP_RATELIMIT=1
};


enum {
 NET_NEIGH_MCAST_SOLICIT=1,
 NET_NEIGH_UCAST_SOLICIT=2,
 NET_NEIGH_APP_SOLICIT=3,
 NET_NEIGH_RETRANS_TIME=4,
 NET_NEIGH_REACHABLE_TIME=5,
 NET_NEIGH_DELAY_PROBE_TIME=6,
 NET_NEIGH_GC_STALE_TIME=7,
 NET_NEIGH_UNRES_QLEN=8,
 NET_NEIGH_PROXY_QLEN=9,
 NET_NEIGH_ANYCAST_DELAY=10,
 NET_NEIGH_PROXY_DELAY=11,
 NET_NEIGH_LOCKTIME=12,
 NET_NEIGH_GC_INTERVAL=13,
 NET_NEIGH_GC_THRESH1=14,
 NET_NEIGH_GC_THRESH2=15,
 NET_NEIGH_GC_THRESH3=16,
 NET_NEIGH_RETRANS_TIME_MS=17,
 NET_NEIGH_REACHABLE_TIME_MS=18,
 __NET_NEIGH_MAX
};


enum {
 NET_DCCP_DEFAULT=1,
};


enum {
 NET_IPX_PPROP_BROADCASTING=1,
 NET_IPX_FORWARDING=2
};


enum {
 NET_LLC2=1,
 NET_LLC_STATION=2,
};


enum {
 NET_LLC2_TIMEOUT=1,
};


enum {
 NET_LLC_STATION_ACK_TIMEOUT=1,
};


enum {
 NET_LLC2_ACK_TIMEOUT=1,
 NET_LLC2_P_TIMEOUT=2,
 NET_LLC2_REJ_TIMEOUT=3,
 NET_LLC2_BUSY_TIMEOUT=4,
};


enum {
 NET_ATALK_AARP_EXPIRY_TIME=1,
 NET_ATALK_AARP_TICK_TIME=2,
 NET_ATALK_AARP_RETRANSMIT_LIMIT=3,
 NET_ATALK_AARP_RESOLVE_TIME=4
};



enum {
 NET_NETROM_DEFAULT_PATH_QUALITY=1,
 NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER=2,
 NET_NETROM_NETWORK_TTL_INITIALISER=3,
 NET_NETROM_TRANSPORT_TIMEOUT=4,
 NET_NETROM_TRANSPORT_MAXIMUM_TRIES=5,
 NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY=6,
 NET_NETROM_TRANSPORT_BUSY_DELAY=7,
 NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE=8,
 NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT=9,
 NET_NETROM_ROUTING_CONTROL=10,
 NET_NETROM_LINK_FAILS_COUNT=11,
 NET_NETROM_RESET=12
};


enum {
 NET_AX25_IP_DEFAULT_MODE=1,
 NET_AX25_DEFAULT_MODE=2,
 NET_AX25_BACKOFF_TYPE=3,
 NET_AX25_CONNECT_MODE=4,
 NET_AX25_STANDARD_WINDOW=5,
 NET_AX25_EXTENDED_WINDOW=6,
 NET_AX25_T1_TIMEOUT=7,
 NET_AX25_T2_TIMEOUT=8,
 NET_AX25_T3_TIMEOUT=9,
 NET_AX25_IDLE_TIMEOUT=10,
 NET_AX25_N2=11,
 NET_AX25_PACLEN=12,
 NET_AX25_PROTOCOL=13,
 NET_AX25_DAMA_SLAVE_TIMEOUT=14
};


enum {
 NET_ROSE_RESTART_REQUEST_TIMEOUT=1,
 NET_ROSE_CALL_REQUEST_TIMEOUT=2,
 NET_ROSE_RESET_REQUEST_TIMEOUT=3,
 NET_ROSE_CLEAR_REQUEST_TIMEOUT=4,
 NET_ROSE_ACK_HOLD_BACK_TIMEOUT=5,
 NET_ROSE_ROUTING_CONTROL=6,
 NET_ROSE_LINK_FAIL_TIMEOUT=7,
 NET_ROSE_MAX_VCS=8,
 NET_ROSE_WINDOW_SIZE=9,
 NET_ROSE_NO_ACTIVITY_TIMEOUT=10
};


enum {
 NET_X25_RESTART_REQUEST_TIMEOUT=1,
 NET_X25_CALL_REQUEST_TIMEOUT=2,
 NET_X25_RESET_REQUEST_TIMEOUT=3,
 NET_X25_CLEAR_REQUEST_TIMEOUT=4,
 NET_X25_ACK_HOLD_BACK_TIMEOUT=5,
 NET_X25_FORWARD=6
};


enum
{
 NET_TR_RIF_TIMEOUT=1
};


enum {
 NET_DECNET_NODE_TYPE = 1,
 NET_DECNET_NODE_ADDRESS = 2,
 NET_DECNET_NODE_NAME = 3,
 NET_DECNET_DEFAULT_DEVICE = 4,
 NET_DECNET_TIME_WAIT = 5,
 NET_DECNET_DN_COUNT = 6,
 NET_DECNET_DI_COUNT = 7,
 NET_DECNET_DR_COUNT = 8,
 NET_DECNET_DST_GC_INTERVAL = 9,
 NET_DECNET_CONF = 10,
 NET_DECNET_NO_FC_MAX_CWND = 11,
 NET_DECNET_MEM = 12,
 NET_DECNET_RMEM = 13,
 NET_DECNET_WMEM = 14,
 NET_DECNET_DEBUG_LEVEL = 255
};


enum {
 NET_DECNET_CONF_LOOPBACK = -2,
 NET_DECNET_CONF_DDCMP = -3,
 NET_DECNET_CONF_PPP = -4,
 NET_DECNET_CONF_X25 = -5,
 NET_DECNET_CONF_GRE = -6,
 NET_DECNET_CONF_ETHER = -7


};


enum {
 NET_DECNET_CONF_DEV_PRIORITY = 1,
 NET_DECNET_CONF_DEV_T1 = 2,
 NET_DECNET_CONF_DEV_T2 = 3,
 NET_DECNET_CONF_DEV_T3 = 4,
 NET_DECNET_CONF_DEV_FORWARDING = 5,
 NET_DECNET_CONF_DEV_BLKSIZE = 6,
 NET_DECNET_CONF_DEV_STATE = 7
};


enum {
 NET_SCTP_RTO_INITIAL = 1,
 NET_SCTP_RTO_MIN = 2,
 NET_SCTP_RTO_MAX = 3,
 NET_SCTP_RTO_ALPHA = 4,
 NET_SCTP_RTO_BETA = 5,
 NET_SCTP_VALID_COOKIE_LIFE = 6,
 NET_SCTP_ASSOCIATION_MAX_RETRANS = 7,
 NET_SCTP_PATH_MAX_RETRANS = 8,
 NET_SCTP_MAX_INIT_RETRANSMITS = 9,
 NET_SCTP_HB_INTERVAL = 10,
 NET_SCTP_PRESERVE_ENABLE = 11,
 NET_SCTP_MAX_BURST = 12,
 NET_SCTP_ADDIP_ENABLE = 13,
 NET_SCTP_PRSCTP_ENABLE = 14,
 NET_SCTP_SNDBUF_POLICY = 15,
 NET_SCTP_SACK_TIMEOUT = 16,
 NET_SCTP_RCVBUF_POLICY = 17,
};


enum {
 NET_BRIDGE_NF_CALL_ARPTABLES = 1,
 NET_BRIDGE_NF_CALL_IPTABLES = 2,
 NET_BRIDGE_NF_CALL_IP6TABLES = 3,
 NET_BRIDGE_NF_FILTER_VLAN_TAGGED = 4,
 NET_BRIDGE_NF_FILTER_PPPOE_TAGGED = 5,
};


enum {
 NET_IRDA_DISCOVERY=1,
 NET_IRDA_DEVNAME=2,
 NET_IRDA_DEBUG=3,
 NET_IRDA_FAST_POLL=4,
 NET_IRDA_DISCOVERY_SLOTS=5,
 NET_IRDA_DISCOVERY_TIMEOUT=6,
 NET_IRDA_SLOT_TIMEOUT=7,
 NET_IRDA_MAX_BAUD_RATE=8,
 NET_IRDA_MIN_TX_TURN_TIME=9,
 NET_IRDA_MAX_TX_DATA_SIZE=10,
 NET_IRDA_MAX_TX_WINDOW=11,
 NET_IRDA_MAX_NOREPLY_TIME=12,
 NET_IRDA_WARN_NOREPLY_TIME=13,
 NET_IRDA_LAP_KEEPALIVE_TIME=14,
};



enum
{
 FS_NRINODE=1,
 FS_STATINODE=2,
 FS_MAXINODE=3,
 FS_NRDQUOT=4,
 FS_MAXDQUOT=5,
 FS_NRFILE=6,
 FS_MAXFILE=7,
 FS_DENTRY=8,
 FS_NRSUPER=9,
 FS_MAXSUPER=10,
 FS_OVERFLOWUID=11,
 FS_OVERFLOWGID=12,
 FS_LEASES=13,
 FS_DIR_NOTIFY=14,
 FS_LEASE_TIME=15,
 FS_DQSTATS=16,
 FS_XFS=17,
 FS_AIO_NR=18,
 FS_AIO_MAX_NR=19,
 FS_INOTIFY=20,
 FS_OCFS2=988,
};


enum {
 FS_DQ_LOOKUPS = 1,
 FS_DQ_DROPS = 2,
 FS_DQ_READS = 3,
 FS_DQ_WRITES = 4,
 FS_DQ_CACHE_HITS = 5,
 FS_DQ_ALLOCATED = 6,
 FS_DQ_FREE = 7,
 FS_DQ_SYNCS = 8,
 FS_DQ_WARNINGS = 9,
};




enum {
 DEV_CDROM=1,
 DEV_HWMON=2,
 DEV_PARPORT=3,
 DEV_RAID=4,
 DEV_MAC_HID=5,
 DEV_SCSI=6,
 DEV_IPMI=7,
};


enum {
 DEV_CDROM_INFO=1,
 DEV_CDROM_AUTOCLOSE=2,
 DEV_CDROM_AUTOEJECT=3,
 DEV_CDROM_DEBUG=4,
 DEV_CDROM_LOCK=5,
 DEV_CDROM_CHECK_MEDIA=6
};


enum {
 DEV_PARPORT_DEFAULT=-3
};


enum {
 DEV_RAID_SPEED_LIMIT_MIN=1,
 DEV_RAID_SPEED_LIMIT_MAX=2
};


enum {
 DEV_PARPORT_DEFAULT_TIMESLICE=1,
 DEV_PARPORT_DEFAULT_SPINTIME=2
};


enum {
 DEV_PARPORT_SPINTIME=1,
 DEV_PARPORT_BASE_ADDR=2,
 DEV_PARPORT_IRQ=3,
 DEV_PARPORT_DMA=4,
 DEV_PARPORT_MODES=5,
 DEV_PARPORT_DEVICES=6,
 DEV_PARPORT_AUTOPROBE=16
};


enum {
 DEV_PARPORT_DEVICES_ACTIVE=-3,
};


enum {
 DEV_PARPORT_DEVICE_TIMESLICE=1,
};


enum {
 DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES=1,
 DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES=2,
 DEV_MAC_HID_MOUSE_BUTTON_EMULATION=3,
 DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE=4,
 DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE=5,
 DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES=6
};


enum {
 DEV_SCSI_LOGGING_LEVEL=1,
};


enum {
 DEV_IPMI_POWEROFF_POWERCYCLE=1,
};


enum
{
 ABI_DEFHANDLER_COFF=1,
 ABI_DEFHANDLER_ELF=2,
 ABI_DEFHANDLER_LCALL7=3,
 ABI_DEFHANDLER_LIBCSO=4,
 ABI_TRACE=5,
 ABI_FAKE_UTSNAME=6,
};





struct ctl_table;
struct nsproxy;
struct ctl_table_root;

extern struct ctl_table_header *sysctl_head_next(struct ctl_table_header *prev);
extern struct ctl_table_header *__sysctl_head_next(struct nsproxy *namespaces,
      struct ctl_table_header *prev);
extern void sysctl_head_finish(struct ctl_table_header *prev);
extern int sysctl_perm(struct ctl_table_root *root,
  struct ctl_table *table, int op);

typedef struct ctl_table ctl_table;

typedef int ctl_handler (struct ctl_table *table, int *name, int nlen,
    void *oldval, size_t *oldlenp,
    void *newval, size_t newlen);

typedef int proc_handler (struct ctl_table *ctl, int write, struct file * filp,
     void *buffer, size_t *lenp, loff_t *ppos);

extern int proc_dostring(struct ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec(struct ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_minmax(struct ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_ms_jiffies(struct ctl_table *, int, struct file *,
        void *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(struct ctl_table *, int, struct file *,
      void *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int,
          struct file *, void *, size_t *, loff_t *);

extern int do_sysctl (int *name, int nlen,
        void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);

extern ctl_handler sysctl_data;
extern ctl_handler sysctl_string;
extern ctl_handler sysctl_intvec;
extern ctl_handler sysctl_jiffies;
extern ctl_handler sysctl_ms_jiffies;
# 1035 "linux-2.6.26/include/linux/sysctl.h"
struct ctl_table
{
 int ctl_name;
 const char *procname;
 void *data;
 int maxlen;
 mode_t mode;
 struct ctl_table *child;
 struct ctl_table *parent;
 proc_handler *proc_handler;
 ctl_handler *strategy;
 void *extra1;
 void *extra2;
};

struct ctl_table_root {
 struct list_head root_list;
 struct list_head header_list;
 struct list_head *(*lookup)(struct ctl_table_root *root,
        struct nsproxy *namespaces);
 int (*permissions)(struct ctl_table_root *root,
   struct nsproxy *namespaces, struct ctl_table *table);
};



struct ctl_table_header
{
 struct ctl_table *ctl_table;
 struct list_head ctl_entry;
 int used;
 struct completion *unregistering;
 struct ctl_table *ctl_table_arg;
 struct ctl_table_root *root;
};


struct ctl_path {
 const char *procname;
 int ctl_name;
};

void register_sysctl_root(struct ctl_table_root *root);
struct ctl_table_header *__register_sysctl_paths(
 struct ctl_table_root *root, struct nsproxy *namespaces,
 const struct ctl_path *path, struct ctl_table *table);
struct ctl_table_header *register_sysctl_table(struct ctl_table * table);
struct ctl_table_header *register_sysctl_paths(const struct ctl_path *path,
      struct ctl_table *table);

void unregister_sysctl_table(struct ctl_table_header * table);
int sysctl_check_table(struct nsproxy *namespaces, struct ctl_table *table);
# 26 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/proc_fs.h" 1




# 1 "linux-2.6.26/include/linux/fs.h" 1
# 9 "linux-2.6.26/include/linux/fs.h"
# 1 "linux-2.6.26/include/linux/limits.h" 1
# 10 "linux-2.6.26/include/linux/fs.h" 2
# 1 "linux-2.6.26/include/linux/ioctl.h" 1



# 1 "linux-2.6.26/include/asm/ioctl.h" 1
# 1 "linux-2.6.26/include/asm-generic/ioctl.h" 1
# 72 "linux-2.6.26/include/asm-generic/ioctl.h"
typedef  unsigned int   _GLOBAL_136_T; extern  _GLOBAL_136_T  global___invalid_size_argument_for_IOC[NUM_STACKS];    
# 1 "linux-2.6.26/include/asm/ioctl.h" 2
# 5 "linux-2.6.26/include/linux/ioctl.h" 2
# 11 "linux-2.6.26/include/linux/fs.h" 2
# 24 "linux-2.6.26/include/linux/fs.h"
typedef  int  _GLOBAL_137_T; extern  _GLOBAL_137_T  global_sysctl_nr_open[NUM_STACKS];   
# 36 "linux-2.6.26/include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};
typedef  struct files_stat_struct   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_files_stat[NUM_STACKS];    
extern int get_max_files(void);

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
typedef  struct inodes_stat_t   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_inodes_stat[NUM_STACKS];    

typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_leases_enable[NUM_STACKS]; extern  _GLOBAL_140_T  global_lease_break_time[NUM_STACKS];    
# 278 "linux-2.6.26/include/linux/fs.h"
# 1 "linux-2.6.26/include/linux/kdev_t.h" 1
# 21 "linux-2.6.26/include/linux/kdev_t.h"
static inline  __attribute__((always_inline)) int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline  __attribute__((always_inline)) u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline  __attribute__((always_inline)) int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline  __attribute__((always_inline)) dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline  __attribute__((always_inline)) int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline  __attribute__((always_inline)) dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline  __attribute__((always_inline)) int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline  __attribute__((always_inline)) u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline  __attribute__((always_inline)) unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline  __attribute__((always_inline)) unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}
# 279 "linux-2.6.26/include/linux/fs.h" 2
# 1 "linux-2.6.26/include/linux/dcache.h" 1



# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 5 "linux-2.6.26/include/linux/dcache.h" 2





struct nameidata;
struct path;
struct vfsmount;
# 32 "linux-2.6.26/include/linux/dcache.h"
struct qstr {
 unsigned int hash;
 unsigned int len;
 const unsigned char *name;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
typedef  struct dentry_stat_t   _GLOBAL_141_T; extern  _GLOBAL_141_T  global_dentry_stat[NUM_STACKS];    






static inline  __attribute__((always_inline)) unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline  __attribute__((always_inline)) unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


static inline  __attribute__((always_inline)) unsigned int
full_name_hash(const unsigned char *name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}

struct dcookie_struct;



struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 spinlock_t d_lock;
 struct inode *d_inode;





 struct hlist_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;

 struct list_head d_lru;



 union {
  struct list_head d_child;
   struct rcu_head d_rcu;
 } d_u;
 struct list_head d_subdirs;
 struct list_head d_alias;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 void *d_fsdata;



 int d_mounted;
 unsigned char d_iname[36];
};







enum dentry_d_lock_class
{
 DENTRY_D_LOCK_NORMAL,
 DENTRY_D_LOCK_NESTED
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, struct nameidata *);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
 char *(*d_dname)(struct dentry *, char *, int);
};
# 179 "linux-2.6.26/include/linux/dcache.h"
typedef  spinlock_t  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_dcache_lock[NUM_STACKS];   
typedef  seqlock_t  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_rename_lock[NUM_STACKS];   
# 198 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void __d_drop(struct dentry *dentry)
{
 if (!(dentry->d_flags & 0x0010)) {
  dentry->d_flags |= 0x0010;
  hlist_del_rcu(&dentry->d_hash);
 }
}

static inline  __attribute__((always_inline)) void d_drop(struct dentry *dentry)
{
 do { do { } while (0); (void)0; (void)(&global_dcache_lock[get_stack_id()]); } while (0);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
  __d_drop(dentry);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 do { do { } while (0); (void)0; (void)(&global_dcache_lock[get_stack_id()]); } while (0);
}

static inline  __attribute__((always_inline)) int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern struct dentry * d_materialise_unique(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_anon(struct inode *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_for_umount(struct super_block *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 263 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
# 277 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
{
 struct dentry *res;

 res = d_instantiate_unique(entry, inode);
 d_rehash(res != ((void *)0) ? res : entry);
 return res;
}


extern void d_move(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);
extern struct dentry * __d_lookup(struct dentry *, struct qstr *);
extern struct dentry * d_hash_and_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);




extern char *dynamic_dname(struct dentry *, char *, int, const char *, ...);

extern char *__d_path(const struct path *path, struct path *root, char *, int);
extern char *d_path(const struct path *, char *, int);
extern char *dentry_path(struct dentry *, char *, int);
# 321 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  do { if (__builtin_expect(!!(!((&dentry->d_count)->counter)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
  atomic_inc(&dentry->d_count);
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 339 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) int d_unhashed(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0010);
}

static inline  __attribute__((always_inline)) struct dentry *dget_parent(struct dentry *dentry)
{
 struct dentry *ret;

 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 ret = dget(dentry->d_parent);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return ret;
}

extern void dput(struct dentry *);

static inline  __attribute__((always_inline)) int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

typedef  int  _GLOBAL_144_T; extern  _GLOBAL_144_T  global_sysctl_vfs_cache_pressure[NUM_STACKS];   
# 280 "linux-2.6.26/include/linux/fs.h" 2
# 1 "linux-2.6.26/include/linux/namei.h" 1







struct vfsmount;

struct open_intent {
 int flags;
 int create_mode;
 struct file *file;
};

enum { MAX_NESTED_LINKS = 8 };

struct nameidata {
 struct path path;
 struct qstr last;
 unsigned int flags;
 int last_type;
 unsigned depth;
 char *saved_names[MAX_NESTED_LINKS + 1];


 union {
  struct open_intent open;
 } intent;
};




enum {LAST_NORM, LAST_ROOT, LAST_DOT, LAST_DOTDOT, LAST_BIND};
# 60 "linux-2.6.26/include/linux/namei.h"
extern int __user_walk(const char *, unsigned, struct nameidata *);
extern int __user_walk_fd(int dfd, const char *, unsigned, struct nameidata *);




extern int path_lookup(const char *, unsigned, struct nameidata *);
extern int vfs_path_lookup(struct dentry *, struct vfsmount *,
      const char *, unsigned int, struct nameidata *);

extern int __user_path_lookup_open(const char *, unsigned lookup_flags, struct nameidata *nd, int open_flags);
extern int path_lookup_open(int dfd, const char *name, unsigned lookup_flags, struct nameidata *, int open_flags);
extern struct file *lookup_instantiate_filp(struct nameidata *nd, struct dentry *dentry,
  int (*open)(struct inode *, struct file *));
extern struct file *nameidata_to_filp(struct nameidata *nd, int flags);
extern void release_open_intent(struct nameidata *);

extern struct dentry *lookup_one_len(const char *, struct dentry *, int);
extern struct dentry *lookup_one_noperm(const char *, struct dentry *);

extern int follow_down(struct vfsmount **, struct dentry **);
extern int follow_up(struct vfsmount **, struct dentry **);

extern struct dentry *lock_rename(struct dentry *, struct dentry *);
extern void unlock_rename(struct dentry *, struct dentry *);

static inline  __attribute__((always_inline)) void nd_set_link(struct nameidata *nd, char *path)
{
 nd->saved_names[nd->depth] = path;
}

static inline  __attribute__((always_inline)) char *nd_get_link(struct nameidata *nd)
{
 return nd->saved_names[nd->depth];
}
# 281 "linux-2.6.26/include/linux/fs.h" 2




# 1 "linux-2.6.26/include/linux/radix-tree.h" 1
# 41 "linux-2.6.26/include/linux/radix-tree.h"
static inline  __attribute__((always_inline)) void *radix_tree_ptr_to_indirect(void *ptr)
{
 return (void *)((unsigned long)ptr | 1);
}

static inline  __attribute__((always_inline)) void *radix_tree_indirect_to_ptr(void *ptr)
{
 return (void *)((unsigned long)ptr & ~1);
}

static inline  __attribute__((always_inline)) int radix_tree_is_indirect_ptr(void *ptr)
{
 return (int)((unsigned long)ptr & 1);
}






struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
# 134 "linux-2.6.26/include/linux/radix-tree.h"
static inline  __attribute__((always_inline)) void *radix_tree_deref_slot(void **pslot)
{
 void *ret = *pslot;
 if (__builtin_expect(!!(radix_tree_is_indirect_ptr(ret)), 0))
  ret = ((void *)-1UL);
 return ret;
}
# 149 "linux-2.6.26/include/linux/radix-tree.h"
static inline  __attribute__((always_inline)) void radix_tree_replace_slot(void **pslot, void *item)
{
 do { if (__builtin_expect(!!(radix_tree_is_indirect_ptr(item)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 ({ if (!__builtin_constant_p(item) || ((item) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (*pslot) = (item); });
}

int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
unsigned long radix_tree_next_hole(struct radix_tree_root *root,
    unsigned long index, unsigned long max_scan);
int radix_tree_preload(gfp_t gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);

static inline  __attribute__((always_inline)) void radix_tree_preload_end(void)
{
 do { } while (0);
}
# 286 "linux-2.6.26/include/linux/fs.h" 2





# 1 "linux-2.6.26/include/linux/semaphore.h" 1
# 16 "linux-2.6.26/include/linux/semaphore.h"
struct semaphore {
 spinlock_t lock;
 unsigned int count;
 struct list_head wait_list;
};
# 34 "linux-2.6.26/include/linux/semaphore.h"
static inline  __attribute__((always_inline)) void sema_init(struct semaphore *sem, int val)
{
 typedef  struct lock_class_key   _GLOBAL_145_T; static  _GLOBAL_145_T  global___key[NUM_STACKS];    
 *sem = (struct semaphore) { .lock = (spinlock_t) { .raw_lock = { }, }, .count = val, .wait_list = { &((*sem).wait_list), &((*sem).wait_list) }, };
 do { (void)(&global___key[get_stack_id()]); } while (0);
}




extern void down(struct semaphore *sem);
extern int down_interruptible(struct semaphore *sem);
extern int down_killable(struct semaphore *sem);
extern int down_trylock(struct semaphore *sem);
extern int down_timeout(struct semaphore *sem, long jiffies);
extern void up(struct semaphore *sem);
# 292 "linux-2.6.26/include/linux/fs.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 294 "linux-2.6.26/include/linux/fs.h" 2


struct export_operations;
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;

extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init(void);
extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init_early(void);
extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) files_init(unsigned long);

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *private);
# 347 "linux-2.6.26/include/linux/fs.h"
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
};




# 1 "linux-2.6.26/include/linux/quota.h" 1
# 44 "linux-2.6.26/include/linux/quota.h"
typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;
# 103 "linux-2.6.26/include/linux/quota.h"
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
# 124 "linux-2.6.26/include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};
# 142 "linux-2.6.26/include/linux/quota.h"
enum {
 QUOTA_NL_C_UNSPEC,
 QUOTA_NL_C_WARNING,
 __QUOTA_NL_C_MAX,
};


enum {
 QUOTA_NL_A_UNSPEC,
 QUOTA_NL_A_QTYPE,
 QUOTA_NL_A_EXCESS_ID,
 QUOTA_NL_A_WARNING,
 QUOTA_NL_A_DEV_MAJOR,
 QUOTA_NL_A_DEV_MINOR,
 QUOTA_NL_A_CAUSED_ID,
 __QUOTA_NL_A_MAX,
};
# 169 "linux-2.6.26/include/linux/quota.h"
# 1 "linux-2.6.26/include/linux/dqblk_xfs.h" 1
# 50 "linux-2.6.26/include/linux/dqblk_xfs.h"
typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
# 137 "linux-2.6.26/include/linux/dqblk_xfs.h"
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
# 170 "linux-2.6.26/include/linux/quota.h" 2
# 1 "linux-2.6.26/include/linux/dqblk_v1.h" 1
# 21 "linux-2.6.26/include/linux/dqblk_v1.h"
struct v1_mem_dqinfo {
};
# 171 "linux-2.6.26/include/linux/quota.h" 2
# 1 "linux-2.6.26/include/linux/dqblk_v2.h" 1
# 20 "linux-2.6.26/include/linux/dqblk_v2.h"
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};
# 172 "linux-2.6.26/include/linux/quota.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 174 "linux-2.6.26/include/linux/quota.h" 2

typedef  spinlock_t  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_dq_data_lock[NUM_STACKS];   
# 187 "linux-2.6.26/include/linux/quota.h"
struct mem_dqblk {
 __u32 dqb_bhardlimit;
 __u32 dqb_bsoftlimit;
 qsize_t dqb_curspace;
 __u32 dqb_ihardlimit;
 __u32 dqb_isoftlimit;
 __u32 dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 int dqi_fmt_id;

 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 qsize_t dqi_maxblimit;
 qsize_t dqi_maxilimit;
 union {
  struct v1_mem_dqinfo v1_i;
  struct v2_mem_dqinfo v2_i;
 } u;
};

struct super_block;





extern void mark_info_dirty(struct super_block *sb, int type);







struct dqstats {
 int lookups;
 int drops;
 int reads;
 int writes;
 int cache_hits;
 int allocated_dquots;
 int free_dquots;
 int syncs;
};

typedef  struct dqstats   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_dqstats[NUM_STACKS];    
# 253 "linux-2.6.26/include/linux/quota.h"
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct mutex dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 unsigned int dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 short dq_type;
 struct mem_dqblk dq_dqb;
};







struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*initialize) (struct inode *, int);
 int (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) (const struct inode *, unsigned long);
 int (*free_space) (struct inode *, qsize_t);
 int (*free_inode) (const struct inode *, unsigned long);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);
};


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, char *, int);
 int (*quota_off)(struct super_block *, int, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*set_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
 int (*set_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};
# 330 "linux-2.6.26/include/linux/quota.h"
struct quota_info {
 unsigned int flags;
 struct mutex dqio_mutex;
 struct mutex dqonoff_mutex;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};
# 353 "linux-2.6.26/include/linux/quota.h"
int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 369 "linux-2.6.26/include/linux/fs.h" 2
# 396 "linux-2.6.26/include/linux/fs.h"
enum positive_aop_returns {
 AOP_WRITEPAGE_ACTIVATE = 0x80000,
 AOP_TRUNCATED_PAGE = 0x80001,
};







struct page;
struct address_space;
struct writeback_control;

struct iov_iter {
 const struct iovec *iov;
 unsigned long nr_segs;
 size_t iov_offset;
 size_t count;
};

size_t iov_iter_copy_from_user_atomic(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
size_t iov_iter_copy_from_user(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
void iov_iter_advance(struct iov_iter *i, size_t bytes);
int iov_iter_fault_in_readable(struct iov_iter *i, size_t bytes);
size_t iov_iter_single_seg_count(struct iov_iter *i);

static inline  __attribute__((always_inline)) void iov_iter_init(struct iov_iter *i,
   const struct iovec *iov, unsigned long nr_segs,
   size_t count, size_t written)
{
 i->iov = iov;
 i->nr_segs = nr_segs;
 i->iov_offset = 0;
 i->count = count + written;

 iov_iter_advance(i, written);
}

static inline  __attribute__((always_inline)) size_t iov_iter_count(struct iov_iter *i)
{
 return i->count;
}


struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);
 void (*sync_page)(struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);





 int (*prepare_write)(struct file *, struct page *, unsigned, unsigned);
 int (*commit_write)(struct file *, struct page *, unsigned, unsigned);

 int (*write_begin)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);
 int (*write_end)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);


 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, gfp_t);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 int (*get_xip_mem)(struct address_space *, unsigned long, int,
      void **, unsigned long *);

 int (*migratepage) (struct address_space *,
   struct page *, struct page *);
 int (*launder_page) (struct page *);
};





int pagecache_write_begin(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);

int pagecache_write_end(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 rwlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct prio_tree_root i_mmap;
 struct list_head i_mmap_nonlinear;
 spinlock_t i_mmap_lock;
 unsigned int truncate_count;
 unsigned long nrpages;
 unsigned long writeback_index;
 const struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 struct address_space *assoc_mapping;
} __attribute__((aligned(sizeof(long)))) ;






struct block_device {
 dev_t bd_dev;
 struct inode * bd_inode;
 int bd_openers;
 struct mutex bd_mutex;
 struct semaphore bd_mount_sem;
 struct list_head bd_inodes;
 void * bd_holder;
 int bd_holders;



 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct list_head bd_list;
 struct backing_dev_info *bd_inode_backing_dev_info;






 unsigned long bd_private;
};
# 560 "linux-2.6.26/include/linux/fs.h"
int mapping_tagged(struct address_space *mapping, int tag);




static inline  __attribute__((always_inline)) int mapping_mapped(struct address_space *mapping)
{
 return !prio_tree_empty(&mapping->i_mmap) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline  __attribute__((always_inline)) int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
# 593 "linux-2.6.26/include/linux/fs.h"
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_sb_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 u64 i_version;
 loff_t i_size;



 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 blkcnt_t i_blocks;
 unsigned short i_bytes;
 umode_t i_mode;
 spinlock_t i_lock;
 struct mutex i_mutex;
 struct rw_semaphore i_alloc_sem;
 const struct inode_operations *i_op;
 const struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;



 struct list_head i_devices;
 union {
  struct pipe_inode_info *i_pipe;
  struct block_device *i_bdev;
  struct cdev *i_cdev;
 };
 int i_cindex;

 __u32 i_generation;
# 648 "linux-2.6.26/include/linux/fs.h"
 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;



 void *i_private;
};
# 671 "linux-2.6.26/include/linux/fs.h"
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_QUOTA
};

extern void inode_double_lock(struct inode *inode1, struct inode *inode2);
extern void inode_double_unlock(struct inode *inode1, struct inode *inode2);
# 693 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) loff_t i_size_read(const struct inode *inode)
{
# 712 "linux-2.6.26/include/linux/fs.h"
 return inode->i_size;

}






static inline  __attribute__((always_inline)) void i_size_write(struct inode *inode, loff_t i_size)
{
# 732 "linux-2.6.26/include/linux/fs.h"
 inode->i_size = i_size;

}

static inline  __attribute__((always_inline)) unsigned iminor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) unsigned imajor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 struct pid *pid;
 enum pid_type pid_type;
 uid_t uid, euid;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned int size;
 unsigned int async_size;


 unsigned int ra_pages;
 int mmap_miss;
 loff_t prev_pos;
};




static inline  __attribute__((always_inline)) int ra_has_index(struct file_ra_state *ra, unsigned long index)
{
 return (index >= ra->start &&
  index < ra->start + ra->size);
}




struct file {




 union {
  struct list_head fu_list;
  struct rcu_head fu_rcuhead;
 } f_u;
 struct path f_path;


 const struct file_operations *f_op;
 atomic_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 struct file_ra_state f_ra;

 u64 f_version;




 void *private_data;






 struct address_space *f_mapping;



};
typedef  spinlock_t  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_files_lock[NUM_STACKS];   
# 860 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void file_take_write(struct file *filp) {}
static inline  __attribute__((always_inline)) void file_release_write(struct file *filp) {}
static inline  __attribute__((always_inline)) void file_reset_write(struct file *filp) {}
static inline  __attribute__((always_inline)) void file_check_state(struct file *filp) {}
static inline  __attribute__((always_inline)) int file_check_writeable(struct file *filp)
{
 return 0;
}
# 895 "linux-2.6.26/include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 int (*fl_grant)(struct file_lock *, struct file_lock *, int);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
 int (*fl_mylease)(struct file_lock *, struct file_lock *);
 int (*fl_change)(struct file_lock **, int);
};


# 1 "linux-2.6.26/include/linux/nfs_fs_i.h" 1





# 1 "linux-2.6.26/include/linux/nfs.h" 1
# 39 "linux-2.6.26/include/linux/nfs.h"
 enum nfs_stat {
 NFS_OK = 0,
 NFSERR_PERM = 1,
 NFSERR_NOENT = 2,
 NFSERR_IO = 5,
 NFSERR_NXIO = 6,
 NFSERR_EAGAIN = 11,
 NFSERR_ACCES = 13,
 NFSERR_EXIST = 17,
 NFSERR_XDEV = 18,
 NFSERR_NODEV = 19,
 NFSERR_NOTDIR = 20,
 NFSERR_ISDIR = 21,
 NFSERR_INVAL = 22,
 NFSERR_FBIG = 27,
 NFSERR_NOSPC = 28,
 NFSERR_ROFS = 30,
 NFSERR_MLINK = 31,
 NFSERR_OPNOTSUPP = 45,
 NFSERR_NAMETOOLONG = 63,
 NFSERR_NOTEMPTY = 66,
 NFSERR_DQUOT = 69,
 NFSERR_STALE = 70,
 NFSERR_REMOTE = 71,
 NFSERR_WFLUSH = 99,
 NFSERR_BADHANDLE = 10001,
 NFSERR_NOT_SYNC = 10002,
 NFSERR_BAD_COOKIE = 10003,
 NFSERR_NOTSUPP = 10004,
 NFSERR_TOOSMALL = 10005,
 NFSERR_SERVERFAULT = 10006,
 NFSERR_BADTYPE = 10007,
 NFSERR_JUKEBOX = 10008,
 NFSERR_SAME = 10009,
 NFSERR_DENIED = 10010,
 NFSERR_EXPIRED = 10011,
 NFSERR_LOCKED = 10012,
 NFSERR_GRACE = 10013,
 NFSERR_FHEXPIRED = 10014,
 NFSERR_SHARE_DENIED = 10015,
 NFSERR_WRONGSEC = 10016,
 NFSERR_CLID_INUSE = 10017,
 NFSERR_RESOURCE = 10018,
 NFSERR_MOVED = 10019,
 NFSERR_NOFILEHANDLE = 10020,
 NFSERR_MINOR_VERS_MISMATCH = 10021,
 NFSERR_STALE_CLIENTID = 10022,
 NFSERR_STALE_STATEID = 10023,
 NFSERR_OLD_STATEID = 10024,
 NFSERR_BAD_STATEID = 10025,
 NFSERR_BAD_SEQID = 10026,
 NFSERR_NOT_SAME = 10027,
 NFSERR_LOCK_RANGE = 10028,
 NFSERR_SYMLINK = 10029,
 NFSERR_RESTOREFH = 10030,
 NFSERR_LEASE_MOVED = 10031,
 NFSERR_ATTRNOTSUPP = 10032,
 NFSERR_NO_GRACE = 10033,
 NFSERR_RECLAIM_BAD = 10034,
 NFSERR_RECLAIM_CONFLICT = 10035,
 NFSERR_BAD_XDR = 10036,
 NFSERR_LOCKS_HELD = 10037,
 NFSERR_OPENMODE = 10038,
 NFSERR_BADOWNER = 10039,
 NFSERR_BADCHAR = 10040,
 NFSERR_BADNAME = 10041,
 NFSERR_BAD_RANGE = 10042,
 NFSERR_LOCK_NOTSUPP = 10043,
 NFSERR_OP_ILLEGAL = 10044,
 NFSERR_DEADLOCK = 10045,
 NFSERR_FILE_OPEN = 10046,
 NFSERR_ADMIN_REVOKED = 10047,
 NFSERR_CB_PATH_DOWN = 10048,
 NFSERR_REPLAY_ME = 10049
};



enum nfs_ftype {
 NFNON = 0,
 NFREG = 1,
 NFDIR = 2,
 NFBLK = 3,
 NFCHR = 4,
 NFLNK = 5,
 NFSOCK = 6,
 NFBAD = 7,
 NFFIFO = 8
};


# 1 "linux-2.6.26/include/linux/sunrpc/msg_prot.h" 1
# 18 "linux-2.6.26/include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_authflavor_t;

enum rpc_auth_flavors {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
 RPC_AUTH_GSS = 6,
 RPC_AUTH_MAXFLAVOR = 8,

 RPC_AUTH_GSS_KRB5 = 390003,
 RPC_AUTH_GSS_KRB5I = 390004,
 RPC_AUTH_GSS_KRB5P = 390005,
 RPC_AUTH_GSS_LKEY = 390006,
 RPC_AUTH_GSS_LKEYI = 390007,
 RPC_AUTH_GSS_LKEYP = 390008,
 RPC_AUTH_GSS_SPKM = 390009,
 RPC_AUTH_GSS_SPKMI = 390010,
 RPC_AUTH_GSS_SPKMP = 390011,
};




enum rpc_msg_type {
 RPC_CALL = 0,
 RPC_REPLY = 1
};

enum rpc_reply_stat {
 RPC_MSG_ACCEPTED = 0,
 RPC_MSG_DENIED = 1
};

enum rpc_accept_stat {
 RPC_SUCCESS = 0,
 RPC_PROG_UNAVAIL = 1,
 RPC_PROG_MISMATCH = 2,
 RPC_PROC_UNAVAIL = 3,
 RPC_GARBAGE_ARGS = 4,
 RPC_SYSTEM_ERR = 5,

 RPC_DROP_REPLY = 60000,
};

enum rpc_reject_stat {
 RPC_MISMATCH = 0,
 RPC_AUTH_ERROR = 1
};

enum rpc_auth_stat {
 RPC_AUTH_OK = 0,
 RPC_AUTH_BADCRED = 1,
 RPC_AUTH_REJECTEDCRED = 2,
 RPC_AUTH_BADVERF = 3,
 RPC_AUTH_REJECTEDVERF = 4,
 RPC_AUTH_TOOWEAK = 5,

 RPCSEC_GSS_CREDPROBLEM = 13,
 RPCSEC_GSS_CTXPROBLEM = 14
};
# 102 "linux-2.6.26/include/linux/sunrpc/msg_prot.h"
typedef __be32 rpc_fraghdr;
# 131 "linux-2.6.26/include/linux/nfs.h" 2






struct nfs_fh {
 unsigned short size;
 unsigned char data[128];
};





static inline  __attribute__((always_inline)) int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
{
 return a->size != b->size || memcmp(a->data, b->data, a->size) != 0;
}

static inline  __attribute__((always_inline)) void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
{
 target->size = source->size;
 memcpy(target->data, source->data, source->size);
}
# 165 "linux-2.6.26/include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "linux-2.6.26/include/linux/nfs_fs_i.h" 2

struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 struct nlm_lockowner *owner;
 struct list_head list;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
 struct nfs4_lock_state *owner;
};
# 915 "linux-2.6.26/include/linux/fs.h" 2

struct file_lock {
 struct file_lock *fl_next;
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_pid;
 struct pid *fl_nspid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 unsigned char fl_flags;
 unsigned char fl_type;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

 struct file_lock_operations *fl_ops;
 struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
  struct nfs4_lock_info nfs4_fl;
  struct {
   struct list_head link;
   int state;
  } afs;
 } fl_u;
};
# 952 "linux-2.6.26/include/linux/fs.h"
# 1 "linux-2.6.26/include/linux/fcntl.h" 1



# 1 "linux-2.6.26/include/asm/fcntl.h" 1
# 1 "linux-2.6.26/include/asm-generic/fcntl.h" 1
# 117 "linux-2.6.26/include/asm-generic/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;

};
# 140 "linux-2.6.26/include/asm-generic/fcntl.h"
struct flock64 {
 short l_type;
 short l_whence;
 loff_t l_start;
 loff_t l_len;
 pid_t l_pid;

};
# 1 "linux-2.6.26/include/asm/fcntl.h" 2
# 5 "linux-2.6.26/include/linux/fcntl.h" 2
# 953 "linux-2.6.26/include/linux/fs.h" 2

extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);







extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern int do_sync_mapping_range(struct address_space *mapping, loff_t offset,
   loff_t endbyte, unsigned int flags);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void __locks_copy_lock(struct file_lock *, const struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern void posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file *, struct file_lock *);
extern int vfs_test_lock(struct file *, struct file_lock *);
extern int vfs_lock_file(struct file *, unsigned int, struct file_lock *, struct file_lock *);
extern int vfs_cancel_lock(struct file *filp, struct file_lock *fl);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int generic_setlease(struct file *, long, struct file_lock **);
extern int vfs_setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
extern struct seq_operations locks_seq_operations;

struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int __f_setown(struct file *filp, struct pid *, enum pid_type, int force);
extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern pid_t f_getown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
# 1025 "linux-2.6.26/include/linux/fs.h"
typedef  struct list_head   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_super_blocks[NUM_STACKS];    
typedef  spinlock_t  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_sb_lock[NUM_STACKS];   


struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 const struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 const struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct mutex s_lock;
 int s_count;
 int s_syncing;
 int s_need_sync_fs;
 atomic_t s_active;



 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct list_head s_dirty;
 struct list_head s_io;
 struct list_head s_more_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct block_device *s_bdev;
 struct mtd_info *s_mtd;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;





 struct mutex s_vfs_rename_mutex;



 u32 s_time_gran;





 char *s_subtype;





 char *s_options;
};

extern struct timespec current_fs_time(struct super_block *sb);




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};
# 1119 "linux-2.6.26/include/linux/fs.h"
extern void lock_super(struct super_block *);
extern void unlock_super(struct super_block *);




extern int vfs_permission(struct nameidata *, int);
extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *, int);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);




extern int file_permission(struct file *, int);
# 1164 "linux-2.6.26/include/linux/fs.h"
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, const char *, int, loff_t, u64, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned, unsigned long);
 int (*direct_access) (struct block_device *, sector_t,
      void **, unsigned long *);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 int (*getgeo)(struct block_device *, struct hd_geometry *);
 struct module *owner;
};
# 1197 "linux-2.6.26/include/linux/fs.h"
typedef struct {
 size_t written;
 size_t count;
 union {
  char * buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *, unsigned long, unsigned long);
# 1220 "linux-2.6.26/include/linux/fs.h"
struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 ssize_t (*aio_write) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *, fl_owner_t id);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*dir_notify)(struct file *filp, unsigned long arg);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
 int (*setlease)(struct file *, long, struct file_lock **);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int, struct nameidata *);
 struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 void (*put_link) (struct dentry *, struct nameidata *, void *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int, struct nameidata *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, const char *,const void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
 void (*truncate_range)(struct inode *, loff_t, loff_t);
 long (*fallocate)(struct inode *inode, int mode, loff_t offset,
     loff_t len);
};

struct seq_file;

ssize_t rw_copy_check_uvector(int type, const struct iovec * uvector,
    unsigned long nr_segs, unsigned long fast_segs,
    struct iovec *fast_pointer,
    struct iovec **ret_pointer);

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);

struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*drop_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 void (*write_super_lockfs) (struct super_block *);
 void (*unlockfs) (struct super_block *);
 int (*statfs) (struct dentry *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct super_block *);

 int (*show_options)(struct seq_file *, struct vfsmount *);
 int (*show_stats)(struct seq_file *, struct vfsmount *);




};
# 1384 "linux-2.6.26/include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline  __attribute__((always_inline)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline  __attribute__((always_inline)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}
# 1403 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void inc_nlink(struct inode *inode)
{
 inode->i_nlink++;
}

static inline  __attribute__((always_inline)) void inode_inc_link_count(struct inode *inode)
{
 inc_nlink(inode);
 mark_inode_dirty(inode);
}
# 1425 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void drop_nlink(struct inode *inode)
{
 inode->i_nlink--;
}
# 1438 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void clear_nlink(struct inode *inode)
{
 inode->i_nlink = 0;
}

static inline  __attribute__((always_inline)) void inode_dec_link_count(struct inode *inode)
{
 drop_nlink(inode);
 mark_inode_dirty(inode);
}
# 1457 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void inode_inc_iversion(struct inode *inode)
{
       do { do { } while (0); (void)0; (void)(&inode->i_lock); } while (0);
       inode->i_version++;
       do { do { } while (0); (void)0; (void)(&inode->i_lock); } while (0);
}

extern void touch_atime(struct vfsmount *mnt, struct dentry *dentry);
static inline  __attribute__((always_inline)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_path.mnt, file->f_path.dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);

struct file_system_type {
 const char *name;
 int fs_flags;
 int (*get_sb) (struct file_system_type *, int,
         const char *, void *, struct vfsmount *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;

 struct lock_class_key s_lock_key;
 struct lock_class_key s_umount_key;

 struct lock_class_key i_lock_key;
 struct lock_class_key i_mutex_key;
 struct lock_class_key i_mutex_dir_key;
 struct lock_class_key i_alloc_sem_key;
};

extern int get_sb_bdev(struct file_system_type *fs_type,
 int flags, const char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   void *data);
extern int get_sb_pseudo(struct file_system_type *, char *,
 const struct super_operations *ops, unsigned long,
 struct vfsmount *mnt);
extern int simple_set_mnt(struct vfsmount *mnt, struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);
void unnamed_dev_init(void);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount_data(struct file_system_type *, void *data);

extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *collect_mounts(struct vfsmount *, struct dentry *);
extern void drop_collected_mounts(struct vfsmount *);

extern int vfs_statfs(struct dentry *, struct kstatfs *);


typedef  struct kobject   _GLOBAL_151_T; extern  _GLOBAL_151_T  * global_fs_kobj[NUM_STACKS];    




extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);






static inline  __attribute__((always_inline)) int __mandatory_lock(struct inode *ino)
{
 return (ino->i_mode & (0002000 | 00010)) == 0002000;
}






static inline  __attribute__((always_inline)) int mandatory_lock(struct inode *ino)
{
 return ((ino)->i_sb->s_flags & (64)) && __mandatory_lock(ino);
}

static inline  __attribute__((always_inline)) int locks_verify_locked(struct inode *inode)
{
 if (mandatory_lock(inode))
  return locks_mandatory_locked(inode);
 return 0;
}

extern int rw_verify_area(int, struct file *, loff_t *, size_t);

static inline  __attribute__((always_inline)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && mandatory_lock(inode))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline  __attribute__((always_inline)) int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode);
 return 0;
}



extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
         struct file *filp);
extern long do_sys_open(int dfd, const char *filename, int flags,
   int mode);
extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init_early(void);
extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init(unsigned long);

typedef  struct kmem_cache   _GLOBAL_152_T; extern  _GLOBAL_152_T  * global_names_cachep[NUM_STACKS];    
# 1632 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void bd_forget(struct inode *inode) {}

typedef  const struct file_operations    _GLOBAL_153_T; extern  _GLOBAL_153_T  global_def_blk_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_154_T; extern  _GLOBAL_154_T  global_def_chr_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_155_T; extern  _GLOBAL_155_T  global_bad_sock_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_156_T; extern  _GLOBAL_156_T  global_def_fifo_fops[NUM_STACKS];     
# 1660 "linux-2.6.26/include/linux/fs.h"
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int register_chrdev(unsigned int, const char *,
      const struct file_operations *);
extern void unregister_chrdev(unsigned int, const char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern void chrdev_show(struct seq_file *,off_t);
# 1683 "linux-2.6.26/include/linux/fs.h"
extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

typedef  const struct file_operations    _GLOBAL_157_T; extern  _GLOBAL_157_T  global_read_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_158_T; extern  _GLOBAL_158_T  global_write_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_159_T; extern  _GLOBAL_159_T  global_rdwr_fifo_fops[NUM_STACKS];     

extern int fs_may_remount_ro(struct super_block *);
# 1710 "linux-2.6.26/include/linux/fs.h"
extern int invalidate_inodes(struct super_block *);
unsigned long __invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end,
     bool be_atomic);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);

static inline  __attribute__((always_inline)) unsigned long
invalidate_inode_pages(struct address_space *mapping)
{
 return invalidate_mapping_pages(mapping, 0, ~0UL);
}

static inline  __attribute__((always_inline)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_mapping_pages(inode->i_mapping, 0, -1);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern int wait_on_page_writeback_range(struct address_space *mapping,
    unsigned long start, unsigned long end);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end, int sync_mode);

extern long do_fsync(struct file *file, int datasync);
extern void sync_supers(void);
extern void sync_filesystems(int wait);
extern void __fsync_super(struct super_block *sb);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);



extern int notify_change(struct dentry *, struct iattr *);
extern int permission(struct inode *, int, struct nameidata *);
extern int generic_permission(struct inode *, int,
  int (*check_acl)(struct inode *, int));

extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline  __attribute__((always_inline)) void put_write_access(struct inode * inode)
{
 atomic_dec(&inode->i_writecount);
}
static inline  __attribute__((always_inline)) void allow_write_access(struct file *file)
{
 if (file)
  atomic_inc(&file->f_path.dentry->d_inode->i_writecount);
}
extern int do_pipe(int *);
extern struct file *create_read_pipe(struct file *f);
extern struct file *create_write_pipe(void);
extern void free_write_pipe(struct file *);

extern struct file *do_filp_open(int dfd, const char *pathname,
  int open_flag, int mode);
extern int may_open(struct nameidata *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);

# 1 "linux-2.6.26/include/linux/err.h" 1





# 1 "linux-2.6.26/include/asm/errno.h" 1
# 7 "linux-2.6.26/include/linux/err.h" 2
# 22 "linux-2.6.26/include/linux/err.h"
static inline  __attribute__((always_inline)) void *ERR_PTR(long error)
{
 return (void *) error;
}

static inline  __attribute__((always_inline)) long PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline  __attribute__((always_inline)) long IS_ERR(const void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}
# 44 "linux-2.6.26/include/linux/err.h"
static inline  __attribute__((always_inline)) void *ERR_CAST(const void *ptr)
{

 return (void *) ptr;
}
# 1788 "linux-2.6.26/include/linux/fs.h" 2


extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);

extern void inode_init_once(struct inode *);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern void generic_delete_inode(struct inode *inode);
extern void generic_drop_inode(struct inode *inode);

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern void unlock_new_inode(struct inode *);

extern void __iget(struct inode * inode);
extern void iget_failed(struct inode *);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int should_remove_suid(struct dentry *);
extern int remove_suid(struct dentry *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline  __attribute__((always_inline)) void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);





extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);
extern int sb_has_dirty_inodes(struct super_block *);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, const struct iovec *,
  unsigned long, loff_t);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
extern int generic_segment_checks(const struct iovec *iov,
  unsigned long *nr_segs, size_t *count, int access_flags);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_file_splice_write_nolock(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  size_t len, unsigned int flags);

extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t remote_llseek(struct file *file, loff_t offset, int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
# 1885 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}
# 1931 "linux-2.6.26/include/linux/fs.h"
typedef  const struct file_operations    _GLOBAL_160_T; extern  _GLOBAL_160_T  global_generic_ro_fops[NUM_STACKS];     



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, const char *symname, int len,
  gfp_t gfp_mask);
extern int page_symlink(struct inode *inode, const char *symname, int len);
typedef  const struct inode_operations    _GLOBAL_161_T; extern  _GLOBAL_161_T  global_page_symlink_inode_operations[NUM_STACKS];     
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);

extern int vfs_stat(char *, struct kstat *);
extern int vfs_lstat(char *, struct kstat *);
extern int vfs_stat_fd(int dfd, char *, struct kstat *);
extern int vfs_lstat_fd(int dfd, char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);

extern int do_vfs_ioctl(struct file *filp, unsigned int fd, unsigned int cmd,
      unsigned long arg);

extern void get_filesystem(struct file_system_type *fs);
extern void put_filesystem(struct file_system_type *fs);
extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int simple_sync_file(struct file *, struct dentry *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_prepare_write(struct file *file, struct page *page,
   unsigned offset, unsigned to);
extern int simple_write_begin(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned flags,
   struct page **pagep, void **fsdata);
extern int simple_write_end(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned copied,
   struct page *page, void *fsdata);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
typedef  const struct file_operations    _GLOBAL_162_T; extern  _GLOBAL_162_T  global_simple_dir_operations[NUM_STACKS];     
typedef  const struct inode_operations    _GLOBAL_163_T; extern  _GLOBAL_163_T  global_simple_dir_inode_operations[NUM_STACKS];     
struct tree_descr { char *name; const struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *to, size_t count,
   loff_t *ppos, const void *from, size_t available);
extern ssize_t memory_read_from_buffer(void *to, size_t count, loff_t *ppos,
   const void *from, size_t available);
# 2014 "linux-2.6.26/include/linux/fs.h"
extern int inode_change_ok(struct inode *, struct iattr *);
extern int inode_setattr(struct inode *, struct iattr *);

extern void file_update_time(struct file *file);

extern int generic_show_options(struct seq_file *m, struct vfsmount *mnt);
extern void save_mount_options(struct super_block *sb, char *options);

static inline  __attribute__((always_inline)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;

 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 res = dentry->d_parent->d_inode->i_ino;
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return res;
}







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, const char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

static inline  __attribute__((always_inline)) void simple_transaction_set(struct file *file, size_t n)
{
 struct simple_transaction_argresp *ar = file->private_data;

 do { if (__builtin_expect(!!(n > (((1UL) << 12) - sizeof(struct simple_transaction_argresp))), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);





 __asm__ __volatile__("": : :"memory");
 ar->size = n;
}
# 2095 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void 
__attribute__((format(printf, 1, 2))) __simple_attr_check_format(const char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       int (*get)(void *, u64 *), int (*set)(void *, u64),
       const char *fmt);
int simple_attr_release(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char *buf,
     size_t len, loff_t *ppos);
# 2122 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) char *alloc_secdata(void)
{
 return (char *)1;
}

static inline  __attribute__((always_inline)) void free_secdata(void *secdata)
{ }


struct ctl_table;
int proc_nr_files(struct ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos);

int get_filesystem_list(char * buf);
# 6 "linux-2.6.26/include/linux/proc_fs.h" 2

# 1 "linux-2.6.26/include/linux/magic.h" 1
# 8 "linux-2.6.26/include/linux/proc_fs.h" 2
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 9 "linux-2.6.26/include/linux/proc_fs.h" 2

struct net;
struct completion;
struct mm_struct;
# 30 "linux-2.6.26/include/linux/proc_fs.h"
enum {
 PROC_ROOT_INO = 1,
};
# 49 "linux-2.6.26/include/linux/proc_fs.h"
typedef int (read_proc_t)(char *page, char **start, off_t off,
     int count, int *eof, void *data);
typedef int (write_proc_t)(struct file *file, const char *buffer,
      unsigned long count, void *data);

struct proc_dir_entry {
 unsigned int low_ino;
 unsigned short namelen;
 const char *name;
 mode_t mode;
 nlink_t nlink;
 uid_t uid;
 gid_t gid;
 loff_t size;
 const struct inode_operations *proc_iops;
# 72 "linux-2.6.26/include/linux/proc_fs.h"
 const struct file_operations *proc_fops;
 struct module *owner;
 struct proc_dir_entry *next, *parent, *subdir;
 void *data;
 read_proc_t *read_proc;
 write_proc_t *write_proc;
 atomic_t count;
 int pde_users;
 spinlock_t pde_unload_lock;
 struct completion *pde_unload_completion;
};

struct kcore_list {
 struct kcore_list *next;
 unsigned long addr;
 size_t size;
};

struct vmcore {
 struct list_head list;
 unsigned long long paddr;
 unsigned long long size;
 loff_t offset;
};
# 210 "linux-2.6.26/include/linux/proc_fs.h"
static inline  __attribute__((always_inline)) void proc_net_remove(struct net *net, const char *name) {}

static inline  __attribute__((always_inline)) void proc_flush_task(struct task_struct *task)
{
}

static inline  __attribute__((always_inline)) struct proc_dir_entry *create_proc_entry(const char *name,
 mode_t mode, struct proc_dir_entry *parent) { return ((void *)0); }
static inline  __attribute__((always_inline)) struct proc_dir_entry *proc_create(const char *name,
 mode_t mode, struct proc_dir_entry *parent,
 const struct file_operations *proc_fops)
{
 return ((void *)0);
}
static inline  __attribute__((always_inline)) struct proc_dir_entry *proc_create_data(const char *name,
 mode_t mode, struct proc_dir_entry *parent,
 const struct file_operations *proc_fops, void *data)
{
 return ((void *)0);
}


static inline  __attribute__((always_inline)) struct proc_dir_entry *proc_symlink(const char *name,
  struct proc_dir_entry *parent,const char *dest) {return ((void *)0);}
static inline  __attribute__((always_inline)) struct proc_dir_entry *proc_mkdir(const char *name,
 struct proc_dir_entry *parent) {return ((void *)0);}

static inline  __attribute__((always_inline)) struct proc_dir_entry *create_proc_read_entry(const char *name,
 mode_t mode, struct proc_dir_entry *base,
 read_proc_t *read_proc, void * data) { return ((void *)0); }

struct tty_driver;
static inline  __attribute__((always_inline)) void proc_tty_register_driver(struct tty_driver *driver) {};
static inline  __attribute__((always_inline)) void proc_tty_unregister_driver(struct tty_driver *driver) {};

static inline  __attribute__((always_inline)) int pid_ns_prepare_proc(struct pid_namespace *ns)
{
 return 0;
}

static inline  __attribute__((always_inline)) void pid_ns_release_proc(struct pid_namespace *ns)
{
}

static inline  __attribute__((always_inline)) void set_mm_exe_file(struct mm_struct *mm,
       struct file *new_exe_file)
{}

static inline  __attribute__((always_inline)) struct file *get_mm_exe_file(struct mm_struct *mm)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) void dup_mm_exe_file(struct mm_struct *oldmm,
              struct mm_struct *newmm)
{}




static inline  __attribute__((always_inline)) void kclist_add(struct kcore_list *new, void *addr, size_t size)
{
}




union proc_op {
 int (*proc_get_link)(struct inode *, struct path *);
 int (*proc_read)(struct task_struct *task, char *page);
 int (*proc_show)(struct seq_file *m,
  struct pid_namespace *ns, struct pid *pid,
  struct task_struct *task);
};

struct proc_inode {
 struct pid *pid;
 int fd;
 union proc_op op;
 struct proc_dir_entry *pde;
 struct inode vfs_inode;
};

static inline  __attribute__((always_inline)) struct proc_inode *PROC_I(const struct inode *inode)
{
 return ({ const typeof( ((struct proc_inode *)0)->vfs_inode ) *__mptr = (inode); (struct proc_inode *)( (char *)__mptr - __builtin_offsetof(struct proc_inode,vfs_inode) );});
}

static inline  __attribute__((always_inline)) struct proc_dir_entry *PDE(const struct inode *inode)
{
 return PROC_I(inode)->pde;
}

static inline  __attribute__((always_inline)) struct net *PDE_NET(struct proc_dir_entry *pde)
{
 return pde->parent->data;
}

struct net *get_proc_net(const struct inode *inode);

struct proc_maps_private {
 struct pid *pid;
 struct task_struct *task;



};
# 27 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/security.h" 1
# 26 "linux-2.6.26/include/linux/security.h"
# 1 "linux-2.6.26/include/linux/binfmts.h" 1





struct pt_regs;
# 27 "linux-2.6.26/include/linux/binfmts.h"
struct linux_binprm{
 char buf[128];




 struct page *page[32];

 struct mm_struct *mm;
 unsigned long p;
 unsigned int sh_bang:1,
       misc_bang:1;
 struct file * file;
 int e_uid, e_gid;
 kernel_cap_t cap_inheritable, cap_permitted;
 bool cap_effective;
 void *security;
 int argc, envc;
 char * filename;
 char * interp;


 unsigned interp_flags;
 unsigned interp_data;
 unsigned long loader, exec;
};
# 66 "linux-2.6.26/include/linux/binfmts.h"
struct linux_binfmt {
 struct list_head lh;
 struct module *module;
 int (*load_binary)(struct linux_binprm *, struct pt_regs * regs);
 int (*load_shlib)(struct file *);
 int (*core_dump)(long signr, struct pt_regs *regs, struct file *file, unsigned long limit);
 unsigned long min_coredump;
 int hasvdso;
};

extern int register_binfmt(struct linux_binfmt *);
extern void unregister_binfmt(struct linux_binfmt *);

extern int prepare_binprm(struct linux_binprm *);
extern int remove_arg_zero(struct linux_binprm *);
extern int search_binary_handler(struct linux_binprm *,struct pt_regs *);
extern int flush_old_exec(struct linux_binprm * bprm);

typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_suid_dumpable[NUM_STACKS];   
# 94 "linux-2.6.26/include/linux/binfmts.h"
extern int setup_arg_pages(struct linux_binprm * bprm,
      unsigned long stack_top,
      int executable_stack);
extern int bprm_mm_init(struct linux_binprm *bprm);
extern int copy_strings_kernel(int argc,char ** argv,struct linux_binprm *bprm);
extern void compute_creds(struct linux_binprm *binprm);
extern int do_coredump(long signr, int exit_code, struct pt_regs * regs);
extern int set_binfmt(struct linux_binfmt *new);
extern void free_bprm(struct linux_binprm *);
# 27 "linux-2.6.26/include/linux/security.h" 2



# 1 "linux-2.6.26/include/linux/shm.h" 1
# 28 "linux-2.6.26/include/linux/shm.h"
# 1 "linux-2.6.26/include/asm/shmparam.h" 1
# 29 "linux-2.6.26/include/linux/shm.h" 2



struct shmid_ds {
 struct ipc_perm shm_perm;
 int shm_segsz;
 __kernel_time_t shm_atime;
 __kernel_time_t shm_dtime;
 __kernel_time_t shm_ctime;
 __kernel_ipc_pid_t shm_cpid;
 __kernel_ipc_pid_t shm_lpid;
 unsigned short shm_nattch;
 unsigned short shm_unused;
 void *shm_unused2;
 void *shm_unused3;
};


# 1 "linux-2.6.26/include/asm/shmbuf.h" 1
# 17 "linux-2.6.26/include/asm/shmbuf.h"
struct shmid64_ds {
 struct ipc64_perm shm_perm;
 size_t shm_segsz;
 __kernel_time_t shm_atime;



 __kernel_time_t shm_dtime;



 __kernel_time_t shm_ctime;



 __kernel_pid_t shm_cpid;
 __kernel_pid_t shm_lpid;
 unsigned long shm_nattch;
 unsigned long __unused4;
 unsigned long __unused5;
};

struct shminfo64 {
 unsigned long shmmax;
 unsigned long shmmin;
 unsigned long shmmni;
 unsigned long shmseg;
 unsigned long shmall;
 unsigned long __unused1;
 unsigned long __unused2;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 48 "linux-2.6.26/include/linux/shm.h" 2
# 68 "linux-2.6.26/include/linux/shm.h"
struct shminfo {
 int shmmax;
 int shmmin;
 int shmmni;
 int shmseg;
 int shmall;
};

struct shm_info {
 int used_ids;
 unsigned long shm_tot;
 unsigned long shm_rss;
 unsigned long shm_swp;
 unsigned long swap_attempts;
 unsigned long swap_successes;
};


struct shmid_kernel
{
 struct kern_ipc_perm shm_perm;
 struct file * shm_file;
 unsigned long shm_nattch;
 unsigned long shm_segsz;
 time_t shm_atim;
 time_t shm_dtim;
 time_t shm_ctim;
 pid_t shm_cprid;
 pid_t shm_lprid;
 struct user_struct *mlock_user;
};
# 110 "linux-2.6.26/include/linux/shm.h"
static inline  __attribute__((always_inline)) long do_shmat(int shmid, char *shmaddr,
    int shmflg, unsigned long *addr)
{
 return -38;
}
static inline  __attribute__((always_inline)) int is_file_shm_hugepages(struct file *file)
{
 return 0;
}
# 31 "linux-2.6.26/include/linux/security.h" 2
# 1 "linux-2.6.26/include/linux/msg.h" 1
# 15 "linux-2.6.26/include/linux/msg.h"
struct msqid_ds {
 struct ipc_perm msg_perm;
 struct msg *msg_first;
 struct msg *msg_last;
 __kernel_time_t msg_stime;
 __kernel_time_t msg_rtime;
 __kernel_time_t msg_ctime;
 unsigned long msg_lcbytes;
 unsigned long msg_lqbytes;
 unsigned short msg_cbytes;
 unsigned short msg_qnum;
 unsigned short msg_qbytes;
 __kernel_ipc_pid_t msg_lspid;
 __kernel_ipc_pid_t msg_lrpid;
};


# 1 "linux-2.6.26/include/asm/msgbuf.h" 1
# 16 "linux-2.6.26/include/asm/msgbuf.h"
struct msqid64_ds {
 struct ipc64_perm msg_perm;
 __kernel_time_t msg_stime;



 __kernel_time_t msg_rtime;



 __kernel_time_t msg_ctime;



 unsigned long msg_cbytes;
 unsigned long msg_qnum;
 unsigned long msg_qbytes;
 __kernel_pid_t msg_lspid;
 __kernel_pid_t msg_lrpid;
 unsigned long __unused4;
 unsigned long __unused5;
};
# 33 "linux-2.6.26/include/linux/msg.h" 2


struct msgbuf {
 long mtype;
 char mtext[1];
};


struct msginfo {
 int msgpool;
 int msgmap;
 int msgmax;
 int msgmnb;
 int msgmni;
 int msgssz;
 int msgtql;
 unsigned short msgseg;
};
# 78 "linux-2.6.26/include/linux/msg.h"
struct msg_msg {
 struct list_head m_list;
 long m_type;
 int m_ts;
 struct msg_msgseg* next;
 void *security;

};


struct msg_queue {
 struct kern_ipc_perm q_perm;
 time_t q_stime;
 time_t q_rtime;
 time_t q_ctime;
 unsigned long q_cbytes;
 unsigned long q_qnum;
 unsigned long q_qbytes;
 pid_t q_lspid;
 pid_t q_lrpid;

 struct list_head q_messages;
 struct list_head q_receivers;
 struct list_head q_senders;
};


extern long do_msgsnd(int msqid, long mtype, void *mtext,
   size_t msgsz, int msgflg);
extern long do_msgrcv(int msqid, long *pmtype, void *mtext,
   size_t msgsz, long msgtyp, int msgflg);
# 32 "linux-2.6.26/include/linux/security.h" 2

# 1 "linux-2.6.26/include/linux/key.h" 1
# 23 "linux-2.6.26/include/linux/key.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 24 "linux-2.6.26/include/linux/key.h" 2




typedef int32_t key_serial_t;


typedef uint32_t key_perm_t;

struct key;
# 34 "linux-2.6.26/include/linux/security.h" 2
# 1 "linux-2.6.26/include/linux/xfrm.h" 1
# 13 "linux-2.6.26/include/linux/xfrm.h"
typedef union
{
 __be32 a4;
 __be32 a6[4];
} xfrm_address_t;





struct xfrm_id
{
 xfrm_address_t daddr;
 __be32 spi;
 __u8 proto;
};

struct xfrm_sec_ctx {
 __u8 ctx_doi;
 __u8 ctx_alg;
 __u16 ctx_len;
 __u32 ctx_sid;
 char ctx_str[0];
};
# 48 "linux-2.6.26/include/linux/xfrm.h"
struct xfrm_selector
{
 xfrm_address_t daddr;
 xfrm_address_t saddr;
 __be16 dport;
 __be16 dport_mask;
 __be16 sport;
 __be16 sport_mask;
 __u16 family;
 __u8 prefixlen_d;
 __u8 prefixlen_s;
 __u8 proto;
 int ifindex;
 uid_t user;
};



struct xfrm_lifetime_cfg
{
 __u64 soft_byte_limit;
 __u64 hard_byte_limit;
 __u64 soft_packet_limit;
 __u64 hard_packet_limit;
 __u64 soft_add_expires_seconds;
 __u64 hard_add_expires_seconds;
 __u64 soft_use_expires_seconds;
 __u64 hard_use_expires_seconds;
};

struct xfrm_lifetime_cur
{
 __u64 bytes;
 __u64 packets;
 __u64 add_time;
 __u64 use_time;
};

struct xfrm_replay_state
{
 __u32 oseq;
 __u32 seq;
 __u32 bitmap;
};

struct xfrm_algo {
 char alg_name[64];
 unsigned int alg_key_len;
 char alg_key[0];
};

struct xfrm_algo_aead {
 char alg_name[64];
 unsigned int alg_key_len;
 unsigned int alg_icv_len;
 char alg_key[0];
};

struct xfrm_stats {
 __u32 replay_window;
 __u32 replay;
 __u32 integrity_failed;
};

enum
{
 XFRM_POLICY_TYPE_MAIN = 0,
 XFRM_POLICY_TYPE_SUB = 1,
 XFRM_POLICY_TYPE_MAX = 2,
 XFRM_POLICY_TYPE_ANY = 255
};

enum
{
 XFRM_POLICY_IN = 0,
 XFRM_POLICY_OUT = 1,
 XFRM_POLICY_FWD = 2,
 XFRM_POLICY_MASK = 3,
 XFRM_POLICY_MAX = 3
};

enum
{
 XFRM_SHARE_ANY,
 XFRM_SHARE_SESSION,
 XFRM_SHARE_USER,
 XFRM_SHARE_UNIQUE
};
# 145 "linux-2.6.26/include/linux/xfrm.h"
enum {
 XFRM_MSG_BASE = 0x10,

 XFRM_MSG_NEWSA = 0x10,

 XFRM_MSG_DELSA,

 XFRM_MSG_GETSA,


 XFRM_MSG_NEWPOLICY,

 XFRM_MSG_DELPOLICY,

 XFRM_MSG_GETPOLICY,


 XFRM_MSG_ALLOCSPI,

 XFRM_MSG_ACQUIRE,

 XFRM_MSG_EXPIRE,


 XFRM_MSG_UPDPOLICY,

 XFRM_MSG_UPDSA,


 XFRM_MSG_POLEXPIRE,


 XFRM_MSG_FLUSHSA,

 XFRM_MSG_FLUSHPOLICY,


 XFRM_MSG_NEWAE,

 XFRM_MSG_GETAE,


 XFRM_MSG_REPORT,


 XFRM_MSG_MIGRATE,


 XFRM_MSG_NEWSADINFO,

 XFRM_MSG_GETSADINFO,


 XFRM_MSG_NEWSPDINFO,

 XFRM_MSG_GETSPDINFO,

 __XFRM_MSG_MAX
};
# 212 "linux-2.6.26/include/linux/xfrm.h"
struct xfrm_user_sec_ctx {
 __u16 len;
 __u16 exttype;
 __u8 ctx_alg;
 __u8 ctx_doi;
 __u16 ctx_len;
};

struct xfrm_user_tmpl {
 struct xfrm_id id;
 __u16 family;
 xfrm_address_t saddr;
 __u32 reqid;
 __u8 mode;
 __u8 share;
 __u8 optional;
 __u32 aalgos;
 __u32 ealgos;
 __u32 calgos;
};

struct xfrm_encap_tmpl {
 __u16 encap_type;
 __be16 encap_sport;
 __be16 encap_dport;
 xfrm_address_t encap_oa;
};


enum xfrm_ae_ftype_t {
 XFRM_AE_UNSPEC,
 XFRM_AE_RTHR=1,
 XFRM_AE_RVAL=2,
 XFRM_AE_LVAL=4,
 XFRM_AE_ETHR=8,
 XFRM_AE_CR=16,
 XFRM_AE_CE=32,
 XFRM_AE_CU=64,
 __XFRM_AE_MAX


};

struct xfrm_userpolicy_type {
 __u8 type;
 __u16 reserved1;
 __u8 reserved2;
};


enum xfrm_attr_type_t {
 XFRMA_UNSPEC,
 XFRMA_ALG_AUTH,
 XFRMA_ALG_CRYPT,
 XFRMA_ALG_COMP,
 XFRMA_ENCAP,
 XFRMA_TMPL,
 XFRMA_SA,
 XFRMA_POLICY,
 XFRMA_SEC_CTX,
 XFRMA_LTIME_VAL,
 XFRMA_REPLAY_VAL,
 XFRMA_REPLAY_THRESH,
 XFRMA_ETIMER_THRESH,
 XFRMA_SRCADDR,
 XFRMA_COADDR,
 XFRMA_LASTUSED,
 XFRMA_POLICY_TYPE,
 XFRMA_MIGRATE,
 XFRMA_ALG_AEAD,
 __XFRMA_MAX


};

enum xfrm_sadattr_type_t {
 XFRMA_SAD_UNSPEC,
 XFRMA_SAD_CNT,
 XFRMA_SAD_HINFO,
 __XFRMA_SAD_MAX


};

struct xfrmu_sadhinfo {
 __u32 sadhcnt;
 __u32 sadhmcnt;
};

enum xfrm_spdattr_type_t {
 XFRMA_SPD_UNSPEC,
 XFRMA_SPD_INFO,
 XFRMA_SPD_HINFO,
 __XFRMA_SPD_MAX


};

struct xfrmu_spdinfo {
 __u32 incnt;
 __u32 outcnt;
 __u32 fwdcnt;
 __u32 inscnt;
 __u32 outscnt;
 __u32 fwdscnt;
};

struct xfrmu_spdhinfo {
 __u32 spdhcnt;
 __u32 spdhmcnt;
};

struct xfrm_usersa_info {
 struct xfrm_selector sel;
 struct xfrm_id id;
 xfrm_address_t saddr;
 struct xfrm_lifetime_cfg lft;
 struct xfrm_lifetime_cur curlft;
 struct xfrm_stats stats;
 __u32 seq;
 __u32 reqid;
 __u16 family;
 __u8 mode;
 __u8 replay_window;
 __u8 flags;






};

struct xfrm_usersa_id {
 xfrm_address_t daddr;
 __be32 spi;
 __u16 family;
 __u8 proto;
};

struct xfrm_aevent_id {
 struct xfrm_usersa_id sa_id;
 xfrm_address_t saddr;
 __u32 flags;
 __u32 reqid;
};

struct xfrm_userspi_info {
 struct xfrm_usersa_info info;
 __u32 min;
 __u32 max;
};

struct xfrm_userpolicy_info {
 struct xfrm_selector sel;
 struct xfrm_lifetime_cfg lft;
 struct xfrm_lifetime_cur curlft;
 __u32 priority;
 __u32 index;
 __u8 dir;
 __u8 action;


 __u8 flags;



 __u8 share;
};

struct xfrm_userpolicy_id {
 struct xfrm_selector sel;
 __u32 index;
 __u8 dir;
};

struct xfrm_user_acquire {
 struct xfrm_id id;
 xfrm_address_t saddr;
 struct xfrm_selector sel;
 struct xfrm_userpolicy_info policy;
 __u32 aalgos;
 __u32 ealgos;
 __u32 calgos;
 __u32 seq;
};

struct xfrm_user_expire {
 struct xfrm_usersa_info state;
 __u8 hard;
};

struct xfrm_user_polexpire {
 struct xfrm_userpolicy_info pol;
 __u8 hard;
};

struct xfrm_usersa_flush {
 __u8 proto;
};

struct xfrm_user_report {
 __u8 proto;
 struct xfrm_selector sel;
};

struct xfrm_user_migrate {
 xfrm_address_t old_daddr;
 xfrm_address_t old_saddr;
 xfrm_address_t new_daddr;
 xfrm_address_t new_saddr;
 __u8 proto;
 __u8 mode;
 __u16 reserved;
 __u32 reqid;
 __u16 old_family;
 __u16 new_family;
};
# 440 "linux-2.6.26/include/linux/xfrm.h"
enum xfrm_nlgroups {
 XFRMNLGRP_NONE,

 XFRMNLGRP_ACQUIRE,

 XFRMNLGRP_EXPIRE,

 XFRMNLGRP_SA,

 XFRMNLGRP_POLICY,

 XFRMNLGRP_AEVENTS,

 XFRMNLGRP_REPORT,

 XFRMNLGRP_MIGRATE,

 __XFRMNLGRP_MAX
};
# 35 "linux-2.6.26/include/linux/security.h" 2
# 1 "linux-2.6.26/include/net/flow.h" 1
# 10 "linux-2.6.26/include/net/flow.h"
# 1 "linux-2.6.26/include/linux/in6.h" 1
# 30 "linux-2.6.26/include/linux/in6.h"
struct in6_addr
{
 union
 {
  __u8 u6_addr8[16];
  __be16 u6_addr16[8];
  __be32 u6_addr32[4];
 } in6_u;



};





typedef  const struct in6_addr    _GLOBAL_165_T; extern  _GLOBAL_165_T  global_in6addr_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_166_T; extern  _GLOBAL_166_T  global_in6addr_loopback[NUM_STACKS];     


typedef  const struct in6_addr    _GLOBAL_167_T; extern  _GLOBAL_167_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     


typedef  const struct in6_addr    _GLOBAL_168_T; extern  _GLOBAL_168_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     




struct sockaddr_in6 {
 unsigned short int sin6_family;
 __be16 sin6_port;
 __be32 sin6_flowinfo;
 struct in6_addr sin6_addr;
 __u32 sin6_scope_id;
};

struct ipv6_mreq {

 struct in6_addr ipv6mr_multiaddr;


 int ipv6mr_ifindex;
};



struct in6_flowlabel_req
{
 struct in6_addr flr_dst;
 __be32 flr_label;
 __u8 flr_action;
 __u8 flr_share;
 __u16 flr_flags;
 __u16 flr_expires;
 __u16 flr_linger;
 __u32 __flr_pad;

};
# 11 "linux-2.6.26/include/net/flow.h" 2
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 12 "linux-2.6.26/include/net/flow.h" 2

struct flowi {
 int oif;
 int iif;
 __u32 mark;

 union {
  struct {
   __be32 daddr;
   __be32 saddr;
   __u8 tos;
   __u8 scope;
  } ip4_u;

  struct {
   struct in6_addr daddr;
   struct in6_addr saddr;
   __be32 flowlabel;
  } ip6_u;

  struct {
   __le16 daddr;
   __le16 saddr;
   __u8 scope;
  } dn_u;
 } nl_u;
# 49 "linux-2.6.26/include/net/flow.h"
 __u8 proto;
 __u8 flags;
 union {
  struct {
   __be16 sport;
   __be16 dport;
  } ports;

  struct {
   __u8 type;
   __u8 code;
  } icmpt;

  struct {
   __le16 sport;
   __le16 dport;
  } dnports;

  __be32 spi;

  struct {
   __u8 type;
  } mht;
 } uli_u;






 __u32 secid;
} __attribute__((__aligned__(64/8))) ;





struct sock;
typedef int (*flow_resolve_t)(struct flowi *key, u16 family, u8 dir,
          void **objp, atomic_t **obj_refp);

extern void *flow_cache_lookup(struct flowi *key, u16 family, u8 dir,
           flow_resolve_t resolver);
extern void flow_cache_flush(void);
typedef  atomic_t  _GLOBAL_169_T; extern  _GLOBAL_169_T  global_flow_cache_genid[NUM_STACKS];   

static inline  __attribute__((always_inline)) int flow_cache_uli_match(struct flowi *fl1, struct flowi *fl2)
{
 return (fl1->proto == fl2->proto &&
  !memcmp(&fl1->uli_u, &fl2->uli_u, sizeof(fl1->uli_u)));
}
# 36 "linux-2.6.26/include/linux/security.h" 2




struct ctl_table;
struct audit_krule;





extern int cap_capable(struct task_struct *tsk, int cap);
extern int cap_settime(struct timespec *ts, struct timezone *tz);
extern int cap_ptrace(struct task_struct *parent, struct task_struct *child);
extern int cap_capget(struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_capset_check(struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern void cap_capset_set(struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_bprm_set_security(struct linux_binprm *bprm);
extern void cap_bprm_apply_creds(struct linux_binprm *bprm, int unsafe);
extern int cap_bprm_secureexec(struct linux_binprm *bprm);
extern int cap_inode_setxattr(struct dentry *dentry, const char *name,
         const void *value, size_t size, int flags);
extern int cap_inode_removexattr(struct dentry *dentry, const char *name);
extern int cap_inode_need_killpriv(struct dentry *dentry);
extern int cap_inode_killpriv(struct dentry *dentry);
extern int cap_task_post_setuid(uid_t old_ruid, uid_t old_euid, uid_t old_suid, int flags);
extern void cap_task_reparent_to_init(struct task_struct *p);
extern int cap_task_prctl(int option, unsigned long arg2, unsigned long arg3,
     unsigned long arg4, unsigned long arg5, long *rc_p);
extern int cap_task_setscheduler(struct task_struct *p, int policy, struct sched_param *lp);
extern int cap_task_setioprio(struct task_struct *p, int ioprio);
extern int cap_task_setnice(struct task_struct *p, int nice);
extern int cap_syslog(int type);
extern int cap_vm_enough_memory(struct mm_struct *mm, long pages);

struct msghdr;
struct sk_buff;
struct sock;
struct sockaddr;
struct socket;
struct flowi;
struct dst_entry;
struct xfrm_selector;
struct xfrm_policy;
struct xfrm_state;
struct xfrm_user_sec_ctx;

extern int cap_netlink_send(struct sock *sk, struct sk_buff *skb);
extern int cap_netlink_recv(struct sk_buff *skb, int cap);

typedef  unsigned long   _GLOBAL_170_T; extern  _GLOBAL_170_T  global_mmap_min_addr[NUM_STACKS];    
# 103 "linux-2.6.26/include/linux/security.h"
struct nfsctl_arg;
struct sched_param;
struct swap_info_struct;
struct request_sock;
# 1737 "linux-2.6.26/include/linux/security.h"
struct security_mnt_opts {
};

static inline  __attribute__((always_inline)) void security_init_mnt_opts(struct security_mnt_opts *opts)
{
}

static inline  __attribute__((always_inline)) void security_free_mnt_opts(struct security_mnt_opts *opts)
{
}






static inline  __attribute__((always_inline)) int security_init(void)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_ptrace(struct task_struct *parent, struct task_struct *child)
{
 return cap_ptrace(parent, child);
}

static inline  __attribute__((always_inline)) int security_capget(struct task_struct *target,
       kernel_cap_t *effective,
       kernel_cap_t *inheritable,
       kernel_cap_t *permitted)
{
 return cap_capget(target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) int security_capset_check(struct task_struct *target,
      kernel_cap_t *effective,
      kernel_cap_t *inheritable,
      kernel_cap_t *permitted)
{
 return cap_capset_check(target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) void security_capset_set(struct task_struct *target,
     kernel_cap_t *effective,
     kernel_cap_t *inheritable,
     kernel_cap_t *permitted)
{
 cap_capset_set(target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) int security_capable(struct task_struct *tsk, int cap)
{
 return cap_capable(tsk, cap);
}

static inline  __attribute__((always_inline)) int security_acct(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sysctl(struct ctl_table *table, int op)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_quotactl(int cmds, int type, int id,
         struct super_block *sb)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_quota_on(struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_syslog(int type)
{
 return cap_syslog(type);
}

static inline  __attribute__((always_inline)) int security_settime(struct timespec *ts, struct timezone *tz)
{
 return cap_settime(ts, tz);
}

static inline  __attribute__((always_inline)) int security_vm_enough_memory(long pages)
{
 return cap_vm_enough_memory(nsc_get_task()->mm, pages);
}

static inline  __attribute__((always_inline)) int security_vm_enough_memory_mm(struct mm_struct *mm, long pages)
{
 return cap_vm_enough_memory(mm, pages);
}

static inline  __attribute__((always_inline)) int security_bprm_alloc(struct linux_binprm *bprm)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_bprm_free(struct linux_binprm *bprm)
{ }

static inline  __attribute__((always_inline)) void security_bprm_apply_creds(struct linux_binprm *bprm, int unsafe)
{
 cap_bprm_apply_creds(bprm, unsafe);
}

static inline  __attribute__((always_inline)) void security_bprm_post_apply_creds(struct linux_binprm *bprm)
{
 return;
}

static inline  __attribute__((always_inline)) int security_bprm_set(struct linux_binprm *bprm)
{
 return cap_bprm_set_security(bprm);
}

static inline  __attribute__((always_inline)) int security_bprm_check(struct linux_binprm *bprm)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_bprm_secureexec(struct linux_binprm *bprm)
{
 return cap_bprm_secureexec(bprm);
}

static inline  __attribute__((always_inline)) int security_sb_alloc(struct super_block *sb)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_free(struct super_block *sb)
{ }

static inline  __attribute__((always_inline)) int security_sb_copy_data(char *orig, char *copy)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_kern_mount(struct super_block *sb, void *data)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_statfs(struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_mount(char *dev_name, struct path *path,
        char *type, unsigned long flags,
        void *data)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_check_sb(struct vfsmount *mnt,
           struct path *path)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_umount(struct vfsmount *mnt, int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_umount_close(struct vfsmount *mnt)
{ }

static inline  __attribute__((always_inline)) void security_sb_umount_busy(struct vfsmount *mnt)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_remount(struct vfsmount *mnt,
          unsigned long flags, void *data)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_addmount(struct vfsmount *mnt,
          struct path *mountpoint)
{ }

static inline  __attribute__((always_inline)) int security_sb_pivotroot(struct path *old_path,
     struct path *new_path)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_post_pivotroot(struct path *old_path,
           struct path *new_path)
{ }
static inline  __attribute__((always_inline)) int security_sb_get_mnt_opts(const struct super_block *sb,
        struct security_mnt_opts *opts)
{
 security_init_mnt_opts(opts);
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_set_mnt_opts(struct super_block *sb,
        struct security_mnt_opts *opts)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_clone_mnt_opts(const struct super_block *oldsb,
           struct super_block *newsb)
{ }

static inline  __attribute__((always_inline)) int security_sb_parse_opts_str(char *options, struct security_mnt_opts *opts)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_alloc(struct inode *inode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_free(struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_inode_init_security(struct inode *inode,
      struct inode *dir,
      char **name,
      void **value,
      size_t *len)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_create(struct inode *dir,
      struct dentry *dentry,
      int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_link(struct dentry *old_dentry,
           struct inode *dir,
           struct dentry *new_dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_unlink(struct inode *dir,
      struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_symlink(struct inode *dir,
       struct dentry *dentry,
       const char *old_name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_mkdir(struct inode *dir,
     struct dentry *dentry,
     int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_rmdir(struct inode *dir,
     struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_mknod(struct inode *dir,
     struct dentry *dentry,
     int mode, dev_t dev)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_rename(struct inode *old_dir,
      struct dentry *old_dentry,
      struct inode *new_dir,
      struct dentry *new_dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_readlink(struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_follow_link(struct dentry *dentry,
           struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_permission(struct inode *inode, int mask,
          struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_setattr(struct dentry *dentry,
       struct iattr *attr)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_getattr(struct vfsmount *mnt,
       struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_delete(struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_inode_setxattr(struct dentry *dentry,
  const char *name, const void *value, size_t size, int flags)
{
 return cap_inode_setxattr(dentry, name, value, size, flags);
}

static inline  __attribute__((always_inline)) void security_inode_post_setxattr(struct dentry *dentry,
  const char *name, const void *value, size_t size, int flags)
{ }

static inline  __attribute__((always_inline)) int security_inode_getxattr(struct dentry *dentry,
   const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_listxattr(struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_removexattr(struct dentry *dentry,
   const char *name)
{
 return cap_inode_removexattr(dentry, name);
}

static inline  __attribute__((always_inline)) int security_inode_need_killpriv(struct dentry *dentry)
{
 return cap_inode_need_killpriv(dentry);
}

static inline  __attribute__((always_inline)) int security_inode_killpriv(struct dentry *dentry)
{
 return cap_inode_killpriv(dentry);
}

static inline  __attribute__((always_inline)) int security_inode_getsecurity(const struct inode *inode, const char *name, void **buffer, bool alloc)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_setsecurity(struct inode *inode, const char *name, const void *value, size_t size, int flags)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_listsecurity(struct inode *inode, char *buffer, size_t buffer_size)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_getsecid(const struct inode *inode, u32 *secid)
{
 *secid = 0;
}

static inline  __attribute__((always_inline)) int security_file_permission(struct file *file, int mask)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_alloc(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_file_free(struct file *file)
{ }

static inline  __attribute__((always_inline)) int security_file_ioctl(struct file *file, unsigned int cmd,
          unsigned long arg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_mmap(struct file *file, unsigned long reqprot,
         unsigned long prot,
         unsigned long flags,
         unsigned long addr,
         unsigned long addr_only)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_mprotect(struct vm_area_struct *vma,
      unsigned long reqprot,
      unsigned long prot)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_lock(struct file *file, unsigned int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_fcntl(struct file *file, unsigned int cmd,
          unsigned long arg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_set_fowner(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_send_sigiotask(struct task_struct *tsk,
            struct fown_struct *fown,
            int sig)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_receive(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_dentry_open(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_create(unsigned long clone_flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_alloc(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_free(struct task_struct *p)
{ }

static inline  __attribute__((always_inline)) int security_task_setuid(uid_t id0, uid_t id1, uid_t id2,
           int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_post_setuid(uid_t old_ruid, uid_t old_euid,
         uid_t old_suid, int flags)
{
 return cap_task_post_setuid(old_ruid, old_euid, old_suid, flags);
}

static inline  __attribute__((always_inline)) int security_task_setgid(gid_t id0, gid_t id1, gid_t id2,
           int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setpgid(struct task_struct *p, pid_t pgid)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getpgid(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getsid(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_getsecid(struct task_struct *p, u32 *secid)
{
 *secid = 0;
}

static inline  __attribute__((always_inline)) int security_task_setgroups(struct group_info *group_info)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setnice(struct task_struct *p, int nice)
{
 return cap_task_setnice(p, nice);
}

static inline  __attribute__((always_inline)) int security_task_setioprio(struct task_struct *p, int ioprio)
{
 return cap_task_setioprio(p, ioprio);
}

static inline  __attribute__((always_inline)) int security_task_getioprio(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setrlimit(unsigned int resource,
       struct rlimit *new_rlim)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setscheduler(struct task_struct *p,
          int policy,
          struct sched_param *lp)
{
 return cap_task_setscheduler(p, policy, lp);
}

static inline  __attribute__((always_inline)) int security_task_getscheduler(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_movememory(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_kill(struct task_struct *p,
         struct siginfo *info, int sig,
         u32 secid)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_wait(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_prctl(int option, unsigned long arg2,
          unsigned long arg3,
          unsigned long arg4,
          unsigned long arg5, long *rc_p)
{
 return cap_task_prctl(option, arg2, arg3, arg3, arg5, rc_p);
}

static inline  __attribute__((always_inline)) void security_task_reparent_to_init(struct task_struct *p)
{
 cap_task_reparent_to_init(p);
}

static inline  __attribute__((always_inline)) void security_task_to_inode(struct task_struct *p, struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_ipc_permission(struct kern_ipc_perm *ipcp,
       short flag)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_ipc_getsecid(struct kern_ipc_perm *ipcp, u32 *secid)
{
 *secid = 0;
}

static inline  __attribute__((always_inline)) int security_msg_msg_alloc(struct msg_msg *msg)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_msg_msg_free(struct msg_msg *msg)
{ }

static inline  __attribute__((always_inline)) int security_msg_queue_alloc(struct msg_queue *msq)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_msg_queue_free(struct msg_queue *msq)
{ }

static inline  __attribute__((always_inline)) int security_msg_queue_associate(struct msg_queue *msq,
            int msqflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgctl(struct msg_queue *msq, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgsnd(struct msg_queue *msq,
         struct msg_msg *msg, int msqflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgrcv(struct msg_queue *msq,
         struct msg_msg *msg,
         struct task_struct *target,
         long type, int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_alloc(struct shmid_kernel *shp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_shm_free(struct shmid_kernel *shp)
{ }

static inline  __attribute__((always_inline)) int security_shm_associate(struct shmid_kernel *shp,
      int shmflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_shmctl(struct shmid_kernel *shp, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_shmat(struct shmid_kernel *shp,
         char *shmaddr, int shmflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_alloc(struct sem_array *sma)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sem_free(struct sem_array *sma)
{ }

static inline  __attribute__((always_inline)) int security_sem_associate(struct sem_array *sma, int semflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_semctl(struct sem_array *sma, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_semop(struct sem_array *sma,
         struct sembuf *sops, unsigned nsops,
         int alter)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_d_instantiate(struct dentry *dentry, struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_getprocattr(struct task_struct *p, char *name, char **value)
{
 return -22;
}

static inline  __attribute__((always_inline)) int security_setprocattr(struct task_struct *p, char *name, void *value, size_t size)
{
 return -22;
}

static inline  __attribute__((always_inline)) int security_netlink_send(struct sock *sk, struct sk_buff *skb)
{
 return cap_netlink_send(sk, skb);
}

static inline  __attribute__((always_inline)) int security_netlink_recv(struct sk_buff *skb, int cap)
{
 return cap_netlink_recv(skb, cap);
}

static inline  __attribute__((always_inline)) struct dentry *securityfs_create_dir(const char *name,
     struct dentry *parent)
{
 return ERR_PTR(-19);
}

static inline  __attribute__((always_inline)) struct dentry *securityfs_create_file(const char *name,
      mode_t mode,
      struct dentry *parent,
      void *data,
      const struct file_operations *fops)
{
 return ERR_PTR(-19);
}

static inline  __attribute__((always_inline)) void securityfs_remove(struct dentry *dentry)
{
}

static inline  __attribute__((always_inline)) int security_secid_to_secctx(u32 secid, char **secdata, u32 *seclen)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_secctx_to_secid(const char *secdata,
        u32 seclen,
        u32 *secid)
{
 return -95;
}

static inline  __attribute__((always_inline)) void security_release_secctx(char *secdata, u32 seclen)
{
}
# 2503 "linux-2.6.26/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_unix_stream_connect(struct socket *sock,
            struct socket *other,
            struct sock *newsk)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_unix_may_send(struct socket *sock,
      struct socket *other)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_create(int family, int type,
      int protocol, int kern)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_post_create(struct socket *sock,
           int family,
           int type,
           int protocol, int kern)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_bind(struct socket *sock,
           struct sockaddr *address,
           int addrlen)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_connect(struct socket *sock,
       struct sockaddr *address,
       int addrlen)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_listen(struct socket *sock, int backlog)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_accept(struct socket *sock,
      struct socket *newsock)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_socket_post_accept(struct socket *sock,
            struct socket *newsock)
{
}

static inline  __attribute__((always_inline)) int security_socket_sendmsg(struct socket *sock,
       struct msghdr *msg, int size)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_recvmsg(struct socket *sock,
       struct msghdr *msg, int size,
       int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getsockname(struct socket *sock)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getpeername(struct socket *sock)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getsockopt(struct socket *sock,
          int level, int optname)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_setsockopt(struct socket *sock,
          int level, int optname)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_shutdown(struct socket *sock, int how)
{
 return 0;
}
static inline  __attribute__((always_inline)) int security_sock_rcv_skb(struct sock *sk,
     struct sk_buff *skb)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getpeersec_stream(struct socket *sock, char *optval,
          int *optlen, unsigned len)
{
 return -92;
}

static inline  __attribute__((always_inline)) int security_socket_getpeersec_dgram(struct socket *sock, struct sk_buff *skb, u32 *secid)
{
 return -92;
}

static inline  __attribute__((always_inline)) int security_sk_alloc(struct sock *sk, int family, gfp_t priority)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sk_free(struct sock *sk)
{
}

static inline  __attribute__((always_inline)) void security_sk_clone(const struct sock *sk, struct sock *newsk)
{
}

static inline  __attribute__((always_inline)) void security_sk_classify_flow(struct sock *sk, struct flowi *fl)
{
}

static inline  __attribute__((always_inline)) void security_req_classify_flow(const struct request_sock *req, struct flowi *fl)
{
}

static inline  __attribute__((always_inline)) void security_sock_graft(struct sock *sk, struct socket *parent)
{
}

static inline  __attribute__((always_inline)) int security_inet_conn_request(struct sock *sk,
   struct sk_buff *skb, struct request_sock *req)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inet_csk_clone(struct sock *newsk,
   const struct request_sock *req)
{
}

static inline  __attribute__((always_inline)) void security_inet_conn_established(struct sock *sk,
   struct sk_buff *skb)
{
}
# 2677 "linux-2.6.26/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_xfrm_policy_alloc(struct xfrm_sec_ctx **ctxp, struct xfrm_user_sec_ctx *sec_ctx)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_clone(struct xfrm_sec_ctx *old, struct xfrm_sec_ctx **new_ctxp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_xfrm_policy_free(struct xfrm_sec_ctx *ctx)
{
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_delete(struct xfrm_sec_ctx *ctx)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_state_alloc(struct xfrm_state *x,
     struct xfrm_user_sec_ctx *sec_ctx)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_state_alloc_acquire(struct xfrm_state *x,
     struct xfrm_sec_ctx *polsec, u32 secid)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_xfrm_state_free(struct xfrm_state *x)
{
}

static inline  __attribute__((always_inline)) int security_xfrm_state_delete(struct xfrm_state *x)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_lookup(struct xfrm_sec_ctx *ctx, u32 fl_secid, u8 dir)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_state_pol_flow_match(struct xfrm_state *x,
   struct xfrm_policy *xp, struct flowi *fl)
{
 return 1;
}

static inline  __attribute__((always_inline)) int security_xfrm_decode_session(struct sk_buff *skb, u32 *secid)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_skb_classify_flow(struct sk_buff *skb, struct flowi *fl)
{
}
# 28 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/ctype.h" 1
# 18 "linux-2.6.26/include/linux/ctype.h"
typedef  unsigned char   _GLOBAL_171_T; extern  _GLOBAL_171_T  _GLOBAL_0__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_1__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_2__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_3__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_4__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_5__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_6__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_7__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_8__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_9__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_10__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_11__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_12__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_13__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_14__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_15__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_16__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_17__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_18__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_19__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_20__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_21__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_22__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_23__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_24__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_25__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_26__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_27__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_28__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_29__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_30__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_31__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_32__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_33__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_34__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_35__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_36__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_37__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_38__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_39__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_40__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_41__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_42__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_43__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_44__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_45__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_46__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_47__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_48__ctype_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_49__ctype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__ctype_I) *_GLOBAL__ctype_13_A[NUM_STACKS] = { &_GLOBAL_0__ctype_I, &_GLOBAL_1__ctype_I, &_GLOBAL_2__ctype_I, &_GLOBAL_3__ctype_I, &_GLOBAL_4__ctype_I, &_GLOBAL_5__ctype_I, &_GLOBAL_6__ctype_I, &_GLOBAL_7__ctype_I, &_GLOBAL_8__ctype_I, &_GLOBAL_9__ctype_I, &_GLOBAL_10__ctype_I, &_GLOBAL_11__ctype_I, &_GLOBAL_12__ctype_I, &_GLOBAL_13__ctype_I, &_GLOBAL_14__ctype_I, &_GLOBAL_15__ctype_I, &_GLOBAL_16__ctype_I, &_GLOBAL_17__ctype_I, &_GLOBAL_18__ctype_I, &_GLOBAL_19__ctype_I, &_GLOBAL_20__ctype_I, &_GLOBAL_21__ctype_I, &_GLOBAL_22__ctype_I, &_GLOBAL_23__ctype_I, &_GLOBAL_24__ctype_I, &_GLOBAL_25__ctype_I, &_GLOBAL_26__ctype_I, &_GLOBAL_27__ctype_I, &_GLOBAL_28__ctype_I, &_GLOBAL_29__ctype_I, &_GLOBAL_30__ctype_I, &_GLOBAL_31__ctype_I, &_GLOBAL_32__ctype_I, &_GLOBAL_33__ctype_I, &_GLOBAL_34__ctype_I, &_GLOBAL_35__ctype_I, &_GLOBAL_36__ctype_I, &_GLOBAL_37__ctype_I, &_GLOBAL_38__ctype_I, &_GLOBAL_39__ctype_I, &_GLOBAL_40__ctype_I, &_GLOBAL_41__ctype_I, &_GLOBAL_42__ctype_I, &_GLOBAL_43__ctype_I, &_GLOBAL_44__ctype_I, &_GLOBAL_45__ctype_I, &_GLOBAL_46__ctype_I, &_GLOBAL_47__ctype_I, &_GLOBAL_48__ctype_I, &_GLOBAL_49__ctype_I, };   
# 37 "linux-2.6.26/include/linux/ctype.h"
static inline  __attribute__((always_inline)) unsigned char __tolower(unsigned char c)
{
 if (((((*_GLOBAL__ctype_13_A[get_stack_id()])[(int)(unsigned char)(c)])&(0x01)) != 0))
  c -= 'A'-'a';
 return c;
}

static inline  __attribute__((always_inline)) unsigned char __toupper(unsigned char c)
{
 if (((((*_GLOBAL__ctype_13_A[get_stack_id()])[(int)(unsigned char)(c)])&(0x02)) != 0))
  c -= 'a'-'A';
 return c;
}
# 29 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/utsname.h" 1





struct oldold_utsname {
 char sysname[9];
 char nodename[9];
 char release[9];
 char version[9];
 char machine[9];
};



struct old_utsname {
 char sysname[65];
 char nodename[65];
 char release[65];
 char version[65];
 char machine[65];
};

struct new_utsname {
 char sysname[65];
 char nodename[65];
 char release[65];
 char version[65];
 char machine[65];
 char domainname[65];
};





# 1 "linux-2.6.26/include/linux/nsproxy.h" 1






struct mnt_namespace;
struct uts_namespace;
struct ipc_namespace;
struct pid_namespace;
# 24 "linux-2.6.26/include/linux/nsproxy.h"
struct nsproxy {
 atomic_t count;
 struct uts_namespace *uts_ns;
 struct ipc_namespace *ipc_ns;
 struct mnt_namespace *mnt_ns;
 struct pid_namespace *pid_ns;
 struct user_namespace *user_ns;
 struct net *net_ns;
};
typedef  struct nsproxy   _GLOBAL_172_T; extern  _GLOBAL_172_T  global_init_nsproxy[NUM_STACKS];    
# 60 "linux-2.6.26/include/linux/nsproxy.h"
static inline  __attribute__((always_inline)) struct nsproxy *task_nsproxy(struct task_struct *tsk)
{
 return ({ typeof(tsk->nsproxy) _________p1 = (*(volatile typeof(tsk->nsproxy) *)&(tsk->nsproxy)); do { } while (0); (_________p1); });
}

int copy_namespaces(unsigned long flags, struct task_struct *tsk);
void exit_task_namespaces(struct task_struct *tsk);
void switch_task_namespaces(struct task_struct *tsk, struct nsproxy *new);
void free_nsproxy(struct nsproxy *ns);
int unshare_nsproxy_namespaces(unsigned long, struct nsproxy **,
 struct fs_struct *);

static inline  __attribute__((always_inline)) void put_nsproxy(struct nsproxy *ns)
{
 if (atomic_dec_and_test(&ns->count)) {
  free_nsproxy(ns);
 }
}

static inline  __attribute__((always_inline)) void get_nsproxy(struct nsproxy *ns)
{
 atomic_inc(&ns->count);
}




static inline  __attribute__((always_inline)) int ns_cgroup_clone(struct task_struct *tsk) { return 0; }
# 38 "linux-2.6.26/include/linux/utsname.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 40 "linux-2.6.26/include/linux/utsname.h" 2

struct uts_namespace {
 struct kref kref;
 struct new_utsname name;
};
typedef  struct uts_namespace   _GLOBAL_173_T; extern  _GLOBAL_173_T  global_init_uts_ns[NUM_STACKS];    
# 62 "linux-2.6.26/include/linux/utsname.h"
static inline  __attribute__((always_inline)) void get_uts_ns(struct uts_namespace *ns)
{
}

static inline  __attribute__((always_inline)) void put_uts_ns(struct uts_namespace *ns)
{
}

static inline  __attribute__((always_inline)) struct uts_namespace *copy_utsname(unsigned long flags,
     struct uts_namespace *ns)
{
 if (flags & 0x04000000)
  return ERR_PTR(-22);

 return ns;
}


static inline  __attribute__((always_inline)) struct new_utsname *utsname(void)
{
 return &nsc_get_task()->nsproxy->uts_ns->name;
}

static inline  __attribute__((always_inline)) struct new_utsname *init_utsname(void)
{
 return &global_init_uts_ns[get_stack_id()].name;
}

typedef  struct rw_semaphore   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_uts_sem[NUM_STACKS];    
# 30 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/smp_lock.h" 1
# 31 "linux-2.6.26/kernel/sysctl.c" 2




# 1 "linux-2.6.26/include/linux/net.h" 1
# 22 "linux-2.6.26/include/linux/net.h"
# 1 "linux-2.6.26/include/linux/socket.h" 1
# 11 "linux-2.6.26/include/linux/socket.h"
struct __kernel_sockaddr_storage {
 unsigned short ss_family;

 char __data[128 - sizeof(unsigned short)];


} __attribute__ ((aligned((__alignof__ (struct sockaddr *))))) ;



# 1 "linux-2.6.26/include/asm/socket.h" 1



# 1 "linux-2.6.26/include/asm/sockios.h" 1
# 5 "linux-2.6.26/include/asm/socket.h" 2
# 22 "linux-2.6.26/include/linux/socket.h" 2
# 1 "linux-2.6.26/include/linux/sockios.h" 1
# 23 "linux-2.6.26/include/linux/socket.h" 2
# 32 "linux-2.6.26/include/linux/socket.h"
typedef unsigned short sa_family_t;





struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};

struct linger {
 int l_onoff;
 int l_linger;
};
# 56 "linux-2.6.26/include/linux/socket.h"
struct msghdr {
 void * msg_name;
 int msg_namelen;
 struct iovec * msg_iov;
 __kernel_size_t msg_iovlen;
 void * msg_control;
 __kernel_size_t msg_controllen;
 unsigned msg_flags;
};







struct cmsghdr {
 __kernel_size_t cmsg_len;
        int cmsg_level;
        int cmsg_type;
};
# 129 "linux-2.6.26/include/linux/socket.h"
static inline  __attribute__((always_inline)) struct cmsghdr * __cmsg_nxthdr(void *__ctl, __kernel_size_t __size,
            struct cmsghdr *__cmsg)
{
 struct cmsghdr * __ptr;

 __ptr = (struct cmsghdr*)(((unsigned char *) __cmsg) + ( ((__cmsg->cmsg_len)+sizeof(long)-1) & ~(sizeof(long)-1) ));
 if ((unsigned long)((char*)(__ptr+1) - (char *) __ctl) > __size)
  return (struct cmsghdr *)0;

 return __ptr;
}

static inline  __attribute__((always_inline)) struct cmsghdr * cmsg_nxthdr (struct msghdr *__msg, struct cmsghdr *__cmsg)
{
 return __cmsg_nxthdr(__msg->msg_control, __msg->msg_controllen, __cmsg);
}







struct ucred {
 __u32 pid;
 __u32 uid;
 __u32 gid;
};
# 301 "linux-2.6.26/include/linux/socket.h"
extern int memcpy_fromiovec(unsigned char *kdata, struct iovec *iov, int len);
extern int memcpy_fromiovecend(unsigned char *kdata, struct iovec *iov,
    int offset, int len);
extern int csum_partial_copy_fromiovecend(unsigned char *kdata,
       struct iovec *iov,
       int offset,
       unsigned int len, __wsum *csump);

extern int verify_iovec(struct msghdr *m, struct iovec *iov, char *address, int mode);
extern int memcpy_toiovec(struct iovec *v, unsigned char *kdata, int len);
extern int move_addr_to_user(void *kaddr, int klen, void *uaddr, int *ulen);
extern int move_addr_to_kernel(void *uaddr, int ulen, void *kaddr);
extern int put_cmsg(struct msghdr*, int level, int type, int len, void *data);
# 23 "linux-2.6.26/include/linux/net.h" 2


struct poll_table_struct;
struct pipe_inode_info;
struct inode;
struct net;
# 50 "linux-2.6.26/include/linux/net.h"
typedef enum {
 SS_FREE = 0,
 SS_UNCONNECTED,
 SS_CONNECTING,
 SS_CONNECTED,
 SS_DISCONNECTING
} socket_state;





# 1 "linux-2.6.26/include/linux/random.h" 1
# 35 "linux-2.6.26/include/linux/random.h"
struct rand_pool_info {
 int entropy_count;
 int buf_size;
 __u32 buf[0];
};





extern void rand_initialize_irq(int irq);

extern void add_input_randomness(unsigned int type, unsigned int code,
     unsigned int value);
extern void add_interrupt_randomness(int irq);

extern void get_random_bytes(void *buf, int nbytes);
void generate_random_uuid(unsigned char uuid_out[16]);

extern __u32 secure_ip_id(__be32 daddr);
extern u32 secure_ipv4_port_ephemeral(__be32 saddr, __be32 daddr, __be16 dport);
extern u32 secure_ipv6_port_ephemeral(const __be32 *saddr, const __be32 *daddr,
          __be16 dport);
extern __u32 secure_tcp_sequence_number(__be32 saddr, __be32 daddr,
     __be16 sport, __be16 dport);
extern __u32 secure_tcpv6_sequence_number(__be32 *saddr, __be32 *daddr,
       __be16 sport, __be16 dport);
extern u64 secure_dccp_sequence_number(__be32 saddr, __be32 daddr,
           __be16 sport, __be16 dport);


extern const struct file_operations random_fops, urandom_fops;


unsigned int get_random_int(void);
unsigned long randomize_range(unsigned long start, unsigned long end, unsigned long len);

u32 random32(void);
void srandom32(u32 seed);
# 63 "linux-2.6.26/include/linux/net.h" 2
# 86 "linux-2.6.26/include/linux/net.h"
enum sock_type {
 SOCK_STREAM = 1,
 SOCK_DGRAM = 2,
 SOCK_RAW = 3,
 SOCK_RDM = 4,
 SOCK_SEQPACKET = 5,
 SOCK_DCCP = 6,
 SOCK_PACKET = 10,
};





enum sock_shutdown_cmd {
 SHUT_RD = 0,
 SHUT_WR = 1,
 SHUT_RDWR = 2,
};
# 117 "linux-2.6.26/include/linux/net.h"
struct socket {
 socket_state state;
 unsigned long flags;
 const struct proto_ops *ops;
 struct fasync_struct *fasync_list;
 struct file *file;
 struct sock *sk;
 wait_queue_head_t wait;
 short type;
};

struct vm_area_struct;
struct page;
struct kiocb;
struct sockaddr;
struct msghdr;
struct module;

struct proto_ops {
 int family;
 struct module *owner;
 int (*release) (struct socket *sock);
 int (*bind) (struct socket *sock,
          struct sockaddr *myaddr,
          int sockaddr_len);
 int (*connect) (struct socket *sock,
          struct sockaddr *vaddr,
          int sockaddr_len, int flags);
 int (*socketpair)(struct socket *sock1,
          struct socket *sock2);
 int (*accept) (struct socket *sock,
          struct socket *newsock, int flags);
 int (*getname) (struct socket *sock,
          struct sockaddr *addr,
          int *sockaddr_len, int peer);
 unsigned int (*poll) (struct file *file, struct socket *sock,
          struct poll_table_struct *wait);
 int (*ioctl) (struct socket *sock, unsigned int cmd,
          unsigned long arg);
 int (*compat_ioctl) (struct socket *sock, unsigned int cmd,
          unsigned long arg);
 int (*listen) (struct socket *sock, int len);
 int (*shutdown) (struct socket *sock, int flags);
 int (*setsockopt)(struct socket *sock, int level,
          int optname, char *optval, int optlen);
 int (*getsockopt)(struct socket *sock, int level,
          int optname, char *optval, int *optlen);
 int (*compat_setsockopt)(struct socket *sock, int level,
          int optname, char *optval, int optlen);
 int (*compat_getsockopt)(struct socket *sock, int level,
          int optname, char *optval, int *optlen);
 int (*sendmsg) (struct kiocb *iocb, struct socket *sock,
          struct msghdr *m, size_t total_len);
 int (*recvmsg) (struct kiocb *iocb, struct socket *sock,
          struct msghdr *m, size_t total_len,
          int flags);
 int (*mmap) (struct file *file, struct socket *sock,
          struct vm_area_struct * vma);
 ssize_t (*sendpage) (struct socket *sock, struct page *page,
          int offset, size_t size, int flags);
 ssize_t (*splice_read)(struct socket *sock, loff_t *ppos,
           struct pipe_inode_info *pipe, size_t len, unsigned int flags);
};

struct net_proto_family {
 int family;
 int (*create)(struct net *net, struct socket *sock, int protocol);
 struct module *owner;
};

struct iovec;
struct kvec;

enum {
 SOCK_WAKE_IO,
 SOCK_WAKE_WAITD,
 SOCK_WAKE_SPACE,
 SOCK_WAKE_URG,
};

extern int sock_wake_async(struct socket *sk, int how, int band);
extern int sock_register(const struct net_proto_family *fam);
extern void sock_unregister(int family);
extern int sock_create(int family, int type, int proto,
     struct socket **res);
extern int sock_create_kern(int family, int type, int proto,
          struct socket **res);
extern int sock_create_lite(int family, int type, int proto,
          struct socket **res);
extern void sock_release(struct socket *sock);
extern int sock_sendmsg(struct socket *sock, struct msghdr *msg,
      size_t len);
extern int sock_recvmsg(struct socket *sock, struct msghdr *msg,
      size_t size, int flags);
extern int sock_map_fd(struct socket *sock);
extern struct socket *sockfd_lookup(int fd, int *err);

extern int net_ratelimit(void);




extern int kernel_sendmsg(struct socket *sock, struct msghdr *msg,
        struct kvec *vec, size_t num, size_t len);
extern int kernel_recvmsg(struct socket *sock, struct msghdr *msg,
        struct kvec *vec, size_t num,
        size_t len, int flags);

extern int kernel_bind(struct socket *sock, struct sockaddr *addr,
         int addrlen);
extern int kernel_listen(struct socket *sock, int backlog);
extern int kernel_accept(struct socket *sock, struct socket **newsock,
    int flags);
extern int kernel_connect(struct socket *sock, struct sockaddr *addr,
     int addrlen, int flags);
extern int kernel_getsockname(struct socket *sock, struct sockaddr *addr,
         int *addrlen);
extern int kernel_getpeername(struct socket *sock, struct sockaddr *addr,
         int *addrlen);
extern int kernel_getsockopt(struct socket *sock, int level, int optname,
        char *optval, int *optlen);
extern int kernel_setsockopt(struct socket *sock, int level, int optname,
        char *optval, int optlen);
extern int kernel_sendpage(struct socket *sock, struct page *page, int offset,
      size_t size, int flags);
extern int kernel_sock_ioctl(struct socket *sock, int cmd, unsigned long arg);
extern int kernel_sock_shutdown(struct socket *sock,
    enum sock_shutdown_cmd how);
# 341 "linux-2.6.26/include/linux/net.h"
typedef  int  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_net_msg_cost[NUM_STACKS];   
typedef  int  _GLOBAL_176_T; extern  _GLOBAL_176_T  global_net_msg_burst[NUM_STACKS];   
# 36 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/sysrq.h" 1
# 17 "linux-2.6.26/include/linux/sysrq.h"
struct pt_regs;
struct tty_struct;
# 31 "linux-2.6.26/include/linux/sysrq.h"
struct sysrq_key_op {
 void (*handler)(int, struct tty_struct *);
 char *help_msg;
 char *action_msg;
 int enable_mask;
};
# 60 "linux-2.6.26/include/linux/sysrq.h"
static inline  __attribute__((always_inline)) int sysrq_on(void)
{
 return 0;
}
static inline  __attribute__((always_inline)) int __reterr(void)
{
 return -22;
}
static inline  __attribute__((always_inline)) void handle_sysrq(int key, struct tty_struct *tty)
{
}
# 37 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/highuid.h" 1
# 34 "linux-2.6.26/include/linux/highuid.h"
typedef  int  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_overflowuid[NUM_STACKS];   
typedef  int  _GLOBAL_178_T; extern  _GLOBAL_178_T  global_overflowgid[NUM_STACKS];   

extern void __bad_uid(void);
extern void __bad_gid(void);
# 81 "linux-2.6.26/include/linux/highuid.h"
typedef  int  _GLOBAL_179_T; extern  _GLOBAL_179_T  global_fs_overflowuid[NUM_STACKS];   
typedef  int  _GLOBAL_180_T; extern  _GLOBAL_180_T  global_fs_overflowgid[NUM_STACKS];   
# 38 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/writeback.h" 1
# 10 "linux-2.6.26/include/linux/writeback.h"
struct backing_dev_info;

typedef  spinlock_t  _GLOBAL_181_T; extern  _GLOBAL_181_T  global_inode_lock[NUM_STACKS];   
typedef  struct list_head   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_inode_in_use[NUM_STACKS];    
typedef  struct list_head   _GLOBAL_183_T; extern  _GLOBAL_183_T  global_inode_unused[NUM_STACKS];    





static inline  __attribute__((always_inline)) int task_is_pdflush(struct task_struct *task)
{
 return task->flags & 0x00001000;
}






enum writeback_sync_modes {
 WB_SYNC_NONE,
 WB_SYNC_ALL,
 WB_SYNC_HOLD,
};






struct writeback_control {
 struct backing_dev_info *bdi;

 enum writeback_sync_modes sync_mode;
 unsigned long *older_than_this;

 long nr_to_write;

 long pages_skipped;






 loff_t range_start;
 loff_t range_end;

 unsigned nonblocking:1;
 unsigned encountered_congestion:1;
 unsigned for_kupdate:1;
 unsigned for_reclaim:1;
 unsigned for_writepages:1;
 unsigned range_cyclic:1;
 unsigned more_io:1;
};




void writeback_inodes(struct writeback_control *wbc);
int inode_wait(void *);
void sync_inodes_sb(struct super_block *, int wait);
void sync_inodes(int wait);


static inline  __attribute__((always_inline)) void wait_on_inode(struct inode *inode)
{
 do { do { } while (0); } while (0);
 wait_on_bit(&inode->i_state, 7, inode_wait,
       2);
}
static inline  __attribute__((always_inline)) void inode_sync_wait(struct inode *inode)
{
 do { do { } while (0); } while (0);
 wait_on_bit(&inode->i_state, 8, inode_wait,
       2);
}





int wakeup_pdflush(long nr_pages);
void laptop_io_completion(void);
void laptop_sync_completion(void);
void throttle_vm_writeout(gfp_t gfp_mask);


typedef  int  _GLOBAL_184_T; extern  _GLOBAL_184_T  global_dirty_background_ratio[NUM_STACKS];   
typedef  int  _GLOBAL_185_T; extern  _GLOBAL_185_T  global_vm_dirty_ratio[NUM_STACKS];   
typedef  int  _GLOBAL_186_T; extern  _GLOBAL_186_T  global_dirty_writeback_interval[NUM_STACKS];   
typedef  int  _GLOBAL_187_T; extern  _GLOBAL_187_T  global_dirty_expire_interval[NUM_STACKS];   
typedef  int  _GLOBAL_188_T; extern  _GLOBAL_188_T  global_vm_highmem_is_dirtyable[NUM_STACKS];   
typedef  int  _GLOBAL_189_T; extern  _GLOBAL_189_T  global_block_dump[NUM_STACKS];   
typedef  int  _GLOBAL_190_T; extern  _GLOBAL_190_T  global_laptop_mode[NUM_STACKS];   

extern int dirty_ratio_handler(struct ctl_table *table, int write,
  struct file *filp, void *buffer, size_t *lenp,
  loff_t *ppos);

struct ctl_table;
struct file;
int dirty_writeback_centisecs_handler(struct ctl_table *, int, struct file *,
          void *, size_t *, loff_t *);

void get_dirty_limits(long *pbackground, long *pdirty, long *pbdi_dirty,
   struct backing_dev_info *bdi);

void page_writeback_init(void);
void balance_dirty_pages_ratelimited_nr(struct address_space *mapping,
     unsigned long nr_pages_dirtied);

static inline  __attribute__((always_inline)) void
balance_dirty_pages_ratelimited(struct address_space *mapping)
{
 balance_dirty_pages_ratelimited_nr(mapping, 1);
}

typedef int (*writepage_t)(struct page *page, struct writeback_control *wbc,
    void *data);

int pdflush_operation(void (*fn)(unsigned long), unsigned long arg0);
int generic_writepages(struct address_space *mapping,
         struct writeback_control *wbc);
int write_cache_pages(struct address_space *mapping,
        struct writeback_control *wbc, writepage_t writepage,
        void *data);
int do_writepages(struct address_space *mapping, struct writeback_control *wbc);
int sync_page_range(struct inode *inode, struct address_space *mapping,
   loff_t pos, loff_t count);
int sync_page_range_nolock(struct inode *inode, struct address_space *mapping,
      loff_t pos, loff_t count);
void set_page_dirty_balance(struct page *page, int page_mkwrite);
void writeback_set_ratelimit(void);


typedef  int  _GLOBAL_191_T; extern  _GLOBAL_191_T  global_nr_pdflush_threads[NUM_STACKS];   
# 39 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/hugetlb.h" 1
# 57 "linux-2.6.26/include/linux/hugetlb.h"
static inline  __attribute__((always_inline)) int is_vm_hugetlb_page(struct vm_area_struct *vma)
{
 return 0;
}
static inline  __attribute__((always_inline)) unsigned long hugetlb_total_pages(void)
{
 return 0;
}
# 40 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/initrd.h" 1




typedef  int  _GLOBAL_192_T; extern  _GLOBAL_192_T  global_rd_doload[NUM_STACKS];   


typedef  int  _GLOBAL_193_T; extern  _GLOBAL_193_T  global_rd_prompt[NUM_STACKS];   


typedef  int  _GLOBAL_194_T; extern  _GLOBAL_194_T  global_rd_image_start[NUM_STACKS];   


typedef  int  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_initrd_below_start_ok[NUM_STACKS];   


typedef  unsigned long   _GLOBAL_196_T; extern  _GLOBAL_196_T  global_initrd_start[NUM_STACKS]; extern  _GLOBAL_196_T  global_initrd_end[NUM_STACKS];     
extern void free_initrd_mem(unsigned long, unsigned long);

typedef  unsigned int   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_real_root_dev[NUM_STACKS];    
# 41 "linux-2.6.26/kernel/sysctl.c" 2

# 1 "linux-2.6.26/include/linux/times.h" 1





struct tms {
 clock_t tms_utime;
 clock_t tms_stime;
 clock_t tms_cutime;
 clock_t tms_cstime;
};
# 43 "linux-2.6.26/kernel/sysctl.c" 2


# 1 "linux-2.6.26/include/linux/syscalls.h" 1
# 14 "linux-2.6.26/include/linux/syscalls.h"
struct epoll_event;
struct iattr;
struct inode;
struct iocb;
struct io_event;
struct iovec;
struct itimerspec;
struct itimerval;
struct kexec_segment;
struct linux_dirent;
struct linux_dirent64;
struct list_head;
struct msgbuf;
struct msghdr;
struct msqid_ds;
struct new_utsname;
struct nfsctl_arg;
struct __old_kernel_stat;
struct pollfd;
struct rlimit;
struct rusage;
struct sched_param;
struct semaphore;
struct sembuf;
struct shmid_ds;
struct sockaddr;
struct stat;
struct stat64;
struct statfs;
struct statfs64;
struct __sysctl_args;
struct sysinfo;
struct timespec;
struct timeval;
struct timex;
struct timezone;
struct tms;
struct utimbuf;
struct mq_attr;
struct compat_stat;
struct compat_timeval;
struct robust_list_head;
struct getcpu_cache;
# 68 "linux-2.6.26/include/linux/syscalls.h"
 long sys_time(time_t *tloc);
 long sys_stime(time_t *tptr);
 long sys_gettimeofday(struct timeval *tv,
    struct timezone *tz);
 long sys_settimeofday(struct timeval *tv,
    struct timezone *tz);
 long sys_adjtimex(struct timex *txc_p);

 long sys_times(struct tms *tbuf);

 long sys_gettid(void);
 long sys_nanosleep(struct timespec *rqtp, struct timespec *rmtp);
 unsigned long sys_alarm(unsigned int seconds);
 long sys_getpid(void);
 long sys_getppid(void);
 long sys_getuid(void);
 long sys_geteuid(void);
 long sys_getgid(void);
 long sys_getegid(void);
 long sys_getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);
 long sys_getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid);
 long sys_getpgid(pid_t pid);
 long sys_getpgrp(void);
 long sys_getsid(pid_t pid);
 long sys_getgroups(int gidsetsize, gid_t *grouplist);

 long sys_setregid(gid_t rgid, gid_t egid);
 long sys_setgid(gid_t gid);
 long sys_setreuid(uid_t ruid, uid_t euid);
 long sys_setuid(uid_t uid);
 long sys_setresuid(uid_t ruid, uid_t euid, uid_t suid);
 long sys_setresgid(gid_t rgid, gid_t egid, gid_t sgid);
 long sys_setfsuid(uid_t uid);
 long sys_setfsgid(gid_t gid);
 long sys_setpgid(pid_t pid, pid_t pgid);
 long sys_setsid(void);
 long sys_setgroups(int gidsetsize, gid_t *grouplist);

 long sys_acct(const char *name);
 long sys_capget(cap_user_header_t header,
    cap_user_data_t dataptr);
 long sys_capset(cap_user_header_t header,
    const cap_user_data_t data);
 long sys_personality(u_long personality);

 long sys_sigpending(old_sigset_t *set);
 long sys_sigprocmask(int how, old_sigset_t *set,
    old_sigset_t *oset);
 long sys_getitimer(int which, struct itimerval *value);
 long sys_setitimer(int which,
    struct itimerval *value,
    struct itimerval *ovalue);
 long sys_timer_create(clockid_t which_clock,
     struct sigevent *timer_event_spec,
     timer_t * created_timer_id);
 long sys_timer_gettime(timer_t timer_id,
    struct itimerspec *setting);
 long sys_timer_getoverrun(timer_t timer_id);
 long sys_timer_settime(timer_t timer_id, int flags,
    const struct itimerspec *new_setting,
    struct itimerspec *old_setting);
 long sys_timer_delete(timer_t timer_id);
 long sys_clock_settime(clockid_t which_clock,
    const struct timespec *tp);
 long sys_clock_gettime(clockid_t which_clock,
    struct timespec *tp);
 long sys_clock_getres(clockid_t which_clock,
    struct timespec *tp);
 long sys_clock_nanosleep(clockid_t which_clock, int flags,
    const struct timespec *rqtp,
    struct timespec *rmtp);

 long sys_nice(int increment);
 long sys_sched_setscheduler(pid_t pid, int policy,
     struct sched_param *param);
 long sys_sched_setparam(pid_t pid,
     struct sched_param *param);
 long sys_sched_getscheduler(pid_t pid);
 long sys_sched_getparam(pid_t pid,
     struct sched_param *param);
 long sys_sched_setaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
 long sys_sched_getaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
 long sys_sched_yield(void);
 long sys_sched_get_priority_max(int policy);
 long sys_sched_get_priority_min(int policy);
 long sys_sched_rr_get_interval(pid_t pid,
     struct timespec *interval);
 long sys_setpriority(int which, int who, int niceval);
 long sys_getpriority(int which, int who);

 long sys_shutdown(int, int);
 long sys_reboot(int magic1, int magic2, unsigned int cmd,
    void *arg);
 long sys_restart_syscall(void);
 long sys_kexec_load(unsigned long entry, unsigned long nr_segments,
    struct kexec_segment *segments,
    unsigned long flags);

 long sys_exit(int error_code);
 void sys_exit_group(int error_code);
 long sys_wait4(pid_t pid, int *stat_addr,
    int options, struct rusage *ru);
 long sys_waitid(int which, pid_t pid,
      struct siginfo *infop,
      int options, struct rusage *ru);
 long sys_waitpid(pid_t pid, int *stat_addr, int options);
 long sys_set_tid_address(int *tidptr);
 long sys_futex(u32 *uaddr, int op, u32 val,
   struct timespec *utime, u32 *uaddr2,
   u32 val3);

 long sys_init_module(void *umod, unsigned long len,
    const char *uargs);
 long sys_delete_module(const char *name_user,
    unsigned int flags);

 long sys_rt_sigprocmask(int how, sigset_t *set,
    sigset_t *oset, size_t sigsetsize);
 long sys_rt_sigpending(sigset_t *set, size_t sigsetsize);
 long sys_rt_sigtimedwait(const sigset_t *uthese,
    siginfo_t *uinfo,
    const struct timespec *uts,
    size_t sigsetsize);
 long sys_kill(int pid, int sig);
 long sys_tgkill(int tgid, int pid, int sig);
 long sys_tkill(int pid, int sig);
 long sys_rt_sigqueueinfo(int pid, int sig, siginfo_t *uinfo);
 long sys_sgetmask(void);
 long sys_ssetmask(int newmask);
 unsigned long sys_signal(int sig, __sighandler_t handler);
 long sys_pause(void);

 long sys_sync(void);
 long sys_fsync(unsigned int fd);
 long sys_fdatasync(unsigned int fd);
 long sys_bdflush(int func, long data);
 long sys_mount(char *dev_name, char *dir_name,
    char *type, unsigned long flags,
    void *data);
 long sys_umount(char *name, int flags);
 long sys_oldumount(char *name);
 long sys_truncate(const char *path,
    unsigned long length);
 long sys_ftruncate(unsigned int fd, unsigned long length);
 long sys_stat(char *filename,
   struct __old_kernel_stat *statbuf);
 long sys_statfs(const char * path,
    struct statfs *buf);
 long sys_statfs64(const char *path, size_t sz,
    struct statfs64 *buf);
 long sys_fstatfs(unsigned int fd, struct statfs *buf);
 long sys_fstatfs64(unsigned int fd, size_t sz,
    struct statfs64 *buf);
 long sys_lstat(char *filename,
   struct __old_kernel_stat *statbuf);
 long sys_fstat(unsigned int fd,
   struct __old_kernel_stat *statbuf);
 long sys_newstat(char *filename,
    struct stat *statbuf);
 long sys_newlstat(char *filename,
    struct stat *statbuf);
 long sys_newfstat(unsigned int fd, struct stat *statbuf);
 long sys_ustat(unsigned dev, struct ustat *ubuf);
# 243 "linux-2.6.26/include/linux/syscalls.h"
 long sys_setxattr(const char *path, const char *name,
        const void *value, size_t size, int flags);
 long sys_lsetxattr(const char *path, const char *name,
         const void *value, size_t size, int flags);
 long sys_fsetxattr(int fd, const char *name,
         const void *value, size_t size, int flags);
 ssize_t sys_getxattr(const char *path, const char *name,
    void *value, size_t size);
 ssize_t sys_lgetxattr(const char *path, const char *name,
    void *value, size_t size);
 ssize_t sys_fgetxattr(int fd, const char *name,
    void *value, size_t size);
 ssize_t sys_listxattr(const char *path, char *list,
    size_t size);
 ssize_t sys_llistxattr(const char *path, char *list,
    size_t size);
 ssize_t sys_flistxattr(int fd, char *list, size_t size);
 long sys_removexattr(const char *path,
    const char *name);
 long sys_lremovexattr(const char *path,
     const char *name);
 long sys_fremovexattr(int fd, const char *name);

 unsigned long sys_brk(unsigned long brk);
 long sys_mprotect(unsigned long start, size_t len,
    unsigned long prot);
 unsigned long sys_mremap(unsigned long addr,
    unsigned long old_len, unsigned long new_len,
    unsigned long flags, unsigned long new_addr);
 long sys_remap_file_pages(unsigned long start, unsigned long size,
   unsigned long prot, unsigned long pgoff,
   unsigned long flags);
 long sys_msync(unsigned long start, size_t len, int flags);
 long sys_fadvise64(int fd, loff_t offset, size_t len, int advice);
 long sys_fadvise64_64(int fd, loff_t offset, loff_t len, int advice);
 long sys_munmap(unsigned long addr, size_t len);
 long sys_mlock(unsigned long start, size_t len);
 long sys_munlock(unsigned long start, size_t len);
 long sys_mlockall(int flags);
 long sys_munlockall(void);
 long sys_madvise(unsigned long start, size_t len, int behavior);
 long sys_mincore(unsigned long start, size_t len,
    unsigned char * vec);

 long sys_pivot_root(const char *new_root,
    const char *put_old);
 long sys_chroot(const char *filename);
 long sys_mknod(const char *filename, int mode,
    unsigned dev);
 long sys_link(const char *oldname,
    const char *newname);
 long sys_symlink(const char *old, const char *new);
 long sys_unlink(const char *pathname);
 long sys_rename(const char *oldname,
    const char *newname);
 long sys_chmod(const char *filename, mode_t mode);
 long sys_fchmod(unsigned int fd, mode_t mode);

 long sys_fcntl(unsigned int fd, unsigned int cmd, unsigned long arg);




 long sys_dup(unsigned int fildes);
 long sys_dup2(unsigned int oldfd, unsigned int newfd);
 long sys_ioperm(unsigned long from, unsigned long num, int on);
 long sys_ioctl(unsigned int fd, unsigned int cmd,
    unsigned long arg);
 long sys_flock(unsigned int fd, unsigned int cmd);
 long sys_io_setup(unsigned nr_reqs, aio_context_t *ctx);
 long sys_io_destroy(aio_context_t ctx);
 long sys_io_getevents(aio_context_t ctx_id,
    long min_nr,
    long nr,
    struct io_event *events,
    struct timespec *timeout);
 long sys_io_submit(aio_context_t, long,
    struct iocb * *);
 long sys_io_cancel(aio_context_t ctx_id, struct iocb *iocb,
         struct io_event *result);
 ssize_t sys_sendfile(int out_fd, int in_fd,
    off_t *offset, size_t count);
 ssize_t sys_sendfile64(int out_fd, int in_fd,
    loff_t *offset, size_t count);
 long sys_readlink(const char *path,
    char *buf, int bufsiz);
 long sys_creat(const char *pathname, int mode);
 long sys_open(const char *filename,
    int flags, int mode);
 long sys_close(unsigned int fd);
 long sys_access(const char *filename, int mode);
 long sys_vhangup(void);
 long sys_chown(const char *filename,
    uid_t user, gid_t group);
 long sys_lchown(const char *filename,
    uid_t user, gid_t group);
 long sys_fchown(unsigned int fd, uid_t user, gid_t group);
# 366 "linux-2.6.26/include/linux/syscalls.h"
 long sys_utime(char *filename,
    struct utimbuf *times);
 long sys_utimes(char *filename,
    struct timeval *utimes);
 off_t sys_lseek(unsigned int fd, off_t offset,
    unsigned int origin);
 long sys_llseek(unsigned int fd, unsigned long offset_high,
   unsigned long offset_low, loff_t *result,
   unsigned int origin);
 ssize_t sys_read(unsigned int fd, char *buf,
    size_t count);
 ssize_t sys_readahead(int fd, loff_t offset, size_t count);
 ssize_t sys_readv(unsigned long fd,
    const struct iovec *vec,
    unsigned long vlen);
 ssize_t sys_write(unsigned int fd, const char *buf,
    size_t count);
 ssize_t sys_writev(unsigned long fd,
    const struct iovec *vec,
    unsigned long vlen);
 ssize_t sys_pread64(unsigned int fd, char *buf,
    size_t count, loff_t pos);
 ssize_t sys_pwrite64(unsigned int fd, const char *buf,
    size_t count, loff_t pos);
 long sys_getcwd(char *buf, unsigned long size);
 long sys_mkdir(const char *pathname, int mode);
 long sys_chdir(const char *filename);
 long sys_fchdir(unsigned int fd);
 long sys_rmdir(const char *pathname);
 long sys_lookup_dcookie(u64 cookie64, char *buf, size_t len);
 long sys_quotactl(unsigned int cmd, const char *special,
    qid_t id, void *addr);
 long sys_getdents(unsigned int fd,
    struct linux_dirent *dirent,
    unsigned int count);
 long sys_getdents64(unsigned int fd,
    struct linux_dirent64 *dirent,
    unsigned int count);

 long sys_setsockopt(int fd, int level, int optname,
    char *optval, int optlen);
 long sys_getsockopt(int fd, int level, int optname,
    char *optval, int *optlen);
 long sys_bind(int, struct sockaddr *, int);
 long sys_connect(int, struct sockaddr *, int);
 long sys_accept(int, struct sockaddr *, int *);
 long sys_getsockname(int, struct sockaddr *, int *);
 long sys_getpeername(int, struct sockaddr *, int *);
 long sys_send(int, void *, size_t, unsigned);
 long sys_sendto(int, void *, size_t, unsigned,
    struct sockaddr *, int);
 long sys_sendmsg(int fd, struct msghdr *msg, unsigned flags);
 long sys_recv(int, void *, size_t, unsigned);
 long sys_recvfrom(int, void *, size_t, unsigned,
    struct sockaddr *, int *);
 long sys_recvmsg(int fd, struct msghdr *msg, unsigned flags);
 long sys_socket(int, int, int);
 long sys_socketpair(int, int, int, int *);
 long sys_socketcall(int call, unsigned long *args);
 long sys_listen(int, int);
 long sys_poll(struct pollfd *ufds, unsigned int nfds,
    long timeout);
 long sys_select(int n, fd_set *inp, fd_set *outp,
   fd_set *exp, struct timeval *tvp);
 long sys_epoll_create(int size);
 long sys_epoll_ctl(int epfd, int op, int fd,
    struct epoll_event *event);
 long sys_epoll_wait(int epfd, struct epoll_event *events,
    int maxevents, int timeout);
 long sys_epoll_pwait(int epfd, struct epoll_event *events,
    int maxevents, int timeout,
    const sigset_t *sigmask,
    size_t sigsetsize);
 long sys_gethostname(char *name, int len);
 long sys_sethostname(char *name, int len);
 long sys_setdomainname(char *name, int len);
 long sys_newuname(struct new_utsname *name);

 long sys_getrlimit(unsigned int resource,
    struct rlimit *rlim);

 long sys_old_getrlimit(unsigned int resource, struct rlimit *rlim);

 long sys_setrlimit(unsigned int resource,
    struct rlimit *rlim);
 long sys_getrusage(int who, struct rusage *ru);
 long sys_umask(int mask);

 long sys_msgget(key_t key, int msgflg);
 long sys_msgsnd(int msqid, struct msgbuf *msgp,
    size_t msgsz, int msgflg);
 long sys_msgrcv(int msqid, struct msgbuf *msgp,
    size_t msgsz, long msgtyp, int msgflg);
 long sys_msgctl(int msqid, int cmd, struct msqid_ds *buf);

 long sys_semget(key_t key, int nsems, int semflg);
 long sys_semop(int semid, struct sembuf *sops,
    unsigned nsops);
 long sys_semctl(int semid, int semnum, int cmd, union semun arg);
 long sys_semtimedop(int semid, struct sembuf *sops,
    unsigned nsops,
    const struct timespec *timeout);
 long sys_shmat(int shmid, char *shmaddr, int shmflg);
 long sys_shmget(key_t key, size_t size, int flag);
 long sys_shmdt(char *shmaddr);
 long sys_shmctl(int shmid, int cmd, struct shmid_ds *buf);

 long sys_mq_open(const char *name, int oflag, mode_t mode, struct mq_attr *attr);
 long sys_mq_unlink(const char *name);
 long sys_mq_timedsend(mqd_t mqdes, const char *msg_ptr, size_t msg_len, unsigned int msg_prio, const struct timespec *abs_timeout);
 ssize_t sys_mq_timedreceive(mqd_t mqdes, char *msg_ptr, size_t msg_len, unsigned int *msg_prio, const struct timespec *abs_timeout);
 long sys_mq_notify(mqd_t mqdes, const struct sigevent *notification);
 long sys_mq_getsetattr(mqd_t mqdes, const struct mq_attr *mqstat, struct mq_attr *omqstat);

 long sys_pciconfig_iobase(long which, unsigned long bus, unsigned long devfn);
 long sys_pciconfig_read(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);
 long sys_pciconfig_write(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);

 long sys_prctl(int option, unsigned long arg2, unsigned long arg3,
   unsigned long arg4, unsigned long arg5);
 long sys_swapon(const char *specialfile, int swap_flags);
 long sys_swapoff(const char *specialfile);
 long sys_sysctl(struct __sysctl_args *args);
 long sys_sysinfo(struct sysinfo *info);
 long sys_sysfs(int option,
    unsigned long arg1, unsigned long arg2);
 long sys_nfsservctl(int cmd,
    struct nfsctl_arg *arg,
    void *res);
 long sys_syslog(int type, char *buf, int len);
 long sys_uselib(const char *library);
 long sys_ni_syscall(void);
 long sys_ptrace(long request, long pid, long addr, long data);

 long sys_add_key(const char *_type,
       const char *_description,
       const void *_payload,
       size_t plen,
       key_serial_t destringid);

 long sys_request_key(const char *_type,
    const char *_description,
    const char *_callout_info,
    key_serial_t destringid);

 long sys_keyctl(int cmd, unsigned long arg2, unsigned long arg3,
      unsigned long arg4, unsigned long arg5);

 long sys_ioprio_set(int which, int who, int ioprio);
 long sys_ioprio_get(int which, int who);
 long sys_set_mempolicy(int mode, unsigned long *nmask,
    unsigned long maxnode);
 long sys_migrate_pages(pid_t pid, unsigned long maxnode,
    const unsigned long *from,
    const unsigned long *to);
 long sys_move_pages(pid_t pid, unsigned long nr_pages,
    const void * *pages,
    const int *nodes,
    int *status,
    int flags);
 long compat_sys_move_pages(pid_t pid, unsigned long nr_page,
    __u32 *pages,
    const int *nodes,
    int *status,
    int flags);
 long sys_mbind(unsigned long start, unsigned long len,
    unsigned long mode,
    unsigned long *nmask,
    unsigned long maxnode,
    unsigned flags);
 long sys_get_mempolicy(int *policy,
    unsigned long *nmask,
    unsigned long maxnode,
    unsigned long addr, unsigned long flags);

 long sys_inotify_init(void);
 long sys_inotify_add_watch(int fd, const char *path,
     u32 mask);
 long sys_inotify_rm_watch(int fd, u32 wd);

 long sys_spu_run(int fd, __u32 *unpc,
     __u32 *ustatus);
 long sys_spu_create(const char *name,
  unsigned int flags, mode_t mode, int fd);

 long sys_mknodat(int dfd, const char * filename, int mode,
       unsigned dev);
 long sys_mkdirat(int dfd, const char * pathname, int mode);
 long sys_unlinkat(int dfd, const char * pathname, int flag);
 long sys_symlinkat(const char * oldname,
         int newdfd, const char * newname);
 long sys_linkat(int olddfd, const char *oldname,
      int newdfd, const char *newname, int flags);
 long sys_renameat(int olddfd, const char * oldname,
        int newdfd, const char * newname);
 long sys_futimesat(int dfd, char *filename,
         struct timeval *utimes);
 long sys_faccessat(int dfd, const char *filename, int mode);
 long sys_fchmodat(int dfd, const char * filename,
        mode_t mode);
 long sys_fchownat(int dfd, const char *filename, uid_t user,
        gid_t group, int flag);
 long sys_openat(int dfd, const char *filename, int flags,
      int mode);
 long sys_newfstatat(int dfd, char *filename,
          struct stat *statbuf, int flag);
 long sys_fstatat64(int dfd, char *filename,
          struct stat64 *statbuf, int flag);
 long sys_readlinkat(int dfd, const char *path, char *buf,
          int bufsiz);
 long sys_utimensat(int dfd, char *filename,
    struct timespec *utimes, int flags);
 long compat_sys_futimesat(unsigned int dfd, char *filename,
         struct compat_timeval *t);
 long compat_sys_newfstatat(unsigned int dfd, char * filename,
          struct compat_stat *statbuf,
          int flag);
 long compat_sys_openat(unsigned int dfd, const char *filename,
       int flags, int mode);
 long sys_unshare(unsigned long unshare_flags);

 long sys_splice(int fd_in, loff_t *off_in,
      int fd_out, loff_t *off_out,
      size_t len, unsigned int flags);

 long sys_vmsplice(int fd, const struct iovec *iov,
        unsigned long nr_segs, unsigned int flags);

 long sys_tee(int fdin, int fdout, size_t len, unsigned int flags);

 long sys_sync_file_range(int fd, loff_t offset, loff_t nbytes,
     unsigned int flags);
 long sys_sync_file_range2(int fd, unsigned int flags,
         loff_t offset, loff_t nbytes);
 long sys_get_robust_list(int pid,
        struct robust_list_head * *head_ptr,
        size_t *len_ptr);
 long sys_set_robust_list(struct robust_list_head *head,
        size_t len);
 long sys_getcpu(unsigned *cpu, unsigned *node, struct getcpu_cache *cache);
 long sys_signalfd(int ufd, sigset_t *user_mask, size_t sizemask);
 long sys_timerfd_create(int clockid, int flags);
 long sys_timerfd_settime(int ufd, int flags,
        const struct itimerspec *utmr,
        struct itimerspec *otmr);
 long sys_timerfd_gettime(int ufd, struct itimerspec *otmr);
 long sys_eventfd(unsigned int count);
 long sys_fallocate(int fd, int mode, loff_t offset, loff_t len);

int kernel_execve(const char *filename, char *const argv[], char *const envp[]);
# 46 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/nfs_fs.h" 1
# 32 "linux-2.6.26/include/linux/nfs_fs.h"
# 1 "linux-2.6.26/include/linux/in.h" 1
# 25 "linux-2.6.26/include/linux/in.h"
enum {
  IPPROTO_IP = 0,
  IPPROTO_ICMP = 1,
  IPPROTO_IGMP = 2,
  IPPROTO_IPIP = 4,
  IPPROTO_TCP = 6,
  IPPROTO_EGP = 8,
  IPPROTO_PUP = 12,
  IPPROTO_UDP = 17,
  IPPROTO_IDP = 22,
  IPPROTO_DCCP = 33,
  IPPROTO_RSVP = 46,
  IPPROTO_GRE = 47,

  IPPROTO_IPV6 = 41,

  IPPROTO_ESP = 50,
  IPPROTO_AH = 51,
  IPPROTO_BEETPH = 94,
  IPPROTO_PIM = 103,

  IPPROTO_COMP = 108,
  IPPROTO_SCTP = 132,
  IPPROTO_UDPLITE = 136,

  IPPROTO_RAW = 255,
  IPPROTO_MAX
};



struct in_addr {
 __be32 s_addr;
};
# 115 "linux-2.6.26/include/linux/in.h"
struct ip_mreq
{
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};

struct ip_mreqn
{
 struct in_addr imr_multiaddr;
 struct in_addr imr_address;
 int imr_ifindex;
};

struct ip_mreq_source {
 __be32 imr_multiaddr;
 __be32 imr_interface;
 __be32 imr_sourceaddr;
};

struct ip_msfilter {
 __be32 imsf_multiaddr;
 __be32 imsf_interface;
 __u32 imsf_fmode;
 __u32 imsf_numsrc;
 __be32 imsf_slist[1];
};





struct group_req
{
 __u32 gr_interface;
 struct __kernel_sockaddr_storage gr_group;
};

struct group_source_req
{
 __u32 gsr_interface;
 struct __kernel_sockaddr_storage gsr_group;
 struct __kernel_sockaddr_storage gsr_source;
};

struct group_filter
{
 __u32 gf_interface;
 struct __kernel_sockaddr_storage gf_group;
 __u32 gf_fmode;
 __u32 gf_numsrc;
 struct __kernel_sockaddr_storage gf_slist[1];
};





struct in_pktinfo
{
 int ipi_ifindex;
 struct in_addr ipi_spec_dst;
 struct in_addr ipi_addr;
};



struct sockaddr_in {
  sa_family_t sin_family;
  __be16 sin_port;
  struct in_addr sin_addr;


  unsigned char __pad[16 - sizeof(short int) -
   sizeof(unsigned short int) - sizeof(struct in_addr)];
};
# 250 "linux-2.6.26/include/linux/in.h"
static inline  __attribute__((always_inline)) bool ipv4_is_loopback(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xff000000)))) == (( __be32)__fswab32((0x7f000000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_multicast(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xf0000000)))) == (( __be32)__fswab32((0xe0000000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_local_multicast(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffffff00)))) == (( __be32)__fswab32((0xe0000000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_lbcast(__be32 addr)
{

 return addr == (( __be32)__fswab32((((unsigned long int) 0xffffffff))));
}

static inline  __attribute__((always_inline)) bool ipv4_is_zeronet(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xff000000)))) == (( __be32)__fswab32((0x00000000)));
}



static inline  __attribute__((always_inline)) bool ipv4_is_private_10(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xff000000)))) == (( __be32)__fswab32((0x0a000000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_private_172(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xfff00000)))) == (( __be32)__fswab32((0xac100000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_private_192(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffff0000)))) == (( __be32)__fswab32((0xc0a80000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_linklocal_169(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffff0000)))) == (( __be32)__fswab32((0xa9fe0000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_anycast_6to4(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffffff00)))) == (( __be32)__fswab32((0xc0586300)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_test_192(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffffff00)))) == (( __be32)__fswab32((0xc0000200)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_test_198(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xfffe0000)))) == (( __be32)__fswab32((0xc6120000)));
}
# 33 "linux-2.6.26/include/linux/nfs_fs.h" 2



# 1 "linux-2.6.26/include/linux/pagemap.h" 1
# 10 "linux-2.6.26/include/linux/pagemap.h"
# 1 "linux-2.6.26/include/linux/highmem.h" 1





# 1 "linux-2.6.26/include/linux/uaccess.h" 1




# 1 "linux-2.6.26/include/asm/uaccess.h" 1



# 1 "linux-2.6.26/include/asm/uaccess_64.h" 1
# 70 "linux-2.6.26/include/asm/uaccess_64.h"
struct exception_table_entry {
 unsigned long insn, fixup;
};

extern int fixup_exception(struct pt_regs *regs);
# 131 "linux-2.6.26/include/asm/uaccess_64.h"
extern void __put_user_1(void);
extern void __put_user_2(void);
extern void __put_user_4(void);
extern void __put_user_8(void);
extern void __put_user_bad(void);
# 212 "linux-2.6.26/include/asm/uaccess_64.h"
struct __large_struct { unsigned long buf[100]; };
# 241 "linux-2.6.26/include/asm/uaccess_64.h"
extern int __get_user_1(void);
extern int __get_user_2(void);
extern int __get_user_4(void);
extern int __get_user_8(void);
extern int __get_user_bad(void);
# 286 "linux-2.6.26/include/asm/uaccess_64.h"
 unsigned long
copy_user_generic(void *to, const void *from, unsigned len);

 unsigned long
copy_to_user(void *to, const void *from, unsigned len);
 unsigned long
copy_from_user(void *to, const void *from, unsigned len);
 unsigned long
copy_in_user(void *to, const void *from, unsigned len);

static inline  
__attribute__((always_inline)) __attribute__((always_inline)) int __copy_from_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(dst, ( void *)src, size);
 switch (size) {
 case 1:asm volatile("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=q" (*(u8 *)dst) : "m" ((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret))
                                ;
  return ret;
 case 2:asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u16 *)dst) : "m" ((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret))
                                ;
  return ret;
 case 4:asm volatile("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u32 *)dst) : "m" ((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret))
                                ;
  return ret;
 case 8:asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret))
                               ;
  return ret;
 case 10:
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u16 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u16 *)(8 + (char *)src)))), "i"(2), "0"(ret))

                                 ;
  return ret;
 case 16:
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u64 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u64 *)(8 + (char *)src)))), "i"(8), "0"(ret))

                                ;
  return ret;
 default:
  return copy_user_generic(dst, ( void *)src, size);
 }
}

static inline  
__attribute__((always_inline)) __attribute__((always_inline)) int __copy_to_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst, src, size);
 switch (size) {
 case 1:asm volatile("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "iq" (*(u8 *)src), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                ;
  return ret;
 case 2:asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u16 *)src), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                ;
  return ret;
 case 4:asm volatile("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u32 *)src), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                ;
  return ret;
 case 8:asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                               ;
  return ret;
 case 10:
  asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (10), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (4[(u16 *)src]), "m" ((*(struct __large_struct *)(4 + (u16 *)dst))), "i" (2), "0" (ret))
                                 ;
  return ret;
 case 16:
  asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (16), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (1[(u64 *)src]), "m" ((*(struct __large_struct *)(1 + (u64 *)dst))), "i" (8), "0" (ret))
                                ;
  return ret;
 default:
  return copy_user_generic(( void *)dst, src, size);
 }
}

static inline  
__attribute__((always_inline)) __attribute__((always_inline)) int __copy_in_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 switch (size) {
 case 1: {
  u8 tmp;
  asm volatile("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=q" (tmp) : "m" ((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "iq" (tmp), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                  ;
  return ret;
 }
 case 2: {
  u16 tmp;
  asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (tmp) : "m" ((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (tmp), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                  ;
  return ret;
 }

 case 4: {
  u32 tmp;
  asm volatile("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (tmp) : "m" ((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (tmp), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                  ;
  return ret;
 }
 case 8: {
  u64 tmp;
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (tmp) : "m" ((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret))
                                ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (tmp), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                                 ;
  return ret;
 }
 default:
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 }
}

 long
strncpy_from_user(char *dst, const char *src, long count);
 long
__strncpy_from_user(char *dst, const char *src, long count);
 long strnlen_user(const char *str, long n);
 long __strnlen_user(const char *str, long n);
 long strlen_user(const char *str);
 unsigned long clear_user(void *mem, unsigned long len);
 unsigned long __clear_user(void *mem, unsigned long len);

 long __copy_from_user_inatomic(void *dst, const void *src,
         unsigned size);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) int
__copy_to_user_inatomic(void *dst, const void *src, unsigned size)
{
 return copy_user_generic(( void *)dst, src, size);
}


extern long __copy_user_nocache(void *dst, const void *src,
    unsigned size, int zerorest);

static inline  __attribute__((always_inline)) int __copy_from_user_nocache(void *dst, const void *src,
        unsigned size)
{
 do { do { } while (0); } while (0);
 return __copy_user_nocache(dst, src, size, 1);
}

static inline  __attribute__((always_inline)) int __copy_from_user_inatomic_nocache(void *dst,
          const void *src,
          unsigned size)
{
 return __copy_user_nocache(dst, src, size, 0);
}
# 5 "linux-2.6.26/include/asm/uaccess.h" 2
# 6 "linux-2.6.26/include/linux/uaccess.h" 2
# 16 "linux-2.6.26/include/linux/uaccess.h"
static inline  __attribute__((always_inline)) void pagefault_disable(void)
{
 do { (current_thread_info()->preempt_count) += (1); } while (0);




 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void pagefault_enable(void)
{




 __asm__ __volatile__("": : :"memory");
 do { (current_thread_info()->preempt_count) -= (1); } while (0);



 __asm__ __volatile__("": : :"memory");
 do { } while (0);
}
# 96 "linux-2.6.26/include/linux/uaccess.h"
extern long probe_kernel_read(void *dst, void *src, size_t size);
# 107 "linux-2.6.26/include/linux/uaccess.h"
extern long probe_kernel_write(void *dst, void *src, size_t size);
# 7 "linux-2.6.26/include/linux/highmem.h" 2

# 1 "linux-2.6.26/include/asm/cacheflush.h" 1
# 56 "linux-2.6.26/include/asm/cacheflush.h"
int _set_memory_uc(unsigned long addr, int numpages);
int _set_memory_wc(unsigned long addr, int numpages);
int _set_memory_wb(unsigned long addr, int numpages);
int set_memory_uc(unsigned long addr, int numpages);
int set_memory_wc(unsigned long addr, int numpages);
int set_memory_wb(unsigned long addr, int numpages);
int set_memory_x(unsigned long addr, int numpages);
int set_memory_nx(unsigned long addr, int numpages);
int set_memory_ro(unsigned long addr, int numpages);
int set_memory_rw(unsigned long addr, int numpages);
int set_memory_np(unsigned long addr, int numpages);
int set_memory_4k(unsigned long addr, int numpages);
# 89 "linux-2.6.26/include/asm/cacheflush.h"
int set_pages_uc(struct page *page, int numpages);
int set_pages_wb(struct page *page, int numpages);
int set_pages_x(struct page *page, int numpages);
int set_pages_nx(struct page *page, int numpages);
int set_pages_ro(struct page *page, int numpages);
int set_pages_rw(struct page *page, int numpages);


void clflush_cache_range(void *addr, unsigned int size);

void cpa_init(void);
# 109 "linux-2.6.26/include/asm/cacheflush.h"
static inline  __attribute__((always_inline)) int rodata_test(void)
{
 return 0;
}
# 9 "linux-2.6.26/include/linux/highmem.h" 2


static inline  __attribute__((always_inline)) void flush_anon_page(struct vm_area_struct *vma, struct page *page, unsigned long vmaddr)
{
}



static inline  __attribute__((always_inline)) void flush_kernel_dcache_page(struct page *page)
{
}
# 34 "linux-2.6.26/include/linux/highmem.h"
static inline  __attribute__((always_inline)) unsigned int nr_free_highpages(void) { return 0; }




static inline  __attribute__((always_inline)) void *kmap(struct page *page)
{
 do { do { } while (0); } while (0);
 return lowmem_page_address(page);
}



# 1 "linux-2.6.26/include/asm/kmap_types.h" 1
# 10 "linux-2.6.26/include/asm/kmap_types.h"
enum km_type {
 KM_BOUNCE_READ,
 KM_SKB_SUNRPC_DATA,
 KM_SKB_DATA_SOFTIRQ,
 KM_USER0,
 KM_USER1,
 KM_BIO_SRC_IRQ,
 KM_BIO_DST_IRQ,
 KM_PTE0,
 KM_PTE1,
 KM_IRQ0,
 KM_IRQ1,
 KM_SOFTIRQ0,
 KM_SOFTIRQ1,
 KM_TYPE_NR
};
# 48 "linux-2.6.26/include/linux/highmem.h" 2

static inline  __attribute__((always_inline)) void *kmap_atomic(struct page *page, enum km_type idx)
{
 pagefault_disable();
 return lowmem_page_address(page);
}
# 66 "linux-2.6.26/include/linux/highmem.h"
static inline  __attribute__((always_inline)) void clear_user_highpage(struct page *page, unsigned long vaddr)
{
 void *addr = kmap_atomic(page, KM_USER0);
 clear_user_page(addr, vaddr, page);
 do { pagefault_enable(); } while (0);
}
# 111 "linux-2.6.26/include/linux/highmem.h"
static inline  __attribute__((always_inline)) struct page *
alloc_zeroed_user_highpage_movable(struct vm_area_struct *vma,
     unsigned long vaddr)
{
 return alloc_pages_node((((void)(0),0)), ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u) | (( gfp_t)0x20000u) | (( gfp_t)0x02u)) | (( gfp_t)0x8000u) | (( gfp_t)0x100000u), 0);
}

static inline  __attribute__((always_inline)) void clear_highpage(struct page *page)
{
 void *kaddr = kmap_atomic(page, KM_USER0);
 clear_page(kaddr);
 do { pagefault_enable(); } while (0);
}

static inline  __attribute__((always_inline)) void zero_user_segments(struct page *page,
 unsigned start1, unsigned end1,
 unsigned start2, unsigned end2)
{
 void *kaddr = kmap_atomic(page, KM_USER0);

 do { if (__builtin_expect(!!(end1 > ((1UL) << 12) || end2 > ((1UL) << 12)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);

 if (end1 > start1)
  memset(kaddr + start1, 0, end1 - start1);

 if (end2 > start2)
  memset(kaddr + start2, 0, end2 - start2);

 do { pagefault_enable(); } while (0);
 do { } while (0);
}

static inline  __attribute__((always_inline)) void zero_user_segment(struct page *page,
 unsigned start, unsigned end)
{
 zero_user_segments(page, start, end, 0, 0);
}

static inline  __attribute__((always_inline)) void zero_user(struct page *page,
 unsigned start, unsigned size)
{
 zero_user_segments(page, start, start + size, 0, 0);
}

static inline  __attribute__((always_inline)) void memclear_highpage_flush(struct page *page,
   unsigned int offset, unsigned int size)
{
 zero_user(page, offset, size);
}



static inline  __attribute__((always_inline)) void copy_user_highpage(struct page *to, struct page *from,
 unsigned long vaddr, struct vm_area_struct *vma)
{
 char *vfrom, *vto;

 vfrom = kmap_atomic(from, KM_USER0);
 vto = kmap_atomic(to, KM_USER1);
 copy_user_page(vto, vfrom, vaddr, to);
 do { pagefault_enable(); } while (0);
 do { pagefault_enable(); } while (0);
}



static inline  __attribute__((always_inline)) void copy_highpage(struct page *to, struct page *from)
{
 char *vfrom, *vto;

 vfrom = kmap_atomic(from, KM_USER0);
 vto = kmap_atomic(to, KM_USER1);
 copy_page(vto, vfrom);
 do { pagefault_enable(); } while (0);
 do { pagefault_enable(); } while (0);
}
# 11 "linux-2.6.26/include/linux/pagemap.h" 2

# 1 "linux-2.6.26/include/asm/uaccess.h" 1
# 13 "linux-2.6.26/include/linux/pagemap.h" 2
# 23 "linux-2.6.26/include/linux/pagemap.h"
static inline  __attribute__((always_inline)) void mapping_set_error(struct address_space *mapping, int error)
{
 if (error) {
  if (error == -28)
   set_bit((21 + 1), &mapping->flags);
  else
   set_bit((21 + 0), &mapping->flags);
 }
}

static inline  __attribute__((always_inline)) gfp_t mapping_gfp_mask(struct address_space * mapping)
{
 return ( gfp_t)mapping->flags & (( gfp_t)((1 << 21) - 1));
}





static inline  __attribute__((always_inline)) void mapping_set_gfp_mask(struct address_space *m, gfp_t mask)
{
 m->flags = (m->flags & ~( unsigned long)(( gfp_t)((1 << 21) - 1))) |
    ( unsigned long)mask;
}
# 63 "linux-2.6.26/include/linux/pagemap.h"
void release_pages(struct page **pages, int nr, int cold);




static inline  __attribute__((always_inline)) struct page *__page_cache_alloc(gfp_t gfp)
{
 return alloc_pages_node((((void)(0),0)), gfp, 0);
}


static inline  __attribute__((always_inline)) struct page *page_cache_alloc(struct address_space *x)
{
 return __page_cache_alloc(mapping_gfp_mask(x));
}

static inline  __attribute__((always_inline)) struct page *page_cache_alloc_cold(struct address_space *x)
{
 return __page_cache_alloc(mapping_gfp_mask(x)|(( gfp_t)0x100u));
}

typedef int filler_t(void *, struct page *);

extern struct page * find_get_page(struct address_space *mapping,
    unsigned long index);
extern struct page * find_lock_page(struct address_space *mapping,
    unsigned long index);
extern struct page * find_or_create_page(struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
unsigned find_get_pages(struct address_space *mapping, unsigned long start,
   unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_contig(struct address_space *mapping, unsigned long start,
          unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_tag(struct address_space *mapping, unsigned long *index,
   int tag, unsigned int nr_pages, struct page **pages);

struct page *__grab_cache_page(struct address_space *mapping, unsigned long index);




static inline  __attribute__((always_inline)) struct page *grab_cache_page(struct address_space *mapping,
        unsigned long index)
{
 return find_or_create_page(mapping, index, mapping_gfp_mask(mapping));
}

extern struct page * grab_cache_page_nowait(struct address_space *mapping,
    unsigned long index);
extern struct page * read_cache_page_async(struct address_space *mapping,
    unsigned long index, filler_t *filler,
    void *data);
extern struct page * read_cache_page(struct address_space *mapping,
    unsigned long index, filler_t *filler,
    void *data);
extern int read_cache_pages(struct address_space *mapping,
  struct list_head *pages, filler_t *filler, void *data);

static inline  __attribute__((always_inline)) struct page *read_mapping_page_async(
      struct address_space *mapping,
           unsigned long index, void *data)
{
 filler_t *filler = (filler_t *)mapping->a_ops->readpage;
 return read_cache_page_async(mapping, index, filler, data);
}

static inline  __attribute__((always_inline)) struct page *read_mapping_page(struct address_space *mapping,
          unsigned long index, void *data)
{
 filler_t *filler = (filler_t *)mapping->a_ops->readpage;
 return read_cache_page(mapping, index, filler, data);
}

int add_to_page_cache(struct page *page, struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
int add_to_page_cache_lru(struct page *page, struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
extern void remove_from_page_cache(struct page *page);
extern void __remove_from_page_cache(struct page *page);




static inline  __attribute__((always_inline)) loff_t page_offset(struct page *page)
{
 return ((loff_t)page->index) << 12;
}

static inline  __attribute__((always_inline)) unsigned long linear_page_index(struct vm_area_struct *vma,
     unsigned long address)
{
 unsigned long pgoff = (address - vma->vm_start) >> 12;
 pgoff += vma->vm_pgoff;
 return pgoff >> (12 - 12);
}

extern void __lock_page(struct page *page);
extern int __lock_page_killable(struct page *page);
extern void __lock_page_nosync(struct page *page);
extern void unlock_page(struct page *page);




static inline  __attribute__((always_inline)) void lock_page(struct page *page)
{
 do { do { } while (0); } while (0);
 if (TestSetPageLocked(page))
  __lock_page(page);
}






static inline  __attribute__((always_inline)) int lock_page_killable(struct page *page)
{
 do { do { } while (0); } while (0);
 if (TestSetPageLocked(page))
  return __lock_page_killable(page);
 return 0;
}





static inline  __attribute__((always_inline)) void lock_page_nosync(struct page *page)
{
 do { do { } while (0); } while (0);
 if (TestSetPageLocked(page))
  __lock_page_nosync(page);
}





extern void wait_on_page_bit(struct page *page, int bit_nr);
# 211 "linux-2.6.26/include/linux/pagemap.h"
static inline  __attribute__((always_inline)) void wait_on_page_locked(struct page *page)
{
 if (PageLocked(page))
  wait_on_page_bit(page, PG_locked);
}




static inline  __attribute__((always_inline)) void wait_on_page_writeback(struct page *page)
{
 if (PageWriteback(page))
  wait_on_page_bit(page, PG_writeback);
}

extern void end_page_writeback(struct page *page);







static inline  __attribute__((always_inline)) int fault_in_pages_writeable(char *uaddr, int size)
{
 int ret;

 if (__builtin_expect(!!(size == 0), 0))
  return 0;





 ret = ({ int __pu_err; do { __pu_err = 0; (void)0; switch ((sizeof(*(uaddr)))) { case 1: asm volatile("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(__pu_err) : "iq" (((__typeof__(*(uaddr)))(0))), "m" ((*(struct __large_struct *)(((uaddr))))), "i" (-14), "0" (__pu_err)); break; case 2: asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(__pu_err) : "ir" (((__typeof__(*(uaddr)))(0))), "m" ((*(struct __large_struct *)(((uaddr))))), "i" (-14), "0" (__pu_err)); break; case 4: asm volatile("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(__pu_err) : "ir" (((__typeof__(*(uaddr)))(0))), "m" ((*(struct __large_struct *)(((uaddr))))), "i" (-14), "0" (__pu_err)); break; case 8: asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(__pu_err) : "Zr" (((__typeof__(*(uaddr)))(0))), "m" ((*(struct __large_struct *)(((uaddr))))), "i" (-14), "0" (__pu_err)); break; default: __put_user_bad(); } } while (0); __pu_err; });
 if (ret == 0) {
  char *end = uaddr + size - 1;





  if (((unsigned long)uaddr & (~(((1UL) << 12)-1))) !=
    ((unsigned long)end & (~(((1UL) << 12)-1))))
    ret = ({ int __pu_err; do { __pu_err = 0; (void)0; switch ((sizeof(*(end)))) { case 1: asm volatile("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(__pu_err) : "iq" (((__typeof__(*(end)))(0))), "m" ((*(struct __large_struct *)(((end))))), "i" (-14), "0" (__pu_err)); break; case 2: asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(__pu_err) : "ir" (((__typeof__(*(end)))(0))), "m" ((*(struct __large_struct *)(((end))))), "i" (-14), "0" (__pu_err)); break; case 4: asm volatile("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(__pu_err) : "ir" (((__typeof__(*(end)))(0))), "m" ((*(struct __large_struct *)(((end))))), "i" (-14), "0" (__pu_err)); break; case 8: asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(__pu_err) : "Zr" (((__typeof__(*(end)))(0))), "m" ((*(struct __large_struct *)(((end))))), "i" (-14), "0" (__pu_err)); break; default: __put_user_bad(); } } while (0); __pu_err; });
 }
 return ret;
}

static inline  __attribute__((always_inline)) int fault_in_pages_readable(const char *uaddr, int size)
{
 volatile char c;
 int ret;

 if (__builtin_expect(!!(size == 0), 0))
  return 0;

 ret = ({ int __gu_err; unsigned long __gu_val; do { __gu_err = 0; (void)0; switch ((sizeof(*(uaddr)))) { case 1: asm volatile("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (__gu_err), "=q" (__gu_val) : "m" ((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; case 2: asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (__gu_err), "=r" (__gu_val) : "m" ((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; case 4: asm volatile("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (__gu_err), "=r" (__gu_val) : "m" ((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; case 8: asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (__gu_err), "=r" (__gu_val) : "m" ((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; default: (__gu_val) = __get_user_bad(); } } while (0); ((c)) = ( typeof(*((uaddr))))__gu_val; __gu_err; });
 if (ret == 0) {
  const char *end = uaddr + size - 1;

  if (((unsigned long)uaddr & (~(((1UL) << 12)-1))) !=
    ((unsigned long)end & (~(((1UL) << 12)-1))))
    ret = ({ int __gu_err; unsigned long __gu_val; do { __gu_err = 0; (void)0; switch ((sizeof(*(end)))) { case 1: asm volatile("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (__gu_err), "=q" (__gu_val) : "m" ((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; case 2: asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (__gu_err), "=r" (__gu_val) : "m" ((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; case 4: asm volatile("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (__gu_err), "=r" (__gu_val) : "m" ((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; case 8: asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (__gu_err), "=r" (__gu_val) : "m" ((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; default: (__gu_val) = __get_user_bad(); } } while (0); ((c)) = ( typeof(*((end))))__gu_val; __gu_err; });
 }
 return ret;
}
# 37 "linux-2.6.26/include/linux/nfs_fs.h" 2




# 1 "linux-2.6.26/include/linux/sunrpc/debug.h" 1
# 46 "linux-2.6.26/include/linux/sunrpc/debug.h"
typedef  unsigned int   _GLOBAL_198_T; extern  _GLOBAL_198_T  global_rpc_debug[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_nfs_debug[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_200_T; extern  _GLOBAL_200_T  global_nfsd_debug[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_201_T; extern  _GLOBAL_201_T  global_nlm_debug[NUM_STACKS];    
# 69 "linux-2.6.26/include/linux/sunrpc/debug.h"
void rpc_register_sysctl(void);
void rpc_unregister_sysctl(void);
# 82 "linux-2.6.26/include/linux/sunrpc/debug.h"
enum {
 CTL_RPCDEBUG = 1,
 CTL_NFSDEBUG,
 CTL_NFSDDEBUG,
 CTL_NLMDEBUG,
 CTL_SLOTTABLE_UDP,
 CTL_SLOTTABLE_TCP,
 CTL_MIN_RESVPORT,
 CTL_MAX_RESVPORT,
};
# 42 "linux-2.6.26/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.26/include/linux/sunrpc/auth.h" 1
# 14 "linux-2.6.26/include/linux/sunrpc/auth.h"
# 1 "linux-2.6.26/include/linux/sunrpc/sched.h" 1
# 13 "linux-2.6.26/include/linux/sunrpc/sched.h"
# 1 "linux-2.6.26/include/linux/sunrpc/types.h" 1
# 14 "linux-2.6.26/include/linux/sunrpc/sched.h" 2



# 1 "linux-2.6.26/include/linux/sunrpc/xdr.h" 1
# 14 "linux-2.6.26/include/linux/sunrpc/xdr.h"
# 1 "linux-2.6.26/include/linux/scatterlist.h" 1




# 1 "linux-2.6.26/include/asm/scatterlist.h" 1





struct scatterlist {



 unsigned long page_link;
 unsigned int offset;
 unsigned int length;
 dma_addr_t dma_address;
 unsigned int dma_length;
};
# 6 "linux-2.6.26/include/linux/scatterlist.h" 2


# 1 "linux-2.6.26/include/asm/io.h" 1
# 9 "linux-2.6.26/include/asm/io.h"
# 1 "linux-2.6.26/include/asm/io_64.h" 1
# 38 "linux-2.6.26/include/asm/io_64.h"
extern void native_io_delay(void);

typedef  int  _GLOBAL_202_T; extern  _GLOBAL_202_T  global_io_delay_type[NUM_STACKS];   
extern void io_delay_init(void);





static inline  __attribute__((always_inline)) void slow_down_io(void)
{
 native_io_delay();





}
# 118 "linux-2.6.26/include/asm/io_64.h"
static inline  __attribute__((always_inline)) unsigned char inb(unsigned short port) { unsigned char _v; asm volatile ("in" "b" " %" "w" "1,%" "" "0" : "=a" (_v) : "Nd" (port)); return _v; } static inline  __attribute__((always_inline)) unsigned char inb_p(unsigned short port) { unsigned char _v; asm volatile ("in" "b" " %" "w" "1,%" "" "0" : "=a" (_v) : "Nd" (port)); slow_down_io(); return _v; }


static inline  __attribute__((always_inline)) unsigned short inw(unsigned short port) { unsigned short _v; asm volatile ("in" "w" " %" "w" "1,%" "" "0" : "=a" (_v) : "Nd" (port)); return _v; } static inline  __attribute__((always_inline)) unsigned short inw_p(unsigned short port) { unsigned short _v; asm volatile ("in" "w" " %" "w" "1,%" "" "0" : "=a" (_v) : "Nd" (port)); slow_down_io(); return _v; }


static inline  __attribute__((always_inline)) unsigned int inl(unsigned short port) { unsigned int _v; asm volatile ("in" "l" " %" "w" "1,%" "" "0" : "=a" (_v) : "Nd" (port)); return _v; } static inline  __attribute__((always_inline)) unsigned int inl_p(unsigned short port) { unsigned int _v; asm volatile ("in" "l" " %" "w" "1,%" "" "0" : "=a" (_v) : "Nd" (port)); slow_down_io(); return _v; }


static inline  __attribute__((always_inline)) void outb(unsigned char value, unsigned short port) { asm volatile ("out" "b" " %" "b" "0,%" "w" "1" : : "a" (value), "Nd" (port)); } static inline  __attribute__((always_inline)) void outb_p(unsigned char value, unsigned short port) { asm volatile ("out" "b" " %" "b" "0,%" "w" "1" : : "a" (value), "Nd" (port)); slow_down_io(); }
static inline  __attribute__((always_inline)) void outw(unsigned short value, unsigned short port) { asm volatile ("out" "w" " %" "w" "0,%" "w" "1" : : "a" (value), "Nd" (port)); } static inline  __attribute__((always_inline)) void outw_p(unsigned short value, unsigned short port) { asm volatile ("out" "w" " %" "w" "0,%" "w" "1" : : "a" (value), "Nd" (port)); slow_down_io(); }
static inline  __attribute__((always_inline)) void outl(unsigned int value, unsigned short port) { asm volatile ("out" "l" " %" "0,%" "w" "1" : : "a" (value), "Nd" (port)); } static inline  __attribute__((always_inline)) void outl_p(unsigned int value, unsigned short port) { asm volatile ("out" "l" " %" "0,%" "w" "1" : : "a" (value), "Nd" (port)); slow_down_io(); }

static inline  __attribute__((always_inline)) void insb(unsigned short port, void *addr, unsigned long count) { asm volatile ("rep ; ins" "b" : "=D" (addr), "=c" (count) : "d" (port), "0" (addr), "1" (count)); }
static inline  __attribute__((always_inline)) void insw(unsigned short port, void *addr, unsigned long count) { asm volatile ("rep ; ins" "w" : "=D" (addr), "=c" (count) : "d" (port), "0" (addr), "1" (count)); }
static inline  __attribute__((always_inline)) void insl(unsigned short port, void *addr, unsigned long count) { asm volatile ("rep ; ins" "l" : "=D" (addr), "=c" (count) : "d" (port), "0" (addr), "1" (count)); }

static inline  __attribute__((always_inline)) void outsb(unsigned short port, const void *addr, unsigned long count) { asm volatile ("rep ; outs" "b" : "=S" (addr), "=c" (count) : "d" (port), "0" (addr), "1" (count)); }
static inline  __attribute__((always_inline)) void outsw(unsigned short port, const void *addr, unsigned long count) { asm volatile ("rep ; outs" "w" : "=S" (addr), "=c" (count) : "d" (port), "0" (addr), "1" (count)); }
static inline  __attribute__((always_inline)) void outsl(unsigned short port, const void *addr, unsigned long count) { asm volatile ("rep ; outs" "l" : "=S" (addr), "=c" (count) : "d" (port), "0" (addr), "1" (count)); }





# 1 "linux-2.6.26/include/linux/vmalloc.h" 1






struct vm_area_struct;
# 25 "linux-2.6.26/include/linux/vmalloc.h"
struct vm_struct {

 struct vm_struct *next;
 void *addr;
 unsigned long size;
 unsigned long flags;
 struct page **pages;
 unsigned int nr_pages;
 unsigned long phys_addr;
 void *caller;
};




extern void *vmalloc(unsigned long size);
extern void *vmalloc_user(unsigned long size);
extern void *vmalloc_node(unsigned long size, int node);
extern void *vmalloc_exec(unsigned long size);
extern void *vmalloc_32(unsigned long size);
extern void *vmalloc_32_user(unsigned long size);
extern void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot);
extern void *__vmalloc_area(struct vm_struct *area, gfp_t gfp_mask,
    pgprot_t prot);
extern void vfree(const void *addr);

extern void *vmap(struct page **pages, unsigned int count,
   unsigned long flags, pgprot_t prot);
extern void vunmap(const void *addr);

extern int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
       unsigned long pgoff);
void vmalloc_sync_all(void);





static inline  __attribute__((always_inline)) size_t get_vm_area_size(const struct vm_struct *area)
{

 return area->size - ((1UL) << 12);
}

extern struct vm_struct *get_vm_area(unsigned long size, unsigned long flags);
extern struct vm_struct *get_vm_area_caller(unsigned long size,
     unsigned long flags, void *caller);
extern struct vm_struct *__get_vm_area(unsigned long size, unsigned long flags,
     unsigned long start, unsigned long end);
extern struct vm_struct *get_vm_area_node(unsigned long size,
       unsigned long flags, int node,
       gfp_t gfp_mask);
extern struct vm_struct *remove_vm_area(const void *addr);

extern int map_vm_area(struct vm_struct *area, pgprot_t prot,
   struct page ***pages);
extern void unmap_kernel_range(unsigned long addr, unsigned long size);


extern struct vm_struct *alloc_vm_area(size_t size);
extern void free_vm_area(struct vm_struct *area);




typedef  rwlock_t  _GLOBAL_203_T; extern  _GLOBAL_203_T  global_vmlist_lock[NUM_STACKS];   
typedef  struct vm_struct   _GLOBAL_204_T; extern  _GLOBAL_204_T  * global_vmlist[NUM_STACKS];    

extern const struct seq_operations vmalloc_op;
# 144 "linux-2.6.26/include/asm/io_64.h" 2






static inline  __attribute__((always_inline)) unsigned long virt_to_phys(volatile void *address)
{
 return __phys_addr((unsigned long)(address));
}

static inline  __attribute__((always_inline)) void *phys_to_virt(unsigned long address)
{
 return ((void *)((unsigned long)(address)+((unsigned long)(0xffff810000000000UL))));
}







# 1 "linux-2.6.26/include/asm-generic/iomap.h" 1
# 28 "linux-2.6.26/include/asm-generic/iomap.h"
extern unsigned int ioread8(void *);
extern unsigned int ioread16(void *);
extern unsigned int ioread16be(void *);
extern unsigned int ioread32(void *);
extern unsigned int ioread32be(void *);

extern void iowrite8(u8, void *);
extern void iowrite16(u16, void *);
extern void iowrite16be(u16, void *);
extern void iowrite32(u32, void *);
extern void iowrite32be(u32, void *);
# 51 "linux-2.6.26/include/asm-generic/iomap.h"
extern void ioread8_rep(void *port, void *buf, unsigned long count);
extern void ioread16_rep(void *port, void *buf, unsigned long count);
extern void ioread32_rep(void *port, void *buf, unsigned long count);

extern void iowrite8_rep(void *port, const void *buf, unsigned long count);
extern void iowrite16_rep(void *port, const void *buf, unsigned long count);
extern void iowrite32_rep(void *port, const void *buf, unsigned long count);


extern void *ioport_map(unsigned long port, unsigned int nr);
extern void ioport_unmap(void *);






struct pci_dev;
extern void *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
extern void pci_iounmap(struct pci_dev *dev, void *);
# 167 "linux-2.6.26/include/asm/io_64.h" 2

extern void *early_ioremap(unsigned long addr, unsigned long size);
extern void early_iounmap(void *addr, unsigned long size);






extern void *ioremap_nocache(resource_size_t offset, unsigned long size);
extern void *ioremap_cache(resource_size_t offset, unsigned long size);




static inline  __attribute__((always_inline)) void *ioremap(resource_size_t offset, unsigned long size)
{
 return ioremap_nocache(offset, size);
}

extern void iounmap(volatile void *addr);

extern void *fix_ioremap(unsigned idx, unsigned long phys);
# 214 "linux-2.6.26/include/asm/io_64.h"
static inline  __attribute__((always_inline)) __u8 __readb(const volatile void *addr)
{
 return *( volatile __u8 *)addr;
}

static inline  __attribute__((always_inline)) __u16 __readw(const volatile void *addr)
{
 return *( volatile __u16 *)addr;
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) __u32 __readl(const volatile void *addr)
{
 return *( volatile __u32 *)addr;
}

static inline  __attribute__((always_inline)) __u64 __readq(const volatile void *addr)
{
 return *( volatile __u64 *)addr;
}
# 249 "linux-2.6.26/include/asm/io_64.h"
static inline  __attribute__((always_inline)) void __writel(__u32 b, volatile void *addr)
{
 *( volatile __u32 *)addr = b;
}

static inline  __attribute__((always_inline)) void __writeq(__u64 b, volatile void *addr)
{
 *( volatile __u64 *)addr = b;
}

static inline  __attribute__((always_inline)) void __writeb(__u8 b, volatile void *addr)
{
 *( volatile __u8 *)addr = b;
}

static inline  __attribute__((always_inline)) void __writew(__u16 b, volatile void *addr)
{
 *( volatile __u16 *)addr = b;
}
# 278 "linux-2.6.26/include/asm/io_64.h"
void __memcpy_fromio(void *, unsigned long, unsigned);
void __memcpy_toio(unsigned long, const void *, unsigned);

static inline  __attribute__((always_inline)) void memcpy_fromio(void *to, const volatile void *from,
     unsigned len)
{
 __memcpy_fromio(to, (unsigned long)from, len);
}

static inline  __attribute__((always_inline)) void memcpy_toio(volatile void *to, const void *from,
          unsigned len)
{
 __memcpy_toio((unsigned long)to, from, len);
}

void memset_io(volatile void *a, int b, size_t c);
# 307 "linux-2.6.26/include/asm/io_64.h"
typedef  int  _GLOBAL_205_T; extern  _GLOBAL_205_T  global_iommu_bio_merge[NUM_STACKS];   
# 10 "linux-2.6.26/include/asm/io.h" 2


extern void *xlate_dev_mem_ptr(unsigned long phys);
extern void unxlate_dev_mem_ptr(unsigned long phys, void *addr);

extern int ioremap_change_attr(unsigned long vaddr, unsigned long size,
    unsigned long prot_val);
extern void *ioremap_wc(unsigned long offset, unsigned long size);
# 9 "linux-2.6.26/include/linux/scatterlist.h" 2

struct sg_table {
 struct scatterlist *sgl;
 unsigned int nents;
 unsigned int orig_nents;
};
# 55 "linux-2.6.26/include/linux/scatterlist.h"
static inline  __attribute__((always_inline)) void sg_assign_page(struct scatterlist *sg, struct page *page)
{
 unsigned long page_link = sg->page_link & 0x3;





 do { if (__builtin_expect(!!((unsigned long) page & 0x03), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);




 sg->page_link = page_link | (unsigned long) page;
}
# 85 "linux-2.6.26/include/linux/scatterlist.h"
static inline  __attribute__((always_inline)) void sg_set_page(struct scatterlist *sg, struct page *page,
          unsigned int len, unsigned int offset)
{
 sg_assign_page(sg, page);
 sg->offset = offset;
 sg->length = len;
}

static inline  __attribute__((always_inline)) struct page *sg_page(struct scatterlist *sg)
{




 return (struct page *)((sg)->page_link & ~0x3);
}
# 109 "linux-2.6.26/include/linux/scatterlist.h"
static inline  __attribute__((always_inline)) void sg_set_buf(struct scatterlist *sg, const void *buf,
         unsigned int buflen)
{
 sg_set_page(sg, (mem_map + ((__phys_addr((unsigned long)(buf)) >> 12) - (0UL))), buflen, ((unsigned long)(buf) & ~(~(((1UL) << 12)-1))));
}
# 131 "linux-2.6.26/include/linux/scatterlist.h"
static inline  __attribute__((always_inline)) void sg_chain(struct scatterlist *prv, unsigned int prv_nents,
       struct scatterlist *sgl)
{







 prv[prv_nents - 1].offset = 0;
 prv[prv_nents - 1].length = 0;





 prv[prv_nents - 1].page_link = ((unsigned long) sgl | 0x01) & ~0x02;
}
# 160 "linux-2.6.26/include/linux/scatterlist.h"
static inline  __attribute__((always_inline)) void sg_mark_end(struct scatterlist *sg)
{






 sg->page_link |= 0x02;
 sg->page_link &= ~0x01;
}
# 182 "linux-2.6.26/include/linux/scatterlist.h"
static inline  __attribute__((always_inline)) dma_addr_t sg_phys(struct scatterlist *sg)
{
 return ((dma_addr_t)((unsigned long)((sg_page(sg)) - mem_map) + (0UL)) << 12) + sg->offset;
}
# 197 "linux-2.6.26/include/linux/scatterlist.h"
static inline  __attribute__((always_inline)) void *sg_virt(struct scatterlist *sg)
{
 return lowmem_page_address(sg_page(sg)) + sg->offset;
}

struct scatterlist *sg_next(struct scatterlist *);
struct scatterlist *sg_last(struct scatterlist *s, unsigned int);
void sg_init_table(struct scatterlist *, unsigned int);
void sg_init_one(struct scatterlist *, const void *, unsigned int);

typedef struct scatterlist *(sg_alloc_fn)(unsigned int, gfp_t);
typedef void (sg_free_fn)(struct scatterlist *, unsigned int);

void __sg_free_table(struct sg_table *, unsigned int, sg_free_fn *);
void sg_free_table(struct sg_table *);
int __sg_alloc_table(struct sg_table *, unsigned int, unsigned int, gfp_t,
       sg_alloc_fn *);
int sg_alloc_table(struct sg_table *, unsigned int, gfp_t);

size_t sg_copy_from_buffer(struct scatterlist *sgl, unsigned int nents,
      void *buf, size_t buflen);
size_t sg_copy_to_buffer(struct scatterlist *sgl, unsigned int nents,
    void *buf, size_t buflen);
# 15 "linux-2.6.26/include/linux/sunrpc/xdr.h" 2
# 27 "linux-2.6.26/include/linux/sunrpc/xdr.h"
struct xdr_netobj {
 unsigned int len;
 u8 * data;
};






typedef int (*kxdrproc_t)(void *rqstp, __be32 *data, void *obj);






static inline  __attribute__((always_inline)) int rpc_call_xdrproc(kxdrproc_t xdrproc, void *rqstp, __be32 *data, void *obj)
{
 int ret;

 do { } while(0);
 ret = xdrproc(rqstp, data, obj);
 do { } while(0);
 return ret;
}
# 67 "linux-2.6.26/include/linux/sunrpc/xdr.h"
struct xdr_buf {
 struct kvec head[1],
   tail[1];

 struct page ** pages;
 unsigned int page_base,
   page_len,
   flags;



 unsigned int buflen,
   len;

};
# 112 "linux-2.6.26/include/linux/sunrpc/xdr.h"
__be32 *xdr_encode_opaque_fixed(__be32 *p, const void *ptr, unsigned int len);
__be32 *xdr_encode_opaque(__be32 *p, const void *ptr, unsigned int len);
__be32 *xdr_encode_string(__be32 *p, const char *s);
__be32 *xdr_decode_string_inplace(__be32 *p, char **sp, unsigned int *lenp,
   unsigned int maxlen);
__be32 *xdr_encode_netobj(__be32 *p, const struct xdr_netobj *);
__be32 *xdr_decode_netobj(__be32 *p, struct xdr_netobj *);

void xdr_encode_pages(struct xdr_buf *, struct page **, unsigned int,
    unsigned int);
void xdr_inline_pages(struct xdr_buf *, unsigned int,
    struct page **, unsigned int, unsigned int);

static inline  __attribute__((always_inline)) __be32 *xdr_encode_array(__be32 *p, const void *s, unsigned int len)
{
 return xdr_encode_opaque(p, s, len);
}




static inline  __attribute__((always_inline)) __be32 *
xdr_encode_hyper(__be32 *p, __u64 val)
{
 *p++ = (( __be32)__fswab32((val >> 32)));
 *p++ = (( __be32)__fswab32((val & 0xFFFFFFFF)));
 return p;
}

static inline  __attribute__((always_inline)) __be32 *
xdr_decode_hyper(__be32 *p, __u64 *valp)
{
 *valp = ((__u64) __fswab32(( __u32)(__be32)(*p++))) << 32;
 *valp |= __fswab32(( __u32)(__be32)(*p++));
 return p;
}




static inline  __attribute__((always_inline)) int
xdr_adjust_iovec(struct kvec *iov, __be32 *p)
{
 return iov->iov_len = ((u8 *) p - (u8 *) iov->iov_base);
}




extern void xdr_shift_buf(struct xdr_buf *, size_t);
extern void xdr_buf_from_iov(struct kvec *, struct xdr_buf *);
extern int xdr_buf_subsegment(struct xdr_buf *, struct xdr_buf *, unsigned int, unsigned int);
extern int xdr_buf_read_netobj(struct xdr_buf *, struct xdr_netobj *, unsigned int);
extern int read_bytes_from_xdr_buf(struct xdr_buf *, unsigned int, void *, unsigned int);
extern int write_bytes_to_xdr_buf(struct xdr_buf *, unsigned int, void *, unsigned int);




struct xdr_skb_reader {
 struct sk_buff *skb;
 unsigned int offset;
 size_t count;
 __wsum csum;
};

typedef size_t (*xdr_skb_read_actor)(struct xdr_skb_reader *desc, void *to, size_t len);

size_t xdr_skb_read_bits(struct xdr_skb_reader *desc, void *to, size_t len);
extern int csum_partial_copy_to_xdr(struct xdr_buf *, struct sk_buff *);
extern ssize_t xdr_partial_copy_from_skb(struct xdr_buf *, unsigned int,
  struct xdr_skb_reader *, xdr_skb_read_actor);

extern int xdr_encode_word(struct xdr_buf *, unsigned int, u32);
extern int xdr_decode_word(struct xdr_buf *, unsigned int, u32 *);

struct xdr_array2_desc;
typedef int (*xdr_xcode_elem_t)(struct xdr_array2_desc *desc, void *elem);
struct xdr_array2_desc {
 unsigned int elem_size;
 unsigned int array_len;
 unsigned int array_maxlen;
 xdr_xcode_elem_t xcode;
};

extern int xdr_decode_array2(struct xdr_buf *buf, unsigned int base,
                             struct xdr_array2_desc *desc);
extern int xdr_encode_array2(struct xdr_buf *buf, unsigned int base,
        struct xdr_array2_desc *desc);




struct xdr_stream {
 __be32 *p;
 struct xdr_buf *buf;

 __be32 *end;
 struct kvec *iov;
};

extern void xdr_init_encode(struct xdr_stream *xdr, struct xdr_buf *buf, __be32 *p);
extern __be32 *xdr_reserve_space(struct xdr_stream *xdr, size_t nbytes);
extern void xdr_write_pages(struct xdr_stream *xdr, struct page **pages,
  unsigned int base, unsigned int len);
extern void xdr_init_decode(struct xdr_stream *xdr, struct xdr_buf *buf, __be32 *p);
extern __be32 *xdr_inline_decode(struct xdr_stream *xdr, size_t nbytes);
extern void xdr_read_pages(struct xdr_stream *xdr, unsigned int len);
extern void xdr_enter_page(struct xdr_stream *xdr, unsigned int len);
extern int xdr_process_buf(struct xdr_buf *buf, unsigned int offset, unsigned int len, int (*actor)(struct scatterlist *, void *), void *data);
# 18 "linux-2.6.26/include/linux/sunrpc/sched.h" 2




struct rpc_procinfo;
struct rpc_message {
 struct rpc_procinfo * rpc_proc;
 void * rpc_argp;
 void * rpc_resp;
 struct rpc_cred * rpc_cred;
};

struct rpc_call_ops;
struct rpc_wait_queue;
struct rpc_wait {
 struct list_head list;
 struct list_head links;
 struct list_head timer_list;
 unsigned long expires;
};




struct rpc_task {

 unsigned long tk_magic;

 atomic_t tk_count;
 struct list_head tk_task;
 struct rpc_clnt * tk_client;
 struct rpc_rqst * tk_rqstp;
 int tk_status;




 struct rpc_message tk_msg;
 __u8 tk_garb_retry;
 __u8 tk_cred_retry;






 void (*tk_callback)(struct rpc_task *);
 void (*tk_action)(struct rpc_task *);
 const struct rpc_call_ops *tk_ops;
 void * tk_calldata;

 unsigned long tk_timeout;
 unsigned short tk_flags;
 unsigned long tk_runstate;
 struct workqueue_struct *tk_workqueue;


 struct rpc_wait_queue *tk_waitqueue;
 union {
  struct work_struct tk_work;
  struct rpc_wait tk_wait;
 } u;

 unsigned short tk_timeouts;
 size_t tk_bytes_sent;
 unsigned long tk_start;
 long tk_rtt;

 pid_t tk_owner;
 unsigned char tk_priority : 2;


 unsigned short tk_pid;

};
# 104 "linux-2.6.26/include/linux/sunrpc/sched.h"
typedef void (*rpc_action)(struct rpc_task *);

struct rpc_call_ops {
 void (*rpc_call_prepare)(struct rpc_task *, void *);
 void (*rpc_call_done)(struct rpc_task *, void *);
 void (*rpc_release)(void *);
};

struct rpc_task_setup {
 struct rpc_task *task;
 struct rpc_clnt *rpc_client;
 const struct rpc_message *rpc_message;
 const struct rpc_call_ops *callback_ops;
 void *callback_data;
 struct workqueue_struct *workqueue;
 unsigned short flags;
 signed char priority;
};
# 177 "linux-2.6.26/include/linux/sunrpc/sched.h"
struct rpc_timer {
 struct timer_list timer;
 struct list_head list;
 unsigned long expires;
};




struct rpc_wait_queue {
 spinlock_t lock;
 struct list_head tasks[(1 + (1) - (-1))];
 pid_t owner;
 unsigned char maxpriority;
 unsigned char priority;
 unsigned char count;
 unsigned char nr;
 unsigned short qlen;
 struct rpc_timer timer_list;

 const char * name;

};
# 212 "linux-2.6.26/include/linux/sunrpc/sched.h"
struct rpc_task *rpc_new_task(const struct rpc_task_setup *);
struct rpc_task *rpc_run_task(const struct rpc_task_setup *);
void rpc_put_task(struct rpc_task *);
void rpc_exit_task(struct rpc_task *);
void rpc_release_calldata(const struct rpc_call_ops *, void *);
void rpc_killall_tasks(struct rpc_clnt *);
void rpc_execute(struct rpc_task *);
void rpc_init_priority_wait_queue(struct rpc_wait_queue *, const char *);
void rpc_init_wait_queue(struct rpc_wait_queue *, const char *);
void rpc_destroy_wait_queue(struct rpc_wait_queue *);
void rpc_sleep_on(struct rpc_wait_queue *, struct rpc_task *,
     rpc_action action);
void rpc_wake_up_queued_task(struct rpc_wait_queue *,
     struct rpc_task *);
void rpc_wake_up(struct rpc_wait_queue *);
struct rpc_task *rpc_wake_up_next(struct rpc_wait_queue *);
void rpc_wake_up_status(struct rpc_wait_queue *, int);
void rpc_delay(struct rpc_task *, unsigned long);
void * rpc_malloc(struct rpc_task *, size_t);
void rpc_free(void *);
int rpciod_up(void);
void rpciod_down(void);
int __rpc_wait_for_completion_task(struct rpc_task *task, int (*)(void *));

void rpc_show_tasks(void);

int rpc_init_mempool(void);
void rpc_destroy_mempool(void);
extern struct workqueue_struct *rpciod_workqueue;

static inline  __attribute__((always_inline)) void rpc_exit(struct rpc_task *task, int status)
{
 task->tk_status = status;
 task->tk_action = rpc_exit_task;
}

static inline  __attribute__((always_inline)) int rpc_wait_for_completion_task(struct rpc_task *task)
{
 return __rpc_wait_for_completion_task(task, ((void *)0));
}


static inline  __attribute__((always_inline)) const char * rpc_qname(struct rpc_wait_queue *q)
{
 return ((q && q->name) ? q->name : "unknown");
}
# 15 "linux-2.6.26/include/linux/sunrpc/auth.h" 2



# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 19 "linux-2.6.26/include/linux/sunrpc/auth.h" 2






struct auth_cred {
 uid_t uid;
 gid_t gid;
 struct group_info *group_info;
 unsigned char machine_cred : 1;
};




struct rpc_auth;
struct rpc_credops;
struct rpc_cred {
 struct hlist_node cr_hash;
 struct list_head cr_lru;
 struct rcu_head cr_rcu;
 struct rpc_auth * cr_auth;
 const struct rpc_credops *cr_ops;

 unsigned long cr_magic;

 unsigned long cr_expire;
 unsigned long cr_flags;
 atomic_t cr_count;

 uid_t cr_uid;


};
# 65 "linux-2.6.26/include/linux/sunrpc/auth.h"
struct rpc_cred_cache {
 struct hlist_head hashtable[(1 << 4)];
 spinlock_t lock;
};

struct rpc_authops;
struct rpc_auth {
 unsigned int au_cslack;


 unsigned int au_rslack;

 unsigned int au_verfsize;

 unsigned int au_flags;
 const struct rpc_authops *au_ops;
 rpc_authflavor_t au_flavor;



 atomic_t au_count;

 struct rpc_cred_cache * au_credcache;

};







struct rpc_authops {
 struct module *owner;
 rpc_authflavor_t au_flavor;
 char * au_name;
 struct rpc_auth * (*create)(struct rpc_clnt *, rpc_authflavor_t);
 void (*destroy)(struct rpc_auth *);

 struct rpc_cred * (*lookup_cred)(struct rpc_auth *, struct auth_cred *, int);
 struct rpc_cred * (*crcreate)(struct rpc_auth*, struct auth_cred *, int);
};

struct rpc_credops {
 const char * cr_name;
 int (*cr_init)(struct rpc_auth *, struct rpc_cred *);
 void (*crdestroy)(struct rpc_cred *);

 int (*crmatch)(struct auth_cred *, struct rpc_cred *, int);
 void (*crbind)(struct rpc_task *, struct rpc_cred *);
 __be32 * (*crmarshal)(struct rpc_task *, __be32 *);
 int (*crrefresh)(struct rpc_task *);
 __be32 * (*crvalidate)(struct rpc_task *, __be32 *);
 int (*crwrap_req)(struct rpc_task *, kxdrproc_t,
      void *, __be32 *, void *);
 int (*crunwrap_resp)(struct rpc_task *, kxdrproc_t,
      void *, __be32 *, void *);
};

typedef  const struct rpc_authops    _GLOBAL_206_T; extern  _GLOBAL_206_T  global_authunix_ops[NUM_STACKS];     
typedef  const struct rpc_authops    _GLOBAL_207_T; extern  _GLOBAL_207_T  global_authnull_ops[NUM_STACKS];     

void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) rpc_init_authunix(void);
void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) rpc_init_generic_auth(void);
void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) rpcauth_init_module(void);
void    __attribute__ ((__section__(".exit.text"))) __attribute__((__used__)) __attribute__((__cold__)) rpcauth_remove_module(void);
void    __attribute__ ((__section__(".exit.text"))) __attribute__((__used__)) __attribute__((__cold__)) rpc_destroy_generic_auth(void);

struct rpc_cred * rpc_lookup_cred(void);
struct rpc_cred * rpc_lookup_machine_cred(void);
int rpcauth_register(const struct rpc_authops *);
int rpcauth_unregister(const struct rpc_authops *);
struct rpc_auth * rpcauth_create(rpc_authflavor_t, struct rpc_clnt *);
void rpcauth_release(struct rpc_auth *);
struct rpc_cred * rpcauth_lookup_credcache(struct rpc_auth *, struct auth_cred *, int);
void rpcauth_init_cred(struct rpc_cred *, const struct auth_cred *, struct rpc_auth *, const struct rpc_credops *);
struct rpc_cred * rpcauth_lookupcred(struct rpc_auth *, int);
void rpcauth_bindcred(struct rpc_task *, struct rpc_cred *, int);
void rpcauth_generic_bind_cred(struct rpc_task *, struct rpc_cred *);
void put_rpccred(struct rpc_cred *);
void rpcauth_unbindcred(struct rpc_task *);
__be32 * rpcauth_marshcred(struct rpc_task *, __be32 *);
__be32 * rpcauth_checkverf(struct rpc_task *, __be32 *);
int rpcauth_wrap_req(struct rpc_task *task, kxdrproc_t encode, void *rqstp, __be32 *data, void *obj);
int rpcauth_unwrap_resp(struct rpc_task *task, kxdrproc_t decode, void *rqstp, __be32 *data, void *obj);
int rpcauth_refreshcred(struct rpc_task *);
void rpcauth_invalcred(struct rpc_task *);
int rpcauth_uptodatecred(struct rpc_task *);
int rpcauth_init_credcache(struct rpc_auth *);
void rpcauth_destroy_credcache(struct rpc_auth *);
void rpcauth_clear_credcache(struct rpc_cred_cache *);

static inline 
__attribute__((always_inline)) struct rpc_cred * get_rpccred(struct rpc_cred *cred)
{
 atomic_inc(&cred->cr_count);
 return cred;
}
# 43 "linux-2.6.26/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.26/include/linux/sunrpc/clnt.h" 1
# 14 "linux-2.6.26/include/linux/sunrpc/clnt.h"
# 1 "linux-2.6.26/include/linux/sunrpc/xprt.h" 1
# 29 "linux-2.6.26/include/linux/sunrpc/xprt.h"
struct rpc_timeout {
 unsigned long to_initval,
    to_maxval,
    to_increment;
 unsigned int to_retries;
 unsigned char to_exponential;
};

enum rpc_display_format_t {
 RPC_DISPLAY_ADDR = 0,
 RPC_DISPLAY_PORT,
 RPC_DISPLAY_PROTO,
 RPC_DISPLAY_ALL,
 RPC_DISPLAY_HEX_ADDR,
 RPC_DISPLAY_HEX_PORT,
 RPC_DISPLAY_UNIVERSAL_ADDR,
 RPC_DISPLAY_NETID,
 RPC_DISPLAY_MAX,
};

struct rpc_task;
struct rpc_xprt;
struct seq_file;




struct rpc_rqst {



 struct rpc_xprt * rq_xprt;
 struct xdr_buf rq_snd_buf;
 struct xdr_buf rq_rcv_buf;




 struct rpc_task * rq_task;
 __be32 rq_xid;
 int rq_cong;
 int rq_received;
 u32 rq_seqno;
 int rq_enc_pages_num;
 struct page **rq_enc_pages;

 void (*rq_release_snd_buf)(struct rpc_rqst *);
 struct list_head rq_list;

 __u32 * rq_buffer;
 size_t rq_bufsize,
    rq_callsize,
    rq_rcvsize;

 struct xdr_buf rq_private_buf;


 unsigned long rq_majortimeo;
 unsigned long rq_timeout;
 unsigned int rq_retries;
 unsigned int rq_connect_cookie;







 u32 rq_bytes_sent;

 unsigned long rq_xtime;
 int rq_ntrans;
};



struct rpc_xprt_ops {
 void (*set_buffer_size)(struct rpc_xprt *xprt, size_t sndsize, size_t rcvsize);
 int (*reserve_xprt)(struct rpc_task *task);
 void (*release_xprt)(struct rpc_xprt *xprt, struct rpc_task *task);
 void (*rpcbind)(struct rpc_task *task);
 void (*set_port)(struct rpc_xprt *xprt, unsigned short port);
 void (*connect)(struct rpc_task *task);
 void * (*buf_alloc)(struct rpc_task *task, size_t size);
 void (*buf_free)(void *buffer);
 int (*send_request)(struct rpc_task *task);
 void (*set_retrans_timeout)(struct rpc_task *task);
 void (*timer)(struct rpc_task *task);
 void (*release_request)(struct rpc_task *task);
 void (*close)(struct rpc_xprt *xprt);
 void (*destroy)(struct rpc_xprt *xprt);
 void (*print_stats)(struct rpc_xprt *xprt, struct seq_file *seq);
};

struct rpc_xprt {
 struct kref kref;
 struct rpc_xprt_ops * ops;

 const struct rpc_timeout *timeout;
 struct __kernel_sockaddr_storage addr;
 size_t addrlen;
 int prot;

 unsigned long cong;
 unsigned long cwnd;

 size_t max_payload;

 unsigned int tsh_size;


 struct rpc_wait_queue binding;
 struct rpc_wait_queue sending;
 struct rpc_wait_queue resend;
 struct rpc_wait_queue pending;
 struct rpc_wait_queue backlog;
 struct list_head free;
 struct rpc_rqst * slot;
 unsigned int max_reqs;
 unsigned long state;
 unsigned char shutdown : 1,
    resvport : 1;
 unsigned int bind_index;




 unsigned long connect_timeout,
    bind_timeout,
    reestablish_timeout;
 unsigned int connect_cookie;






 struct work_struct task_cleanup;
 struct timer_list timer;
 unsigned long last_used,
    idle_timeout;




 spinlock_t transport_lock;
 spinlock_t reserve_lock;
 u32 xid;
 struct rpc_task * snd_task;
 struct list_head recv;

 struct {
  unsigned long bind_count,
     connect_count,
     connect_start,
     connect_time,
     sends,
     recvs,
     bad_xids;

  unsigned long long req_u,
     bklog_u;
 } stat;

 const char *address_strings[RPC_DISPLAY_MAX];
};

struct xprt_create {
 int ident;
 struct sockaddr * srcaddr;
 struct sockaddr * dstaddr;
 size_t addrlen;
};

struct xprt_class {
 struct list_head list;
 int ident;
 struct rpc_xprt * (*setup)(struct xprt_create *);
 struct module *owner;
 char name[32];
};




struct rpc_xprt *xprt_create_transport(struct xprt_create *args);
void xprt_connect(struct rpc_task *task);
void xprt_reserve(struct rpc_task *task);
int xprt_reserve_xprt(struct rpc_task *task);
int xprt_reserve_xprt_cong(struct rpc_task *task);
int xprt_prepare_transmit(struct rpc_task *task);
void xprt_transmit(struct rpc_task *task);
void xprt_end_transmit(struct rpc_task *task);
int xprt_adjust_timeout(struct rpc_rqst *req);
void xprt_release_xprt(struct rpc_xprt *xprt, struct rpc_task *task);
void xprt_release_xprt_cong(struct rpc_xprt *xprt, struct rpc_task *task);
void xprt_release(struct rpc_task *task);
struct rpc_xprt * xprt_get(struct rpc_xprt *xprt);
void xprt_put(struct rpc_xprt *xprt);

static inline  __attribute__((always_inline)) __be32 *xprt_skip_transport_header(struct rpc_xprt *xprt, __be32 *p)
{
 return p + xprt->tsh_size;
}




int xprt_register_transport(struct xprt_class *type);
int xprt_unregister_transport(struct xprt_class *type);
void xprt_set_retrans_timeout_def(struct rpc_task *task);
void xprt_set_retrans_timeout_rtt(struct rpc_task *task);
void xprt_wake_pending_tasks(struct rpc_xprt *xprt, int status);
void xprt_wait_for_buffer_space(struct rpc_task *task, rpc_action action);
void xprt_write_space(struct rpc_xprt *xprt);
void xprt_update_rtt(struct rpc_task *task);
void xprt_adjust_cwnd(struct rpc_task *task, int result);
struct rpc_rqst * xprt_lookup_rqst(struct rpc_xprt *xprt, __be32 xid);
void xprt_complete_rqst(struct rpc_task *task, int copied);
void xprt_release_rqst_cong(struct rpc_task *task);
void xprt_disconnect_done(struct rpc_xprt *xprt);
void xprt_force_disconnect(struct rpc_xprt *xprt);
void xprt_conditional_disconnect(struct rpc_xprt *xprt, unsigned int cookie);
# 264 "linux-2.6.26/include/linux/sunrpc/xprt.h"
static inline  __attribute__((always_inline)) void xprt_set_connected(struct rpc_xprt *xprt)
{
 set_bit((1), &xprt->state);
}

static inline  __attribute__((always_inline)) void xprt_clear_connected(struct rpc_xprt *xprt)
{
 clear_bit((1), &xprt->state);
}

static inline  __attribute__((always_inline)) int xprt_connected(struct rpc_xprt *xprt)
{
 return (__builtin_constant_p(((1))) ? constant_test_bit(((1)), (&xprt->state)) : variable_test_bit(((1)), (&xprt->state)));
}

static inline  __attribute__((always_inline)) int xprt_test_and_set_connected(struct rpc_xprt *xprt)
{
 return test_and_set_bit((1), &xprt->state);
}

static inline  __attribute__((always_inline)) int xprt_test_and_clear_connected(struct rpc_xprt *xprt)
{
 return test_and_clear_bit((1), &xprt->state);
}

static inline  __attribute__((always_inline)) void xprt_clear_connecting(struct rpc_xprt *xprt)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit((2), &xprt->state);
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) int xprt_connecting(struct rpc_xprt *xprt)
{
 return (__builtin_constant_p(((2))) ? constant_test_bit(((2)), (&xprt->state)) : variable_test_bit(((2)), (&xprt->state)));
}

static inline  __attribute__((always_inline)) int xprt_test_and_set_connecting(struct rpc_xprt *xprt)
{
 return test_and_set_bit((2), &xprt->state);
}

static inline  __attribute__((always_inline)) void xprt_set_bound(struct rpc_xprt *xprt)
{
 test_and_set_bit((4), &xprt->state);
}

static inline  __attribute__((always_inline)) int xprt_bound(struct rpc_xprt *xprt)
{
 return (__builtin_constant_p(((4))) ? constant_test_bit(((4)), (&xprt->state)) : variable_test_bit(((4)), (&xprt->state)));
}

static inline  __attribute__((always_inline)) void xprt_clear_bound(struct rpc_xprt *xprt)
{
 clear_bit((4), &xprt->state);
}

static inline  __attribute__((always_inline)) void xprt_clear_binding(struct rpc_xprt *xprt)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit((5), &xprt->state);
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) int xprt_test_and_set_binding(struct rpc_xprt *xprt)
{
 return test_and_set_bit((5), &xprt->state);
}
# 15 "linux-2.6.26/include/linux/sunrpc/clnt.h" 2

# 1 "linux-2.6.26/include/linux/sunrpc/stats.h" 1
# 14 "linux-2.6.26/include/linux/sunrpc/stats.h"
struct rpc_stat {
 struct rpc_program * program;

 unsigned int netcnt,
    netudpcnt,
    nettcpcnt,
    nettcpconn,
    netreconn;
 unsigned int rpccnt,
    rpcretrans,
    rpcauthrefresh,
    rpcgarbage;
};

struct svc_stat {
 struct svc_program * program;

 unsigned int netcnt,
    netudpcnt,
    nettcpcnt,
    nettcpconn;
 unsigned int rpccnt,
    rpcbadfmt,
    rpcbadauth,
    rpcbadclnt;
};

void rpc_proc_init(void);
void rpc_proc_exit(void);
# 62 "linux-2.6.26/include/linux/sunrpc/stats.h"
static inline  __attribute__((always_inline)) struct proc_dir_entry *rpc_proc_register(struct rpc_stat *s) { return ((void *)0); }
static inline  __attribute__((always_inline)) void rpc_proc_unregister(const char *p) {}
static inline  __attribute__((always_inline)) void rpc_proc_zero(struct rpc_program *p) {}

static inline  __attribute__((always_inline)) struct proc_dir_entry *svc_proc_register(struct svc_stat *s,
             const struct file_operations *f) { return ((void *)0); }
static inline  __attribute__((always_inline)) void svc_proc_unregister(const char *p) {}

static inline  __attribute__((always_inline)) void svc_seq_show(struct seq_file *seq,
    const struct svc_stat *st) {}
# 17 "linux-2.6.26/include/linux/sunrpc/clnt.h" 2

# 1 "linux-2.6.26/include/linux/sunrpc/timer.h" 1
# 12 "linux-2.6.26/include/linux/sunrpc/timer.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 13 "linux-2.6.26/include/linux/sunrpc/timer.h" 2

struct rpc_rtt {
 unsigned long timeo;
 unsigned long srtt[5];
 unsigned long sdrtt[5];
 int ntimeouts[5];
};


extern void rpc_init_rtt(struct rpc_rtt *rt, unsigned long timeo);
extern void rpc_update_rtt(struct rpc_rtt *rt, unsigned timer, long m);
extern unsigned long rpc_calc_rto(struct rpc_rtt *rt, unsigned timer);

static inline  __attribute__((always_inline)) void rpc_set_timeo(struct rpc_rtt *rt, int timer, int ntimeo)
{
 int *t;
 if (!timer)
  return;
 t = &rt->ntimeouts[timer-1];
 if (ntimeo < *t) {
  if (*t > 0)
   (*t)--;
 } else {
  if (ntimeo > 8)
   ntimeo = 8;
  *t = ntimeo;
 }
}

static inline  __attribute__((always_inline)) int rpc_ntimeo(struct rpc_rtt *rt, int timer)
{
 if (!timer)
  return 0;
 return rt->ntimeouts[timer-1];
}
# 19 "linux-2.6.26/include/linux/sunrpc/clnt.h" 2


struct rpc_inode;




struct rpc_clnt {
 struct kref cl_kref;
 struct list_head cl_clients;
 struct list_head cl_tasks;
 spinlock_t cl_lock;
 struct rpc_xprt * cl_xprt;
 struct rpc_procinfo * cl_procinfo;
 u32 cl_prog,
    cl_vers,
    cl_maxproc;

 char * cl_server;
 char * cl_protname;
 struct rpc_auth * cl_auth;
 struct rpc_stat * cl_stats;
 struct rpc_iostats * cl_metrics;

 unsigned int cl_softrtry : 1,
    cl_discrtry : 1,
    cl_autobind : 1;

 struct rpc_rtt * cl_rtt;
 const struct rpc_timeout *cl_timeout;

 int cl_nodelen;
 char cl_nodename[32];
 char cl_pathname[30];
 struct vfsmount * cl_vfsmnt;
 struct dentry * cl_dentry;
 struct rpc_clnt * cl_parent;
 struct rpc_rtt cl_rtt_default;
 struct rpc_timeout cl_timeout_default;
 struct rpc_program * cl_program;
 char cl_inline_name[32];
};





struct rpc_program {
 char * name;
 u32 number;
 unsigned int nrvers;
 struct rpc_version ** version;
 struct rpc_stat * stats;
 char * pipe_dir_name;
};

struct rpc_version {
 u32 number;
 unsigned int nrprocs;
 struct rpc_procinfo * procs;
};




struct rpc_procinfo {
 u32 p_proc;
 kxdrproc_t p_encode;
 kxdrproc_t p_decode;
 unsigned int p_arglen;
 unsigned int p_replen;
 unsigned int p_count;
 unsigned int p_timer;
 u32 p_statidx;
 char * p_name;
};



struct rpc_create_args {
 int protocol;
 struct sockaddr *address;
 size_t addrsize;
 struct sockaddr *saddress;
 const struct rpc_timeout *timeout;
 char *servername;
 struct rpc_program *program;
 u32 version;
 rpc_authflavor_t authflavor;
 unsigned long flags;
};
# 118 "linux-2.6.26/include/linux/sunrpc/clnt.h"
struct rpc_clnt *rpc_create(struct rpc_create_args *args);
struct rpc_clnt *rpc_bind_new_program(struct rpc_clnt *,
    struct rpc_program *, u32);
struct rpc_clnt *rpc_clone_client(struct rpc_clnt *);
void rpc_shutdown_client(struct rpc_clnt *);
void rpc_release_client(struct rpc_clnt *);

int rpcb_register(u32, u32, int, unsigned short, int *);
int rpcb_getport_sync(struct sockaddr_in *, u32, u32, int);
void rpcb_getport_async(struct rpc_task *);

void rpc_call_start(struct rpc_task *);
int rpc_call_async(struct rpc_clnt *clnt,
          const struct rpc_message *msg, int flags,
          const struct rpc_call_ops *tk_ops,
          void *calldata);
int rpc_call_sync(struct rpc_clnt *clnt,
         const struct rpc_message *msg, int flags);
struct rpc_task *rpc_call_null(struct rpc_clnt *clnt, struct rpc_cred *cred,
          int flags);
void rpc_restart_call(struct rpc_task *);
void rpc_setbufsize(struct rpc_clnt *, unsigned int, unsigned int);
size_t rpc_max_payload(struct rpc_clnt *);
void rpc_force_rebind(struct rpc_clnt *);
size_t rpc_peeraddr(struct rpc_clnt *, struct sockaddr *, size_t);
const char *rpc_peeraddr2str(struct rpc_clnt *, enum rpc_display_format_t);
# 44 "linux-2.6.26/include/linux/nfs_fs.h" 2


# 1 "linux-2.6.26/include/linux/nfs2.h" 1
# 28 "linux-2.6.26/include/linux/nfs2.h"
enum nfs2_ftype {
 NF2NON = 0,
 NF2REG = 1,
 NF2DIR = 2,
 NF2BLK = 3,
 NF2CHR = 4,
 NF2LNK = 5,
 NF2SOCK = 6,
 NF2BAD = 7,
 NF2FIFO = 8
};

struct nfs2_fh {
 char data[32];
};
# 47 "linux-2.6.26/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.26/include/linux/nfs3.h" 1
# 34 "linux-2.6.26/include/linux/nfs3.h"
enum nfs3_createmode {
 NFS3_CREATE_UNCHECKED = 0,
 NFS3_CREATE_GUARDED = 1,
 NFS3_CREATE_EXCLUSIVE = 2
};
# 50 "linux-2.6.26/include/linux/nfs3.h"
enum nfs3_ftype {
 NF3NON = 0,
 NF3REG = 1,
 NF3DIR = 2,
 NF3BLK = 3,
 NF3CHR = 4,
 NF3LNK = 5,
 NF3SOCK = 6,
 NF3FIFO = 7,
 NF3BAD = 8
};

struct nfs3_fh {
 unsigned short size;
 unsigned char data[64];
};
# 48 "linux-2.6.26/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.26/include/linux/nfs4.h" 1
# 94 "linux-2.6.26/include/linux/nfs4.h"
enum nfs4_acl_whotype {
 NFS4_ACL_WHO_NAMED = 0,
 NFS4_ACL_WHO_OWNER,
 NFS4_ACL_WHO_GROUP,
 NFS4_ACL_WHO_EVERYONE,
};




struct nfs4_ace {
 uint32_t type;
 uint32_t flag;
 uint32_t access_mask;
 int whotype;
 uid_t who;
};

struct nfs4_acl {
 uint32_t naces;
 struct nfs4_ace aces[0];
};

typedef struct { char data[8]; } nfs4_verifier;
typedef struct { char data[16]; } nfs4_stateid;

enum nfs_opnum4 {
 OP_ACCESS = 3,
 OP_CLOSE = 4,
 OP_COMMIT = 5,
 OP_CREATE = 6,
 OP_DELEGPURGE = 7,
 OP_DELEGRETURN = 8,
 OP_GETATTR = 9,
 OP_GETFH = 10,
 OP_LINK = 11,
 OP_LOCK = 12,
 OP_LOCKT = 13,
 OP_LOCKU = 14,
 OP_LOOKUP = 15,
 OP_LOOKUPP = 16,
 OP_NVERIFY = 17,
 OP_OPEN = 18,
 OP_OPENATTR = 19,
 OP_OPEN_CONFIRM = 20,
 OP_OPEN_DOWNGRADE = 21,
 OP_PUTFH = 22,
 OP_PUTPUBFH = 23,
 OP_PUTROOTFH = 24,
 OP_READ = 25,
 OP_READDIR = 26,
 OP_READLINK = 27,
 OP_REMOVE = 28,
 OP_RENAME = 29,
 OP_RENEW = 30,
 OP_RESTOREFH = 31,
 OP_SAVEFH = 32,
 OP_SECINFO = 33,
 OP_SETATTR = 34,
 OP_SETCLIENTID = 35,
 OP_SETCLIENTID_CONFIRM = 36,
 OP_VERIFY = 37,
 OP_WRITE = 38,
 OP_RELEASE_LOCKOWNER = 39,
 OP_ILLEGAL = 10044,
};







enum nfsstat4 {
 NFS4_OK = 0,
 NFS4ERR_PERM = 1,
 NFS4ERR_NOENT = 2,
 NFS4ERR_IO = 5,
 NFS4ERR_NXIO = 6,
 NFS4ERR_ACCESS = 13,
 NFS4ERR_EXIST = 17,
 NFS4ERR_XDEV = 18,

 NFS4ERR_NOTDIR = 20,
 NFS4ERR_ISDIR = 21,
 NFS4ERR_INVAL = 22,
 NFS4ERR_FBIG = 27,
 NFS4ERR_NOSPC = 28,
 NFS4ERR_ROFS = 30,
 NFS4ERR_MLINK = 31,
 NFS4ERR_NAMETOOLONG = 63,
 NFS4ERR_NOTEMPTY = 66,
 NFS4ERR_DQUOT = 69,
 NFS4ERR_STALE = 70,
 NFS4ERR_BADHANDLE = 10001,
 NFS4ERR_BAD_COOKIE = 10003,
 NFS4ERR_NOTSUPP = 10004,
 NFS4ERR_TOOSMALL = 10005,
 NFS4ERR_SERVERFAULT = 10006,
 NFS4ERR_BADTYPE = 10007,
 NFS4ERR_DELAY = 10008,
 NFS4ERR_SAME = 10009,
 NFS4ERR_DENIED = 10010,
 NFS4ERR_EXPIRED = 10011,
 NFS4ERR_LOCKED = 10012,
 NFS4ERR_GRACE = 10013,
 NFS4ERR_FHEXPIRED = 10014,
 NFS4ERR_SHARE_DENIED = 10015,
 NFS4ERR_WRONGSEC = 10016,
 NFS4ERR_CLID_INUSE = 10017,
 NFS4ERR_RESOURCE = 10018,
 NFS4ERR_MOVED = 10019,
 NFS4ERR_NOFILEHANDLE = 10020,
 NFS4ERR_MINOR_VERS_MISMATCH = 10021,
 NFS4ERR_STALE_CLIENTID = 10022,
 NFS4ERR_STALE_STATEID = 10023,
 NFS4ERR_OLD_STATEID = 10024,
 NFS4ERR_BAD_STATEID = 10025,
 NFS4ERR_BAD_SEQID = 10026,
 NFS4ERR_NOT_SAME = 10027,
 NFS4ERR_LOCK_RANGE = 10028,
 NFS4ERR_SYMLINK = 10029,
 NFS4ERR_RESTOREFH = 10030,
 NFS4ERR_LEASE_MOVED = 10031,
 NFS4ERR_ATTRNOTSUPP = 10032,
 NFS4ERR_NO_GRACE = 10033,
 NFS4ERR_RECLAIM_BAD = 10034,
 NFS4ERR_RECLAIM_CONFLICT = 10035,
 NFS4ERR_BADXDR = 10036,
 NFS4ERR_LOCKS_HELD = 10037,
 NFS4ERR_OPENMODE = 10038,
 NFS4ERR_BADOWNER = 10039,
 NFS4ERR_BADCHAR = 10040,
 NFS4ERR_BADNAME = 10041,
 NFS4ERR_BAD_RANGE = 10042,
 NFS4ERR_LOCK_NOTSUPP = 10043,
 NFS4ERR_OP_ILLEGAL = 10044,
 NFS4ERR_DEADLOCK = 10045,
 NFS4ERR_FILE_OPEN = 10046,
 NFS4ERR_ADMIN_REVOKED = 10047,
 NFS4ERR_CB_PATH_DOWN = 10048
};





enum nfs_ftype4 {
 NF4BAD = 0,
        NF4REG = 1,
        NF4DIR = 2,
        NF4BLK = 3,
        NF4CHR = 4,
        NF4LNK = 5,
        NF4SOCK = 6,
        NF4FIFO = 7,
        NF4ATTRDIR = 8,
        NF4NAMEDATTR = 9
};

enum open_claim_type4 {
 NFS4_OPEN_CLAIM_NULL = 0,
 NFS4_OPEN_CLAIM_PREVIOUS = 1,
 NFS4_OPEN_CLAIM_DELEGATE_CUR = 2,
 NFS4_OPEN_CLAIM_DELEGATE_PREV = 3
};

enum opentype4 {
 NFS4_OPEN_NOCREATE = 0,
 NFS4_OPEN_CREATE = 1
};

enum createmode4 {
 NFS4_CREATE_UNCHECKED = 0,
 NFS4_CREATE_GUARDED = 1,
 NFS4_CREATE_EXCLUSIVE = 2
};

enum limit_by4 {
 NFS4_LIMIT_SIZE = 1,
 NFS4_LIMIT_BLOCKS = 2
};

enum open_delegation_type4 {
 NFS4_OPEN_DELEGATE_NONE = 0,
 NFS4_OPEN_DELEGATE_READ = 1,
 NFS4_OPEN_DELEGATE_WRITE = 2
};

enum lock_type4 {
 NFS4_UNLOCK_LT = 0,
 NFS4_READ_LT = 1,
 NFS4_WRITE_LT = 2,
 NFS4_READW_LT = 3,
 NFS4_WRITEW_LT = 4
};
# 359 "linux-2.6.26/include/linux/nfs4.h"
enum {
 NFSPROC4_CLNT_NULL = 0,
 NFSPROC4_CLNT_READ,
 NFSPROC4_CLNT_WRITE,
 NFSPROC4_CLNT_COMMIT,
 NFSPROC4_CLNT_OPEN,
 NFSPROC4_CLNT_OPEN_CONFIRM,
 NFSPROC4_CLNT_OPEN_NOATTR,
 NFSPROC4_CLNT_OPEN_DOWNGRADE,
 NFSPROC4_CLNT_CLOSE,
 NFSPROC4_CLNT_SETATTR,
 NFSPROC4_CLNT_FSINFO,
 NFSPROC4_CLNT_RENEW,
 NFSPROC4_CLNT_SETCLIENTID,
 NFSPROC4_CLNT_SETCLIENTID_CONFIRM,
 NFSPROC4_CLNT_LOCK,
 NFSPROC4_CLNT_LOCKT,
 NFSPROC4_CLNT_LOCKU,
 NFSPROC4_CLNT_ACCESS,
 NFSPROC4_CLNT_GETATTR,
 NFSPROC4_CLNT_LOOKUP,
 NFSPROC4_CLNT_LOOKUP_ROOT,
 NFSPROC4_CLNT_REMOVE,
 NFSPROC4_CLNT_RENAME,
 NFSPROC4_CLNT_LINK,
 NFSPROC4_CLNT_SYMLINK,
 NFSPROC4_CLNT_CREATE,
 NFSPROC4_CLNT_PATHCONF,
 NFSPROC4_CLNT_STATFS,
 NFSPROC4_CLNT_READLINK,
 NFSPROC4_CLNT_READDIR,
 NFSPROC4_CLNT_SERVER_CAPS,
 NFSPROC4_CLNT_DELEGRETURN,
 NFSPROC4_CLNT_GETACL,
 NFSPROC4_CLNT_SETACL,
 NFSPROC4_CLNT_FS_LOCATIONS,
};
# 49 "linux-2.6.26/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.26/include/linux/nfs_xdr.h" 1



# 1 "linux-2.6.26/include/linux/nfsacl.h" 1
# 31 "linux-2.6.26/include/linux/nfsacl.h"
# 1 "linux-2.6.26/include/linux/posix_acl.h" 1
# 34 "linux-2.6.26/include/linux/posix_acl.h"
struct posix_acl_entry {
 short e_tag;
 unsigned short e_perm;
 unsigned int e_id;
};

struct posix_acl {
 atomic_t a_refcount;
 unsigned int a_count;
 struct posix_acl_entry a_entries[0];
};
# 53 "linux-2.6.26/include/linux/posix_acl.h"
static inline  __attribute__((always_inline)) struct posix_acl *
posix_acl_dup(struct posix_acl *acl)
{
 if (acl)
  atomic_inc(&acl->a_refcount);
 return acl;
}




static inline  __attribute__((always_inline)) void
posix_acl_release(struct posix_acl *acl)
{
 if (acl && atomic_dec_and_test(&acl->a_refcount))
  kfree(acl);
}




extern struct posix_acl *posix_acl_alloc(int, gfp_t);
extern struct posix_acl *posix_acl_clone(const struct posix_acl *, gfp_t);
extern int posix_acl_valid(const struct posix_acl *);
extern int posix_acl_permission(struct inode *, const struct posix_acl *, int);
extern struct posix_acl *posix_acl_from_mode(mode_t, gfp_t);
extern int posix_acl_equiv_mode(const struct posix_acl *, mode_t *);
extern int posix_acl_create_masq(struct posix_acl *, mode_t *);
extern int posix_acl_chmod_masq(struct posix_acl *, mode_t);

extern struct posix_acl *get_posix_acl(struct inode *, int);
extern int set_posix_acl(struct inode *, int, struct posix_acl *);
# 32 "linux-2.6.26/include/linux/nfsacl.h" 2
# 40 "linux-2.6.26/include/linux/nfsacl.h"
static inline  __attribute__((always_inline)) unsigned int
nfsacl_size(struct posix_acl *acl_access, struct posix_acl *acl_default)
{
 unsigned int w = 16;
 w += ({ typeof(acl_access ? (int)acl_access->a_count : 3) _max1 = (acl_access ? (int)acl_access->a_count : 3); typeof(4) _max2 = (4); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; }) * 12;
 if (acl_default)
  w += ({ typeof((int)acl_default->a_count) _max1 = ((int)acl_default->a_count); typeof(4) _max2 = (4); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; }) * 12;
 return w;
}

extern unsigned int
nfsacl_encode(struct xdr_buf *buf, unsigned int base, struct inode *inode,
       struct posix_acl *acl, int encode_entries, int typeflag);
extern unsigned int
nfsacl_decode(struct xdr_buf *buf, unsigned int base, unsigned int *aclcnt,
       struct posix_acl **pacl);
# 5 "linux-2.6.26/include/linux/nfs_xdr.h" 2
# 16 "linux-2.6.26/include/linux/nfs_xdr.h"
struct nfs_fsid {
 uint64_t major;
 uint64_t minor;
};




static inline  __attribute__((always_inline)) int nfs_fsid_equal(const struct nfs_fsid *a, const struct nfs_fsid *b)
{
 return a->major == b->major && a->minor == b->minor;
}

struct nfs_fattr {
 unsigned short valid;
 __u64 pre_size;
 struct timespec pre_mtime;
 struct timespec pre_ctime;
 enum nfs_ftype type;
 __u32 mode;
 __u32 nlink;
 __u32 uid;
 __u32 gid;
 __u64 size;
 union {
  struct {
   __u32 blocksize;
   __u32 blocks;
  } nfs2;
  struct {
   __u64 used;
  } nfs3;
 } du;
 dev_t rdev;
 struct nfs_fsid fsid;
 __u64 fileid;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 __u32 bitmap[2];
 __u64 change_attr;
 __u64 pre_change_attr;
 unsigned long time_start;
};
# 71 "linux-2.6.26/include/linux/nfs_xdr.h"
struct nfs_fsinfo {
 struct nfs_fattr *fattr;
 __u32 rtmax;
 __u32 rtpref;
 __u32 rtmult;
 __u32 wtmax;
 __u32 wtpref;
 __u32 wtmult;
 __u32 dtpref;
 __u64 maxfilesize;
 __u32 lease_time;
};

struct nfs_fsstat {
 struct nfs_fattr *fattr;
 __u64 tbytes;
 __u64 fbytes;
 __u64 abytes;
 __u64 tfiles;
 __u64 ffiles;
 __u64 afiles;
};

struct nfs2_fsstat {
 __u32 tsize;
 __u32 bsize;
 __u32 blocks;
 __u32 bfree;
 __u32 bavail;
};

struct nfs_pathconf {
 struct nfs_fattr *fattr;
 __u32 max_link;
 __u32 max_namelen;
};

struct nfs4_change_info {
 u32 atomic;
 u64 before;
 u64 after;
};

struct nfs_seqid;



struct nfs_openargs {
 const struct nfs_fh * fh;
 struct nfs_seqid * seqid;
 int open_flags;
 __u64 clientid;
 __u64 id;
 union {
  struct iattr * attrs;
  nfs4_verifier verifier;
  nfs4_stateid delegation;
  int delegation_type;
 } u;
 const struct qstr * name;
 const struct nfs_server *server;
 const u32 * bitmask;
 __u32 claim;
};

struct nfs_openres {
 nfs4_stateid stateid;
 struct nfs_fh fh;
 struct nfs4_change_info cinfo;
 __u32 rflags;
 struct nfs_fattr * f_attr;
 struct nfs_fattr * dir_attr;
 struct nfs_seqid * seqid;
 const struct nfs_server *server;
 int delegation_type;
 nfs4_stateid delegation;
 __u32 do_recall;
 __u64 maxsize;
 __u32 attrset[2];
};




struct nfs_open_confirmargs {
 const struct nfs_fh * fh;
 nfs4_stateid * stateid;
 struct nfs_seqid * seqid;
};

struct nfs_open_confirmres {
 nfs4_stateid stateid;
 struct nfs_seqid * seqid;
};




struct nfs_closeargs {
 struct nfs_fh * fh;
 nfs4_stateid * stateid;
 struct nfs_seqid * seqid;
 int open_flags;
 const u32 * bitmask;
};

struct nfs_closeres {
 nfs4_stateid stateid;
 struct nfs_fattr * fattr;
 struct nfs_seqid * seqid;
 const struct nfs_server *server;
};



struct nfs_lowner {
 __u64 clientid;
 __u64 id;
};

struct nfs_lock_args {
 struct nfs_fh * fh;
 struct file_lock * fl;
 struct nfs_seqid * lock_seqid;
 nfs4_stateid * lock_stateid;
 struct nfs_seqid * open_seqid;
 nfs4_stateid * open_stateid;
 struct nfs_lowner lock_owner;
 unsigned char block : 1;
 unsigned char reclaim : 1;
 unsigned char new_lock_owner : 1;
};

struct nfs_lock_res {
 nfs4_stateid stateid;
 struct nfs_seqid * lock_seqid;
 struct nfs_seqid * open_seqid;
};

struct nfs_locku_args {
 struct nfs_fh * fh;
 struct file_lock * fl;
 struct nfs_seqid * seqid;
 nfs4_stateid * stateid;
};

struct nfs_locku_res {
 nfs4_stateid stateid;
 struct nfs_seqid * seqid;
};

struct nfs_lockt_args {
 struct nfs_fh * fh;
 struct file_lock * fl;
 struct nfs_lowner lock_owner;
};

struct nfs_lockt_res {
 struct file_lock * denied;
};

struct nfs4_delegreturnargs {
 const struct nfs_fh *fhandle;
 const nfs4_stateid *stateid;
 const u32 * bitmask;
};

struct nfs4_delegreturnres {
 struct nfs_fattr * fattr;
 const struct nfs_server *server;
};




struct nfs_readargs {
 struct nfs_fh * fh;
 struct nfs_open_context *context;
 __u64 offset;
 __u32 count;
 unsigned int pgbase;
 struct page ** pages;
};

struct nfs_readres {
 struct nfs_fattr * fattr;
 __u32 count;
 int eof;
};




struct nfs_writeargs {
 struct nfs_fh * fh;
 struct nfs_open_context *context;
 __u64 offset;
 __u32 count;
 enum nfs3_stable_how stable;
 unsigned int pgbase;
 struct page ** pages;
 const u32 * bitmask;
};

struct nfs_writeverf {
 enum nfs3_stable_how committed;
 __be32 verifier[2];
};

struct nfs_writeres {
 struct nfs_fattr * fattr;
 struct nfs_writeverf * verf;
 __u32 count;
 const struct nfs_server *server;
};




struct nfs_removeargs {
 const struct nfs_fh *fh;
 struct qstr name;
 const u32 * bitmask;
};

struct nfs_removeres {
 const struct nfs_server *server;
 struct nfs4_change_info cinfo;
 struct nfs_fattr dir_attr;
};




struct nfs_entry {
 __u64 ino;
 __u64 cookie,
    prev_cookie;
 const char * name;
 unsigned int len;
 int eof;
 struct nfs_fh * fh;
 struct nfs_fattr * fattr;
};




struct nfs_sattrargs {
 struct nfs_fh * fh;
 struct iattr * sattr;
};

struct nfs_diropargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
};

struct nfs_createargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
 struct iattr * sattr;
};

struct nfs_renameargs {
 struct nfs_fh * fromfh;
 const char * fromname;
 unsigned int fromlen;
 struct nfs_fh * tofh;
 const char * toname;
 unsigned int tolen;
};

struct nfs_setattrargs {
 struct nfs_fh * fh;
 nfs4_stateid stateid;
 struct iattr * iap;
 const struct nfs_server * server;
 const u32 * bitmask;
};

struct nfs_setaclargs {
 struct nfs_fh * fh;
 size_t acl_len;
 unsigned int acl_pgbase;
 struct page ** acl_pages;
};

struct nfs_getaclargs {
 struct nfs_fh * fh;
 size_t acl_len;
 unsigned int acl_pgbase;
 struct page ** acl_pages;
};

struct nfs_setattrres {
 struct nfs_fattr * fattr;
 const struct nfs_server * server;
};

struct nfs_linkargs {
 struct nfs_fh * fromfh;
 struct nfs_fh * tofh;
 const char * toname;
 unsigned int tolen;
};

struct nfs_symlinkargs {
 struct nfs_fh * fromfh;
 const char * fromname;
 unsigned int fromlen;
 struct page ** pages;
 unsigned int pathlen;
 struct iattr * sattr;
};

struct nfs_readdirargs {
 struct nfs_fh * fh;
 __u32 cookie;
 unsigned int count;
 struct page ** pages;
};

struct nfs3_getaclargs {
 struct nfs_fh * fh;
 int mask;
 struct page ** pages;
};

struct nfs3_setaclargs {
 struct inode * inode;
 int mask;
 struct posix_acl * acl_access;
 struct posix_acl * acl_default;
 struct page ** pages;
};

struct nfs_diropok {
 struct nfs_fh * fh;
 struct nfs_fattr * fattr;
};

struct nfs_readlinkargs {
 struct nfs_fh * fh;
 unsigned int pgbase;
 unsigned int pglen;
 struct page ** pages;
};

struct nfs3_sattrargs {
 struct nfs_fh * fh;
 struct iattr * sattr;
 unsigned int guard;
 struct timespec guardtime;
};

struct nfs3_diropargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
};

struct nfs3_accessargs {
 struct nfs_fh * fh;
 __u32 access;
};

struct nfs3_createargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
 struct iattr * sattr;
 enum nfs3_createmode createmode;
 __be32 verifier[2];
};

struct nfs3_mkdirargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
 struct iattr * sattr;
};

struct nfs3_symlinkargs {
 struct nfs_fh * fromfh;
 const char * fromname;
 unsigned int fromlen;
 struct page ** pages;
 unsigned int pathlen;
 struct iattr * sattr;
};

struct nfs3_mknodargs {
 struct nfs_fh * fh;
 const char * name;
 unsigned int len;
 enum nfs3_ftype type;
 struct iattr * sattr;
 dev_t rdev;
};

struct nfs3_renameargs {
 struct nfs_fh * fromfh;
 const char * fromname;
 unsigned int fromlen;
 struct nfs_fh * tofh;
 const char * toname;
 unsigned int tolen;
};

struct nfs3_linkargs {
 struct nfs_fh * fromfh;
 struct nfs_fh * tofh;
 const char * toname;
 unsigned int tolen;
};

struct nfs3_readdirargs {
 struct nfs_fh * fh;
 __u64 cookie;
 __be32 verf[2];
 int plus;
 unsigned int count;
 struct page ** pages;
};

struct nfs3_diropres {
 struct nfs_fattr * dir_attr;
 struct nfs_fh * fh;
 struct nfs_fattr * fattr;
};

struct nfs3_accessres {
 struct nfs_fattr * fattr;
 __u32 access;
};

struct nfs3_readlinkargs {
 struct nfs_fh * fh;
 unsigned int pgbase;
 unsigned int pglen;
 struct page ** pages;
};

struct nfs3_renameres {
 struct nfs_fattr * fromattr;
 struct nfs_fattr * toattr;
};

struct nfs3_linkres {
 struct nfs_fattr * dir_attr;
 struct nfs_fattr * fattr;
};

struct nfs3_readdirres {
 struct nfs_fattr * dir_attr;
 __be32 * verf;
 int plus;
};

struct nfs3_getaclres {
 struct nfs_fattr * fattr;
 int mask;
 unsigned int acl_access_count;
 unsigned int acl_default_count;
 struct posix_acl * acl_access;
 struct posix_acl * acl_default;
};
# 736 "linux-2.6.26/include/linux/nfs_xdr.h"
struct nfs_page;



struct nfs_read_data {
 int flags;
 struct rpc_task task;
 struct inode *inode;
 struct rpc_cred *cred;
 struct nfs_fattr fattr;
 struct list_head pages;
 struct nfs_page *req;
 struct page **pagevec;
 unsigned int npages;
 struct nfs_readargs args;
 struct nfs_readres res;



 struct page *page_array[(8U)];
};

struct nfs_write_data {
 int flags;
 struct rpc_task task;
 struct inode *inode;
 struct rpc_cred *cred;
 struct nfs_fattr fattr;
 struct nfs_writeverf verf;
 struct list_head pages;
 struct nfs_page *req;
 struct page **pagevec;
 unsigned int npages;
 struct nfs_writeargs args;
 struct nfs_writeres res;



 struct page *page_array[(8U)];
};

struct nfs_access_entry;




struct nfs_rpc_ops {
 u32 version;
 struct dentry_operations *dentry_ops;
 const struct inode_operations *dir_inode_ops;
 const struct inode_operations *file_inode_ops;

 int (*getroot) (struct nfs_server *, struct nfs_fh *,
       struct nfs_fsinfo *);
 int (*lookupfh)(struct nfs_server *, struct nfs_fh *,
       struct qstr *, struct nfs_fh *,
       struct nfs_fattr *);
 int (*getattr) (struct nfs_server *, struct nfs_fh *,
       struct nfs_fattr *);
 int (*setattr) (struct dentry *, struct nfs_fattr *,
       struct iattr *);
 int (*lookup) (struct inode *, struct qstr *,
       struct nfs_fh *, struct nfs_fattr *);
 int (*access) (struct inode *, struct nfs_access_entry *);
 int (*readlink)(struct inode *, struct page *, unsigned int,
       unsigned int);
 int (*create) (struct inode *, struct dentry *,
       struct iattr *, int, struct nameidata *);
 int (*remove) (struct inode *, struct qstr *);
 void (*unlink_setup) (struct rpc_message *, struct inode *dir);
 int (*unlink_done) (struct rpc_task *, struct inode *);
 int (*rename) (struct inode *, struct qstr *,
       struct inode *, struct qstr *);
 int (*link) (struct inode *, struct inode *, struct qstr *);
 int (*symlink) (struct inode *, struct dentry *, struct page *,
       unsigned int, struct iattr *);
 int (*mkdir) (struct inode *, struct dentry *, struct iattr *);
 int (*rmdir) (struct inode *, struct qstr *);
 int (*readdir) (struct dentry *, struct rpc_cred *,
       u64, struct page *, unsigned int, int);
 int (*mknod) (struct inode *, struct dentry *, struct iattr *,
       dev_t);
 int (*statfs) (struct nfs_server *, struct nfs_fh *,
       struct nfs_fsstat *);
 int (*fsinfo) (struct nfs_server *, struct nfs_fh *,
       struct nfs_fsinfo *);
 int (*pathconf) (struct nfs_server *, struct nfs_fh *,
        struct nfs_pathconf *);
 int (*set_capabilities)(struct nfs_server *, struct nfs_fh *);
 __be32 *(*decode_dirent)(__be32 *, struct nfs_entry *, int plus);
 void (*read_setup) (struct nfs_read_data *, struct rpc_message *);
 int (*read_done) (struct rpc_task *, struct nfs_read_data *);
 void (*write_setup) (struct nfs_write_data *, struct rpc_message *);
 int (*write_done) (struct rpc_task *, struct nfs_write_data *);
 void (*commit_setup) (struct nfs_write_data *, struct rpc_message *);
 int (*commit_done) (struct rpc_task *, struct nfs_write_data *);
 int (*file_open) (struct inode *, struct file *);
 int (*file_release) (struct inode *, struct file *);
 int (*lock)(struct file *, int, struct file_lock *);
 void (*clear_acl_cache)(struct inode *);
};
# 848 "linux-2.6.26/include/linux/nfs_xdr.h"
typedef  const struct nfs_rpc_ops    _GLOBAL_208_T; extern  _GLOBAL_208_T  global_nfs_v2_clientops[NUM_STACKS];     
typedef  const struct nfs_rpc_ops    _GLOBAL_209_T; extern  _GLOBAL_209_T  global_nfs_v3_clientops[NUM_STACKS];     
typedef  const struct nfs_rpc_ops    _GLOBAL_210_T; extern  _GLOBAL_210_T  global_nfs_v4_clientops[NUM_STACKS];     
typedef  struct rpc_version   _GLOBAL_211_T; extern  _GLOBAL_211_T  global_nfs_version2[NUM_STACKS];    
typedef  struct rpc_version   _GLOBAL_212_T; extern  _GLOBAL_212_T  global_nfs_version3[NUM_STACKS];    
typedef  struct rpc_version   _GLOBAL_213_T; extern  _GLOBAL_213_T  global_nfs_version4[NUM_STACKS];    

typedef  struct rpc_version   _GLOBAL_214_T; extern  _GLOBAL_214_T  global_nfsacl_version3[NUM_STACKS];    
typedef  struct rpc_program   _GLOBAL_215_T; extern  _GLOBAL_215_T  global_nfsacl_program[NUM_STACKS];    
# 50 "linux-2.6.26/include/linux/nfs_fs.h" 2
# 1 "linux-2.6.26/include/linux/nfs_fs_sb.h" 1




# 1 "linux-2.6.26/include/linux/backing-dev.h" 1
# 16 "linux-2.6.26/include/linux/backing-dev.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 17 "linux-2.6.26/include/linux/backing-dev.h" 2

struct page;
struct device;
struct dentry;




enum bdi_state {
 BDI_pdflush,
 BDI_write_congested,
 BDI_read_congested,
 BDI_unused,
};

typedef int (congested_fn)(void *, int);

enum bdi_stat_item {
 BDI_RECLAIMABLE,
 BDI_WRITEBACK,
 NR_BDI_STAT_ITEMS
};



struct backing_dev_info {
 unsigned long ra_pages;
 unsigned long state;
 unsigned int capabilities;
 congested_fn *congested_fn;
 void *congested_data;
 void (*unplug_io_fn)(struct backing_dev_info *, struct page *);
 void *unplug_io_data;

 struct percpu_counter bdi_stat[NR_BDI_STAT_ITEMS];

 struct prop_local_percpu completions;
 int dirty_exceeded;

 unsigned int min_ratio;
 unsigned int max_ratio, max_prop_frac;

 struct device *dev;





};

int bdi_init(struct backing_dev_info *bdi);
void bdi_destroy(struct backing_dev_info *bdi);

int bdi_register(struct backing_dev_info *bdi, struct device *parent,
  const char *fmt, ...);
int bdi_register_dev(struct backing_dev_info *bdi, dev_t dev);
void bdi_unregister(struct backing_dev_info *bdi);

static inline  __attribute__((always_inline)) void __add_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item, s64 amount)
{
 percpu_counter_add(&bdi->bdi_stat[item], amount);
}

static inline  __attribute__((always_inline)) void __inc_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 __add_bdi_stat(bdi, item, 1);
}

static inline  __attribute__((always_inline)) void inc_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 unsigned long flags;

 (void)(flags);
 __inc_bdi_stat(bdi, item);
 (void)(flags);
}

static inline  __attribute__((always_inline)) void __dec_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 __add_bdi_stat(bdi, item, -1);
}

static inline  __attribute__((always_inline)) void dec_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 unsigned long flags;

 (void)(flags);
 __dec_bdi_stat(bdi, item);
 (void)(flags);
}

static inline  __attribute__((always_inline)) s64 bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 return percpu_counter_read_positive(&bdi->bdi_stat[item]);
}

static inline  __attribute__((always_inline)) s64 __bdi_stat_sum(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 return percpu_counter_sum_positive(&bdi->bdi_stat[item]);
}

static inline  __attribute__((always_inline)) s64 bdi_stat_sum(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 s64 sum;
 unsigned long flags;

 (void)(flags);
 sum = __bdi_stat_sum(bdi, item);
 (void)(flags);

 return sum;
}

extern void bdi_writeout_inc(struct backing_dev_info *bdi);




static inline  __attribute__((always_inline)) unsigned long bdi_stat_error(struct backing_dev_info *bdi)
{



 return 1;

}

int bdi_set_min_ratio(struct backing_dev_info *bdi, unsigned int min_ratio);
int bdi_set_max_ratio(struct backing_dev_info *bdi, unsigned int max_ratio);
# 201 "linux-2.6.26/include/linux/backing-dev.h"
typedef  struct backing_dev_info   _GLOBAL_216_T; extern  _GLOBAL_216_T  global_default_backing_dev_info[NUM_STACKS];    
void default_unplug_io_fn(struct backing_dev_info *bdi, struct page *page);

int writeback_in_progress(struct backing_dev_info *bdi);

static inline  __attribute__((always_inline)) int bdi_congested(struct backing_dev_info *bdi, int bdi_bits)
{
 if (bdi->congested_fn)
  return bdi->congested_fn(bdi->congested_data, bdi_bits);
 return (bdi->state & bdi_bits);
}

static inline  __attribute__((always_inline)) int bdi_read_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, 1 << BDI_read_congested);
}

static inline  __attribute__((always_inline)) int bdi_write_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, 1 << BDI_write_congested);
}

static inline  __attribute__((always_inline)) int bdi_rw_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, (1 << BDI_read_congested)|
      (1 << BDI_write_congested));
}

void clear_bdi_congested(struct backing_dev_info *bdi, int rw);
void set_bdi_congested(struct backing_dev_info *bdi, int rw);
long congestion_wait(int rw, long timeout);


static inline  __attribute__((always_inline)) bool bdi_cap_writeback_dirty(struct backing_dev_info *bdi)
{
 return !(bdi->capabilities & 0x00000002);
}

static inline  __attribute__((always_inline)) bool bdi_cap_account_dirty(struct backing_dev_info *bdi)
{
 return !(bdi->capabilities & 0x00000001);
}

static inline  __attribute__((always_inline)) bool bdi_cap_account_writeback(struct backing_dev_info *bdi)
{

 return !(bdi->capabilities & (0x00000080 |
          0x00000002));
}

static inline  __attribute__((always_inline)) bool mapping_cap_writeback_dirty(struct address_space *mapping)
{
 return bdi_cap_writeback_dirty(mapping->backing_dev_info);
}

static inline  __attribute__((always_inline)) bool mapping_cap_account_dirty(struct address_space *mapping)
{
 return bdi_cap_account_dirty(mapping->backing_dev_info);
}
# 6 "linux-2.6.26/include/linux/nfs_fs_sb.h" 2


# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 9 "linux-2.6.26/include/linux/nfs_fs_sb.h" 2

struct nfs_iostats;
struct nlm_host;




struct nfs_client {
 atomic_t cl_count;
 int cl_cons_state;


 unsigned long cl_res_state;



 struct __kernel_sockaddr_storage cl_addr;
 size_t cl_addrlen;
 char * cl_hostname;
 struct list_head cl_share_link;
 struct list_head cl_superblocks;

 struct rpc_clnt * cl_rpcclient;
 const struct nfs_rpc_ops *rpc_ops;
 int cl_proto;

 struct rpc_cred *cl_machine_cred;
# 73 "linux-2.6.26/include/linux/nfs_fs_sb.h"
};




struct nfs_server {
 struct nfs_client * nfs_client;
 struct list_head client_link;


 struct list_head master_link;
 struct rpc_clnt * client;
 struct rpc_clnt * client_acl;
 struct nlm_host *nlm_host;
 struct nfs_iostats * io_stats;
 struct backing_dev_info backing_dev_info;
 atomic_long_t writeback;
 int flags;
 unsigned int caps;
 unsigned int rsize;
 unsigned int rpages;
 unsigned int wsize;
 unsigned int wpages;
 unsigned int wtmult;
 unsigned int dtsize;
 unsigned short port;
 unsigned int bsize;
 unsigned int acregmin;
 unsigned int acregmax;
 unsigned int acdirmin;
 unsigned int acdirmax;
 unsigned int namelen;

 struct nfs_fsid fsid;
 __u64 maxfilesize;
 unsigned long mount_time;
 dev_t s_dev;
# 119 "linux-2.6.26/include/linux/nfs_fs_sb.h"
 void (*destroy)(struct nfs_server *);

 atomic_t active;
 wait_queue_head_t active_wq;


 struct __kernel_sockaddr_storage mountd_address;
 size_t mountd_addrlen;
 u32 mountd_version;
 unsigned short mountd_port;
 unsigned short mountd_protocol;
};
# 51 "linux-2.6.26/include/linux/nfs_fs.h" 2

# 1 "linux-2.6.26/include/linux/mempool.h" 1
# 9 "linux-2.6.26/include/linux/mempool.h"
struct kmem_cache;

typedef void * (mempool_alloc_t)(gfp_t gfp_mask, void *pool_data);
typedef void (mempool_free_t)(void *element, void *pool_data);

typedef struct mempool_s {
 spinlock_t lock;
 int min_nr;
 int curr_nr;
 void **elements;

 void *pool_data;
 mempool_alloc_t *alloc;
 mempool_free_t *free;
 wait_queue_head_t wait;
} mempool_t;

extern mempool_t *mempool_create(int min_nr, mempool_alloc_t *alloc_fn,
   mempool_free_t *free_fn, void *pool_data);
extern mempool_t *mempool_create_node(int min_nr, mempool_alloc_t *alloc_fn,
   mempool_free_t *free_fn, void *pool_data, int nid);

extern int mempool_resize(mempool_t *pool, int new_min_nr, gfp_t gfp_mask);
extern void mempool_destroy(mempool_t *pool);
extern void * mempool_alloc(mempool_t *pool, gfp_t gfp_mask);
extern void mempool_free(void *element, mempool_t *pool);





void *mempool_alloc_slab(gfp_t gfp_mask, void *pool_data);
void mempool_free_slab(void *element, void *pool_data);
static inline  __attribute__((always_inline)) mempool_t *
mempool_create_slab_pool(int min_nr, struct kmem_cache *kc)
{
 return mempool_create(min_nr, mempool_alloc_slab, mempool_free_slab,
         (void *) kc);
}





void *mempool_kmalloc(gfp_t gfp_mask, void *pool_data);
void *mempool_kzalloc(gfp_t gfp_mask, void *pool_data);
void mempool_kfree(void *element, void *pool_data);
static inline  __attribute__((always_inline)) mempool_t *mempool_create_kmalloc_pool(int min_nr, size_t size)
{
 return mempool_create(min_nr, mempool_kmalloc, mempool_kfree,
         (void *) size);
}
static inline  __attribute__((always_inline)) mempool_t *mempool_create_kzalloc_pool(int min_nr, size_t size)
{
 return mempool_create(min_nr, mempool_kzalloc, mempool_kfree,
         (void *) size);
}





void *mempool_alloc_pages(gfp_t gfp_mask, void *pool_data);
void mempool_free_pages(void *element, void *pool_data);
static inline  __attribute__((always_inline)) mempool_t *mempool_create_page_pool(int min_nr, int order)
{
 return mempool_create(min_nr, mempool_alloc_pages, mempool_free_pages,
         (void *)(long)order);
}
# 53 "linux-2.6.26/include/linux/nfs_fs.h" 2
# 62 "linux-2.6.26/include/linux/nfs_fs.h"
struct nfs_access_entry {
 struct rb_node rb_node;
 struct list_head lru;
 unsigned long jiffies;
 struct rpc_cred * cred;
 int mask;
};

struct nfs4_state;
struct nfs_open_context {
 atomic_t count;
 struct path path;
 struct rpc_cred *cred;
 struct nfs4_state *state;
 fl_owner_t lockowner;
 int mode;

 unsigned long flags;

 int error;

 struct list_head list;

 __u64 dir_cookie;
};




struct nfs_delegation;

struct posix_acl;




struct nfs_inode {



 __u64 fileid;




 struct nfs_fh fh;




 unsigned long flags;
 unsigned long cache_validity;
# 126 "linux-2.6.26/include/linux/nfs_fs.h"
 unsigned long read_cache_jiffies;
 unsigned long attrtimeo;
 unsigned long attrtimeo_timestamp;
 __u64 change_attr;

 unsigned long last_updated;




 unsigned long cache_change_attribute;

 struct rb_root access_cache;
 struct list_head access_cache_entry_lru;
 struct list_head access_cache_inode_lru;
# 150 "linux-2.6.26/include/linux/nfs_fs.h"
 __be32 cookieverf[2];




 struct radix_tree_root nfs_page_tree;

 unsigned long ncommit,
    npages;


 struct list_head open_files;


 atomic_t silly_count;

 struct hlist_head silly_list;
 wait_queue_head_t waitqueue;
# 177 "linux-2.6.26/include/linux/nfs_fs.h"
 struct inode vfs_inode;
};
# 200 "linux-2.6.26/include/linux/nfs_fs.h"
static inline  __attribute__((always_inline)) struct nfs_inode *NFS_I(const struct inode *inode)
{
 return ({ const typeof( ((struct nfs_inode *)0)->vfs_inode ) *__mptr = (inode); (struct nfs_inode *)( (char *)__mptr - __builtin_offsetof(struct nfs_inode,vfs_inode) );});
}

static inline  __attribute__((always_inline)) struct nfs_server *NFS_SB(const struct super_block *s)
{
 return (struct nfs_server *)(s->s_fs_info);
}

static inline  __attribute__((always_inline)) struct nfs_fh *NFS_FH(const struct inode *inode)
{
 return &NFS_I(inode)->fh;
}

static inline  __attribute__((always_inline)) struct nfs_server *NFS_SERVER(const struct inode *inode)
{
 return NFS_SB(inode->i_sb);
}

static inline  __attribute__((always_inline)) struct rpc_clnt *NFS_CLIENT(const struct inode *inode)
{
 return NFS_SERVER(inode)->client;
}

static inline  __attribute__((always_inline)) const struct nfs_rpc_ops *NFS_PROTO(const struct inode *inode)
{
 return NFS_SERVER(inode)->nfs_client->rpc_ops;
}

static inline  __attribute__((always_inline)) __be32 *NFS_COOKIEVERF(const struct inode *inode)
{
 return NFS_I(inode)->cookieverf;
}

static inline  __attribute__((always_inline)) unsigned NFS_MINATTRTIMEO(const struct inode *inode)
{
 struct nfs_server *nfss = NFS_SERVER(inode);
 return (((inode->i_mode) & 00170000) == 0040000) ? nfss->acdirmin : nfss->acregmin;
}

static inline  __attribute__((always_inline)) unsigned NFS_MAXATTRTIMEO(const struct inode *inode)
{
 struct nfs_server *nfss = NFS_SERVER(inode);
 return (((inode->i_mode) & 00170000) == 0040000) ? nfss->acdirmax : nfss->acregmax;
}

static inline  __attribute__((always_inline)) int NFS_STALE(const struct inode *inode)
{
 return (__builtin_constant_p(((2))) ? constant_test_bit(((2)), (&NFS_I(inode)->flags)) : variable_test_bit(((2)), (&NFS_I(inode)->flags)));
}

static inline  __attribute__((always_inline)) __u64 NFS_FILEID(const struct inode *inode)
{
 return NFS_I(inode)->fileid;
}

static inline  __attribute__((always_inline)) void set_nfs_fileid(struct inode *inode, __u64 fileid)
{
 NFS_I(inode)->fileid = fileid;
}

static inline  __attribute__((always_inline)) void nfs_mark_for_revalidate(struct inode *inode)
{
 struct nfs_inode *nfsi = NFS_I(inode);

 do { do { } while (0); (void)0; (void)(&inode->i_lock); } while (0);
 nfsi->cache_validity |= 0x0001|0x0008;
 if ((((inode->i_mode) & 00170000) == 0040000))
  nfsi->cache_validity |= 0x0020|0x0002;
 do { do { } while (0); (void)0; (void)(&inode->i_lock); } while (0);
}

static inline  __attribute__((always_inline)) int nfs_server_capable(struct inode *inode, int cap)
{
 return NFS_SERVER(inode)->caps & cap;
}

static inline  __attribute__((always_inline)) int NFS_USE_READDIRPLUS(struct inode *inode)
{
 return (__builtin_constant_p(((1))) ? constant_test_bit(((1)), (&NFS_I(inode)->flags)) : variable_test_bit(((1)), (&NFS_I(inode)->flags)));
}

static inline  __attribute__((always_inline)) void nfs_set_verifier(struct dentry * dentry, unsigned long verf)
{
 dentry->d_time = verf;
}







static inline  __attribute__((always_inline)) unsigned long nfs_save_change_attribute(struct inode *dir)
{
 return NFS_I(dir)->cache_change_attribute;
}
# 307 "linux-2.6.26/include/linux/nfs_fs.h"
static inline  __attribute__((always_inline)) int nfs_verify_change_attribute(struct inode *dir, unsigned long chattr)
{
 return chattr == NFS_I(dir)->cache_change_attribute;
}




extern int nfs_sync_mapping(struct address_space *mapping);
extern void nfs_zap_mapping(struct inode *inode, struct address_space *mapping);
extern void nfs_zap_caches(struct inode *);
extern void nfs_invalidate_atime(struct inode *);
extern struct inode *nfs_fhget(struct super_block *, struct nfs_fh *,
    struct nfs_fattr *);
extern int nfs_refresh_inode(struct inode *, struct nfs_fattr *);
extern int nfs_post_op_update_inode(struct inode *inode, struct nfs_fattr *fattr);
extern int nfs_post_op_update_inode_force_wcc(struct inode *inode, struct nfs_fattr *fattr);
extern int nfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int nfs_permission(struct inode *, int, struct nameidata *);
extern int nfs_open(struct inode *, struct file *);
extern int nfs_release(struct inode *, struct file *);
extern int nfs_attribute_timeout(struct inode *inode);
extern int nfs_revalidate_inode(struct nfs_server *server, struct inode *inode);
extern int __nfs_revalidate_inode(struct nfs_server *, struct inode *);
extern int nfs_revalidate_mapping(struct inode *inode, struct address_space *mapping);
extern int nfs_revalidate_mapping_nolock(struct inode *inode, struct address_space *mapping);
extern int nfs_setattr(struct dentry *, struct iattr *);
extern void nfs_setattr_update_inode(struct inode *inode, struct iattr *attr);
extern struct nfs_open_context *get_nfs_open_context(struct nfs_open_context *ctx);
extern void put_nfs_open_context(struct nfs_open_context *ctx);
extern struct nfs_open_context *nfs_find_open_context(struct inode *inode, struct rpc_cred *cred, int mode);
extern u64 nfs_compat_user_ino64(u64 fileid);


extern __be32 root_nfs_parse_addr(char *name);

static inline  __attribute__((always_inline)) void nfs_fattr_init(struct nfs_fattr *fattr)
{
 fattr->valid = 0;
 fattr->time_start = global_jiffies[get_stack_id()];
}




typedef  const struct inode_operations    _GLOBAL_217_T; extern  _GLOBAL_217_T  global_nfs_file_inode_operations[NUM_STACKS];     



typedef  const struct file_operations    _GLOBAL_218_T; extern  _GLOBAL_218_T  global_nfs_file_operations[NUM_STACKS];     
typedef  const struct address_space_operations    _GLOBAL_219_T; extern  _GLOBAL_219_T  global_nfs_file_aops[NUM_STACKS];     

static inline  __attribute__((always_inline)) struct nfs_open_context *nfs_file_open_context(struct file *filp)
{
 return filp->private_data;
}

static inline  __attribute__((always_inline)) struct rpc_cred *nfs_file_cred(struct file *file)
{
 if (file != ((void *)0))
  return nfs_file_open_context(file)->cred;
 return ((void *)0);
}
# 390 "linux-2.6.26/include/linux/nfs_fs.h"
extern ssize_t nfs_direct_IO(int, struct kiocb *, const struct iovec *, loff_t,
   unsigned long);
extern ssize_t nfs_file_direct_read(struct kiocb *iocb,
   const struct iovec *iov, unsigned long nr_segs,
   loff_t pos);
extern ssize_t nfs_file_direct_write(struct kiocb *iocb,
   const struct iovec *iov, unsigned long nr_segs,
   loff_t pos);




typedef  const struct inode_operations    _GLOBAL_220_T; extern  _GLOBAL_220_T  global_nfs_dir_inode_operations[NUM_STACKS];     



typedef  const struct file_operations    _GLOBAL_221_T; extern  _GLOBAL_221_T  global_nfs_dir_operations[NUM_STACKS];     
typedef  struct dentry_operations   _GLOBAL_222_T; extern  _GLOBAL_222_T  global_nfs_dentry_operations[NUM_STACKS];    

extern void nfs_force_lookup_revalidate(struct inode *dir);
extern int nfs_instantiate(struct dentry *dentry, struct nfs_fh *fh, struct nfs_fattr *fattr);
extern int nfs_may_open(struct inode *inode, struct rpc_cred *cred, int openflags);
extern void nfs_access_zap_cache(struct inode *inode);




typedef  const struct inode_operations    _GLOBAL_223_T; extern  _GLOBAL_223_T  global_nfs_symlink_inode_operations[NUM_STACKS];     





extern int nfs_register_sysctl(void);
extern void nfs_unregister_sysctl(void);
# 433 "linux-2.6.26/include/linux/nfs_fs.h"
typedef  const struct inode_operations    _GLOBAL_224_T; extern  _GLOBAL_224_T  global_nfs_mountpoint_inode_operations[NUM_STACKS];     
typedef  const struct inode_operations    _GLOBAL_225_T; extern  _GLOBAL_225_T  global_nfs_referral_inode_operations[NUM_STACKS];     
typedef  int  _GLOBAL_226_T; extern  _GLOBAL_226_T  global_nfs_mountpoint_expiry_timeout[NUM_STACKS];   
extern void nfs_release_automount_timer(void);




extern int nfs_async_unlink(struct inode *dir, struct dentry *dentry);
extern void nfs_complete_unlink(struct dentry *dentry, struct inode *);
extern void nfs_block_sillyrename(struct dentry *dentry);
extern void nfs_unblock_sillyrename(struct dentry *dentry);




typedef  int  _GLOBAL_227_T; extern  _GLOBAL_227_T  global_nfs_congestion_kb[NUM_STACKS];   
extern int nfs_writepage(struct page *page, struct writeback_control *wbc);
extern int nfs_writepages(struct address_space *, struct writeback_control *);
extern int nfs_flush_incompatible(struct file *file, struct page *page);
extern int nfs_updatepage(struct file *, struct page *, unsigned int, unsigned int);
extern int nfs_writeback_done(struct rpc_task *, struct nfs_write_data *);
extern void nfs_writedata_release(void *);





extern long nfs_sync_mapping_wait(struct address_space *, struct writeback_control *, int);
extern int nfs_wb_all(struct inode *inode);
extern int nfs_wb_nocommit(struct inode *inode);
extern int nfs_wb_page(struct inode *inode, struct page* page);
extern int nfs_wb_page_cancel(struct inode *inode, struct page* page);






static inline  __attribute__((always_inline)) int
nfs_commit_inode(struct inode *inode, int how)
{
 return 0;
}


static inline  __attribute__((always_inline)) int
nfs_have_writebacks(struct inode *inode)
{
 return NFS_I(inode)->npages != 0;
}




extern struct nfs_write_data *nfs_writedata_alloc(unsigned int npages);




extern int nfs_readpage(struct file *, struct page *);
extern int nfs_readpages(struct file *, struct address_space *,
  struct list_head *, unsigned);
extern int nfs_readpage_result(struct rpc_task *, struct nfs_read_data *);
extern void nfs_readdata_release(void *data);




extern struct nfs_read_data *nfs_readdata_alloc(unsigned int npages);
# 515 "linux-2.6.26/include/linux/nfs_fs.h"
static inline  __attribute__((always_inline)) int nfs3_proc_set_default_acl(struct inode *dir,
         struct inode *inode,
         mode_t mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void nfs3_forget_cached_acls(struct inode *inode)
{
}





extern int nfs_mount(struct sockaddr *, size_t, char *, char *,
        int, int, struct nfs_fh *);





static inline  __attribute__((always_inline)) loff_t nfs_size_to_loff_t(__u64 size)
{
 if (size > (__u64) (~((loff_t)1 << (sizeof(loff_t)*8 - 1))) - 1)
  return (~((loff_t)1 << (sizeof(loff_t)*8 - 1))) - 1;
 return (loff_t) size;
}

static inline  __attribute__((always_inline)) ino_t
nfs_fileid_to_ino_t(u64 fileid)
{
 ino_t ino = (ino_t) fileid;
 if (sizeof(ino_t) < sizeof(u64))
  ino ^= fileid >> (sizeof(u64)-sizeof(ino_t)) * 8;
 return ino;
}



extern void * nfs_root_data(void);
# 47 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/acpi.h" 1
# 28 "linux-2.6.26/include/linux/acpi.h"
# 1 "linux-2.6.26/include/linux/ioport.h" 1
# 18 "linux-2.6.26/include/linux/ioport.h"
struct resource {
 resource_size_t start;
 resource_size_t end;
 const char *name;
 unsigned long flags;
 struct resource *parent, *sibling, *child;
};

struct resource_list {
 struct resource_list *next;
 struct resource *res;
 struct pci_dev *dev;
};
# 101 "linux-2.6.26/include/linux/ioport.h"
typedef  struct resource   _GLOBAL_228_T; extern  _GLOBAL_228_T  global_ioport_resource[NUM_STACKS];    
typedef  struct resource   _GLOBAL_229_T; extern  _GLOBAL_229_T  global_iomem_resource[NUM_STACKS];    

extern int request_resource(struct resource *root, struct resource *new);
extern int release_resource(struct resource *new);
extern int insert_resource(struct resource *parent, struct resource *new);
extern int allocate_resource(struct resource *root, struct resource *new,
        resource_size_t size, resource_size_t min,
        resource_size_t max, resource_size_t align,
        void (*alignf)(void *, struct resource *,
         resource_size_t, resource_size_t),
        void *alignf_data);
int adjust_resource(struct resource *res, resource_size_t start,
      resource_size_t size);
resource_size_t resource_alignment(struct resource *res);






extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n, const char *name);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

static inline  __attribute__((always_inline)) int check_region(resource_size_t s,
      resource_size_t n)
{
 return __check_region(&global_ioport_resource[get_stack_id()], s, n);
}


struct device;





extern struct resource * __devm_request_region(struct device *dev,
    struct resource *parent, resource_size_t start,
    resource_size_t n, const char *name);






extern void __devm_release_region(struct device *dev, struct resource *parent,
      resource_size_t start, resource_size_t n);
# 29 "linux-2.6.26/include/linux/acpi.h" 2
# 239 "linux-2.6.26/include/linux/acpi.h"
static inline  __attribute__((always_inline)) int early_acpi_boot_init(void)
{
 return 0;
}
static inline  __attribute__((always_inline)) int acpi_boot_init(void)
{
 return 0;
}

static inline  __attribute__((always_inline)) int acpi_boot_table_init(void)
{
 return 0;
}

static inline  __attribute__((always_inline)) int acpi_check_resource_conflict(struct resource *res)
{
 return 0;
}

static inline  __attribute__((always_inline)) int acpi_check_region(resource_size_t start, resource_size_t n,
        const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int acpi_check_mem_region(resource_size_t start,
     resource_size_t n, const char *name)
{
 return 0;
}
# 48 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/linux/reboot.h" 1
# 42 "linux-2.6.26/include/linux/reboot.h"
extern int register_reboot_notifier(struct notifier_block *);
extern int unregister_reboot_notifier(struct notifier_block *);






extern void machine_restart(char *cmd);
extern void machine_halt(void);
extern void machine_power_off(void);

extern void machine_shutdown(void);
struct pt_regs;
extern void machine_crash_shutdown(struct pt_regs *);





extern void kernel_restart(char *cmd);
extern void kernel_halt(void);
extern void kernel_power_off(void);

void ctrl_alt_del(void);


typedef  char  _GLOBAL_230_T; extern  _GLOBAL_230_T  _GLOBAL_0_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_1_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_2_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_3_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_4_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_5_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_6_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_7_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_8_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_9_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_10_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_11_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_12_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_13_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_14_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_15_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_16_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_17_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_18_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_19_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_20_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_21_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_22_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_23_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_24_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_25_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_26_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_27_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_28_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_29_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_30_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_31_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_32_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_33_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_34_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_35_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_36_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_37_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_38_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_39_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_40_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_41_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_42_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_43_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_44_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_45_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_46_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_47_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_48_poweroff_cmd_I [ 256 ] ; extern  _GLOBAL_230_T  _GLOBAL_49_poweroff_cmd_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_poweroff_cmd_I) *_GLOBAL_poweroff_cmd_14_A[NUM_STACKS] = { &_GLOBAL_0_poweroff_cmd_I, &_GLOBAL_1_poweroff_cmd_I, &_GLOBAL_2_poweroff_cmd_I, &_GLOBAL_3_poweroff_cmd_I, &_GLOBAL_4_poweroff_cmd_I, &_GLOBAL_5_poweroff_cmd_I, &_GLOBAL_6_poweroff_cmd_I, &_GLOBAL_7_poweroff_cmd_I, &_GLOBAL_8_poweroff_cmd_I, &_GLOBAL_9_poweroff_cmd_I, &_GLOBAL_10_poweroff_cmd_I, &_GLOBAL_11_poweroff_cmd_I, &_GLOBAL_12_poweroff_cmd_I, &_GLOBAL_13_poweroff_cmd_I, &_GLOBAL_14_poweroff_cmd_I, &_GLOBAL_15_poweroff_cmd_I, &_GLOBAL_16_poweroff_cmd_I, &_GLOBAL_17_poweroff_cmd_I, &_GLOBAL_18_poweroff_cmd_I, &_GLOBAL_19_poweroff_cmd_I, &_GLOBAL_20_poweroff_cmd_I, &_GLOBAL_21_poweroff_cmd_I, &_GLOBAL_22_poweroff_cmd_I, &_GLOBAL_23_poweroff_cmd_I, &_GLOBAL_24_poweroff_cmd_I, &_GLOBAL_25_poweroff_cmd_I, &_GLOBAL_26_poweroff_cmd_I, &_GLOBAL_27_poweroff_cmd_I, &_GLOBAL_28_poweroff_cmd_I, &_GLOBAL_29_poweroff_cmd_I, &_GLOBAL_30_poweroff_cmd_I, &_GLOBAL_31_poweroff_cmd_I, &_GLOBAL_32_poweroff_cmd_I, &_GLOBAL_33_poweroff_cmd_I, &_GLOBAL_34_poweroff_cmd_I, &_GLOBAL_35_poweroff_cmd_I, &_GLOBAL_36_poweroff_cmd_I, &_GLOBAL_37_poweroff_cmd_I, &_GLOBAL_38_poweroff_cmd_I, &_GLOBAL_39_poweroff_cmd_I, &_GLOBAL_40_poweroff_cmd_I, &_GLOBAL_41_poweroff_cmd_I, &_GLOBAL_42_poweroff_cmd_I, &_GLOBAL_43_poweroff_cmd_I, &_GLOBAL_44_poweroff_cmd_I, &_GLOBAL_45_poweroff_cmd_I, &_GLOBAL_46_poweroff_cmd_I, &_GLOBAL_47_poweroff_cmd_I, &_GLOBAL_48_poweroff_cmd_I, &_GLOBAL_49_poweroff_cmd_I, };  

extern int orderly_poweroff(bool force);





extern void emergency_restart(void);
# 1 "linux-2.6.26/include/asm/emergency-restart.h" 1



enum reboot_type {
 BOOT_TRIPLE = 't',
 BOOT_KBD = 'k',



 BOOT_ACPI = 'a',
 BOOT_EFI = 'e'
};

typedef  enum reboot_type   _GLOBAL_231_T; extern  _GLOBAL_231_T  global_reboot_type[NUM_STACKS];    

extern void machine_emergency_restart(void);
# 79 "linux-2.6.26/include/linux/reboot.h" 2
# 49 "linux-2.6.26/kernel/sysctl.c" 2

# 1 "linux-2.6.26/include/asm/uaccess.h" 1
# 51 "linux-2.6.26/kernel/sysctl.c" 2



# 1 "linux-2.6.26/include/asm/nmi.h" 1



# 1 "linux-2.6.26/include/linux/pm.h" 1
# 25 "linux-2.6.26/include/linux/pm.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 26 "linux-2.6.26/include/linux/pm.h" 2
# 1 "linux-2.6.26/include/asm/errno.h" 1
# 27 "linux-2.6.26/include/linux/pm.h" 2






typedef int pm_request_t;
# 42 "linux-2.6.26/include/linux/pm.h"
typedef int pm_dev_t;
# 55 "linux-2.6.26/include/linux/pm.h"
enum
{
 PM_SYS_UNKNOWN = 0x00000000,
 PM_SYS_KBC = 0x41d00303,
 PM_SYS_COM = 0x41d00500,
 PM_SYS_IRDA = 0x41d00510,
 PM_SYS_FDC = 0x41d00700,
 PM_SYS_VGA = 0x41d00900,
 PM_SYS_PCMCIA = 0x41d00e00,
};
# 74 "linux-2.6.26/include/linux/pm.h"
struct pm_dev;

typedef int (*pm_callback)(struct pm_dev *dev, pm_request_t rqst, void *data);




struct pm_dev
{
 pm_dev_t type;
 unsigned long id;
 pm_callback callback;
 void *data;

 unsigned long flags;
 unsigned long state;
 unsigned long prev_state;

 struct list_head entry;
};







typedef  void   ( *_GLOBAL_233_T  )  ( void  ) ; extern  _GLOBAL_233_T global_pm_idle[NUM_STACKS];   
typedef  void   ( *_GLOBAL_235_T  )  ( void  ) ; extern  _GLOBAL_235_T global_pm_power_off[NUM_STACKS];   
typedef  void   ( *_GLOBAL_237_T  )  ( void  ) ; extern  _GLOBAL_237_T global_pm_power_off_prepare[NUM_STACKS];   





struct device;

typedef struct pm_message {
 int event;
} pm_message_t;
# 181 "linux-2.6.26/include/linux/pm.h"
struct dev_pm_info {
 pm_message_t power_state;
 unsigned can_wakeup:1;
 unsigned should_wakeup:1;
 bool sleeping:1;



};

extern int device_power_down(pm_message_t state);
extern void device_power_up(void);
extern void device_resume(void);
# 208 "linux-2.6.26/include/linux/pm.h"
static inline  __attribute__((always_inline)) int device_suspend(pm_message_t state)
{
 return 0;
}
# 221 "linux-2.6.26/include/linux/pm.h"
typedef  unsigned int   _GLOBAL_238_T; extern  _GLOBAL_238_T  global_pm_flags[NUM_STACKS];    
# 5 "linux-2.6.26/include/asm/nmi.h" 2
# 1 "linux-2.6.26/include/asm/irq.h" 1



# 1 "linux-2.6.26/include/asm/irq_64.h" 1
# 37 "linux-2.6.26/include/asm/irq_64.h"
static inline  __attribute__((always_inline)) int irq_canonicalize(int irq)
{
 return ((irq == 2) ? 9 : irq);
}
# 5 "linux-2.6.26/include/asm/irq.h" 2
# 6 "linux-2.6.26/include/asm/nmi.h" 2
# 16 "linux-2.6.26/include/asm/nmi.h"
int do_nmi_callback(struct pt_regs *regs, int cpu);
# 28 "linux-2.6.26/include/asm/nmi.h"
static inline  __attribute__((always_inline)) struct pm_dev *set_nmi_pm_callback(pm_callback callback)
{
 return 0;
}

static inline  __attribute__((always_inline)) void unset_nmi_pm_callback(struct pm_dev *dev)
{
}




extern void default_do_nmi(struct pt_regs *);
extern void die_nmi(char *str, struct pt_regs *regs, int do_panic);
extern void nmi_watchdog_default(void);




extern int check_nmi_watchdog(void);
typedef  int  _GLOBAL_239_T; extern  _GLOBAL_239_T  global_nmi_watchdog_enabled[NUM_STACKS];   
typedef  int  _GLOBAL_240_T; extern  _GLOBAL_240_T  global_unknown_nmi_panic[NUM_STACKS];   
extern int avail_to_resrv_perfctr_nmi_bit(unsigned int);
extern int avail_to_resrv_perfctr_nmi(unsigned int);
extern int reserve_perfctr_nmi(unsigned int);
extern void release_perfctr_nmi(unsigned int);
extern int reserve_evntsel_nmi(unsigned int);
extern void release_evntsel_nmi(unsigned int);

extern void setup_apic_nmi_watchdog(void *);
extern void stop_apic_nmi_watchdog(void *);
extern void disable_timer_nmi_watchdog(void);
extern void enable_timer_nmi_watchdog(void);
extern int nmi_watchdog_tick(struct pt_regs *regs, unsigned reason);

typedef  atomic_t  _GLOBAL_241_T; extern  _GLOBAL_241_T  global_nmi_active[NUM_STACKS];   
typedef  unsigned int   _GLOBAL_242_T; extern  _GLOBAL_242_T  global_nmi_watchdog[NUM_STACKS];    







struct ctl_table;
struct file;
extern int proc_nmi_enabled(struct ctl_table *, int , struct file *,
   void *, size_t *, loff_t *);
typedef  int  _GLOBAL_243_T; extern  _GLOBAL_243_T  global_unknown_nmi_panic[NUM_STACKS];   

void __trigger_all_cpu_backtrace(void);




void lapic_watchdog_stop(void);
int lapic_watchdog_init(unsigned nmi_hz);
int lapic_wd_event(unsigned nmi_hz);
unsigned lapic_adjust_nmi_hz(unsigned hz);
int lapic_watchdog_ok(void);
void disable_lapic_nmi_watchdog(void);
void enable_lapic_nmi_watchdog(void);
void stop_nmi(void);
void restart_nmi(void);
# 55 "linux-2.6.26/kernel/sysctl.c" 2
# 1 "linux-2.6.26/include/asm/stacktrace.h" 1



typedef  int  _GLOBAL_244_T; extern  _GLOBAL_244_T  global_kstack_depth_to_print[NUM_STACKS];   



struct stacktrace_ops {
 void (*warning)(void *data, char *msg);

 void (*warning_symbol)(void *data, char *msg, unsigned long symbol);
 void (*address)(void *data, unsigned long address, int reliable);

 int (*stack)(void *data, char *name);
};

void dump_trace(struct task_struct *tsk, struct pt_regs *regs,
  unsigned long *stack, unsigned long bp,
  const struct stacktrace_ops *ops, void *data);
# 56 "linux-2.6.26/kernel/sysctl.c" 2



static int deprecated_sysctl_warning(struct __sysctl_args *args);




typedef  int  _GLOBAL_245_T; extern  _GLOBAL_245_T  global_C_A_D[NUM_STACKS];   
typedef  int  _GLOBAL_246_T; extern  _GLOBAL_246_T  global_print_fatal_signals[NUM_STACKS];   
typedef  int  _GLOBAL_247_T; extern  _GLOBAL_247_T  global_sysctl_overcommit_memory[NUM_STACKS];   
typedef  int  _GLOBAL_248_T; extern  _GLOBAL_248_T  global_sysctl_overcommit_ratio[NUM_STACKS];   
typedef  int  _GLOBAL_249_T; extern  _GLOBAL_249_T  global_sysctl_panic_on_oom[NUM_STACKS];   
typedef  int  _GLOBAL_250_T; extern  _GLOBAL_250_T  global_sysctl_oom_kill_allocating_task[NUM_STACKS];   
typedef  int  _GLOBAL_251_T; extern  _GLOBAL_251_T  global_sysctl_oom_dump_tasks[NUM_STACKS];   
typedef  int  _GLOBAL_252_T; extern  _GLOBAL_252_T  global_max_threads[NUM_STACKS];   
typedef  int  _GLOBAL_253_T; extern  _GLOBAL_253_T  global_core_uses_pid[NUM_STACKS];   
typedef  int  _GLOBAL_254_T; extern  _GLOBAL_254_T  global_suid_dumpable[NUM_STACKS];   
typedef  char  _GLOBAL_255_T; extern  _GLOBAL_255_T  _GLOBAL_0_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_1_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_2_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_3_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_4_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_5_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_6_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_7_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_8_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_9_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_10_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_11_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_12_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_13_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_14_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_15_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_16_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_17_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_18_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_19_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_20_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_21_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_22_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_23_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_24_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_25_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_26_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_27_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_28_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_29_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_30_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_31_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_32_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_33_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_34_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_35_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_36_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_37_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_38_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_39_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_40_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_41_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_42_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_43_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_44_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_45_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_46_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_47_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_48_core_pattern_I [ ] ; extern  _GLOBAL_255_T  _GLOBAL_49_core_pattern_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_core_pattern_I) *_GLOBAL_core_pattern_15_A[NUM_STACKS] = { &_GLOBAL_0_core_pattern_I, &_GLOBAL_1_core_pattern_I, &_GLOBAL_2_core_pattern_I, &_GLOBAL_3_core_pattern_I, &_GLOBAL_4_core_pattern_I, &_GLOBAL_5_core_pattern_I, &_GLOBAL_6_core_pattern_I, &_GLOBAL_7_core_pattern_I, &_GLOBAL_8_core_pattern_I, &_GLOBAL_9_core_pattern_I, &_GLOBAL_10_core_pattern_I, &_GLOBAL_11_core_pattern_I, &_GLOBAL_12_core_pattern_I, &_GLOBAL_13_core_pattern_I, &_GLOBAL_14_core_pattern_I, &_GLOBAL_15_core_pattern_I, &_GLOBAL_16_core_pattern_I, &_GLOBAL_17_core_pattern_I, &_GLOBAL_18_core_pattern_I, &_GLOBAL_19_core_pattern_I, &_GLOBAL_20_core_pattern_I, &_GLOBAL_21_core_pattern_I, &_GLOBAL_22_core_pattern_I, &_GLOBAL_23_core_pattern_I, &_GLOBAL_24_core_pattern_I, &_GLOBAL_25_core_pattern_I, &_GLOBAL_26_core_pattern_I, &_GLOBAL_27_core_pattern_I, &_GLOBAL_28_core_pattern_I, &_GLOBAL_29_core_pattern_I, &_GLOBAL_30_core_pattern_I, &_GLOBAL_31_core_pattern_I, &_GLOBAL_32_core_pattern_I, &_GLOBAL_33_core_pattern_I, &_GLOBAL_34_core_pattern_I, &_GLOBAL_35_core_pattern_I, &_GLOBAL_36_core_pattern_I, &_GLOBAL_37_core_pattern_I, &_GLOBAL_38_core_pattern_I, &_GLOBAL_39_core_pattern_I, &_GLOBAL_40_core_pattern_I, &_GLOBAL_41_core_pattern_I, &_GLOBAL_42_core_pattern_I, &_GLOBAL_43_core_pattern_I, &_GLOBAL_44_core_pattern_I, &_GLOBAL_45_core_pattern_I, &_GLOBAL_46_core_pattern_I, &_GLOBAL_47_core_pattern_I, &_GLOBAL_48_core_pattern_I, &_GLOBAL_49_core_pattern_I, };  
typedef  int  _GLOBAL_256_T; extern  _GLOBAL_256_T  global_pid_max[NUM_STACKS];   
typedef  int  _GLOBAL_257_T; extern  _GLOBAL_257_T  global_min_free_kbytes[NUM_STACKS];   
typedef  int  _GLOBAL_258_T; extern  _GLOBAL_258_T  global_pid_max_min[NUM_STACKS]; extern  _GLOBAL_258_T  global_pid_max_max[NUM_STACKS];    
typedef  int  _GLOBAL_259_T; extern  _GLOBAL_259_T  global_sysctl_drop_caches[NUM_STACKS];   
typedef  int  _GLOBAL_260_T; extern  _GLOBAL_260_T  global_percpu_pagelist_fraction[NUM_STACKS];   
typedef  int  _GLOBAL_261_T; extern  _GLOBAL_261_T  global_compat_log[NUM_STACKS];   
typedef  int  _GLOBAL_262_T; extern  _GLOBAL_262_T  global_maps_protect[NUM_STACKS];   
typedef  int  _GLOBAL_263_T; extern  _GLOBAL_263_T  global_sysctl_stat_interval[NUM_STACKS];   
typedef  int  _GLOBAL_264_T; extern  _GLOBAL_264_T  global_latencytop_enabled[NUM_STACKS];   
typedef  int  _GLOBAL_265_T; extern  _GLOBAL_265_T  global_sysctl_nr_open_min[NUM_STACKS]; extern  _GLOBAL_265_T  global_sysctl_nr_open_max[NUM_STACKS];    
# 99 "linux-2.6.26/kernel/sysctl.c"
typedef  int  _GLOBAL_266_T; static  _GLOBAL_266_T  global_zero[NUM_STACKS];   
typedef  int  _GLOBAL_267_T; static  _GLOBAL_267_T  global_one_hundred[NUM_STACKS] = {  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  };     


typedef  int  _GLOBAL_268_T; static  _GLOBAL_268_T  global_maxolduid[NUM_STACKS] = {  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  65535,  };     
typedef  int  _GLOBAL_269_T; static  _GLOBAL_269_T  global_minolduid[NUM_STACKS];   
typedef  int  _GLOBAL_270_T; static  _GLOBAL_270_T  global_min_percpu_pagelist_fract[NUM_STACKS] = {  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  };     

typedef  int  _GLOBAL_271_T; static  _GLOBAL_271_T  global_ngroups_max[NUM_STACKS] = {  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  65536,  };     
# 135 "linux-2.6.26/kernel/sysctl.c"
typedef  int  _GLOBAL_272_T; extern  _GLOBAL_272_T  global_sysctl_hz_timer[NUM_STACKS];   
# 156 "linux-2.6.26/kernel/sysctl.c"
typedef  struct ctl_table   _GLOBAL_273_T; static  _GLOBAL_273_T  _GLOBAL_0_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_1_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_2_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_3_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_4_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_5_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_6_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_7_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_8_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_9_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_10_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_11_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_12_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_13_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_14_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_15_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_16_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_17_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_18_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_19_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_20_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_21_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_22_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_23_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_24_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_25_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_26_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_27_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_28_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_29_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_30_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_31_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_32_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_33_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_34_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_35_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_36_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_37_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_38_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_39_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_40_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_41_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_42_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_43_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_44_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_45_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_46_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_47_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_48_root_table_I [ ] ; static  _GLOBAL_273_T  _GLOBAL_49_root_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_table_I) *_GLOBAL_root_table_16_A[NUM_STACKS] = { &_GLOBAL_0_root_table_I, &_GLOBAL_1_root_table_I, &_GLOBAL_2_root_table_I, &_GLOBAL_3_root_table_I, &_GLOBAL_4_root_table_I, &_GLOBAL_5_root_table_I, &_GLOBAL_6_root_table_I, &_GLOBAL_7_root_table_I, &_GLOBAL_8_root_table_I, &_GLOBAL_9_root_table_I, &_GLOBAL_10_root_table_I, &_GLOBAL_11_root_table_I, &_GLOBAL_12_root_table_I, &_GLOBAL_13_root_table_I, &_GLOBAL_14_root_table_I, &_GLOBAL_15_root_table_I, &_GLOBAL_16_root_table_I, &_GLOBAL_17_root_table_I, &_GLOBAL_18_root_table_I, &_GLOBAL_19_root_table_I, &_GLOBAL_20_root_table_I, &_GLOBAL_21_root_table_I, &_GLOBAL_22_root_table_I, &_GLOBAL_23_root_table_I, &_GLOBAL_24_root_table_I, &_GLOBAL_25_root_table_I, &_GLOBAL_26_root_table_I, &_GLOBAL_27_root_table_I, &_GLOBAL_28_root_table_I, &_GLOBAL_29_root_table_I, &_GLOBAL_30_root_table_I, &_GLOBAL_31_root_table_I, &_GLOBAL_32_root_table_I, &_GLOBAL_33_root_table_I, &_GLOBAL_34_root_table_I, &_GLOBAL_35_root_table_I, &_GLOBAL_36_root_table_I, &_GLOBAL_37_root_table_I, &_GLOBAL_38_root_table_I, &_GLOBAL_39_root_table_I, &_GLOBAL_40_root_table_I, &_GLOBAL_41_root_table_I, &_GLOBAL_42_root_table_I, &_GLOBAL_43_root_table_I, &_GLOBAL_44_root_table_I, &_GLOBAL_45_root_table_I, &_GLOBAL_46_root_table_I, &_GLOBAL_47_root_table_I, &_GLOBAL_48_root_table_I, &_GLOBAL_49_root_table_I, };   
typedef  struct ctl_table_root   _GLOBAL_274_T; static  _GLOBAL_274_T  global_sysctl_table_root[NUM_STACKS];    
typedef  struct ctl_table_header   _GLOBAL_275_T; static  _GLOBAL_275_T  global_root_table_header[NUM_STACKS] = {  { . ctl_table  = _GLOBAL_0_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[0] . header_list  )   , & ( global_sysctl_table_root[0] . header_list  )    }    , . root  = & global_sysctl_table_root[0]    , } ,  { . ctl_table  = _GLOBAL_1_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[1] . header_list  )   , & ( global_sysctl_table_root[1] . header_list  )    }    , . root  = & global_sysctl_table_root[1]    , } ,  { . ctl_table  = _GLOBAL_2_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[2] . header_list  )   , & ( global_sysctl_table_root[2] . header_list  )    }    , . root  = & global_sysctl_table_root[2]    , } ,  { . ctl_table  = _GLOBAL_3_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[3] . header_list  )   , & ( global_sysctl_table_root[3] . header_list  )    }    , . root  = & global_sysctl_table_root[3]    , } ,  { . ctl_table  = _GLOBAL_4_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[4] . header_list  )   , & ( global_sysctl_table_root[4] . header_list  )    }    , . root  = & global_sysctl_table_root[4]    , } ,  { . ctl_table  = _GLOBAL_5_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[5] . header_list  )   , & ( global_sysctl_table_root[5] . header_list  )    }    , . root  = & global_sysctl_table_root[5]    , } ,  { . ctl_table  = _GLOBAL_6_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[6] . header_list  )   , & ( global_sysctl_table_root[6] . header_list  )    }    , . root  = & global_sysctl_table_root[6]    , } ,  { . ctl_table  = _GLOBAL_7_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[7] . header_list  )   , & ( global_sysctl_table_root[7] . header_list  )    }    , . root  = & global_sysctl_table_root[7]    , } ,  { . ctl_table  = _GLOBAL_8_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[8] . header_list  )   , & ( global_sysctl_table_root[8] . header_list  )    }    , . root  = & global_sysctl_table_root[8]    , } ,  { . ctl_table  = _GLOBAL_9_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[9] . header_list  )   , & ( global_sysctl_table_root[9] . header_list  )    }    , . root  = & global_sysctl_table_root[9]    , } ,  { . ctl_table  = _GLOBAL_10_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[10] . header_list  )   , & ( global_sysctl_table_root[10] . header_list  )    }    , . root  = & global_sysctl_table_root[10]    , } ,  { . ctl_table  = _GLOBAL_11_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[11] . header_list  )   , & ( global_sysctl_table_root[11] . header_list  )    }    , . root  = & global_sysctl_table_root[11]    , } ,  { . ctl_table  = _GLOBAL_12_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[12] . header_list  )   , & ( global_sysctl_table_root[12] . header_list  )    }    , . root  = & global_sysctl_table_root[12]    , } ,  { . ctl_table  = _GLOBAL_13_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[13] . header_list  )   , & ( global_sysctl_table_root[13] . header_list  )    }    , . root  = & global_sysctl_table_root[13]    , } ,  { . ctl_table  = _GLOBAL_14_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[14] . header_list  )   , & ( global_sysctl_table_root[14] . header_list  )    }    , . root  = & global_sysctl_table_root[14]    , } ,  { . ctl_table  = _GLOBAL_15_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[15] . header_list  )   , & ( global_sysctl_table_root[15] . header_list  )    }    , . root  = & global_sysctl_table_root[15]    , } ,  { . ctl_table  = _GLOBAL_16_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[16] . header_list  )   , & ( global_sysctl_table_root[16] . header_list  )    }    , . root  = & global_sysctl_table_root[16]    , } ,  { . ctl_table  = _GLOBAL_17_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[17] . header_list  )   , & ( global_sysctl_table_root[17] . header_list  )    }    , . root  = & global_sysctl_table_root[17]    , } ,  { . ctl_table  = _GLOBAL_18_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[18] . header_list  )   , & ( global_sysctl_table_root[18] . header_list  )    }    , . root  = & global_sysctl_table_root[18]    , } ,  { . ctl_table  = _GLOBAL_19_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[19] . header_list  )   , & ( global_sysctl_table_root[19] . header_list  )    }    , . root  = & global_sysctl_table_root[19]    , } ,  { . ctl_table  = _GLOBAL_20_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[20] . header_list  )   , & ( global_sysctl_table_root[20] . header_list  )    }    , . root  = & global_sysctl_table_root[20]    , } ,  { . ctl_table  = _GLOBAL_21_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[21] . header_list  )   , & ( global_sysctl_table_root[21] . header_list  )    }    , . root  = & global_sysctl_table_root[21]    , } ,  { . ctl_table  = _GLOBAL_22_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[22] . header_list  )   , & ( global_sysctl_table_root[22] . header_list  )    }    , . root  = & global_sysctl_table_root[22]    , } ,  { . ctl_table  = _GLOBAL_23_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[23] . header_list  )   , & ( global_sysctl_table_root[23] . header_list  )    }    , . root  = & global_sysctl_table_root[23]    , } ,  { . ctl_table  = _GLOBAL_24_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[24] . header_list  )   , & ( global_sysctl_table_root[24] . header_list  )    }    , . root  = & global_sysctl_table_root[24]    , } ,  { . ctl_table  = _GLOBAL_25_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[25] . header_list  )   , & ( global_sysctl_table_root[25] . header_list  )    }    , . root  = & global_sysctl_table_root[25]    , } ,  { . ctl_table  = _GLOBAL_26_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[26] . header_list  )   , & ( global_sysctl_table_root[26] . header_list  )    }    , . root  = & global_sysctl_table_root[26]    , } ,  { . ctl_table  = _GLOBAL_27_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[27] . header_list  )   , & ( global_sysctl_table_root[27] . header_list  )    }    , . root  = & global_sysctl_table_root[27]    , } ,  { . ctl_table  = _GLOBAL_28_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[28] . header_list  )   , & ( global_sysctl_table_root[28] . header_list  )    }    , . root  = & global_sysctl_table_root[28]    , } ,  { . ctl_table  = _GLOBAL_29_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[29] . header_list  )   , & ( global_sysctl_table_root[29] . header_list  )    }    , . root  = & global_sysctl_table_root[29]    , } ,  { . ctl_table  = _GLOBAL_30_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[30] . header_list  )   , & ( global_sysctl_table_root[30] . header_list  )    }    , . root  = & global_sysctl_table_root[30]    , } ,  { . ctl_table  = _GLOBAL_31_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[31] . header_list  )   , & ( global_sysctl_table_root[31] . header_list  )    }    , . root  = & global_sysctl_table_root[31]    , } ,  { . ctl_table  = _GLOBAL_32_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[32] . header_list  )   , & ( global_sysctl_table_root[32] . header_list  )    }    , . root  = & global_sysctl_table_root[32]    , } ,  { . ctl_table  = _GLOBAL_33_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[33] . header_list  )   , & ( global_sysctl_table_root[33] . header_list  )    }    , . root  = & global_sysctl_table_root[33]    , } ,  { . ctl_table  = _GLOBAL_34_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[34] . header_list  )   , & ( global_sysctl_table_root[34] . header_list  )    }    , . root  = & global_sysctl_table_root[34]    , } ,  { . ctl_table  = _GLOBAL_35_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[35] . header_list  )   , & ( global_sysctl_table_root[35] . header_list  )    }    , . root  = & global_sysctl_table_root[35]    , } ,  { . ctl_table  = _GLOBAL_36_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[36] . header_list  )   , & ( global_sysctl_table_root[36] . header_list  )    }    , . root  = & global_sysctl_table_root[36]    , } ,  { . ctl_table  = _GLOBAL_37_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[37] . header_list  )   , & ( global_sysctl_table_root[37] . header_list  )    }    , . root  = & global_sysctl_table_root[37]    , } ,  { . ctl_table  = _GLOBAL_38_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[38] . header_list  )   , & ( global_sysctl_table_root[38] . header_list  )    }    , . root  = & global_sysctl_table_root[38]    , } ,  { . ctl_table  = _GLOBAL_39_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[39] . header_list  )   , & ( global_sysctl_table_root[39] . header_list  )    }    , . root  = & global_sysctl_table_root[39]    , } ,  { . ctl_table  = _GLOBAL_40_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[40] . header_list  )   , & ( global_sysctl_table_root[40] . header_list  )    }    , . root  = & global_sysctl_table_root[40]    , } ,  { . ctl_table  = _GLOBAL_41_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[41] . header_list  )   , & ( global_sysctl_table_root[41] . header_list  )    }    , . root  = & global_sysctl_table_root[41]    , } ,  { . ctl_table  = _GLOBAL_42_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[42] . header_list  )   , & ( global_sysctl_table_root[42] . header_list  )    }    , . root  = & global_sysctl_table_root[42]    , } ,  { . ctl_table  = _GLOBAL_43_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[43] . header_list  )   , & ( global_sysctl_table_root[43] . header_list  )    }    , . root  = & global_sysctl_table_root[43]    , } ,  { . ctl_table  = _GLOBAL_44_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[44] . header_list  )   , & ( global_sysctl_table_root[44] . header_list  )    }    , . root  = & global_sysctl_table_root[44]    , } ,  { . ctl_table  = _GLOBAL_45_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[45] . header_list  )   , & ( global_sysctl_table_root[45] . header_list  )    }    , . root  = & global_sysctl_table_root[45]    , } ,  { . ctl_table  = _GLOBAL_46_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[46] . header_list  )   , & ( global_sysctl_table_root[46] . header_list  )    }    , . root  = & global_sysctl_table_root[46]    , } ,  { . ctl_table  = _GLOBAL_47_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[47] . header_list  )   , & ( global_sysctl_table_root[47] . header_list  )    }    , . root  = & global_sysctl_table_root[47]    , } ,  { . ctl_table  = _GLOBAL_48_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[48] . header_list  )   , & ( global_sysctl_table_root[48] . header_list  )    }    , . root  = & global_sysctl_table_root[48]    , } ,  { . ctl_table  = _GLOBAL_49_root_table_I  , . ctl_entry  = { & ( global_sysctl_table_root[49] . header_list  )   , & ( global_sysctl_table_root[49] . header_list  )    }    , . root  = & global_sysctl_table_root[49]    , } ,  };      
   
      
   

typedef  struct ctl_table_root   _GLOBAL_276_T; static  _GLOBAL_276_T  global_sysctl_table_root[NUM_STACKS] = {  { . root_list  = { & ( global_sysctl_table_root[0] . root_list  )   , & ( global_sysctl_table_root[0] . root_list  )    }   , . header_list  = { & ( global_root_table_header[0] . ctl_entry  )   , & ( global_root_table_header[0] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[1] . root_list  )   , & ( global_sysctl_table_root[1] . root_list  )    }   , . header_list  = { & ( global_root_table_header[1] . ctl_entry  )   , & ( global_root_table_header[1] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[2] . root_list  )   , & ( global_sysctl_table_root[2] . root_list  )    }   , . header_list  = { & ( global_root_table_header[2] . ctl_entry  )   , & ( global_root_table_header[2] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[3] . root_list  )   , & ( global_sysctl_table_root[3] . root_list  )    }   , . header_list  = { & ( global_root_table_header[3] . ctl_entry  )   , & ( global_root_table_header[3] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[4] . root_list  )   , & ( global_sysctl_table_root[4] . root_list  )    }   , . header_list  = { & ( global_root_table_header[4] . ctl_entry  )   , & ( global_root_table_header[4] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[5] . root_list  )   , & ( global_sysctl_table_root[5] . root_list  )    }   , . header_list  = { & ( global_root_table_header[5] . ctl_entry  )   , & ( global_root_table_header[5] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[6] . root_list  )   , & ( global_sysctl_table_root[6] . root_list  )    }   , . header_list  = { & ( global_root_table_header[6] . ctl_entry  )   , & ( global_root_table_header[6] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[7] . root_list  )   , & ( global_sysctl_table_root[7] . root_list  )    }   , . header_list  = { & ( global_root_table_header[7] . ctl_entry  )   , & ( global_root_table_header[7] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[8] . root_list  )   , & ( global_sysctl_table_root[8] . root_list  )    }   , . header_list  = { & ( global_root_table_header[8] . ctl_entry  )   , & ( global_root_table_header[8] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[9] . root_list  )   , & ( global_sysctl_table_root[9] . root_list  )    }   , . header_list  = { & ( global_root_table_header[9] . ctl_entry  )   , & ( global_root_table_header[9] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[10] . root_list  )   , & ( global_sysctl_table_root[10] . root_list  )    }   , . header_list  = { & ( global_root_table_header[10] . ctl_entry  )   , & ( global_root_table_header[10] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[11] . root_list  )   , & ( global_sysctl_table_root[11] . root_list  )    }   , . header_list  = { & ( global_root_table_header[11] . ctl_entry  )   , & ( global_root_table_header[11] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[12] . root_list  )   , & ( global_sysctl_table_root[12] . root_list  )    }   , . header_list  = { & ( global_root_table_header[12] . ctl_entry  )   , & ( global_root_table_header[12] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[13] . root_list  )   , & ( global_sysctl_table_root[13] . root_list  )    }   , . header_list  = { & ( global_root_table_header[13] . ctl_entry  )   , & ( global_root_table_header[13] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[14] . root_list  )   , & ( global_sysctl_table_root[14] . root_list  )    }   , . header_list  = { & ( global_root_table_header[14] . ctl_entry  )   , & ( global_root_table_header[14] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[15] . root_list  )   , & ( global_sysctl_table_root[15] . root_list  )    }   , . header_list  = { & ( global_root_table_header[15] . ctl_entry  )   , & ( global_root_table_header[15] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[16] . root_list  )   , & ( global_sysctl_table_root[16] . root_list  )    }   , . header_list  = { & ( global_root_table_header[16] . ctl_entry  )   , & ( global_root_table_header[16] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[17] . root_list  )   , & ( global_sysctl_table_root[17] . root_list  )    }   , . header_list  = { & ( global_root_table_header[17] . ctl_entry  )   , & ( global_root_table_header[17] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[18] . root_list  )   , & ( global_sysctl_table_root[18] . root_list  )    }   , . header_list  = { & ( global_root_table_header[18] . ctl_entry  )   , & ( global_root_table_header[18] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[19] . root_list  )   , & ( global_sysctl_table_root[19] . root_list  )    }   , . header_list  = { & ( global_root_table_header[19] . ctl_entry  )   , & ( global_root_table_header[19] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[20] . root_list  )   , & ( global_sysctl_table_root[20] . root_list  )    }   , . header_list  = { & ( global_root_table_header[20] . ctl_entry  )   , & ( global_root_table_header[20] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[21] . root_list  )   , & ( global_sysctl_table_root[21] . root_list  )    }   , . header_list  = { & ( global_root_table_header[21] . ctl_entry  )   , & ( global_root_table_header[21] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[22] . root_list  )   , & ( global_sysctl_table_root[22] . root_list  )    }   , . header_list  = { & ( global_root_table_header[22] . ctl_entry  )   , & ( global_root_table_header[22] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[23] . root_list  )   , & ( global_sysctl_table_root[23] . root_list  )    }   , . header_list  = { & ( global_root_table_header[23] . ctl_entry  )   , & ( global_root_table_header[23] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[24] . root_list  )   , & ( global_sysctl_table_root[24] . root_list  )    }   , . header_list  = { & ( global_root_table_header[24] . ctl_entry  )   , & ( global_root_table_header[24] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[25] . root_list  )   , & ( global_sysctl_table_root[25] . root_list  )    }   , . header_list  = { & ( global_root_table_header[25] . ctl_entry  )   , & ( global_root_table_header[25] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[26] . root_list  )   , & ( global_sysctl_table_root[26] . root_list  )    }   , . header_list  = { & ( global_root_table_header[26] . ctl_entry  )   , & ( global_root_table_header[26] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[27] . root_list  )   , & ( global_sysctl_table_root[27] . root_list  )    }   , . header_list  = { & ( global_root_table_header[27] . ctl_entry  )   , & ( global_root_table_header[27] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[28] . root_list  )   , & ( global_sysctl_table_root[28] . root_list  )    }   , . header_list  = { & ( global_root_table_header[28] . ctl_entry  )   , & ( global_root_table_header[28] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[29] . root_list  )   , & ( global_sysctl_table_root[29] . root_list  )    }   , . header_list  = { & ( global_root_table_header[29] . ctl_entry  )   , & ( global_root_table_header[29] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[30] . root_list  )   , & ( global_sysctl_table_root[30] . root_list  )    }   , . header_list  = { & ( global_root_table_header[30] . ctl_entry  )   , & ( global_root_table_header[30] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[31] . root_list  )   , & ( global_sysctl_table_root[31] . root_list  )    }   , . header_list  = { & ( global_root_table_header[31] . ctl_entry  )   , & ( global_root_table_header[31] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[32] . root_list  )   , & ( global_sysctl_table_root[32] . root_list  )    }   , . header_list  = { & ( global_root_table_header[32] . ctl_entry  )   , & ( global_root_table_header[32] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[33] . root_list  )   , & ( global_sysctl_table_root[33] . root_list  )    }   , . header_list  = { & ( global_root_table_header[33] . ctl_entry  )   , & ( global_root_table_header[33] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[34] . root_list  )   , & ( global_sysctl_table_root[34] . root_list  )    }   , . header_list  = { & ( global_root_table_header[34] . ctl_entry  )   , & ( global_root_table_header[34] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[35] . root_list  )   , & ( global_sysctl_table_root[35] . root_list  )    }   , . header_list  = { & ( global_root_table_header[35] . ctl_entry  )   , & ( global_root_table_header[35] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[36] . root_list  )   , & ( global_sysctl_table_root[36] . root_list  )    }   , . header_list  = { & ( global_root_table_header[36] . ctl_entry  )   , & ( global_root_table_header[36] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[37] . root_list  )   , & ( global_sysctl_table_root[37] . root_list  )    }   , . header_list  = { & ( global_root_table_header[37] . ctl_entry  )   , & ( global_root_table_header[37] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[38] . root_list  )   , & ( global_sysctl_table_root[38] . root_list  )    }   , . header_list  = { & ( global_root_table_header[38] . ctl_entry  )   , & ( global_root_table_header[38] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[39] . root_list  )   , & ( global_sysctl_table_root[39] . root_list  )    }   , . header_list  = { & ( global_root_table_header[39] . ctl_entry  )   , & ( global_root_table_header[39] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[40] . root_list  )   , & ( global_sysctl_table_root[40] . root_list  )    }   , . header_list  = { & ( global_root_table_header[40] . ctl_entry  )   , & ( global_root_table_header[40] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[41] . root_list  )   , & ( global_sysctl_table_root[41] . root_list  )    }   , . header_list  = { & ( global_root_table_header[41] . ctl_entry  )   , & ( global_root_table_header[41] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[42] . root_list  )   , & ( global_sysctl_table_root[42] . root_list  )    }   , . header_list  = { & ( global_root_table_header[42] . ctl_entry  )   , & ( global_root_table_header[42] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[43] . root_list  )   , & ( global_sysctl_table_root[43] . root_list  )    }   , . header_list  = { & ( global_root_table_header[43] . ctl_entry  )   , & ( global_root_table_header[43] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[44] . root_list  )   , & ( global_sysctl_table_root[44] . root_list  )    }   , . header_list  = { & ( global_root_table_header[44] . ctl_entry  )   , & ( global_root_table_header[44] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[45] . root_list  )   , & ( global_sysctl_table_root[45] . root_list  )    }   , . header_list  = { & ( global_root_table_header[45] . ctl_entry  )   , & ( global_root_table_header[45] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[46] . root_list  )   , & ( global_sysctl_table_root[46] . root_list  )    }   , . header_list  = { & ( global_root_table_header[46] . ctl_entry  )   , & ( global_root_table_header[46] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[47] . root_list  )   , & ( global_sysctl_table_root[47] . root_list  )    }   , . header_list  = { & ( global_root_table_header[47] . ctl_entry  )   , & ( global_root_table_header[47] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[48] . root_list  )   , & ( global_sysctl_table_root[48] . root_list  )    }   , . header_list  = { & ( global_root_table_header[48] . ctl_entry  )   , & ( global_root_table_header[48] . ctl_entry  )    }    , } ,  { . root_list  = { & ( global_sysctl_table_root[49] . root_list  )   , & ( global_sysctl_table_root[49] . root_list  )    }   , . header_list  = { & ( global_root_table_header[49] . ctl_entry  )   , & ( global_root_table_header[49] . ctl_entry  )    }    , } ,  };      
      
      


typedef  struct ctl_table   _GLOBAL_277_T; static  _GLOBAL_277_T  _GLOBAL_0_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_1_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_2_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_3_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_4_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_5_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_6_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_7_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_8_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_9_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_10_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_11_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_12_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_13_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_14_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_15_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_16_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_17_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_18_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_19_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_20_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_21_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_22_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_23_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_24_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_25_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_26_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_27_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_28_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_29_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_30_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_31_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_32_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_33_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_34_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_35_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_36_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_37_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_38_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_39_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_40_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_41_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_42_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_43_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_44_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_45_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_46_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_47_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_48_kern_table_I [ ] ; static  _GLOBAL_277_T  _GLOBAL_49_kern_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_table_I) *_GLOBAL_kern_table_17_A[NUM_STACKS] = { &_GLOBAL_0_kern_table_I, &_GLOBAL_1_kern_table_I, &_GLOBAL_2_kern_table_I, &_GLOBAL_3_kern_table_I, &_GLOBAL_4_kern_table_I, &_GLOBAL_5_kern_table_I, &_GLOBAL_6_kern_table_I, &_GLOBAL_7_kern_table_I, &_GLOBAL_8_kern_table_I, &_GLOBAL_9_kern_table_I, &_GLOBAL_10_kern_table_I, &_GLOBAL_11_kern_table_I, &_GLOBAL_12_kern_table_I, &_GLOBAL_13_kern_table_I, &_GLOBAL_14_kern_table_I, &_GLOBAL_15_kern_table_I, &_GLOBAL_16_kern_table_I, &_GLOBAL_17_kern_table_I, &_GLOBAL_18_kern_table_I, &_GLOBAL_19_kern_table_I, &_GLOBAL_20_kern_table_I, &_GLOBAL_21_kern_table_I, &_GLOBAL_22_kern_table_I, &_GLOBAL_23_kern_table_I, &_GLOBAL_24_kern_table_I, &_GLOBAL_25_kern_table_I, &_GLOBAL_26_kern_table_I, &_GLOBAL_27_kern_table_I, &_GLOBAL_28_kern_table_I, &_GLOBAL_29_kern_table_I, &_GLOBAL_30_kern_table_I, &_GLOBAL_31_kern_table_I, &_GLOBAL_32_kern_table_I, &_GLOBAL_33_kern_table_I, &_GLOBAL_34_kern_table_I, &_GLOBAL_35_kern_table_I, &_GLOBAL_36_kern_table_I, &_GLOBAL_37_kern_table_I, &_GLOBAL_38_kern_table_I, &_GLOBAL_39_kern_table_I, &_GLOBAL_40_kern_table_I, &_GLOBAL_41_kern_table_I, &_GLOBAL_42_kern_table_I, &_GLOBAL_43_kern_table_I, &_GLOBAL_44_kern_table_I, &_GLOBAL_45_kern_table_I, &_GLOBAL_46_kern_table_I, &_GLOBAL_47_kern_table_I, &_GLOBAL_48_kern_table_I, &_GLOBAL_49_kern_table_I, };   
typedef  struct ctl_table   _GLOBAL_278_T; static  _GLOBAL_278_T  _GLOBAL_0_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_1_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_2_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_3_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_4_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_5_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_6_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_7_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_8_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_9_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_10_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_11_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_12_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_13_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_14_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_15_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_16_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_17_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_18_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_19_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_20_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_21_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_22_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_23_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_24_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_25_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_26_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_27_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_28_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_29_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_30_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_31_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_32_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_33_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_34_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_35_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_36_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_37_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_38_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_39_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_40_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_41_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_42_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_43_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_44_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_45_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_46_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_47_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_48_vm_table_I [ ] ; static  _GLOBAL_278_T  _GLOBAL_49_vm_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vm_table_I) *_GLOBAL_vm_table_18_A[NUM_STACKS] = { &_GLOBAL_0_vm_table_I, &_GLOBAL_1_vm_table_I, &_GLOBAL_2_vm_table_I, &_GLOBAL_3_vm_table_I, &_GLOBAL_4_vm_table_I, &_GLOBAL_5_vm_table_I, &_GLOBAL_6_vm_table_I, &_GLOBAL_7_vm_table_I, &_GLOBAL_8_vm_table_I, &_GLOBAL_9_vm_table_I, &_GLOBAL_10_vm_table_I, &_GLOBAL_11_vm_table_I, &_GLOBAL_12_vm_table_I, &_GLOBAL_13_vm_table_I, &_GLOBAL_14_vm_table_I, &_GLOBAL_15_vm_table_I, &_GLOBAL_16_vm_table_I, &_GLOBAL_17_vm_table_I, &_GLOBAL_18_vm_table_I, &_GLOBAL_19_vm_table_I, &_GLOBAL_20_vm_table_I, &_GLOBAL_21_vm_table_I, &_GLOBAL_22_vm_table_I, &_GLOBAL_23_vm_table_I, &_GLOBAL_24_vm_table_I, &_GLOBAL_25_vm_table_I, &_GLOBAL_26_vm_table_I, &_GLOBAL_27_vm_table_I, &_GLOBAL_28_vm_table_I, &_GLOBAL_29_vm_table_I, &_GLOBAL_30_vm_table_I, &_GLOBAL_31_vm_table_I, &_GLOBAL_32_vm_table_I, &_GLOBAL_33_vm_table_I, &_GLOBAL_34_vm_table_I, &_GLOBAL_35_vm_table_I, &_GLOBAL_36_vm_table_I, &_GLOBAL_37_vm_table_I, &_GLOBAL_38_vm_table_I, &_GLOBAL_39_vm_table_I, &_GLOBAL_40_vm_table_I, &_GLOBAL_41_vm_table_I, &_GLOBAL_42_vm_table_I, &_GLOBAL_43_vm_table_I, &_GLOBAL_44_vm_table_I, &_GLOBAL_45_vm_table_I, &_GLOBAL_46_vm_table_I, &_GLOBAL_47_vm_table_I, &_GLOBAL_48_vm_table_I, &_GLOBAL_49_vm_table_I, };   
typedef  struct ctl_table   _GLOBAL_279_T; static  _GLOBAL_279_T  _GLOBAL_0_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_1_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_2_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_3_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_4_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_5_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_6_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_7_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_8_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_9_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_10_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_11_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_12_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_13_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_14_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_15_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_16_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_17_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_18_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_19_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_20_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_21_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_22_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_23_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_24_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_25_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_26_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_27_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_28_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_29_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_30_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_31_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_32_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_33_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_34_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_35_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_36_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_37_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_38_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_39_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_40_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_41_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_42_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_43_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_44_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_45_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_46_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_47_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_48_fs_table_I [ ] ; static  _GLOBAL_279_T  _GLOBAL_49_fs_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_fs_table_I) *_GLOBAL_fs_table_19_A[NUM_STACKS] = { &_GLOBAL_0_fs_table_I, &_GLOBAL_1_fs_table_I, &_GLOBAL_2_fs_table_I, &_GLOBAL_3_fs_table_I, &_GLOBAL_4_fs_table_I, &_GLOBAL_5_fs_table_I, &_GLOBAL_6_fs_table_I, &_GLOBAL_7_fs_table_I, &_GLOBAL_8_fs_table_I, &_GLOBAL_9_fs_table_I, &_GLOBAL_10_fs_table_I, &_GLOBAL_11_fs_table_I, &_GLOBAL_12_fs_table_I, &_GLOBAL_13_fs_table_I, &_GLOBAL_14_fs_table_I, &_GLOBAL_15_fs_table_I, &_GLOBAL_16_fs_table_I, &_GLOBAL_17_fs_table_I, &_GLOBAL_18_fs_table_I, &_GLOBAL_19_fs_table_I, &_GLOBAL_20_fs_table_I, &_GLOBAL_21_fs_table_I, &_GLOBAL_22_fs_table_I, &_GLOBAL_23_fs_table_I, &_GLOBAL_24_fs_table_I, &_GLOBAL_25_fs_table_I, &_GLOBAL_26_fs_table_I, &_GLOBAL_27_fs_table_I, &_GLOBAL_28_fs_table_I, &_GLOBAL_29_fs_table_I, &_GLOBAL_30_fs_table_I, &_GLOBAL_31_fs_table_I, &_GLOBAL_32_fs_table_I, &_GLOBAL_33_fs_table_I, &_GLOBAL_34_fs_table_I, &_GLOBAL_35_fs_table_I, &_GLOBAL_36_fs_table_I, &_GLOBAL_37_fs_table_I, &_GLOBAL_38_fs_table_I, &_GLOBAL_39_fs_table_I, &_GLOBAL_40_fs_table_I, &_GLOBAL_41_fs_table_I, &_GLOBAL_42_fs_table_I, &_GLOBAL_43_fs_table_I, &_GLOBAL_44_fs_table_I, &_GLOBAL_45_fs_table_I, &_GLOBAL_46_fs_table_I, &_GLOBAL_47_fs_table_I, &_GLOBAL_48_fs_table_I, &_GLOBAL_49_fs_table_I, };   
typedef  struct ctl_table   _GLOBAL_280_T; static  _GLOBAL_280_T  _GLOBAL_0_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_1_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_2_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_3_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_4_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_5_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_6_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_7_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_8_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_9_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_10_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_11_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_12_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_13_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_14_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_15_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_16_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_17_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_18_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_19_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_20_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_21_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_22_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_23_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_24_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_25_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_26_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_27_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_28_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_29_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_30_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_31_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_32_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_33_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_34_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_35_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_36_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_37_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_38_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_39_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_40_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_41_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_42_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_43_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_44_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_45_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_46_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_47_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_48_debug_table_I [ ] ; static  _GLOBAL_280_T  _GLOBAL_49_debug_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_debug_table_I) *_GLOBAL_debug_table_20_A[NUM_STACKS] = { &_GLOBAL_0_debug_table_I, &_GLOBAL_1_debug_table_I, &_GLOBAL_2_debug_table_I, &_GLOBAL_3_debug_table_I, &_GLOBAL_4_debug_table_I, &_GLOBAL_5_debug_table_I, &_GLOBAL_6_debug_table_I, &_GLOBAL_7_debug_table_I, &_GLOBAL_8_debug_table_I, &_GLOBAL_9_debug_table_I, &_GLOBAL_10_debug_table_I, &_GLOBAL_11_debug_table_I, &_GLOBAL_12_debug_table_I, &_GLOBAL_13_debug_table_I, &_GLOBAL_14_debug_table_I, &_GLOBAL_15_debug_table_I, &_GLOBAL_16_debug_table_I, &_GLOBAL_17_debug_table_I, &_GLOBAL_18_debug_table_I, &_GLOBAL_19_debug_table_I, &_GLOBAL_20_debug_table_I, &_GLOBAL_21_debug_table_I, &_GLOBAL_22_debug_table_I, &_GLOBAL_23_debug_table_I, &_GLOBAL_24_debug_table_I, &_GLOBAL_25_debug_table_I, &_GLOBAL_26_debug_table_I, &_GLOBAL_27_debug_table_I, &_GLOBAL_28_debug_table_I, &_GLOBAL_29_debug_table_I, &_GLOBAL_30_debug_table_I, &_GLOBAL_31_debug_table_I, &_GLOBAL_32_debug_table_I, &_GLOBAL_33_debug_table_I, &_GLOBAL_34_debug_table_I, &_GLOBAL_35_debug_table_I, &_GLOBAL_36_debug_table_I, &_GLOBAL_37_debug_table_I, &_GLOBAL_38_debug_table_I, &_GLOBAL_39_debug_table_I, &_GLOBAL_40_debug_table_I, &_GLOBAL_41_debug_table_I, &_GLOBAL_42_debug_table_I, &_GLOBAL_43_debug_table_I, &_GLOBAL_44_debug_table_I, &_GLOBAL_45_debug_table_I, &_GLOBAL_46_debug_table_I, &_GLOBAL_47_debug_table_I, &_GLOBAL_48_debug_table_I, &_GLOBAL_49_debug_table_I, };   
typedef  struct ctl_table   _GLOBAL_281_T; static  _GLOBAL_281_T  _GLOBAL_0_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_1_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_2_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_3_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_4_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_5_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_6_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_7_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_8_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_9_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_10_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_11_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_12_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_13_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_14_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_15_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_16_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_17_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_18_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_19_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_20_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_21_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_22_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_23_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_24_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_25_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_26_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_27_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_28_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_29_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_30_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_31_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_32_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_33_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_34_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_35_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_36_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_37_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_38_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_39_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_40_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_41_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_42_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_43_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_44_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_45_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_46_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_47_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_48_dev_table_I [ ] ; static  _GLOBAL_281_T  _GLOBAL_49_dev_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_dev_table_I) *_GLOBAL_dev_table_21_A[NUM_STACKS] = { &_GLOBAL_0_dev_table_I, &_GLOBAL_1_dev_table_I, &_GLOBAL_2_dev_table_I, &_GLOBAL_3_dev_table_I, &_GLOBAL_4_dev_table_I, &_GLOBAL_5_dev_table_I, &_GLOBAL_6_dev_table_I, &_GLOBAL_7_dev_table_I, &_GLOBAL_8_dev_table_I, &_GLOBAL_9_dev_table_I, &_GLOBAL_10_dev_table_I, &_GLOBAL_11_dev_table_I, &_GLOBAL_12_dev_table_I, &_GLOBAL_13_dev_table_I, &_GLOBAL_14_dev_table_I, &_GLOBAL_15_dev_table_I, &_GLOBAL_16_dev_table_I, &_GLOBAL_17_dev_table_I, &_GLOBAL_18_dev_table_I, &_GLOBAL_19_dev_table_I, &_GLOBAL_20_dev_table_I, &_GLOBAL_21_dev_table_I, &_GLOBAL_22_dev_table_I, &_GLOBAL_23_dev_table_I, &_GLOBAL_24_dev_table_I, &_GLOBAL_25_dev_table_I, &_GLOBAL_26_dev_table_I, &_GLOBAL_27_dev_table_I, &_GLOBAL_28_dev_table_I, &_GLOBAL_29_dev_table_I, &_GLOBAL_30_dev_table_I, &_GLOBAL_31_dev_table_I, &_GLOBAL_32_dev_table_I, &_GLOBAL_33_dev_table_I, &_GLOBAL_34_dev_table_I, &_GLOBAL_35_dev_table_I, &_GLOBAL_36_dev_table_I, &_GLOBAL_37_dev_table_I, &_GLOBAL_38_dev_table_I, &_GLOBAL_39_dev_table_I, &_GLOBAL_40_dev_table_I, &_GLOBAL_41_dev_table_I, &_GLOBAL_42_dev_table_I, &_GLOBAL_43_dev_table_I, &_GLOBAL_44_dev_table_I, &_GLOBAL_45_dev_table_I, &_GLOBAL_46_dev_table_I, &_GLOBAL_47_dev_table_I, &_GLOBAL_48_dev_table_I, &_GLOBAL_49_dev_table_I, };   
typedef  struct ctl_table   _GLOBAL_282_T; extern  _GLOBAL_282_T  _GLOBAL_0_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_1_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_2_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_3_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_4_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_5_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_6_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_7_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_8_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_9_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_10_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_11_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_12_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_13_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_14_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_15_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_16_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_17_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_18_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_19_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_20_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_21_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_22_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_23_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_24_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_25_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_26_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_27_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_28_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_29_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_30_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_31_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_32_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_33_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_34_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_35_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_36_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_37_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_38_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_39_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_40_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_41_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_42_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_43_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_44_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_45_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_46_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_47_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_48_random_table_I [ ] ; extern  _GLOBAL_282_T  _GLOBAL_49_random_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_random_table_I) *_GLOBAL_random_table_22_A[NUM_STACKS] = { &_GLOBAL_0_random_table_I, &_GLOBAL_1_random_table_I, &_GLOBAL_2_random_table_I, &_GLOBAL_3_random_table_I, &_GLOBAL_4_random_table_I, &_GLOBAL_5_random_table_I, &_GLOBAL_6_random_table_I, &_GLOBAL_7_random_table_I, &_GLOBAL_8_random_table_I, &_GLOBAL_9_random_table_I, &_GLOBAL_10_random_table_I, &_GLOBAL_11_random_table_I, &_GLOBAL_12_random_table_I, &_GLOBAL_13_random_table_I, &_GLOBAL_14_random_table_I, &_GLOBAL_15_random_table_I, &_GLOBAL_16_random_table_I, &_GLOBAL_17_random_table_I, &_GLOBAL_18_random_table_I, &_GLOBAL_19_random_table_I, &_GLOBAL_20_random_table_I, &_GLOBAL_21_random_table_I, &_GLOBAL_22_random_table_I, &_GLOBAL_23_random_table_I, &_GLOBAL_24_random_table_I, &_GLOBAL_25_random_table_I, &_GLOBAL_26_random_table_I, &_GLOBAL_27_random_table_I, &_GLOBAL_28_random_table_I, &_GLOBAL_29_random_table_I, &_GLOBAL_30_random_table_I, &_GLOBAL_31_random_table_I, &_GLOBAL_32_random_table_I, &_GLOBAL_33_random_table_I, &_GLOBAL_34_random_table_I, &_GLOBAL_35_random_table_I, &_GLOBAL_36_random_table_I, &_GLOBAL_37_random_table_I, &_GLOBAL_38_random_table_I, &_GLOBAL_39_random_table_I, &_GLOBAL_40_random_table_I, &_GLOBAL_41_random_table_I, &_GLOBAL_42_random_table_I, &_GLOBAL_43_random_table_I, &_GLOBAL_44_random_table_I, &_GLOBAL_45_random_table_I, &_GLOBAL_46_random_table_I, &_GLOBAL_47_random_table_I, &_GLOBAL_48_random_table_I, &_GLOBAL_49_random_table_I, };   





typedef  int _GLOBAL_283_T;  _GLOBAL_283_T  global_sysctl_legacy_va_layout[NUM_STACKS];  


typedef  int  _GLOBAL_284_T; extern  _GLOBAL_284_T  global_prove_locking[NUM_STACKS];   
typedef  int  _GLOBAL_285_T; extern  _GLOBAL_285_T  global_lock_stat[NUM_STACKS];   



typedef  struct ctl_table   _GLOBAL_286_T; static  _GLOBAL_286_T  _GLOBAL_0_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_0_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_0_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_0_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_0_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_0_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_1_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_1_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_1_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_1_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_1_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_1_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_2_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_2_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_2_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_2_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_2_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_2_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_3_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_3_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_3_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_3_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_3_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_3_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_4_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_4_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_4_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_4_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_4_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_4_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_5_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_5_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_5_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_5_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_5_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_5_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_6_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_6_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_6_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_6_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_6_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_6_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_7_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_7_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_7_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_7_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_7_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_7_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_8_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_8_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_8_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_8_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_8_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_8_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_9_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_9_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_9_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_9_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_9_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_9_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_10_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_10_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_10_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_10_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_10_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_10_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_11_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_11_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_11_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_11_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_11_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_11_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_12_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_12_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_12_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_12_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_12_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_12_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_13_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_13_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_13_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_13_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_13_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_13_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_14_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_14_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_14_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_14_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_14_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_14_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_15_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_15_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_15_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_15_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_15_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_15_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_16_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_16_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_16_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_16_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_16_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_16_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_17_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_17_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_17_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_17_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_17_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_17_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_18_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_18_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_18_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_18_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_18_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_18_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_19_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_19_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_19_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_19_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_19_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_19_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_20_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_20_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_20_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_20_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_20_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_20_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_21_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_21_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_21_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_21_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_21_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_21_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_22_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_22_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_22_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_22_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_22_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_22_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_23_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_23_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_23_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_23_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_23_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_23_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_24_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_24_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_24_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_24_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_24_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_24_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_25_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_25_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_25_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_25_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_25_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_25_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_26_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_26_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_26_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_26_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_26_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_26_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_27_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_27_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_27_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_27_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_27_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_27_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_28_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_28_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_28_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_28_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_28_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_28_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_29_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_29_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_29_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_29_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_29_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_29_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_30_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_30_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_30_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_30_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_30_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_30_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_31_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_31_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_31_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_31_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_31_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_31_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_32_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_32_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_32_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_32_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_32_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_32_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_33_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_33_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_33_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_33_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_33_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_33_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_34_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_34_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_34_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_34_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_34_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_34_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_35_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_35_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_35_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_35_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_35_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_35_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_36_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_36_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_36_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_36_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_36_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_36_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_37_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_37_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_37_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_37_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_37_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_37_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_38_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_38_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_38_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_38_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_38_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_38_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_39_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_39_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_39_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_39_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_39_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_39_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_40_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_40_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_40_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_40_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_40_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_40_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_41_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_41_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_41_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_41_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_41_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_41_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_42_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_42_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_42_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_42_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_42_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_42_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_43_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_43_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_43_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_43_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_43_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_43_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_44_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_44_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_44_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_44_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_44_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_44_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_45_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_45_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_45_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_45_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_45_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_45_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_46_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_46_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_46_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_46_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_46_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_46_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_47_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_47_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_47_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_47_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_47_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_47_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_48_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_48_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_48_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_48_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_48_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_48_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_286_T  _GLOBAL_49_root_table_I [ ]  = { { . ctl_name  = CTL_KERN  , . procname  = "kernel"   , . mode  = 0555   , . child  = _GLOBAL_49_kern_table_I   , }  , { . ctl_name  = CTL_VM  , . procname  = "vm"   , . mode  = 0555   , . child  = _GLOBAL_49_vm_table_I   , }   , { . ctl_name  = CTL_FS  , . procname  = "fs"   , . mode  = 0555   , . child  = _GLOBAL_49_fs_table_I   , }   , { . ctl_name  = CTL_DEBUG  , . procname  = "debug"   , . mode  = 0555   , . child  = _GLOBAL_49_debug_table_I   , }   , { . ctl_name  = CTL_DEV  , . procname  = "dev"   , . mode  = 0555   , . child  = _GLOBAL_49_dev_table_I   , }   , { . ctl_name  = 0  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_table_I) *_GLOBAL_root_table_23_A[NUM_STACKS] = { &_GLOBAL_0_root_table_I, &_GLOBAL_1_root_table_I, &_GLOBAL_2_root_table_I, &_GLOBAL_3_root_table_I, &_GLOBAL_4_root_table_I, &_GLOBAL_5_root_table_I, &_GLOBAL_6_root_table_I, &_GLOBAL_7_root_table_I, &_GLOBAL_8_root_table_I, &_GLOBAL_9_root_table_I, &_GLOBAL_10_root_table_I, &_GLOBAL_11_root_table_I, &_GLOBAL_12_root_table_I, &_GLOBAL_13_root_table_I, &_GLOBAL_14_root_table_I, &_GLOBAL_15_root_table_I, &_GLOBAL_16_root_table_I, &_GLOBAL_17_root_table_I, &_GLOBAL_18_root_table_I, &_GLOBAL_19_root_table_I, &_GLOBAL_20_root_table_I, &_GLOBAL_21_root_table_I, &_GLOBAL_22_root_table_I, &_GLOBAL_23_root_table_I, &_GLOBAL_24_root_table_I, &_GLOBAL_25_root_table_I, &_GLOBAL_26_root_table_I, &_GLOBAL_27_root_table_I, &_GLOBAL_28_root_table_I, &_GLOBAL_29_root_table_I, &_GLOBAL_30_root_table_I, &_GLOBAL_31_root_table_I, &_GLOBAL_32_root_table_I, &_GLOBAL_33_root_table_I, &_GLOBAL_34_root_table_I, &_GLOBAL_35_root_table_I, &_GLOBAL_36_root_table_I, &_GLOBAL_37_root_table_I, &_GLOBAL_38_root_table_I, &_GLOBAL_39_root_table_I, &_GLOBAL_40_root_table_I, &_GLOBAL_41_root_table_I, &_GLOBAL_42_root_table_I, &_GLOBAL_43_root_table_I, &_GLOBAL_44_root_table_I, &_GLOBAL_45_root_table_I, &_GLOBAL_46_root_table_I, &_GLOBAL_47_root_table_I, &_GLOBAL_48_root_table_I, &_GLOBAL_49_root_table_I, };     
 
    
    
    
    
 
 
    
    
    
    
 
 
    
    
    
    
 
 
    
    
    
    
 
 
    
    
    
    
 




     

# 232 "linux-2.6.26/kernel/sysctl.c"
# 300 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
     
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
     
    
    
 
# 344 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
# 397 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
    
    
    
 
# 450 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
    
    
    
 
# 519 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
    
    
    
 
 
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
# 585 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
     
    
    
    
    
    
 
 
    
    
    
    
    
    
 

 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 

 
    
    
    
     
    
    
 
# 657 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
    
    
    
 
 
    
    
    
     
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
# 799 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
    
    
    
    
 
# 820 "linux-2.6.26/kernel/sysctl.c"
     


 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
 
 
    
    
    
    
    
 
 
    
    
    
     
     
    
 
 
    
    
    
    
    
    
    
    
    
 
# 962 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
 
# 1010 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
 

 
    
    
    
    
    
    
    
    
 
# 1147 "linux-2.6.26/kernel/sysctl.c"
     








typedef  struct ctl_table   _GLOBAL_289_T; static  _GLOBAL_289_T  _GLOBAL_0_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[0]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[0]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[0]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[0] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[0]    , . extra2  = & global_sysctl_nr_open_max[0]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[0]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[0]    , . extra2  = & global_maxolduid[0]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[0]    , . extra2  = & global_maxolduid[0]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_1_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[1]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[1]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[1]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[1] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[1]    , . extra2  = & global_sysctl_nr_open_max[1]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[1]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[1]    , . extra2  = & global_maxolduid[1]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[1]    , . extra2  = & global_maxolduid[1]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_2_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[2]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[2]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[2]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[2] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[2]    , . extra2  = & global_sysctl_nr_open_max[2]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[2]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[2]    , . extra2  = & global_maxolduid[2]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[2]    , . extra2  = & global_maxolduid[2]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_3_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[3]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[3]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[3]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[3] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[3]    , . extra2  = & global_sysctl_nr_open_max[3]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[3]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[3]    , . extra2  = & global_maxolduid[3]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[3]    , . extra2  = & global_maxolduid[3]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_4_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[4]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[4]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[4]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[4] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[4]    , . extra2  = & global_sysctl_nr_open_max[4]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[4]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[4]    , . extra2  = & global_maxolduid[4]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[4]    , . extra2  = & global_maxolduid[4]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_5_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[5]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[5]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[5]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[5] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[5]    , . extra2  = & global_sysctl_nr_open_max[5]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[5]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[5]    , . extra2  = & global_maxolduid[5]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[5]    , . extra2  = & global_maxolduid[5]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_6_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[6]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[6]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[6]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[6] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[6]    , . extra2  = & global_sysctl_nr_open_max[6]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[6]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[6]    , . extra2  = & global_maxolduid[6]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[6]    , . extra2  = & global_maxolduid[6]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_7_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[7]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[7]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[7]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[7] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[7]    , . extra2  = & global_sysctl_nr_open_max[7]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[7]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[7]    , . extra2  = & global_maxolduid[7]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[7]    , . extra2  = & global_maxolduid[7]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_8_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[8]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[8]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[8]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[8] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[8]    , . extra2  = & global_sysctl_nr_open_max[8]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[8]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[8]    , . extra2  = & global_maxolduid[8]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[8]    , . extra2  = & global_maxolduid[8]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_9_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[9]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[9]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[9]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[9] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[9]    , . extra2  = & global_sysctl_nr_open_max[9]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[9]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[9]    , . extra2  = & global_maxolduid[9]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[9]    , . extra2  = & global_maxolduid[9]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_10_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[10]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[10]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[10]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[10] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[10]    , . extra2  = & global_sysctl_nr_open_max[10]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[10]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[10]    , . extra2  = & global_maxolduid[10]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[10]    , . extra2  = & global_maxolduid[10]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_11_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[11]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[11]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[11]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[11] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[11]    , . extra2  = & global_sysctl_nr_open_max[11]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[11]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[11]    , . extra2  = & global_maxolduid[11]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[11]    , . extra2  = & global_maxolduid[11]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_12_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[12]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[12]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[12]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[12] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[12]    , . extra2  = & global_sysctl_nr_open_max[12]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[12]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[12]    , . extra2  = & global_maxolduid[12]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[12]    , . extra2  = & global_maxolduid[12]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_13_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[13]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[13]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[13]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[13] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[13]    , . extra2  = & global_sysctl_nr_open_max[13]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[13]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[13]    , . extra2  = & global_maxolduid[13]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[13]    , . extra2  = & global_maxolduid[13]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_14_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[14]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[14]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[14]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[14] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[14]    , . extra2  = & global_sysctl_nr_open_max[14]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[14]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[14]    , . extra2  = & global_maxolduid[14]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[14]    , . extra2  = & global_maxolduid[14]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_15_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[15]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[15]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[15]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[15] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[15]    , . extra2  = & global_sysctl_nr_open_max[15]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[15]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[15]    , . extra2  = & global_maxolduid[15]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[15]    , . extra2  = & global_maxolduid[15]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_16_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[16]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[16]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[16]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[16] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[16]    , . extra2  = & global_sysctl_nr_open_max[16]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[16]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[16]    , . extra2  = & global_maxolduid[16]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[16]    , . extra2  = & global_maxolduid[16]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_17_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[17]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[17]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[17]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[17] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[17]    , . extra2  = & global_sysctl_nr_open_max[17]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[17]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[17]    , . extra2  = & global_maxolduid[17]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[17]    , . extra2  = & global_maxolduid[17]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_18_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[18]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[18]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[18]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[18] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[18]    , . extra2  = & global_sysctl_nr_open_max[18]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[18]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[18]    , . extra2  = & global_maxolduid[18]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[18]    , . extra2  = & global_maxolduid[18]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_19_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[19]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[19]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[19]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[19] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[19]    , . extra2  = & global_sysctl_nr_open_max[19]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[19]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[19]    , . extra2  = & global_maxolduid[19]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[19]    , . extra2  = & global_maxolduid[19]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_20_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[20]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[20]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[20]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[20] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[20]    , . extra2  = & global_sysctl_nr_open_max[20]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[20]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[20]    , . extra2  = & global_maxolduid[20]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[20]    , . extra2  = & global_maxolduid[20]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_21_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[21]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[21]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[21]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[21] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[21]    , . extra2  = & global_sysctl_nr_open_max[21]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[21]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[21]    , . extra2  = & global_maxolduid[21]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[21]    , . extra2  = & global_maxolduid[21]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_22_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[22]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[22]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[22]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[22] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[22]    , . extra2  = & global_sysctl_nr_open_max[22]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[22]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[22]    , . extra2  = & global_maxolduid[22]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[22]    , . extra2  = & global_maxolduid[22]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_23_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[23]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[23]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[23]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[23] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[23]    , . extra2  = & global_sysctl_nr_open_max[23]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[23]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[23]    , . extra2  = & global_maxolduid[23]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[23]    , . extra2  = & global_maxolduid[23]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_24_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[24]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[24]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[24]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[24] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[24]    , . extra2  = & global_sysctl_nr_open_max[24]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[24]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[24]    , . extra2  = & global_maxolduid[24]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[24]    , . extra2  = & global_maxolduid[24]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_25_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[25]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[25]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[25]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[25] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[25]    , . extra2  = & global_sysctl_nr_open_max[25]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[25]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[25]    , . extra2  = & global_maxolduid[25]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[25]    , . extra2  = & global_maxolduid[25]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_26_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[26]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[26]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[26]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[26] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[26]    , . extra2  = & global_sysctl_nr_open_max[26]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[26]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[26]    , . extra2  = & global_maxolduid[26]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[26]    , . extra2  = & global_maxolduid[26]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_27_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[27]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[27]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[27]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[27] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[27]    , . extra2  = & global_sysctl_nr_open_max[27]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[27]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[27]    , . extra2  = & global_maxolduid[27]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[27]    , . extra2  = & global_maxolduid[27]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_28_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[28]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[28]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[28]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[28] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[28]    , . extra2  = & global_sysctl_nr_open_max[28]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[28]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[28]    , . extra2  = & global_maxolduid[28]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[28]    , . extra2  = & global_maxolduid[28]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_29_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[29]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[29]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[29]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[29] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[29]    , . extra2  = & global_sysctl_nr_open_max[29]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[29]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[29]    , . extra2  = & global_maxolduid[29]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[29]    , . extra2  = & global_maxolduid[29]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_30_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[30]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[30]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[30]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[30] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[30]    , . extra2  = & global_sysctl_nr_open_max[30]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[30]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[30]    , . extra2  = & global_maxolduid[30]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[30]    , . extra2  = & global_maxolduid[30]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_31_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[31]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[31]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[31]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[31] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[31]    , . extra2  = & global_sysctl_nr_open_max[31]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[31]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[31]    , . extra2  = & global_maxolduid[31]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[31]    , . extra2  = & global_maxolduid[31]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_32_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[32]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[32]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[32]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[32] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[32]    , . extra2  = & global_sysctl_nr_open_max[32]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[32]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[32]    , . extra2  = & global_maxolduid[32]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[32]    , . extra2  = & global_maxolduid[32]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_33_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[33]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[33]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[33]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[33] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[33]    , . extra2  = & global_sysctl_nr_open_max[33]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[33]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[33]    , . extra2  = & global_maxolduid[33]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[33]    , . extra2  = & global_maxolduid[33]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_34_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[34]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[34]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[34]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[34] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[34]    , . extra2  = & global_sysctl_nr_open_max[34]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[34]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[34]    , . extra2  = & global_maxolduid[34]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[34]    , . extra2  = & global_maxolduid[34]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_35_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[35]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[35]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[35]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[35] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[35]    , . extra2  = & global_sysctl_nr_open_max[35]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[35]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[35]    , . extra2  = & global_maxolduid[35]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[35]    , . extra2  = & global_maxolduid[35]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_36_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[36]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[36]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[36]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[36] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[36]    , . extra2  = & global_sysctl_nr_open_max[36]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[36]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[36]    , . extra2  = & global_maxolduid[36]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[36]    , . extra2  = & global_maxolduid[36]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_37_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[37]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[37]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[37]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[37] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[37]    , . extra2  = & global_sysctl_nr_open_max[37]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[37]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[37]    , . extra2  = & global_maxolduid[37]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[37]    , . extra2  = & global_maxolduid[37]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_38_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[38]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[38]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[38]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[38] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[38]    , . extra2  = & global_sysctl_nr_open_max[38]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[38]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[38]    , . extra2  = & global_maxolduid[38]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[38]    , . extra2  = & global_maxolduid[38]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_39_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[39]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[39]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[39]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[39] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[39]    , . extra2  = & global_sysctl_nr_open_max[39]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[39]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[39]    , . extra2  = & global_maxolduid[39]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[39]    , . extra2  = & global_maxolduid[39]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_40_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[40]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[40]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[40]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[40] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[40]    , . extra2  = & global_sysctl_nr_open_max[40]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[40]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[40]    , . extra2  = & global_maxolduid[40]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[40]    , . extra2  = & global_maxolduid[40]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_41_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[41]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[41]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[41]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[41] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[41]    , . extra2  = & global_sysctl_nr_open_max[41]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[41]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[41]    , . extra2  = & global_maxolduid[41]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[41]    , . extra2  = & global_maxolduid[41]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_42_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[42]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[42]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[42]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[42] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[42]    , . extra2  = & global_sysctl_nr_open_max[42]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[42]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[42]    , . extra2  = & global_maxolduid[42]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[42]    , . extra2  = & global_maxolduid[42]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_43_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[43]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[43]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[43]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[43] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[43]    , . extra2  = & global_sysctl_nr_open_max[43]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[43]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[43]    , . extra2  = & global_maxolduid[43]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[43]    , . extra2  = & global_maxolduid[43]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_44_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[44]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[44]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[44]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[44] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[44]    , . extra2  = & global_sysctl_nr_open_max[44]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[44]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[44]    , . extra2  = & global_maxolduid[44]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[44]    , . extra2  = & global_maxolduid[44]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_45_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[45]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[45]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[45]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[45] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[45]    , . extra2  = & global_sysctl_nr_open_max[45]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[45]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[45]    , . extra2  = & global_maxolduid[45]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[45]    , . extra2  = & global_maxolduid[45]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_46_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[46]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[46]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[46]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[46] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[46]    , . extra2  = & global_sysctl_nr_open_max[46]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[46]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[46]    , . extra2  = & global_maxolduid[46]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[46]    , . extra2  = & global_maxolduid[46]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_47_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[47]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[47]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[47]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[47] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[47]    , . extra2  = & global_sysctl_nr_open_max[47]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[47]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[47]    , . extra2  = & global_maxolduid[47]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[47]    , . extra2  = & global_maxolduid[47]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_48_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[48]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[48]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[48]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[48] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[48]    , . extra2  = & global_sysctl_nr_open_max[48]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[48]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[48]    , . extra2  = & global_maxolduid[48]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[48]    , . extra2  = & global_maxolduid[48]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static  _GLOBAL_289_T  _GLOBAL_49_fs_table_I [ ]  = { { . ctl_name  = FS_NRINODE  , . procname  = "inode-nr"   , . data  = & global_inodes_stat[49]    , . maxlen  = 2 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }  , { . ctl_name  = FS_STATINODE  , . procname  = "inode-state"   , . data  = & global_inodes_stat[49]    , . maxlen  = 7 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . procname  = "file-nr"  , . data  = & global_files_stat[49]    , . maxlen  = 3 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_nr_files    , }   , { . ctl_name  = FS_MAXFILE  , . procname  = "file-max"   , . data  = & global_files_stat[49] . max_files     , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  , . procname  = "nr_open"   , . data  = & global_sysctl_nr_open[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . extra1  = & global_sysctl_nr_open_min[49]    , . extra2  = & global_sysctl_nr_open_max[49]    , }   , { . ctl_name  = FS_DENTRY  , . procname  = "dentry-state"   , . data  = & global_dentry_stat[49]    , . maxlen  = 6 * sizeof ( int )     , . mode  = 0444   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = FS_OVERFLOWUID  , . procname  = "overflowuid"   , . data  = & global_fs_overflowuid[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[49]    , . extra2  = & global_maxolduid[49]    , }   , { . ctl_name  = FS_OVERFLOWGID  , . procname  = "overflowgid"   , . data  = & global_fs_overflowgid[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_minmax    , . strategy  = & sysctl_intvec    , . extra1  = & global_minolduid[49]    , . extra2  = & global_maxolduid[49]    , }   , { . ctl_name  = FS_LEASES  , . procname  = "leases-enable"   , . data  = & global_leases_enable[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = KERN_SETUID_DUMPABLE  , . procname  = "suid_dumpable"   , . data  = & global_suid_dumpable[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = 0  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_fs_table_I) *_GLOBAL_fs_table_26_A[NUM_STACKS] = { &_GLOBAL_0_fs_table_I, &_GLOBAL_1_fs_table_I, &_GLOBAL_2_fs_table_I, &_GLOBAL_3_fs_table_I, &_GLOBAL_4_fs_table_I, &_GLOBAL_5_fs_table_I, &_GLOBAL_6_fs_table_I, &_GLOBAL_7_fs_table_I, &_GLOBAL_8_fs_table_I, &_GLOBAL_9_fs_table_I, &_GLOBAL_10_fs_table_I, &_GLOBAL_11_fs_table_I, &_GLOBAL_12_fs_table_I, &_GLOBAL_13_fs_table_I, &_GLOBAL_14_fs_table_I, &_GLOBAL_15_fs_table_I, &_GLOBAL_16_fs_table_I, &_GLOBAL_17_fs_table_I, &_GLOBAL_18_fs_table_I, &_GLOBAL_19_fs_table_I, &_GLOBAL_20_fs_table_I, &_GLOBAL_21_fs_table_I, &_GLOBAL_22_fs_table_I, &_GLOBAL_23_fs_table_I, &_GLOBAL_24_fs_table_I, &_GLOBAL_25_fs_table_I, &_GLOBAL_26_fs_table_I, &_GLOBAL_27_fs_table_I, &_GLOBAL_28_fs_table_I, &_GLOBAL_29_fs_table_I, &_GLOBAL_30_fs_table_I, &_GLOBAL_31_fs_table_I, &_GLOBAL_32_fs_table_I, &_GLOBAL_33_fs_table_I, &_GLOBAL_34_fs_table_I, &_GLOBAL_35_fs_table_I, &_GLOBAL_36_fs_table_I, &_GLOBAL_37_fs_table_I, &_GLOBAL_38_fs_table_I, &_GLOBAL_39_fs_table_I, &_GLOBAL_40_fs_table_I, &_GLOBAL_41_fs_table_I, &_GLOBAL_42_fs_table_I, &_GLOBAL_43_fs_table_I, &_GLOBAL_44_fs_table_I, &_GLOBAL_45_fs_table_I, &_GLOBAL_46_fs_table_I, &_GLOBAL_47_fs_table_I, &_GLOBAL_48_fs_table_I, &_GLOBAL_49_fs_table_I, };     
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
# 1281 "linux-2.6.26/kernel/sysctl.c"
 
    
    
    
    
    
    
 
# 1301 "linux-2.6.26/kernel/sysctl.c"
     


typedef  struct ctl_table   _GLOBAL_290_T; static  _GLOBAL_290_T  _GLOBAL_0_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_1_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_2_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_3_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_4_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_5_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_6_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_7_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_8_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_9_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_10_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_11_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_12_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_13_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_14_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_15_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_16_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_17_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_18_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_19_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_20_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_21_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_22_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_23_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_24_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_25_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_26_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_27_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_28_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_29_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_30_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_31_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_32_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_33_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_34_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_35_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_36_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_37_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_38_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_39_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_40_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_41_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_42_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_43_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_44_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_45_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_46_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_47_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_48_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static  _GLOBAL_290_T  _GLOBAL_49_debug_table_I [ ]  = { { . ctl_name  = 0  , . procname  = "exception-trace"   , . data  = & global_show_unhandled_signals[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = proc_dointvec   }  , { . ctl_name  = 0  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_debug_table_I) *_GLOBAL_debug_table_27_A[NUM_STACKS] = { &_GLOBAL_0_debug_table_I, &_GLOBAL_1_debug_table_I, &_GLOBAL_2_debug_table_I, &_GLOBAL_3_debug_table_I, &_GLOBAL_4_debug_table_I, &_GLOBAL_5_debug_table_I, &_GLOBAL_6_debug_table_I, &_GLOBAL_7_debug_table_I, &_GLOBAL_8_debug_table_I, &_GLOBAL_9_debug_table_I, &_GLOBAL_10_debug_table_I, &_GLOBAL_11_debug_table_I, &_GLOBAL_12_debug_table_I, &_GLOBAL_13_debug_table_I, &_GLOBAL_14_debug_table_I, &_GLOBAL_15_debug_table_I, &_GLOBAL_16_debug_table_I, &_GLOBAL_17_debug_table_I, &_GLOBAL_18_debug_table_I, &_GLOBAL_19_debug_table_I, &_GLOBAL_20_debug_table_I, &_GLOBAL_21_debug_table_I, &_GLOBAL_22_debug_table_I, &_GLOBAL_23_debug_table_I, &_GLOBAL_24_debug_table_I, &_GLOBAL_25_debug_table_I, &_GLOBAL_26_debug_table_I, &_GLOBAL_27_debug_table_I, &_GLOBAL_28_debug_table_I, &_GLOBAL_29_debug_table_I, &_GLOBAL_30_debug_table_I, &_GLOBAL_31_debug_table_I, &_GLOBAL_32_debug_table_I, &_GLOBAL_33_debug_table_I, &_GLOBAL_34_debug_table_I, &_GLOBAL_35_debug_table_I, &_GLOBAL_36_debug_table_I, &_GLOBAL_37_debug_table_I, &_GLOBAL_38_debug_table_I, &_GLOBAL_39_debug_table_I, &_GLOBAL_40_debug_table_I, &_GLOBAL_41_debug_table_I, &_GLOBAL_42_debug_table_I, &_GLOBAL_43_debug_table_I, &_GLOBAL_44_debug_table_I, &_GLOBAL_45_debug_table_I, &_GLOBAL_46_debug_table_I, &_GLOBAL_47_debug_table_I, &_GLOBAL_48_debug_table_I, &_GLOBAL_49_debug_table_I, };     

 
    
    
    
    
    
    
 

     


typedef  struct ctl_table   _GLOBAL_291_T; static  _GLOBAL_291_T  _GLOBAL_0_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_1_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_2_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_3_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_4_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_5_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_6_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_7_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_8_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_9_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_10_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_11_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_12_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_13_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_14_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_15_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_16_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_17_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_18_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_19_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_20_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_21_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_22_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_23_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_24_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_25_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_26_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_27_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_28_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_29_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_30_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_31_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_32_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_33_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_34_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_35_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_36_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_37_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_38_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_39_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_40_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_41_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_42_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_43_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_44_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_45_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_46_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_47_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_48_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static  _GLOBAL_291_T  _GLOBAL_49_dev_table_I [ ]  = { { . ctl_name  = 0  }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_dev_table_I) *_GLOBAL_dev_table_28_A[NUM_STACKS] = { &_GLOBAL_0_dev_table_I, &_GLOBAL_1_dev_table_I, &_GLOBAL_2_dev_table_I, &_GLOBAL_3_dev_table_I, &_GLOBAL_4_dev_table_I, &_GLOBAL_5_dev_table_I, &_GLOBAL_6_dev_table_I, &_GLOBAL_7_dev_table_I, &_GLOBAL_8_dev_table_I, &_GLOBAL_9_dev_table_I, &_GLOBAL_10_dev_table_I, &_GLOBAL_11_dev_table_I, &_GLOBAL_12_dev_table_I, &_GLOBAL_13_dev_table_I, &_GLOBAL_14_dev_table_I, &_GLOBAL_15_dev_table_I, &_GLOBAL_16_dev_table_I, &_GLOBAL_17_dev_table_I, &_GLOBAL_18_dev_table_I, &_GLOBAL_19_dev_table_I, &_GLOBAL_20_dev_table_I, &_GLOBAL_21_dev_table_I, &_GLOBAL_22_dev_table_I, &_GLOBAL_23_dev_table_I, &_GLOBAL_24_dev_table_I, &_GLOBAL_25_dev_table_I, &_GLOBAL_26_dev_table_I, &_GLOBAL_27_dev_table_I, &_GLOBAL_28_dev_table_I, &_GLOBAL_29_dev_table_I, &_GLOBAL_30_dev_table_I, &_GLOBAL_31_dev_table_I, &_GLOBAL_32_dev_table_I, &_GLOBAL_33_dev_table_I, &_GLOBAL_34_dev_table_I, &_GLOBAL_35_dev_table_I, &_GLOBAL_36_dev_table_I, &_GLOBAL_37_dev_table_I, &_GLOBAL_38_dev_table_I, &_GLOBAL_39_dev_table_I, &_GLOBAL_40_dev_table_I, &_GLOBAL_41_dev_table_I, &_GLOBAL_42_dev_table_I, &_GLOBAL_43_dev_table_I, &_GLOBAL_44_dev_table_I, &_GLOBAL_45_dev_table_I, &_GLOBAL_46_dev_table_I, &_GLOBAL_47_dev_table_I, &_GLOBAL_48_dev_table_I, &_GLOBAL_49_dev_table_I, };     
     


typedef  spinlock_t  _GLOBAL_292_T; static  _GLOBAL_292_T  global_sysctl_lock[NUM_STACKS] = {  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  ( spinlock_t ) { . raw_lock  = { }   , } ,  };           


static int use_table(struct ctl_table_header *p)
{
 if (__builtin_expect(!!(p->unregistering), 0))
  return 0;
 p->used++;
 return 1;
}


static void unuse_table(struct ctl_table_header *p)
{
 if (!--p->used)
  if (__builtin_expect(!!(p->unregistering), 0))
   complete(p->unregistering);
}


static void start_unregistering(struct ctl_table_header *p)
{




 if (__builtin_expect(!!(p->used), 0)) {
  struct completion wait;
  init_completion(&wait);
  p->unregistering = &wait;
  do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
  wait_for_completion(&wait);
  do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 }




 list_del_init(&p->ctl_entry);
}

void sysctl_head_finish(struct ctl_table_header *head)
{
 if (!head)
  return;
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 unuse_table(head);
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
}

static struct list_head *
lookup_header_list(struct ctl_table_root *root, struct nsproxy *namespaces)
{
 struct list_head *header_list;
 header_list = &root->header_list;
 if (root->lookup)
  header_list = root->lookup(root, namespaces);
 return header_list;
}

struct ctl_table_header *__sysctl_head_next(struct nsproxy *namespaces,
         struct ctl_table_header *prev)
{
 struct ctl_table_root *root;
 struct list_head *header_list;
 struct ctl_table_header *head;
 struct list_head *tmp;

 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 if (prev) {
  head = prev;
  tmp = &prev->ctl_entry;
  unuse_table(prev);
  goto next;
 }
 tmp = &global_root_table_header[get_stack_id()].ctl_entry;
 for (;;) {
  head = ({ const typeof( ((struct ctl_table_header *)0)->ctl_entry ) *__mptr = (tmp); (struct ctl_table_header *)( (char *)__mptr - __builtin_offsetof(struct ctl_table_header,ctl_entry) );});

  if (!use_table(head))
   goto next;
  do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
  return head;
 next:
  root = head->root;
  tmp = tmp->next;
  header_list = lookup_header_list(root, namespaces);
  if (tmp != header_list)
   continue;

  do {
   root = ({ const typeof( ((struct ctl_table_root *)0)->root_list ) *__mptr = (root->root_list.next); (struct ctl_table_root *)( (char *)__mptr - __builtin_offsetof(struct ctl_table_root,root_list) );})
                                      ;
   if (root == &global_sysctl_table_root[get_stack_id()])
    goto out;
   header_list = lookup_header_list(root, namespaces);
  } while (list_empty(header_list));
  tmp = header_list->next;
 }
out:
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 return ((void *)0);
}

struct ctl_table_header *sysctl_head_next(struct ctl_table_header *prev)
{
 return __sysctl_head_next(nsc_get_task()->nsproxy, prev);
}

void register_sysctl_root(struct ctl_table_root *root)
{
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 list_add_tail(&root->root_list, &global_sysctl_table_root[get_stack_id()].root_list);
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
}



static int do_sysctl_strategy(struct ctl_table_root *root,
   struct ctl_table *table,
   int *name, int nlen,
   void *oldval, size_t *oldlenp,
   void *newval, size_t newlen)
{
 int op = 0, rc;

 if (oldval)
  op |= 004;
 if (newval)
  op |= 002;
 if (sysctl_perm(root, table, op))
  return -1;

 if (table->strategy) {
  rc = table->strategy(table, name, nlen, oldval, oldlenp,
         newval, newlen);
  if (rc < 0)
   return rc;
  if (rc > 0)
   return 0;
 }



 if (table->data && table->maxlen) {
  rc = sysctl_data(table, name, nlen, oldval, oldlenp,
     newval, newlen);
  if (rc < 0)
   return rc;
 }
 return 0;
}

static int parse_table(int *name, int nlen,
         void *oldval, size_t *oldlenp,
         void *newval, size_t newlen,
         struct ctl_table_root *root,
         struct ctl_table *table)
{
 int n;
repeat:
 if (!nlen)
  return -20;
 if (({ (n) = *name; 0; }))
  return -14;
 for ( ; table->ctl_name || table->procname; table++) {
  if (!table->ctl_name)
   continue;
  if (n == table->ctl_name) {
   int error;
   if (table->child) {
    if (sysctl_perm(root, table, 001))
     return -1;
    name++;
    nlen--;
    table = table->child;
    goto repeat;
   }
   error = do_sysctl_strategy(root, table, name, nlen,
         oldval, oldlenp,
         newval, newlen);
   return error;
  }
 }
 return -20;
}

int do_sysctl(int *name, int nlen, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen)
{
 struct ctl_table_header *head;
 int error = -20;

 if (nlen <= 0 || nlen >= 10)
  return -20;
 if (oldval) {
  int old_len;
  if (!oldlenp || ({ (old_len) = *oldlenp; 0; }))
   return -14;
 }

 for (head = sysctl_head_next(((void *)0)); head;
   head = sysctl_head_next(head)) {
  error = parse_table(name, nlen, oldval, oldlenp,
     newval, newlen,
     head->root, head->ctl_table);
  if (error != -20) {
   sysctl_head_finish(head);
   break;
  }
 }
 return error;
}

 long sys_sysctl(struct __sysctl_args *args)
{
 struct __sysctl_args tmp;
 int error;

 if (copy_from_user(&tmp, args, sizeof(tmp)))
  return -14;

 error = deprecated_sysctl_warning(&tmp);
 if (error)
  goto out;

 do { } while(0);
 error = do_sysctl(tmp.name, tmp.nlen, tmp.oldval, tmp.oldlenp,
     tmp.newval, tmp.newlen);
 do { } while(0);
out:
 return error;
}







static int test_perm(int mode, int op)
{
 if (!nsc_get_task()->euid)
  mode >>= 6;
 else if (in_egroup_p(0))
  mode >>= 3;
 if ((mode & op & 0007) == op)
  return 0;
 return -13;
}

int sysctl_perm(struct ctl_table_root *root, struct ctl_table *table, int op)
{
 int error;
 int mode;

 error = security_sysctl(table, op);
 if (error)
  return error;

 if (root->permissions)
  mode = root->permissions(root, nsc_get_task()->nsproxy, table);
 else
  mode = table->mode;

 return test_perm(mode, op);
}

static void sysctl_set_parent(struct ctl_table *parent, struct ctl_table *table)
{
 for (; table->ctl_name || table->procname; table++) {
  table->parent = parent;
  if (table->child)
   sysctl_set_parent(table, table->child);
 }
}

static   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) int sysctl_init(void)
{
 sysctl_set_parent(((void *)0), (*_GLOBAL_root_table_23_A[get_stack_id()]));






 return 0;
}

typedef  initcall_t  _GLOBAL_293_T; static  _GLOBAL_293_T  __initcall_sysctl_init1 __attribute__((__used__)) __attribute__((__section__(".initcall" "1" ".init")))  = sysctl_init ;       
# 1684 "linux-2.6.26/kernel/sysctl.c"
struct ctl_table_header *__register_sysctl_paths(
 struct ctl_table_root *root,
 struct nsproxy *namespaces,
 const struct ctl_path *path, struct ctl_table *table)
{
 struct list_head *header_list;
 struct ctl_table_header *header;
 struct ctl_table *new, **prevp;
 unsigned int n, npath;


 for (npath = 0; path[npath].ctl_name || path[npath].procname; ++npath)
  ;
# 1706 "linux-2.6.26/kernel/sysctl.c"
 header = kzalloc(sizeof(struct ctl_table_header) +
    (2 * npath * sizeof(struct ctl_table)), ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
 if (!header)
  return ((void *)0);

 new = (struct ctl_table *) (header + 1);


 prevp = &header->ctl_table;
 for (n = 0; n < npath; ++n, ++path) {

  new->procname = path->procname;
  new->ctl_name = path->ctl_name;
  new->mode = 0555;

  *prevp = new;
  prevp = &new->child;

  new += 2;
 }
 *prevp = table;
 header->ctl_table_arg = table;

 INIT_LIST_HEAD(&header->ctl_entry);
 header->used = 0;
 header->unregistering = ((void *)0);
 header->root = root;
 sysctl_set_parent(((void *)0), header->ctl_table);






 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 header_list = lookup_header_list(root, namespaces);
 list_add_tail(&header->ctl_entry, header_list);
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);

 return header;
}
# 1758 "linux-2.6.26/kernel/sysctl.c"
struct ctl_table_header *register_sysctl_paths(const struct ctl_path *path,
      struct ctl_table *table)
{
 return __register_sysctl_paths(&global_sysctl_table_root[get_stack_id()], nsc_get_task()->nsproxy,
     path, table);
}
# 1774 "linux-2.6.26/kernel/sysctl.c"
struct ctl_table_header *register_sysctl_table(struct ctl_table *table)
{
 typedef  const struct ctl_path    _GLOBAL_294_T; static  _GLOBAL_294_T  _GLOBAL_0_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_1_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_2_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_3_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_4_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_5_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_6_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_7_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_8_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_9_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_10_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_11_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_12_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_13_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_14_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_15_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_16_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_17_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_18_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_19_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_20_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_21_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_22_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_23_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_24_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_25_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_26_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_27_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_28_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_29_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_30_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_31_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_32_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_33_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_34_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_35_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_36_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_37_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_38_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_39_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_40_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_41_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_42_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_43_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_44_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_45_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_46_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_47_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_48_null_path_I [ ]  = { { }  }  ; static  _GLOBAL_294_T  _GLOBAL_49_null_path_I [ ]  = { { }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_null_path_I) *_GLOBAL_null_path_29_A[NUM_STACKS] = { &_GLOBAL_0_null_path_I, &_GLOBAL_1_null_path_I, &_GLOBAL_2_null_path_I, &_GLOBAL_3_null_path_I, &_GLOBAL_4_null_path_I, &_GLOBAL_5_null_path_I, &_GLOBAL_6_null_path_I, &_GLOBAL_7_null_path_I, &_GLOBAL_8_null_path_I, &_GLOBAL_9_null_path_I, &_GLOBAL_10_null_path_I, &_GLOBAL_11_null_path_I, &_GLOBAL_12_null_path_I, &_GLOBAL_13_null_path_I, &_GLOBAL_14_null_path_I, &_GLOBAL_15_null_path_I, &_GLOBAL_16_null_path_I, &_GLOBAL_17_null_path_I, &_GLOBAL_18_null_path_I, &_GLOBAL_19_null_path_I, &_GLOBAL_20_null_path_I, &_GLOBAL_21_null_path_I, &_GLOBAL_22_null_path_I, &_GLOBAL_23_null_path_I, &_GLOBAL_24_null_path_I, &_GLOBAL_25_null_path_I, &_GLOBAL_26_null_path_I, &_GLOBAL_27_null_path_I, &_GLOBAL_28_null_path_I, &_GLOBAL_29_null_path_I, &_GLOBAL_30_null_path_I, &_GLOBAL_31_null_path_I, &_GLOBAL_32_null_path_I, &_GLOBAL_33_null_path_I, &_GLOBAL_34_null_path_I, &_GLOBAL_35_null_path_I, &_GLOBAL_36_null_path_I, &_GLOBAL_37_null_path_I, &_GLOBAL_38_null_path_I, &_GLOBAL_39_null_path_I, &_GLOBAL_40_null_path_I, &_GLOBAL_41_null_path_I, &_GLOBAL_42_null_path_I, &_GLOBAL_43_null_path_I, &_GLOBAL_44_null_path_I, &_GLOBAL_45_null_path_I, &_GLOBAL_46_null_path_I, &_GLOBAL_47_null_path_I, &_GLOBAL_48_null_path_I, &_GLOBAL_49_null_path_I, };        

 return register_sysctl_paths((*_GLOBAL_null_path_29_A[get_stack_id()]), table);
}
# 1788 "linux-2.6.26/kernel/sysctl.c"
void unregister_sysctl_table(struct ctl_table_header * header)
{
 do { do { } while (0); } while (0);

 if (header == ((void *)0))
  return;

 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 start_unregistering(header);
 do { do { } while (0); (void)0; (void)(&global_sysctl_lock[get_stack_id()]); } while (0);
 kfree(header);
}
# 2499 "linux-2.6.26/kernel/sysctl.c"
int proc_dostring(struct ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos)
{
 return -38;
}

int proc_dointvec(struct ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos)
{
 return -38;
}

int proc_dointvec_minmax(struct ctl_table *table, int write, struct file *filp,
      void *buffer, size_t *lenp, loff_t *ppos)
{
 return -38;
}

int proc_dointvec_jiffies(struct ctl_table *table, int write, struct file *filp,
      void *buffer, size_t *lenp, loff_t *ppos)
{
 return -38;
}

int proc_dointvec_userhz_jiffies(struct ctl_table *table, int write, struct file *filp,
      void *buffer, size_t *lenp, loff_t *ppos)
{
 return -38;
}

int proc_dointvec_ms_jiffies(struct ctl_table *table, int write, struct file *filp,
        void *buffer, size_t *lenp, loff_t *ppos)
{
 return -38;
}

int proc_doulongvec_minmax(struct ctl_table *table, int write, struct file *filp,
      void *buffer, size_t *lenp, loff_t *ppos)
{
 return -38;
}

int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int write,
          struct file *filp,
          void *buffer,
          size_t *lenp, loff_t *ppos)
{
    return -38;
}
# 2559 "linux-2.6.26/kernel/sysctl.c"
int sysctl_data(struct ctl_table *table, int *name, int nlen,
  void *oldval, size_t *oldlenp,
  void *newval, size_t newlen)
{
 size_t len;


 if (!table->data || !table->maxlen)
  return -20;

 if (oldval && oldlenp) {
  if (({ (len) = *oldlenp; 0; }))
   return -14;
  if (len) {
   if (len > table->maxlen)
    len = table->maxlen;
   if (copy_to_user(oldval, table->data, len))
    return -14;
   if (({ *(oldlenp) = len; 0;}))
    return -14;
  }
 }

 if (newval && newlen) {
  if (newlen > table->maxlen)
   newlen = table->maxlen;

  if (copy_from_user(table->data, newval, newlen))
   return -14;
 }
 return 1;
}


int sysctl_string(struct ctl_table *table, int *name, int nlen,
    void *oldval, size_t *oldlenp,
    void *newval, size_t newlen)
{
 if (!table->data || !table->maxlen)
  return -20;

 if (oldval && oldlenp) {
  size_t bufsize;
  if (({ (bufsize) = *oldlenp; 0; }))
   return -14;
  if (bufsize) {
   size_t len = strlen(table->data), copied;


   if (len > table->maxlen)
    len = table->maxlen;


   copied = (len >= bufsize) ? bufsize - 1 : len;

   if (copy_to_user(oldval, table->data, copied) ||
       ({ *((char *)(oldval + copied)) = 0; 0;}))
    return -14;
   if (({ *(oldlenp) = len; 0;}))
    return -14;
  }
 }
 if (newval && newlen) {
  size_t len = newlen;
  if (len > table->maxlen)
   len = table->maxlen;
  if(copy_from_user(table->data, newval, len))
   return -14;
  if (len == table->maxlen)
   len--;
  ((char *) table->data)[len] = 0;
 }
 return 1;
}






int sysctl_intvec(struct ctl_table *table, int *name, int nlen,
  void *oldval, size_t *oldlenp,
  void *newval, size_t newlen)
{

 if (newval && newlen) {
  int *vec = (int *) newval;
  int *min = (int *) table->extra1;
  int *max = (int *) table->extra2;
  size_t length;
  int i;

  if (newlen % sizeof(int) != 0)
   return -22;

  if (!table->extra1 && !table->extra2)
   return 0;

  if (newlen > table->maxlen)
   newlen = table->maxlen;
  length = newlen / sizeof(int);

  for (i = 0; i < length; i++) {
   int value;
   if (({ (value) = *vec + i; 0; }))
    return -14;
   if (min && value < min[i])
    return -22;
   if (max && value > max[i])
    return -22;
  }
 }
 return 0;
}


int sysctl_jiffies(struct ctl_table *table, int *name, int nlen,
  void *oldval, size_t *oldlenp,
  void *newval, size_t newlen)
{
 if (oldval && oldlenp) {
  size_t olen;

  if (({ (olen) = *oldlenp; 0; }))
   return -14;
  if (olen) {
   int val;

   if (olen < sizeof(int))
    return -22;

   val = *(int *)(table->data) / 1000;
   if (({ *((int *)oldval) = val; 0;}))
    return -14;
   if (({ *(oldlenp) = sizeof(int); 0;}))
    return -14;
  }
 }
 if (newval && newlen) {
  int new;
  if (newlen != sizeof(int))
   return -22;
  if (({ (new) = *(int *)newval; 0; }))
   return -14;
  *(int *)(table->data) = new*1000;
 }
 return 1;
}


int sysctl_ms_jiffies(struct ctl_table *table, int *name, int nlen,
  void *oldval, size_t *oldlenp,
  void *newval, size_t newlen)
{
 if (oldval && oldlenp) {
  size_t olen;

  if (({ (olen) = *oldlenp; 0; }))
   return -14;
  if (olen) {
   int val;

   if (olen < sizeof(int))
    return -22;

   val = jiffies_to_msecs(*(int *)(table->data));
   if (({ *((int *)oldval) = val; 0;}))
    return -14;
   if (({ *(oldlenp) = sizeof(int); 0;}))
    return -14;
  }
 }
 if (newval && newlen) {
  int new;
  if (newlen != sizeof(int))
   return -22;
  if (({ (new) = *(int *)newval; 0; }))
   return -14;
  *(int *)(table->data) = msecs_to_jiffies(new);
 }
 return 1;
}
# 2801 "linux-2.6.26/kernel/sysctl.c"
static int deprecated_sysctl_warning(struct __sysctl_args *args)
{
 typedef  int  _GLOBAL_295_T; static  _GLOBAL_295_T  global_msg_count[NUM_STACKS];   
 int name[10];
 int i;


 if (args->nlen < 0 || args->nlen > 10)
  return -20;


 for (i = 0; i < args->nlen; i++)
  if (({ (name[i]) = *args->name + i; 0; }))
   return -14;


 if ((args->nlen == 2) && (name[0] == CTL_KERN) && (name[1] == KERN_VERSION))
  return 0;

 if (global_msg_count[get_stack_id()] < 5) {
  global_msg_count[get_stack_id()]++;
  printk("<6>"
   "warning: process `%s' used the deprecated sysctl "
   "system call with ", nsc_get_task()->comm);
  for (i = 0; i < args->nlen; i++)
   printk("%d.", name[i]);
  printk("\n");
 }
 return 0;
}





;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
