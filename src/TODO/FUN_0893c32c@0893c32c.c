#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893c32c(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  if (param_2 == '\0') {
    iVar5 = 2;
    iVar4 = 8;
    iVar3 = param_1 + 0x50;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
      FUN_089a51fc(0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
      iVar1 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar3 + 0x90) = 0;
      piVar2 = (int *)(iVar1 + iVar4);
      *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(*piVar2 + 0xbc);
      *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(*piVar2 + 0x90);
      if (iVar5 < 3) {
        if (1 < iVar5) {
          *(short *)(iVar3 + 0x88) = (short)(int)*(float *)(*piVar2 + 0x60);
          *(float *)(*piVar2 + 0x60) = *(float *)(*piVar2 + 0x60) + 200.0;
          *(short *)(iVar3 + 0x8a) =
               (short)(int)*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x60);
          fVar6 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar3 + 0x88),
                                      (float)(int)*(short *)(iVar3 + 0x8a));
          *(short *)(iVar3 + 0x8c) = (short)(int)fVar6;
        }
      }
      else if (iVar5 == 4) {
        *(short *)(iVar3 + 0x88) = (short)(int)*(float *)(*piVar2 + 0x60);
        *(float *)(*piVar2 + 0x60) = *(float *)(*piVar2 + 0x60) - 200.0;
        *(short *)(iVar3 + 0x8a) =
             (short)(int)*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x60);
        fVar6 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar3 + 0x88),
                                    (float)(int)*(short *)(iVar3 + 0x8a));
        *(short *)(iVar3 + 0x8c) = (short)(int)fVar6;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 5);
  }
  else {
    iVar5 = 2;
    iVar4 = 8;
    iVar3 = param_1 + 0x50;
    do {
      iVar1 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar3 + 0x90) = 0;
      piVar2 = (int *)(iVar1 + iVar4);
      *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(*piVar2 + 0xbc);
      *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(*piVar2 + 0x90);
      if (iVar5 < 3) {
        if (1 < iVar5) {
          *(short *)(iVar3 + 0x88) = (short)(int)(*(float *)(*piVar2 + 0x60) + 200.0);
          *(short *)(iVar3 + 0x8a) = (short)(int)*(float *)(*piVar2 + 0x60);
          fVar6 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar3 + 0x88),
                                      (float)(int)*(short *)(iVar3 + 0x8a));
          *(short *)(iVar3 + 0x8c) = (short)(int)fVar6;
        }
      }
      else if (iVar5 == 4) {
        *(short *)(iVar3 + 0x88) = (short)(int)(*(float *)(*piVar2 + 0x60) - 200.0);
        *(short *)(iVar3 + 0x8a) = (short)(int)*(float *)(*piVar2 + 0x60);
        fVar6 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar3 + 0x88),
                                    (float)(int)*(short *)(iVar3 + 0x8a));
        *(short *)(iVar3 + 0x8c) = (short)(int)fVar6;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 5);
  }
  return;
}

