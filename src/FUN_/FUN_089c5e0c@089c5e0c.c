#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c5e0c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined auStack_120 [256];
  
  puVar4 = (&PTR_s_seGRP_SYS_COM_pac_08ac56e8)[param_2];
  iVar5 = 0;
  FUN_089c59fc(auStack_120,param_2);
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if ((*(int *)(iVar2 + 0x5d0) != 0) &&
       (iVar1 = strcmp(*(int *)(iVar2 + 0x5d0),auStack_120), iVar1 == 0)) {
      iVar5 = 1;
      break;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x430;
  } while (iVar3 < 0x20);
  iVar3 = 0;
  iVar2 = param_1;
  if (iVar5 == 0) {
    do {
      if (*(int *)(iVar2 + 0x5d0) == 0) {
        FUN_089c75f8(param_1,iVar3,puVar4);
        *(int *)(iVar2 + 0x9fc) = param_2;
        iVar5 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x430;
    } while (iVar3 < 0x20);
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  return iVar5;
}

