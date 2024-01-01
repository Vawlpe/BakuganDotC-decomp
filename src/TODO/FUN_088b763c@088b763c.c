#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_088b763c(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((param_1 != 0) && (iVar2 = _DONE_NotZero_DAT_08AAC9E0(), iVar2 != 0)) {
    switch(((int)*(char *)(param_1 + 0xb) & 0xfcU) >> 2) {
    case 1:
    case 6:
    case 9:
    case 0xb:
      return false;
    case 2:
    case 3:
    case 4:
    case 7:
    case 8:
    case 10:
      cVar1 = *(char *)(param_1 + 10);
      break;
    case 5:
      return true;
    case 0xc:
      return *(int *)(DAT_08ac58c4 + 0x20) == 2;
    default:
      cVar1 = *(char *)(param_1 + 10);
    }
    if ((((int)cVar1 & 0xc0U) == 0x80) && (*(int *)(DAT_08ac58c4 + 0x20) == 2)) {
      return false;
    }
    bVar3 = true;
    if (((int)*(char *)(param_1 + 0xb) & 1U) != 0) {
      if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
        return false;
      }
      bVar3 = true;
    }
  }
  return bVar3;
}

