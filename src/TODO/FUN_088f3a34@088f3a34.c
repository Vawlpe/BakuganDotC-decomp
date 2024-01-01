#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f3a34(undefined4 *param_1,int param_2,char param_3)

{
  int iVar1;
  
  if (param_2 < 1) {
    if (-1 < param_2) {
      param_1[6] = param_1[3];
      param_1[7] = param_1[4];
      param_1[8] = param_1[5];
      *param_1 = param_1[3];
      param_1[1] = param_1[4];
      param_1[2] = param_1[5];
    }
  }
  else if (param_2 < 2) {
    *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)((int)param_1 + 0x52);
    *(undefined2 *)((int)param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x15);
    *(undefined2 *)(param_1 + 0x17) = *(undefined2 *)((int)param_1 + 0x56);
    *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)((int)param_1 + 0x52);
    *(undefined2 *)((int)param_1 + 0x4e) = *(undefined2 *)(param_1 + 0x15);
    *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)((int)param_1 + 0x56);
  }
  if (param_3 != '\0') {
    iVar1 = param_1[0xc];
    if (iVar1 != 0) {
      if (param_2 < 2) {
        if (-1 < param_2) {
          if (0 < param_2) {
            FUN_088ea620(iVar1,param_1 + 0x13);
            return;
          }
LAB_088f3b24:
          FUN_088ea594(iVar1,param_1);
          return;
        }
      }
      else if (param_2 < 3) {
        FUN_088ea75c(iVar1,param_1[0xd]);
      }
      else if (param_2 < 4) goto LAB_088f3b24;
    }
  }
  return;
}

