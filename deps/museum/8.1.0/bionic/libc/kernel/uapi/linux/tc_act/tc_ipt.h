/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_TC_IPT_H
#define __LINUX_TC_IPT_H
#define _LINUX_TC_IPT_H
#define _LINUX_TC_IPT_H_
#define _UAPI_LINUX_TC_IPT_H
#define _UAPI_LINUX_TC_IPT_H_
#define NDK_ANDROID_SUPPORT__LINUX_TC_IPT_H
#define NDK_ANDROID_SUPPORT__LINUX_TC_IPT_H_
#define NDK_ANDROID_SUPPORT_UAPI__LINUX_TC_IPT_H
#define NDK_ANDROID_SUPPORT_UAPI__LINUX_TC_IPT_H_
#define _UAPI__LINUX_TC_IPT_H
#define _UAPI__LINUX_TC_IPT_H_
#define __LINUX_TC_IPT_H_
#include <museum/8.1.0/bionic/libc/linux/pkt_cls.h>
#define TCA_ACT_IPT 6
#define TCA_ACT_XT 10
enum {
  TCA_IPT_UNSPEC,
  TCA_IPT_TABLE,
  TCA_IPT_HOOK,
  TCA_IPT_INDEX,
  TCA_IPT_CNT,
  TCA_IPT_TM,
  TCA_IPT_TARG,
  TCA_IPT_PAD,
  __TCA_IPT_MAX
};
#define TCA_IPT_MAX (__TCA_IPT_MAX - 1)
#endif
