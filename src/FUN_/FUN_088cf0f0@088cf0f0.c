#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cf0f0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_088be274();
  if (iVar3 != -0x658) {
    iVar3 = FUN_088be274();
    iVar3 = *(int *)(iVar3 + 0x658);
    *(int *)(param_1 + 0xd4) = iVar3;
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0xd4);
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      if (iVar3 != 0) {
        sVar2 = *(short *)(iVar3 + 0x142);
        do {
          if (sVar2 == 0xbd9) {
            *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 2;
            *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 2;
LAB_088cf280:
            iVar3 = *(int *)(iVar3 + 4);
          }
          else {
            if (sVar2 == 0xbc7) {
              *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
              *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
              goto LAB_088cf280;
            }
            if (sVar2 == 0x1778) {
              *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
              *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
              goto LAB_088cf280;
            }
            if (sVar2 == 0xbdf) {
              *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
              *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
              goto LAB_088cf280;
            }
            if (sVar2 == 0xbdc) {
              if (*(char *)(iVar3 + 0x1e0) == '\0') {
                bVar1 = *(byte *)(*(int *)(iVar3 + 0x170) + 0x2c);
                if (bVar1 < 6) {
                  iVar4 = *(int *)(param_1 + 0xcc);
                  if (bVar1 == 1) {
                    *(int *)(param_1 + 0xcc) = iVar4 + 1;
                  }
                  else if (bVar1 == 2) {
                    *(int *)(param_1 + 0xcc) = iVar4 + 1;
                  }
                  else if (bVar1 == 3) {
                    *(int *)(param_1 + 0xcc) = iVar4 + 3;
                  }
                  else if (bVar1 == 4) {
                    *(int *)(param_1 + 0xcc) = iVar4 + 3;
                  }
                  else if (bVar1 == 5) {
                    *(int *)(param_1 + 0xcc) = iVar4 + 3;
                  }
                  else {
                    *(int *)(param_1 + 0xcc) = iVar4 + 1;
                  }
                }
                goto LAB_088cf280;
              }
              iVar3 = *(int *)(iVar3 + 4);
            }
            else {
              iVar3 = *(int *)(iVar3 + 4);
            }
          }
          if (iVar3 == 0) {
            return;
          }
          sVar2 = *(short *)(iVar3 + 0x142);
        } while( true );
      }
    }
  }
  return;
}

