#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089496e0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_2 = param_2 * 0x10;
  iVar4 = 0;
  if (param_4 < 2) {
    if (param_4 < 0) {
      param_2 = (param_2 + 0x33) * 4;
      goto LAB_089497fc;
    }
    iVar4 = param_1 + param_3 * 2;
    if (param_4 < 1) {
      iVar4 = (int)*(short *)(iVar4 + 0x84);
      param_2 = param_2 + 0x36;
    }
    else {
      iVar4 = (int)*(short *)(iVar4 + 0xac);
      param_2 = param_2 + 0x3a;
    }
  }
  else if (param_4 < 3) {
    param_2 = param_2 + 0x3e;
    iVar4 = (int)*(short *)(param_1 + param_3 * 2 + 0xd4);
  }
  else {
    if (3 < param_4) {
      param_2 = (param_2 + 0x33) * 4;
      goto LAB_089497fc;
    }
    iVar4 = param_1 + param_3 * 2;
    iVar5 = (int)*(short *)(iVar4 + 0x84);
    param_2 = param_2 + 0x41;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar3 = iVar5 + *(short *)(iVar4 + 0xac) + (int)*(short *)(iVar4 + 0xd4);
      iVar4 = (iVar5 * 100) / iVar3;
      if ((float)(iVar5 * 100) / (float)iVar3 <= (float)iVar4) {
        if (iVar4 != 0) {
          param_2 = param_2 * 4;
          goto LAB_089497fc;
        }
        iVar4 = 1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
  }
  param_2 = param_2 << 2;
LAB_089497fc:
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2);
  if (param_4 == 3) {
    if (9 < iVar4) {
      if (iVar4 < 100) {
        FUN_089f4a90((float)((iVar4 % 10) / 5),(float)((iVar4 % 10) % 5),uVar1);
        piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_2);
        *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-2] + 0x60) + 12.0;
        FUN_089f4a90((float)((iVar4 / 10) / 5),(float)((iVar4 / 10) % 5),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + -4));
        iVar4 = *(int *)(param_1 + 0x1c) + param_2;
        *(float *)(*(int *)(iVar4 + -4) + 0x60) = *(float *)(*(int *)(iVar4 + -8) + 0x60) + 4.0;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -4);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -8);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      }
      else {
        FUN_089f4a90((float)((iVar4 % 10) / 5),(float)((iVar4 % 10) % 5),uVar1);
        piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_2);
        *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-2] + 0x60) + 16.0;
        iVar5 = (iVar4 % 100) / 10;
        FUN_089f4a90((float)(iVar5 / 5),(float)(iVar5 % 5),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + -4));
        iVar5 = *(int *)(param_1 + 0x1c) + param_2;
        *(float *)(*(int *)(iVar5 + -4) + 0x60) = *(float *)(*(int *)(iVar5 + -8) + 0x60) + 8.0;
        FUN_089f4a90((float)((iVar4 / 100) / 5),(float)((iVar4 / 100) % 5),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + -8));
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -4);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -8);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      }
    }
    else {
      FUN_089f4a90((float)(iVar4 / 5),(float)(iVar4 % 5),uVar1);
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_2);
      *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-2] + 0x60) + 8.0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -4);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -8);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    }
  }
  else if (9 < iVar4) {
    if (iVar4 < 100) {
      FUN_089f4a90((float)((iVar4 % 10) / 5),(float)((iVar4 % 10) % 5),uVar1);
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_2);
      *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-3] + 0x60) + 16.0;
      FUN_089f4a90((float)((iVar4 / 10) / 5),(float)((iVar4 / 10) % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + -4));
      iVar4 = *(int *)(param_1 + 0x1c) + param_2;
      *(float *)(*(int *)(iVar4 + -4) + 0x60) = *(float *)(*(int *)(iVar4 + -0xc) + 0x60) + 8.0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -4);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -8);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -0xc);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    }
    else if (iVar4 < 1000) {
      FUN_089f4a90((float)((iVar4 % 10) / 5),(float)((iVar4 % 10) % 5),uVar1);
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_2);
      *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-3] + 0x60) + 20.0;
      iVar5 = (iVar4 % 100) / 10;
      FUN_089f4a90((float)(iVar5 / 5),(float)(iVar5 % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + -4));
      iVar5 = *(int *)(param_1 + 0x1c) + param_2;
      *(float *)(*(int *)(iVar5 + -4) + 0x60) = *(float *)(*(int *)(iVar5 + -0xc) + 0x60) + 12.0;
      FUN_089f4a90((float)((iVar4 / 100) / 5),(float)((iVar4 / 100) % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + -8));
      iVar4 = *(int *)(param_1 + 0x1c) + param_2;
      *(float *)(*(int *)(iVar4 + -8) + 0x60) = *(float *)(*(int *)(iVar4 + -0xc) + 0x60) + 4.0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -4);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -8);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -0xc);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    }
    else {
      FUN_089f4a90((float)((iVar4 % 10) / 5),(float)((iVar4 % 10) % 5),uVar1);
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_2);
      *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-3] + 0x60) + 24.0;
      iVar5 = (iVar4 % 100) / 10;
      FUN_089f4a90((float)(iVar5 / 5),(float)(iVar5 % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + -4));
      iVar5 = *(int *)(param_1 + 0x1c) + param_2;
      *(float *)(*(int *)(iVar5 + -4) + 0x60) = *(float *)(*(int *)(iVar5 + -0xc) + 0x60) + 16.0;
      iVar5 = (iVar4 % 1000) / 100;
      FUN_089f4a90((float)(iVar5 / 5),(float)(iVar5 % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + -8));
      iVar5 = *(int *)(param_1 + 0x1c) + param_2;
      *(float *)(*(int *)(iVar5 + -8) + 0x60) = *(float *)(*(int *)(iVar5 + -0xc) + 0x60) + 8.0;
      FUN_089f4a90((float)((iVar4 / 1000) / 5),(float)((iVar4 / 1000) % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + -0xc));
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -4);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -8);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -0xc);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
    }
  }
  else {
    FUN_089f4a90((float)(iVar4 / 5),(float)(iVar4 % 5),uVar1);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_2);
    *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-3] + 0x60) + 12.0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -4);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -8);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + -0xc);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  }
  return;
}

