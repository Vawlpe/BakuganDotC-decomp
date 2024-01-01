#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d92d8(undefined4 param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((*param_2 & 0x8000) == 0) {
    puVar7 = (undefined4 *)((int)param_2 + (uint)param_2[1]);
  }
  else {
    puVar7 = (undefined4 *)(param_2 + 4);
  }
  puVar2 = (ushort *)FUN_08a1999c(param_1,0xc,puVar7[3] & 0xfff);
  puVar6 = (undefined4 *)(puVar2 + 4);
  if ((*puVar2 & 0x8000) == 0) {
    puVar6 = (undefined4 *)((int)puVar2 + (uint)puVar2[1]);
    puVar5 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 6));
    iVar4 = *(int *)(puVar2 + 4) - *(int *)(puVar2 + 6);
  }
  else {
    puVar5 = puVar2 + 4;
    iVar4 = 0;
  }
  uVar3 = (**(code **)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x3c))
                    (DAT_08ac5bd0 + *(short *)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x38),iVar4);
  memcpy_jak(uVar3,puVar5,iVar4);
  uVar1 = FUN_089d9418(puVar7[1],*puVar6);
  *(undefined4 *)(param_3 + 4) = uVar3;
  *(ushort *)(param_3 + 2) = *(ushort *)(param_3 + 2) | uVar1;
  *(short *)(param_3 + 8) = (short)*puVar6;
  *(short *)(param_3 + 10) = (short)puVar6[2];
  *(char *)(param_3 + 0xc) = (char)puVar6[1];
  *(char *)(param_3 + 0xd) = (char)puVar7[1];
  *(ushort *)(param_3 + 0xe) = (ushort)*puVar7 & 0xfff;
  return;
}

