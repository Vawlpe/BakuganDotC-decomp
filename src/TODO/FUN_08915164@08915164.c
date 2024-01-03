#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08915164(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_08913084(*(undefined4 *)(param_1 + 0x16a8),*(undefined4 *)(param_1 + 0x1698));
  sVar1 = *(short *)(&DAT_08a9bbcc + iVar2 * 4);
  *(int *)(param_1 + 0x16ac) = *(int *)(param_1 + 0x16ac) - (int)sVar1 / 10;
  piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
  iVar5 = *(int *)(*piVar3 + 0x464) - (int)sVar1 / 10;
  iVar2 = 9999999;
  if ((iVar5 < 10000000) && (iVar2 = iVar5, iVar5 < 0)) {
    iVar2 = 0;
  }
  *(int *)(*piVar3 + 0x464) = iVar2;
  piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
  FUN_08914254(*(undefined4 *)(iVar2 + 0x60),*(undefined4 *)(iVar2 + 100),param_1,
               *(undefined4 *)(*piVar3 + 0x464),0x17,0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x78);
  FUN_08914254(*(undefined4 *)(iVar2 + 0x60),*(undefined4 *)(iVar2 + 100),param_1,
               *(undefined4 *)(param_1 + 0x16ac),0x1e,1);
  piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
  iVar6 = *(int *)(*piVar3 + 0x464);
  uVar4 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar4,0x2d);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
  FUN_08914254(*(undefined4 *)(iVar5 + 0x60),*(undefined4 *)(iVar5 + 100),param_1,iVar6 - iVar2,0x25
               ,0);
  uVar4 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar4,0x2d);
  if (iVar2 < *(int *)(param_1 + 0x16ac)) {
    return 0;
  }
  return 1;
}

