#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f2270(int param_1,int param_2,short param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (int)param_3 << 0xc;
  iVar1 = FUN_08a0d21c((int)param_3 << 0x18,uVar3 >> 0x14 | ((int)uVar3 >> 0x1f) << 0xc,0x64000,0);
  if (*(char *)(param_1 + 0x267) == '\x04') {
    iVar5 = iVar1 >> 0x1f;
    if (param_2 < 1) {
      if (-1 < param_2) {
        sVar4 = *(short *)(*(int *)(param_1 + 0x284) + (param_5 & 0xff) * 0x4c + 0x32) + -0x4000;
        iVar2 = FUN_088ef724(sVar4);
        lVar6 = FUN_08a0d1f4(iVar2,iVar2 >> 0x1f,iVar1,iVar5);
        iVar2 = (int)((ulonglong)(lVar6 + 0x800) >> 0x20);
        *param_4 = *param_4 + (iVar2 * 0x100000 | (uint)(lVar6 + 0x800) >> 0xc);
        iVar2 = FUN_088ef8d0(sVar4,iVar2 >> 0xc);
        lVar6 = FUN_08a0d1f4(iVar2,iVar2 >> 0x1f,iVar1,iVar5);
        param_4[2] = param_4[2] +
                     ((int)((ulonglong)(lVar6 + 0x800) >> 0x20) * 0x100000 |
                     (uint)(lVar6 + 0x800) >> 0xc);
      }
    }
    else if (param_2 < 2) {
      param_4[1] = iVar1;
    }
    else if (param_2 < 3) {
      sVar4 = *(short *)(*(int *)(param_1 + 0x284) + (param_5 & 0xff) * 0x4c + 0x32) + -0x8000;
      iVar2 = FUN_088ef724(sVar4);
      lVar6 = FUN_08a0d1f4(iVar2,iVar2 >> 0x1f,iVar1,iVar5);
      iVar2 = (int)((ulonglong)(lVar6 + 0x800) >> 0x20);
      *param_4 = *param_4 + (iVar2 * 0x100000 | (uint)(lVar6 + 0x800) >> 0xc);
      iVar2 = FUN_088ef8d0(sVar4,iVar2 >> 0xc);
      lVar6 = FUN_08a0d1f4(iVar2,iVar2 >> 0x1f,iVar1,iVar5);
      param_4[2] = param_4[2] +
                   ((int)((ulonglong)(lVar6 + 0x800) >> 0x20) * 0x100000 |
                   (uint)(lVar6 + 0x800) >> 0xc);
    }
  }
  return;
}

