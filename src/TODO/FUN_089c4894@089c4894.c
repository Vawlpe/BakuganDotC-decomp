#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089c4894(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089bb5dc(iVar2,"COSoundDecOut",1);
    iVar3 = iVar2;
  }
  *param_1 = iVar3;
  *(undefined *)(param_1 + 1) = 0;
  param_1[3] = param_2;
  param_1[2] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar3 = _DONE_Get_DAT_08AC5874();
  puVar4 = (undefined *)FUN_089d79a4(*(int *)(iVar3 + 4) * 2,1);
  param_1[7] = (int)puVar4;
  iVar3 = _DONE_Get_DAT_08AC5874();
  memset_jak(puVar4,0,*(int *)(iVar3 + 4) * 2);
  puVar4 = (undefined *)FUN_089d79a4(0x2000,1);
  param_1[10] = (int)puVar4;
  memset_jak(puVar4,0,0x2000);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  param_1[0xe] = -1;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  *(undefined *)((int)param_1 + 6) = 0;
  param_1[4] = -1;
  param_1[0x10] = 0x3f800000;
  FUN_089c4c9c(param_1);
  memset_jak((undefined *)(param_1 + 0x15),0,0x80);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined *)(param_1 + 0x37) = 0;
  *(undefined *)((int)param_1 + 0xdd) = 0;
  *(undefined *)(param_1 + 0x39) = 0;
  *(undefined *)((int)param_1 + 0xe5) = 0;
  param_1[0x3a] = -1;
  return param_1;
}

