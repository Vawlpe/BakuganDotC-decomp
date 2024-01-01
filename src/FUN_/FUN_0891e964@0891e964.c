#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891e964(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x227c) != '\0') {
    if ((uint)*(byte *)(param_1 + 0x227e) == (int)*(char *)(param_1 + 0x76)) {
      bVar1 = *(byte *)(param_1 + 0x227d);
    }
    else {
      *(char *)(param_1 + 0x227e) = *(char *)(param_1 + 0x76);
      *(undefined *)(param_1 + 0x227f) = 0;
      *(undefined *)(param_1 + 0x2280) = 0;
      *(undefined *)(param_1 + 0x2281) = 0;
      *(undefined2 *)(param_1 + 0x2282) = 0;
      *(undefined *)(param_1 + 0x227d) = 0;
      bVar1 = *(byte *)(param_1 + 0x227d);
    }
    if (bVar1 == 0) {
      iVar2 = 0x51;
      iVar3 = 0x144;
      do {
        iVar2 = iVar2 + 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        iVar3 = iVar3 + 4;
      } while (iVar2 < 0x55);
      iVar3 = *(char *)(param_1 + 0x76) + 1;
      bVar1 = *(byte *)(param_1 + 0x227f);
      if (iVar3 < (int)(uint)*(byte *)(param_1 + 0x224d)) {
        *(byte *)(param_1 + 0x227f) = bVar1 | 1;
        bVar1 = *(byte *)(param_1 + 0x227f);
      }
      if (1 < iVar3) {
        *(byte *)(param_1 + 0x227f) = bVar1 | 2;
        bVar1 = *(byte *)(param_1 + 0x227f);
      }
      iVar3 = 0x51;
      if (bVar1 != 0) {
        iVar2 = 0x144;
        do {
          uVar5 = iVar3 - 0x51;
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
          if ((uVar5 & 1) == 0) {
            if ((*(byte *)(param_1 + 0x227f) & 1) != 0) {
              *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
              iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
            }
          }
          else if ((*(byte *)(param_1 + 0x227f) & 2) != 0) {
            *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
            iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
          }
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar4 + 100) = *(undefined4 *)(param_1 + (uVar5 & 0xff) * 4 + 0x2284);
          iVar2 = iVar2 + 4;
        } while (iVar3 < 0x55);
        *(undefined *)(param_1 + 0x227d) = 1;
        return;
      }
      *(undefined *)(param_1 + 0x227d) = 2;
      return;
    }
    iVar3 = 0x51;
    if (bVar1 < 2) {
      iVar2 = 0x144;
      do {
        *(short *)(param_1 + 0x2282) = *(short *)(param_1 + 0x2282) + 1;
        if ((uint)*(ushort *)(param_1 + 0x2282) % 0xc == 0) {
          if (*(char *)(param_1 + 0x2280) == '\0') {
            *(char *)(param_1 + 0x2281) = *(char *)(param_1 + 0x2281) + '\x01';
            if (3 < *(byte *)(param_1 + 0x2281)) {
              *(undefined *)(param_1 + 0x2280) = 1;
            }
          }
          else {
            *(char *)(param_1 + 0x2281) = *(char *)(param_1 + 0x2281) + -1;
            if (*(char *)(param_1 + 0x2281) == '\0') {
              *(undefined *)(param_1 + 0x2280) = 0;
            }
          }
        }
        uVar5 = iVar3 - 0x51U & 0xff;
        if ((iVar3 - 0x51U & 1) == 0) {
          if ((*(byte *)(param_1 + 0x227f) & 1) != 0) {
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 100) =
                 *(float *)(param_1 + uVar5 * 4 + 0x2284) - (float)(uint)*(byte *)(param_1 + 0x2281)
            ;
          }
        }
        else if ((*(byte *)(param_1 + 0x227f) & 2) != 0) {
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 100) =
               *(float *)(param_1 + uVar5 * 4 + 0x2284) + (float)(uint)*(byte *)(param_1 + 0x2281);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < 0x55);
    }
  }
  return;
}

