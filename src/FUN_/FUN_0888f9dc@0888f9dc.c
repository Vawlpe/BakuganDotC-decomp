#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0888f9dc(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 == 0x10 || param_2 == 0xb) && (0 < *(int *)(param_1 + 0x948))) {
    return false;
  }
  if (*(int *)(param_1 + 0x96c) == 0) {
    if (param_2 < 0xc) {
      if (9 < param_2) {
        return false;
      }
    }
    else if (param_2 == 0x10) {
      return false;
    }
  }
  switch(param_2) {
  case 2:
  case 4:
  case 6:
  case 8:
  case 0x18:
    iVar3 = *(int *)(param_1 + 0x1a0);
    if ((*(uint *)(iVar3 + 0x144) & 0x1000000) == 0) {
      bVar2 = false;
      if ((*(uint *)(param_1 + 0x918) & 4) == 0) {
        bVar2 = false;
      }
      else {
        iVar4 = -1;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + 8);
        }
        bVar1 = 0x14 < iVar4 && iVar4 < 0x21;
        if ((0x14 < iVar4 && iVar4 < 0x21) && (*(int *)(*(int *)(param_1 + 0x1a0) + 8) == 0x20)) {
          bVar1 = false;
        }
        if (!bVar1) {
          switch(*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x140)) {
          case 0:
          case 1:
          case 2:
          case 0xc:
          case 0xd:
            bVar2 = true;
            break;
          case 0x13:
            bVar2 = true;
          }
        }
      }
      if (!bVar2) {
        return false;
      }
    }
    return true;
  default:
    return true;
  case 9:
    bVar2 = false;
    if ((*(uint *)(param_1 + 0x918) & 0x200) != 0) {
      switch(*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x140)) {
      case 0:
      case 1:
      case 0xc:
      case 0xd:
        bVar2 = true;
        break;
      case 0x13:
        bVar2 = true;
      }
    }
    return bVar2;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
    return *(char *)(param_1 + 0xa1c) == '\0';
  case 0xe:
    return *(char *)(param_1 + 0xa1c) == '\0';
  case 0x11:
    iVar3 = *(int *)(param_1 + 0x1a0);
    bVar2 = false;
    if ((*(uint *)(iVar3 + 0x144) & 0x400000) == 0) {
      bVar1 = false;
      if ((*(int *)(iVar3 + 0x140) == 8) || (*(int *)(iVar3 + 0x140) == 10)) {
        bVar1 = true;
      }
      if (((!bVar1) && ((*(uint *)(iVar3 + 0x16c) & 0xc00) == 0)) &&
         ((*(uint *)(iVar3 + 0x144) & 0x100) == 0)) {
        bVar2 = true;
      }
    }
    return bVar2;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    bVar2 = false;
    if ((*(int *)(param_1 + 0x1a0) != 0) &&
       (iVar3 = FUN_08889378(*(int *)(param_1 + 0x1a0) + 0x434,param_2 + -0x12), iVar3 != 0)) {
      bVar2 = true;
    }
    if (!bVar2) {
      return false;
    }
    iVar3 = FUN_08889378(*(int *)(param_1 + 0x1a0) + 0x434,1);
    if (iVar3 != 0) {
      return *(char *)(param_1 + 0xa1c) == '\0';
    }
    return true;
  case 0x1a:
    break;
  }
  iVar3 = FUN_0888f4d8(param_1);
  if (iVar3 != 0) {
    return false;
  }
  iVar3 = *(int *)(param_1 + 0x1a0);
  if ((*(uint *)(iVar3 + 0x144) & 0x1000000) == 0) {
    bVar2 = false;
    if ((*(uint *)(param_1 + 0x918) & 4) == 0) {
      bVar2 = false;
    }
    else {
      iVar4 = -1;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
      }
      bVar1 = 0x14 < iVar4 && iVar4 < 0x21;
      if ((0x14 < iVar4 && iVar4 < 0x21) && (*(int *)(*(int *)(param_1 + 0x1a0) + 8) == 0x20)) {
        bVar1 = false;
      }
      if (!bVar1) {
        switch(*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x140)) {
        case 0:
        case 1:
        case 2:
        case 0xc:
        case 0xd:
          bVar2 = true;
          break;
        case 0x13:
          bVar2 = true;
        }
      }
    }
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

