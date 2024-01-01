#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ae1dc(int param_1,char param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  if (param_2 == '\0') {
    iVar7 = 1;
    iVar6 = 4;
    iVar5 = param_1 + 0x28;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      switch(iVar7) {
      case 3:
      case 6:
      case 9:
      case 0xc:
      case 0xf:
      case 0x12:
      case 0x15:
      case 0x18:
        *(undefined4 *)(iVar2 + 0xb0) = 0;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0xbc) = 0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      }
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x20;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x90) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x94) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x9c) = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                   *(undefined4 *)(iVar2 + 0x9c),iVar2,0);
      piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(short *)(iVar5 + 0x92) = (short)(int)*(float *)(*piVar3 + 0x60);
      iVar2 = *piVar3;
      if (iVar7 < 0xd) {
        pfVar4 = (float *)(iVar2 + 0x60);
        *pfVar4 = *pfVar4 - 16.0;
        sVar1 = *(short *)(iVar5 + 0x92);
        piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
        iVar2 = *piVar3;
      }
      else {
        pfVar4 = (float *)(iVar2 + 0x60);
        *pfVar4 = *pfVar4 + 16.0;
        FUN_089f4c84(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
        sVar1 = *(short *)(iVar5 + 0x92);
        piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
        iVar2 = *piVar3;
      }
      *(short *)(iVar5 + 0x8c) = (short)(int)*(float *)(iVar2 + 0x60);
      fVar8 = (float)FUN_089a4b3c(*(undefined4 *)(*piVar3 + 0x60),(float)(int)sVar1);
      iVar2 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar5 + 0x94) = 0;
      piVar3 = (int *)(iVar2 + iVar6);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      *(short *)(iVar5 + 0x90) = (short)(int)fVar8;
      iVar2 = *piVar3;
      *(undefined4 *)(iVar5 + 0x98) = 0;
      *(undefined4 *)(iVar2 + 0xbc) = 0;
      iVar5 = iVar5 + 0x28;
    } while (iVar7 < 0x19);
  }
  else {
    iVar7 = 1;
    iVar6 = 4;
    iVar5 = param_1 + 0x28;
    do {
      piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(short *)(iVar5 + 0x92) = (short)(int)(*(float *)(*piVar3 + 0x60) + 32.0);
      *(short *)(iVar5 + 0x8c) = (short)(int)*(float *)(*piVar3 + 0x60);
      fVar8 = (float)FUN_089a4b3c(*(undefined4 *)(*piVar3 + 0x60),
                                  (float)(int)*(short *)(iVar5 + 0x92));
      *(undefined4 *)(iVar5 + 0x94) = 0;
      *(undefined4 *)(iVar5 + 0x98) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x9c) = 0x3f800000;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      *(short *)(iVar5 + 0x90) = (short)(int)fVar8;
      iVar5 = iVar5 + 0x28;
    } while (iVar7 < 0x19);
  }
  return;
}

