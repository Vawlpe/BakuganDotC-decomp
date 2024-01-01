#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Switch with 1 destination removed at 0x0880e3a4 : 13 cases all go to same destination

void FUN_0880e338(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  
  strcpy(param_1,PTR_s_BAKUGAN2_PORTABLE_08aacaf8);
  strcpy(param_2 + 0x80,PTR_s_Language_Setting_08aacafc);
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  uVar2 = FUN_0880dba8(uVar1);
  puVar3 = PTR_s_DEFAULT_08aacb38;
  if (uVar2 < 0xd) {
    puVar3 = (&PTR_DAT_08aacb04)[uVar2];
  }
  strcpy(param_2 + 0x100,puVar3);
  return;
}

