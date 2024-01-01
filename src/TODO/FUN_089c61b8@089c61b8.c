#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c61b8(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = (&PTR_s_seGRP_SYS_COM_pac_08ac56e8)[param_2];
  if (param_3 != '\0') {
    FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  }
  iVar3 = 0;
  iVar2 = param_1;
  iVar5 = -1;
  do {
    iVar6 = iVar5;
    if ((*(int *)(iVar2 + 0x5d0) != 0) &&
       (iVar1 = strcmp(*(int *)(iVar2 + 0x5d0),puVar4), iVar6 = iVar3, iVar1 != 0)) {
      iVar6 = iVar5;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x430;
    iVar5 = iVar6;
  } while (iVar3 < 0x20);
  if (param_3 != '\0') {
    FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  }
  return iVar6;
}

