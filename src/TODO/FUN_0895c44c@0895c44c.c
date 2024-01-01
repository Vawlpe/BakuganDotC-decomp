#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895c44c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_V7C;
  
  if (*(char *)(param_1 + 0x4f84) != '\0') {
    fVar6 = *(float *)(param_1 + 0x4f88) + 0.06666667;
    *(float *)(param_1 + 0x4f88) = fVar6;
    uVar7 = vmul_s(fVar6 * 3.141593,in_V7C);
    fVar6 = (float)vcos_s(uVar7);
    *(float *)(param_1 + 0x4f8c) = 1.0 - (1.0 - fVar6) * 0.5;
    iVar1 = FUN_0880d354();
    uVar2 = (uint)*(ushort *)(param_1 + 0x5170);
    iVar3 = (int)*(char *)(param_1 + 0x4cda);
    iVar4 = uVar2 + iVar3;
    if (iVar1 == 0) {
      if ((int)uVar2 < iVar4) {
        iVar1 = uVar2 << 2;
        uVar5 = uVar2;
        do {
          if ((int)(uVar5 - uVar2) < iVar3) {
            iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
            if ((int)*(char *)(param_1 + 0x4cdb) < (int)(uVar5 - uVar2)) {
              *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc) =
                   *(undefined4 *)(param_1 + 0x4f8c);
              uVar2 = (uint)*(ushort *)(param_1 + 0x5170);
              iVar3 = (int)*(char *)(param_1 + 0x4cda);
              iVar4 = uVar2 + iVar3;
            }
            else {
              *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
              uVar2 = (uint)*(ushort *)(param_1 + 0x5170);
              iVar3 = (int)*(char *)(param_1 + 0x4cda);
              iVar4 = uVar2 + iVar3;
            }
          }
          uVar5 = uVar5 + 1;
          iVar1 = iVar1 + 4;
        } while ((int)uVar5 < iVar4);
      }
      uVar2 = (uint)*(ushort *)(param_1 + 0x5174);
      iVar1 = uVar2 + iVar3;
      if ((int)uVar2 < iVar1) {
        iVar4 = uVar2 << 2;
        uVar5 = uVar2;
        do {
          if ((int)(uVar5 - uVar2) < iVar3) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
            if ((int)(uVar5 - uVar2) < (int)*(char *)(param_1 + 0x4cdc)) {
              *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) =
                   *(undefined4 *)(param_1 + 0x4f8c);
              iVar3 = (int)*(char *)(param_1 + 0x4cda);
              uVar2 = (uint)*(ushort *)(param_1 + 0x5174);
              iVar1 = uVar2 + iVar3;
            }
            else {
              *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
              iVar3 = (int)*(char *)(param_1 + 0x4cda);
              uVar2 = (uint)*(ushort *)(param_1 + 0x5174);
              iVar1 = uVar2 + iVar3;
            }
          }
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 4;
        } while ((int)uVar5 < iVar1);
      }
    }
    else {
      iVar1 = uVar2 << 2;
      if ((int)uVar2 < iVar4) {
        do {
          uVar2 = uVar2 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc) =
               *(undefined4 *)(param_1 + 0x4f8c);
          iVar3 = (int)*(char *)(param_1 + 0x4cda);
          iVar1 = iVar1 + 4;
        } while ((int)uVar2 < (int)((uint)*(ushort *)(param_1 + 0x5170) + iVar3));
      }
      uVar2 = (uint)*(ushort *)(param_1 + 0x5174);
      iVar1 = uVar2 << 2;
      if ((int)uVar2 < (int)(uVar2 + iVar3)) {
        do {
          uVar2 = uVar2 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc) =
               *(undefined4 *)(param_1 + 0x4f8c);
          iVar1 = iVar1 + 4;
        } while ((int)uVar2 <
                 (int)((uint)*(ushort *)(param_1 + 0x5174) + (int)*(char *)(param_1 + 0x4cda)));
      }
    }
  }
  return;
}

