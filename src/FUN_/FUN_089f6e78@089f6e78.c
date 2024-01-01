#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f6e78(int param_1,undefined4 param_2,int *param_3,undefined param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined uVar8;
  undefined auStack_160 [31];
  undefined local_141;
  
  memset_jak(param_1 + 0x38,0,0x20);
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(int *)(param_1 + 0x54) = param_1;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined *)(param_1 + 0xad) = 1;
  *(int *)(param_1 + 0xb0) = param_1 + 0xb4;
  memset_jak(param_1 + 0x60,0,0x40);
  *(undefined2 *)(param_1 + 0x60) = 1;
  *(int *)(param_1 + 0x68) = param_1;
  if (*param_3 == 0x324d4954) {
    *(int **)(param_1 + 0xa0) = param_3 + 4;
    if (*(char *)((int)param_3 + 5) != '\0') {
      *(int **)(param_1 + 0xa0) = param_3 + 0x20;
    }
    strcpy(auStack_160,param_2);
    puVar1 = (undefined *)strrchr(auStack_160,0x2e);
    if (puVar1 != (undefined *)0x0) {
      *puVar1 = 0;
    }
    uVar2 = strlen(auStack_160);
    if (0x1f < uVar2) {
      local_141 = 0;
      strcpy(param_1 + 0x18,auStack_160);
      *(undefined4 *)(param_1 + 0x118) = 0;
      goto LAB_089f6f84;
    }
    strcpy(param_1 + 0x18,auStack_160);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
LAB_089f6f84:
  *(undefined4 *)(param_1 + 0x114) = 0;
  uVar3 = FUN_089f70c4(param_1);
  iVar4 = FUN_089f7194(param_1,uVar3);
  uVar3 = FUN_089f70d0(param_1);
  iVar5 = FUN_089f7194(param_1,uVar3);
  uVar3 = FUN_089f70fc(param_1);
  *(undefined4 *)(param_1 + 300) = uVar3;
  iVar6 = FUN_089f70dc(param_1);
  iVar7 = *(int *)(param_1 + 300);
  if (iVar6 == 4) {
    iVar6 = (int)(iVar7 + ((uint)(iVar7 >> 4) >> 0x1c)) >> 4;
  }
  else {
    iVar6 = (int)(iVar7 + ((uint)(iVar7 >> 8) >> 0x18)) >> 8;
  }
  *(int *)(param_1 + 300) = iVar6;
  if (1 < iVar6) {
    FUN_089f7b24(param_1,param_4);
  }
  FUN_089f7ce8(param_1,iVar4,iVar5);
  uVar8 = 0;
  iVar6 = FUN_089f70c4(param_1);
  if ((iVar4 == iVar6) && (iVar6 = FUN_089f70d0(param_1), iVar5 == iVar6)) {
    uVar8 = 1;
  }
  *(undefined *)(param_1 + 0xac) = uVar8;
  *(int **)(param_1 + 0x124) = param_3;
  *(undefined *)(param_1 + 0x128) = 0;
  *(float *)(param_1 + 0xa4) = 1.0 / (float)iVar4;
  *(float *)(param_1 + 0xa8) = 1.0 / (float)iVar5;
  iVar4 = param_1;
  if (DAT_08ac6168 != 0) {
    FUN_089d882c(param_1,DAT_08ac6168);
    iVar4 = DAT_08ac6168;
  }
  DAT_08ac6168 = iVar4;
  return;
}

