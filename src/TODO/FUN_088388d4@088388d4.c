#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088388d4(int param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  float fVar7;
  
  if (*(short *)(param_1 + 0xb1e) != -1) {
    iVar6 = param_1 + param_3 * 2;
    sVar1 = *(short *)(iVar6 + 0xae8);
    if (sVar1 < 2) {
      if (-1 < sVar1) {
        bVar2 = *(int *)(param_2 + 0x140) == 4;
        if (sVar1 < 1) {
          if (bVar2) {
            *(short *)(iVar6 + 0xae8) = sVar1 + 1;
          }
        }
        else {
          uVar5 = 0;
          if (!bVar2) {
            fVar7 = (float)FUN_08887cdc(param_2 + 0x434);
            if (fVar7 < 0.6) {
              uVar5 = 10;
            }
            *(undefined2 *)(iVar6 + 0xae8) = uVar5;
          }
        }
      }
    }
    else if (sVar1 == 10) {
      iVar3 = FUN_08837ca0(param_1);
      if (iVar3 == -1) {
        *(undefined2 *)(iVar6 + 0xae8) = 9999;
      }
      else {
        do {
          iVar4 = FUN_08838428(param_1,param_3,0);
        } while (*(short *)(param_1 + 0xb1e) == iVar4);
        *(short *)(iVar6 + 0xb1e) = (short)iVar4;
        if (*(short *)(iVar6 + 0xb1e) == -1) {
          *(undefined2 *)(iVar6 + 0xae8) = 9999;
        }
        else {
          iVar3 = FUN_0882cce0(param_1,iVar3,(int)*(short *)(iVar6 + 0xb1e),0xffffffff,0);
          if (iVar3 != 0) {
            *(short *)(iVar6 + 0xae8) = *(short *)(iVar6 + 0xae8) + 1;
          }
        }
      }
    }
  }
  return;
}

