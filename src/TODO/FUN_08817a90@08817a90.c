#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08817a90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < 4) {
    iVar1 = FUN_08817988(param_1,(&PTR_PTR_s_wd_font12_08ab0158)[param_2]);
  }
  if (iVar1 != 0) {
    if (param_2 < 2) {
      if (-1 < param_2) {
        if (param_2 < 1) {
          *(undefined4 *)(param_1 + 0xa0) = 0x41600000;
          *(undefined4 *)(param_1 + 0xa4) = 0x41600000;
          *(undefined4 *)(param_1 + 0x94) = 0x41400000;
          *(undefined4 *)(param_1 + 0x98) = 0x41500000;
          *(undefined4 *)(param_1 + 0x9c) = 0x40000000;
          *(undefined **)(param_1 + 0xd8) = &DAT_08aaf770;
          *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_1 + 0xa0) = 0x41800000;
          *(undefined4 *)(param_1 + 0xa4) = 0x41800000;
          *(undefined4 *)(param_1 + 0x94) = 0x41800000;
          *(undefined4 *)(param_1 + 0x98) = 0x41800000;
          *(undefined4 *)(param_1 + 0x9c) = 0x40400000;
          *(undefined **)(param_1 + 0xd8) = &DAT_08aae718;
          *(undefined4 *)(param_1 + 0xdc) = 0x3f2aaaab;
        }
      }
    }
    else if (param_2 < 3) {
      *(undefined4 *)(param_1 + 0xa0) = 0x41c00000;
      *(undefined4 *)(param_1 + 0xa4) = 0x41c00000;
      *(undefined4 *)(param_1 + 0x94) = 0x41c00000;
      *(undefined4 *)(param_1 + 0x98) = 0x41c00000;
      *(undefined4 *)(param_1 + 0x9c) = 0x40400000;
      *(undefined **)(param_1 + 0xd8) = &DAT_08aae718;
      *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    }
    else if (param_2 < 4) {
      *(undefined4 *)(param_1 + 0xa0) = 0x41c00000;
      *(undefined4 *)(param_1 + 0xa4) = 0x41c00000;
      *(undefined4 *)(param_1 + 0x94) = 0x41c00000;
      *(undefined4 *)(param_1 + 0x98) = 0x41c00000;
      *(undefined4 *)(param_1 + 0x9c) = 0x40400000;
      *(undefined **)(param_1 + 0xd8) = &DAT_08aaef44;
      *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    }
  }
  return;
}

