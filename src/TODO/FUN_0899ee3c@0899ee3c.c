#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899ee3c(int param_1,int param_2,undefined2 *param_3)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    return;
  }
  if (3 < param_2) {
    return;
  }
  iVar9 = param_1 + param_2 * 0x10;
  if (*(int *)(param_1 + 0x2370) != 0) {
    if (param_2 != 0) {
      uVar7 = *param_3;
      goto LAB_0899ef60;
    }
    cVar1 = *(char *)param_3;
    if (*(char *)(iVar9 + 0x2338) == cVar1) {
      cVar1 = *(char *)(iVar9 + 0x2339);
    }
    else {
      if (cVar1 < '\x01') {
        uVar6 = 0xffffffff;
        if (-1 < cVar1) {
          uVar6 = 100;
        }
      }
      else if (cVar1 < '\x02') {
        uVar6 = 200;
      }
      else {
        uVar6 = 0xffffffff;
        if (cVar1 < '\x03') {
          uVar6 = 300;
        }
      }
      uVar5 = DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar5,0x19,uVar6);
      cVar1 = *(char *)(iVar9 + 0x2339);
    }
    cVar2 = *(char *)((int)param_3 + 1);
    if ((int)cVar1 == (int)cVar2) {
      cVar1 = *(char *)(iVar9 + 0x233a);
    }
    else {
      uVar6 = DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar6,0x1a,(int)cVar2);
      cVar1 = *(char *)(iVar9 + 0x233a);
    }
    iVar8 = (int)*(char *)(param_3 + 1);
    if (cVar1 != iVar8) {
      if (iVar8 == 5) {
        iVar8 = 2;
      }
      else if (iVar8 == 3) {
        iVar8 = 1;
      }
      else if (iVar8 == 1) {
        iVar8 = 0;
      }
      uVar6 = DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar6,0x1b,iVar8);
    }
  }
  uVar7 = *param_3;
LAB_0899ef60:
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  *(undefined2 *)(iVar9 + 0x2338) = uVar7;
  uVar7 = param_3[3];
  *(undefined2 *)(iVar9 + 0x233a) = uVar3;
  *(undefined2 *)(iVar9 + 0x233c) = uVar4;
  *(undefined2 *)(iVar9 + 0x233e) = uVar7;
  return;
}

