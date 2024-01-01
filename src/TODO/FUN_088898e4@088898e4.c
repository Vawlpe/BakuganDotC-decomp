#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088898e4(int *param_1,int param_2,int param_3,int param_4,undefined param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x54))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x50));
    if (iVar1 == 0) {
      iVar1 = *(int *)(*param_1 + 0x14);
      iVar1 = (**(code **)(iVar1 + 100))(*param_1 + (int)*(short *)(iVar1 + 0x60));
      if (iVar1 == 0) {
        iVar1 = *(int *)(*param_1 + 0x14);
        iVar1 = (**(code **)(iVar1 + 0x5c))(*param_1 + (int)*(short *)(iVar1 + 0x58));
        if (iVar1 != 0) {
          iVar1 = *(int *)(*param_1 + 0x14);
          param_7 = (**(code **)(iVar1 + 0xa4))(*param_1 + (int)*(short *)(iVar1 + 0xa0));
          param_6 = 1;
        }
        goto LAB_088899d0;
      }
      pcVar2 = (char *)param_1[0x22];
    }
    else {
      pcVar2 = (char *)param_1[0x22];
    }
    if (pcVar2 != (char *)0x0) {
      param_7 = (int)*pcVar2;
    }
    param_6 = 0;
  }
LAB_088899d0:
  if (param_3 < 2) {
    if (0 < param_3) {
      param_5 = param_4 == 0x86;
      fVar4 = (float)FUN_088879d8(param_2,param_3,param_4,param_6,param_7);
      fVar3 = (float)FUN_088889d8(param_1);
      fVar4 = fVar4 * fVar3;
      iVar1 = *(int *)(*param_1 + 0x14);
      iVar1 = (**(code **)(iVar1 + 0x54))(*param_1 + (int)*(short *)(iVar1 + 0x50));
      if (iVar1 != 0) {
        fVar4 = (float)FUN_088894fc(fVar4,param_1,param_4,0);
      }
      if ((param_2 != 0) &&
         (iVar1 = (**(code **)(*(int *)(param_2 + 0x14) + 0x54))
                            (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x50)), iVar1 != 0)) {
        fVar4 = (float)FUN_0888942c(fVar4,param_2 + 0x434,param_4,0);
      }
      if (param_4 < 0x88) {
        if (param_4 < 0x53) {
          if (param_4 == 0x48) {
            iVar1 = *param_1;
          }
          else {
            iVar1 = *param_1;
LAB_08889b38:
            iVar1 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x54))
                              (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x50));
            if ((iVar1 != 0) ||
               (iVar1 = *(int *)(*param_1 + 0x14),
               iVar1 = (**(code **)(iVar1 + 100))(*param_1 + (int)*(short *)(iVar1 + 0x60)),
               iVar1 != 0)) {
              FUN_08863220(param_2,param_4);
              goto LAB_08889b88;
            }
            iVar1 = *param_1;
          }
        }
        else if (param_4 < 0x54) {
LAB_08889b88:
          iVar1 = *param_1;
        }
        else {
          if (param_4 < 0x86) {
            iVar1 = *param_1;
            goto LAB_08889b38;
          }
          iVar1 = *param_1;
        }
      }
      else if (param_4 < 0xb3) {
        if (param_4 != 0x93) {
          iVar1 = *param_1;
          goto LAB_08889b38;
        }
        iVar1 = *param_1;
      }
      else {
        if (param_4 < 0xb5) {
          param_5 = true;
          goto LAB_08889b88;
        }
        if (0xb7 < param_4) {
          iVar1 = *param_1;
          goto LAB_08889b38;
        }
        iVar1 = *param_1;
      }
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x54))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x50));
      if (iVar1 == 0) {
        iVar1 = *(int *)(*param_1 + 0x14);
        iVar1 = (**(code **)(iVar1 + 100))(*param_1 + (int)*(short *)(iVar1 + 0x60));
        if (iVar1 == 0) goto LAB_08889cd4;
        fVar3 = *(float *)(param_2 + 0x650);
      }
      else {
        fVar3 = *(float *)(param_2 + 0x650);
      }
      fVar4 = fVar4 * fVar3;
      goto LAB_08889cd4;
    }
  }
  else if (param_3 < 4) {
    fVar4 = (float)FUN_088879d8(param_2,param_3,param_4,param_6,param_7);
    fVar3 = (float)FUN_088889d8(param_1);
    fVar4 = fVar4 * fVar3;
    iVar1 = *(int *)(*param_1 + 0x14);
    iVar1 = (**(code **)(iVar1 + 0x54))(*param_1 + (int)*(short *)(iVar1 + 0x50));
    if (iVar1 != 0) {
      fVar4 = (float)FUN_088894fc(fVar4,param_1,param_4,1);
    }
    if ((param_2 != 0) &&
       (iVar1 = (**(code **)(*(int *)(param_2 + 0x14) + 0x54))
                          (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x50)), iVar1 != 0)) {
      fVar4 = (float)FUN_0888942c(fVar4,param_2 + 0x434,param_4,1);
    }
    if ((0x19 < param_4) && (param_4 < 0x20)) {
      param_5 = 1;
    }
    if ((0xa0 < param_4) && (param_4 < 0xa6)) {
      param_5 = 1;
    }
    goto LAB_08889cd4;
  }
  param_5 = 1;
  fVar4 = (float)FUN_088879d8(param_2,param_3,param_4,param_6,param_7);
LAB_08889cd4:
  FUN_08887bac(fVar4,param_1,0xffffffff,param_5);
  return;
}

