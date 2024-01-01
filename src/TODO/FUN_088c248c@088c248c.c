#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c248c(undefined4 param_1,undefined4 *param_2,undefined2 *param_3)

{
  int iVar1;
  
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined2 *)0x0)) {
    switch(*(undefined4 *)(DAT_08ac58c4 + 4)) {
    case 0:
      *param_2 = 0;
      *param_3 = 0;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 1:
      *param_2 = 1;
      *param_3 = 1;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 2:
    case 3:
    case 6:
    case 7:
    case 10:
    case 0xb:
    case 0xd:
    case 0xf:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    default:
      *param_2 = 0xffffffff;
      *param_3 = 0;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 4:
      *param_2 = 2;
      *param_3 = 3;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 5:
      *param_2 = 3;
      *param_3 = 4;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 8:
      *param_2 = 4;
      *param_3 = 3;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 9:
      *param_2 = 5;
      *param_3 = 3;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 0xc:
      *param_2 = 6;
      *param_3 = 9;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 0xe:
      *param_2 = 7;
      *param_3 = 1;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 0x10:
      *param_2 = 8;
      *param_3 = 0xc;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 0x11:
      *param_2 = 9;
      *param_3 = 0xd;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 0x14:
      *param_2 = 10;
      *param_3 = 0xf;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
      break;
    case 0x20:
      *param_2 = 0;
      *param_3 = 0;
      iVar1 = *(int *)(DAT_08ac58c4 + 4);
    }
    if (iVar1 == 0x20) {
      *param_2 = 0;
      *param_3 = 0;
      if ((DAT_08b00bdc >> 2 & 1) != 0) {
        *param_2 = 1;
        *param_3 = 1;
      }
      if ((DAT_08b00bdc >> 3 & 1) != 0) {
        *param_2 = 2;
        *param_3 = 3;
      }
      if ((DAT_08b00bdc >> 6 & 1) != 0) {
        *param_2 = 3;
        *param_3 = 4;
      }
      if ((DAT_08b00bdc >> 7 & 1) != 0) {
        *param_2 = 3;
        *param_3 = 5;
      }
      if ((DAT_08b00bdc >> 8 & 1) != 0) {
        *param_2 = 8;
        *param_3 = 0xc;
      }
      if ((DAT_08b00bdc >> 0x12 & 1) != 0) {
        *param_2 = 9;
        *param_3 = 0xd;
      }
      if ((DAT_08b00bdc >> 0x13 & 1) != 0) {
        *param_2 = 1;
        *param_3 = 2;
      }
      if ((DAT_08b00bdc >> 4 & 1) != 0) {
        *param_2 = 9;
        *param_3 = 0xe;
      }
      if ((DAT_08b00bdc >> 0x14 & 1) != 0) {
        *param_2 = 6;
        *param_3 = 9;
      }
      if ((DAT_08b00bdc >> 0xe & 1) != 0) {
        *param_2 = 7;
        *param_3 = 10;
      }
      if ((DAT_08b00bdc >> 0xf & 1) != 0) {
        *param_2 = 7;
        *param_3 = 0xb;
      }
      if ((DAT_08b00bdc >> 0x10 & 1) != 0) {
        *param_2 = 4;
        *param_3 = 6;
      }
      if ((DAT_08b00bdc >> 10 & 1) != 0) {
        *param_2 = 5;
        *param_3 = 7;
      }
      if ((DAT_08b00bdc >> 0xb & 1) != 0) {
        *param_2 = 5;
        *param_3 = 8;
      }
      if ((DAT_08b00bdc >> 0xc & 1) != 0) {
        *param_2 = 10;
        *param_3 = 0xf;
      }
    }
  }
  return;
}

