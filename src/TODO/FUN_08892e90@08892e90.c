#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08892e90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_08b00870;
  if (DAT_08b00870 != 0) {
    do {
      iVar1 = FUN_0888c0c8(*(undefined4 *)(iVar2 + 0xb8));
      if (iVar1 == 0) {
        iVar2 = *(int *)(iVar2 + 4);
      }
      else if (*(int *)(iVar2 + 0x110) == 0) {
        if (*(int *)(iVar2 + 0xb0) == 0) {
          iVar2 = *(int *)(iVar2 + 4);
        }
        else {
          if (*(int *)(*(int *)(iVar2 + 0xb0) + 0x15c) == *(int *)(*(int *)(param_1 + 0x1a0) + 0xc))
          {
            return iVar2;
          }
          iVar2 = *(int *)(iVar2 + 4);
        }
      }
      else {
        iVar2 = *(int *)(iVar2 + 4);
      }
    } while (iVar2 != 0);
  }
  return iVar2;
}

