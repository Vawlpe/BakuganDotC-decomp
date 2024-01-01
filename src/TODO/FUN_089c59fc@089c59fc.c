#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Switch with 1 destination removed at 0x089c5a38 : 16 cases all go to same destination

void FUN_089c59fc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  strcpy(param_1,"sound/");
  if (param_2 - 0x43U < 0x10) {
    iVar3 = 1;
    iVar1 = _DONE_NotZero_DAT_08AAC9E0();
    if (iVar1 != 0) {
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      iVar3 = FUN_0880dba8(uVar2);
    }
    strcat(param_1,(&PTR_DAT_08ac5838)[iVar3]);
    strcat(param_1,&DAT_08aa1a30);
  }
  strcat(param_1,(&PTR_s_seGRP_SYS_COM_pac_08ac56e8)[param_2]);
  return;
}

