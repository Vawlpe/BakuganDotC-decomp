#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08838428(undefined4 param_1,undefined4 param_2,char param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    return -1;
  }
  iVar3 = -1;
  uVar2 = FUN_08837ca0();
  bVar1 = *(int *)(DAT_08ac58c4 + 4) != 1;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    if (uVar2 != 5) {
      uVar4 = vrndi_s();
      iVar3 = uVar2 * 3 + 0x1a9 + ((uVar4 >> 0x10) * 3 >> 0x10);
      if (iVar3 == 0x1a9) {
        uVar2 = vrndi_s();
        iVar3 = ((uVar2 >> 0x10) * 2 >> 0x10) + 0x1aa;
      }
    }
    break;
  case 3:
  case 4:
    uVar4 = vrndi_s();
    iVar3 = uVar2 * 5 + 0x1da + ((uVar4 >> 0x10) * 5 >> 0x10);
    if (iVar3 == 0x1dc) {
      iVar3 = 0x387;
    }
    else if (iVar3 == 0x1df) {
      iVar3 = 0x388;
    }
    break;
  case 5:
    if (param_3 == '\0') {
      if (!bVar1) {
        return -1;
      }
      return uVar2 * 2 + 0x251;
    }
    if ((int)uVar2 < 2) {
      if (0 < (int)uVar2) {
        return -1;
      }
    }
    else if ((int)uVar2 < 4) {
      if ((int)uVar2 < 3) {
code_r0x088385d4:
        return uVar2 * 2 + 0x217;
      }
    }
    else if ((int)uVar2 < 6) goto code_r0x088385d4;
    iVar3 = uVar2 * 2 + 0x218;
    break;
  case 6:
    if (param_3 == '\0') {
      if (!bVar1) {
        return -1;
      }
      return uVar2 * 2 + 0x252;
    }
    if ((int)uVar2 < 6) {
      if ((int)uVar2 < 3) {
        if ((int)uVar2 < 2) goto LAB_08838634;
      }
      else if ((int)uVar2 < 4) goto LAB_08838634;
      iVar3 = uVar2 * 2 + 0x218;
    }
    else {
LAB_08838634:
      iVar3 = uVar2 * 2 + 0x217;
    }
    break;
  case 7:
    iVar3 = uVar2 * 3 + 0x230;
    break;
  case 8:
    iVar3 = uVar2 * 3 + 0x231;
    break;
  case 9:
    iVar3 = uVar2 + 0x24b;
    break;
  case 10:
    if (bVar1) {
      iVar3 = uVar2 * 2 + 0x25d;
    }
    break;
  case 0xb:
    if (bVar1) {
      iVar3 = uVar2 * 2 + 0x25e;
    }
    break;
  case 0xc:
    iVar3 = uVar2 * 2 + 0x269;
    break;
  case 0xd:
    iVar3 = uVar2 * 2 + 0x26a;
    break;
  case 0xe:
  case 0xf:
    if (uVar2 < 6) {
      if (uVar2 == 1) {
        iVar3 = 0x27c;
      }
      else if (uVar2 == 2) {
        iVar3 = 0x27d;
      }
      else if (uVar2 == 3) {
        iVar3 = 0x27e;
      }
      else if (uVar2 == 4) {
        iVar3 = 0x389;
      }
      else if (uVar2 == 5) {
        iVar3 = 0x27f;
      }
      else {
        iVar3 = 0x27b;
      }
    }
    break;
  case 0x10:
  case 0x11:
  case 0x12:
    iVar3 = uVar2 + 0x275;
    break;
  case 0x13:
    iVar3 = uVar2 * 2 + 0x280;
    break;
  case 0x14:
    if (uVar2 != 2) {
      iVar3 = uVar2 * 2 + 0x281;
    }
    break;
  case 0x15:
    iVar3 = uVar2 + 0x32c;
  }
  return iVar3;
}

