#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08975544(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x508);
  cVar1 = *(char *)(param_1 + *(char *)(param_1 + 0x503) + 0x500);
  if (fVar5 < 1.0) {
    fVar5 = fVar5 + 0.1;
    *(float *)(param_1 + 0x508) = fVar5;
  }
  fVar5 = fVar5 * 0.2 + 1.0;
  if (1.2 < fVar5) {
    fVar5 = 1.2;
  }
  FUN_089a51fc(fVar5,fVar5,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + cVar1 * 4 + 0x34));
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + *(char *)(param_1 + 0x503) + 0x500) * 4
            + 0x34) + 0x68) = 0xc3fa0000;
  iVar4 = (int)*(char *)(param_1 + 0x503);
  iVar2 = (int)*(char *)(param_1 + iVar4 + 0x500);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x1c) + iVar2 * 4;
    if (iVar2 < 3) {
      FUN_089a51fc(fVar5,fVar5,0,*(undefined4 *)(iVar4 + 0xc));
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) +
                 (*(char *)(param_1 + 0x503) * 5 +
                 (int)*(char *)(param_1 + *(char *)(param_1 + 0x503) + 0x500)) * 4 + 0xc) + 0x68) =
           0xc3fa8000;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30);
    }
    else {
      FUN_089a51fc(fVar5,fVar5,0,*(undefined4 *)(iVar4 + 0x1c));
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) +
                 (*(char *)(param_1 + 0x503) * 5 +
                 (int)*(char *)(param_1 + *(char *)(param_1 + 0x503) + 0x500)) * 4 + 0x1c) + 0x68) =
           0xc3fa8000;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30);
    }
  }
  else {
    FUN_089a51fc(fVar5,fVar5,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (iVar4 * 3 + iVar2) * 4 + 0xc));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
               *(char *)(param_1 + 0x503) * 0xc +
               *(char *)(param_1 + *(char *)(param_1 + 0x503) + 0x500) * 4 + 0xc) + 0x68) =
         0xc3fa8000;
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30);
  }
  FUN_089a51fc(fVar5,fVar5,0,uVar3);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0x68) = 0xc3fb0000;
  return;
}

