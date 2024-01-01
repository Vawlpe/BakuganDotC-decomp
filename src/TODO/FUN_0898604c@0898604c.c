#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898604c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 in_V7C;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0xbd4) = 0;
  if ((*(char *)(param_1 + 0xbd0) < '\x01') && (-1 < *(char *)(param_1 + 0xbd0))) {
    FUN_089a535c(param_1 + 0x114);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0xbc) = 0x3f800000;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
    *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x68) =
         *(undefined4 *)(param_1 + 0xad4);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x60) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4) + 0x60)
    ;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 100) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4) + 100);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x104),param_1 + 0xa9c);
    iVar4 = 0;
    iVar3 = 0;
    iVar1 = param_1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) =
           *(undefined4 *)(iVar1 + 0xac4);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (iVar4 == *(char *)(param_1 + 0xbcc)) {
        *(undefined4 *)(iVar2 + 0xc0) = 0x3e99999a;
        *(undefined4 *)(iVar2 + 0xc4) = 0x3e99999a;
        *(undefined4 *)(iVar2 + 200) = 0x3e99999a;
        *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
        FUN_089831d4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),1);
      }
      else {
        *(undefined4 *)(iVar2 + 0xc0) = 0;
        *(undefined4 *)(iVar2 + 0xc4) = 0;
        *(undefined4 *)(iVar2 + 200) = 0;
        *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
        FUN_089831d4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),0);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 4;
    } while (iVar4 < 4);
    iVar3 = 0x17;
    iVar1 = 0x5c;
    iVar4 = param_1 + 0x5c;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar4 + 0xac4);
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0x1b);
    iVar4 = 0;
    iVar3 = 0;
    iVar1 = param_1;
    do {
      if (*(char *)(iVar4 + *(char *)(param_1 + 0xbcd) * 4 + param_1 + 0xbd8) != -1) {
        uVar5 = vmul_s(*(float *)(param_1 + 0xc7c) * 3.141593,in_V7C);
        fVar6 = (float)vcos_s(uVar5);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x34) + 100) =
             *(float *)(iVar1 + 0xc88) - (1.0 - fVar6) * 0.5 * 8.0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 8;
    } while (iVar4 < 4);
  }
  return;
}

