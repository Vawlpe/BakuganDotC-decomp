#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08888444(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 1.5;
  bVar1 = false;
  if (*(char *)param_1[0x22] == '\0') {
    fVar6 = 2.25;
  }
  if (param_2 < 0xc) {
    iVar3 = (int)(param_2 * 4) >> 2;
    switch(param_2) {
    case 0:
      iVar2 = *(int *)(*param_1 + 0x14);
      iVar2 = (**(code **)(iVar2 + 0x54))(*param_1 + (int)*(short *)(iVar2 + 0x50));
      if (iVar2 == 0) {
        fVar6 = (float)FUN_08888058(param_1,iVar3);
        fVar5 = (float)FUN_08887d20(fVar6,param_1);
        FUN_08887d3c(fVar5 + fVar6,param_1);
      }
      else {
        iVar2 = FUN_088602ec(*param_1,1);
        if (iVar2 == 0) {
          fVar6 = (float)FUN_08888058(param_1,iVar3);
          fVar5 = (float)FUN_08887d20(fVar6,param_1);
          FUN_08887d3c(fVar5 + fVar6,param_1);
        }
      }
      break;
    case 1:
      fVar5 = (float)FUN_08888058(param_1,iVar3);
      FUN_08887d7c(fVar5 * fVar6,param_1);
      bVar1 = true;
      break;
    case 2:
      uVar4 = FUN_08888058(param_1,iVar3);
      FUN_08887d7c(uVar4,param_1);
      bVar1 = true;
      break;
    case 3:
      fVar5 = (float)FUN_08888058(param_1,iVar3);
      FUN_08887d7c(fVar5 * fVar6,param_1);
      bVar1 = true;
      break;
    case 4:
      fVar6 = (float)FUN_08888058(param_1,iVar3);
      fVar5 = (float)FUN_08887d20(fVar6,param_1);
      FUN_08887d3c(fVar5 + fVar6,param_1);
      break;
    case 5:
      uVar4 = FUN_08888058(param_1,iVar3);
      FUN_08887d7c(uVar4,param_1);
      bVar1 = true;
      break;
    case 6:
      fVar5 = (float)FUN_08888058(param_1,iVar3);
      FUN_08887d7c(fVar5 * fVar6,param_1);
      bVar1 = true;
      break;
    case 7:
      fVar5 = (float)FUN_08888058(param_1,iVar3);
      FUN_08887d7c(fVar5 * fVar6,param_1);
      bVar1 = true;
      break;
    case 8:
      uVar4 = FUN_08888058(param_1,iVar3);
      FUN_08887d7c(uVar4,param_1);
      param_1[0x29] = 0x41200000;
      break;
    case 9:
      uVar4 = FUN_08888058(param_1,iVar3);
      FUN_08887d7c(uVar4,param_1);
      param_1[0x29] = 0x41200000;
      break;
    case 10:
      fVar5 = (float)FUN_08888058(param_1,iVar3);
      FUN_08887d7c(fVar5 * fVar6,param_1);
      param_1[0x29] = 0x41700000;
      break;
    case 0xb:
      fVar6 = (float)FUN_08888058(param_1,iVar3);
      fVar5 = (float)FUN_08887d20(fVar6,param_1);
      FUN_08887d3c(fVar5 + fVar6,param_1);
    }
  }
  if (bVar1) {
    iVar3 = FUN_08888170(param_1);
    if (iVar3 == 0) {
      iVar3 = 0x40400000;
    }
    else {
      iVar3 = 0x41200000;
    }
    param_1[0x29] = iVar3;
  }
  return;
}

