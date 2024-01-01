#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d065c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  
  fVar7 = 0.0;
  iVar4 = FUN_088184e8(0,*(undefined4 *)(param_1 + 0xd8),
                       *(undefined4 *)
                        (*(int *)(param_1 + 0xdc) + (uint)*(ushort *)(param_1 + 0xb0) * 4),0,0,0);
  if (iVar4 < 0x10) {
    iVar4 = 0x2d;
    fVar7 = 7.0;
  }
  else {
    iVar4 = 0x2e;
  }
  if (*(char *)(param_1 + 0xa4) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x74) + 0x3b1) != '\0') {
      *(undefined *)(param_1 + 0xa4) = 1;
      *(undefined *)(param_1 + 0xa5) = 1;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 * 4);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x74) + 0x3b1) == '\0') {
    *(undefined *)(param_1 + 0xa5) = 1;
  }
  if (*(char *)(param_1 + 0xa4) == '\0') {
    return;
  }
  iVar4 = iVar4 * 4;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  uVar3 = DAT_08b001bc;
  uVar2 = DAT_08b001b8;
  uVar6 = DAT_08b001b4;
  if (*(int *)(*(int *)(param_1 + 0xd8) + 0x84) == 0) {
    iVar5 = *(int *)(param_1 + 0xd8);
    *(undefined4 *)(iVar5 + 0xc0) = DAT_08b001b0;
    *(undefined4 *)(iVar5 + 0xc4) = uVar6;
    *(undefined4 *)(iVar5 + 200) = uVar2;
    *(undefined4 *)(iVar5 + 0xcc) = uVar3;
    iVar5 = *(int *)(*(int *)(param_1 + 0xd8) + 0x74);
    (**(code **)(iVar5 + 0x14))
              (0x43710000,fVar7 + 1.0,0,*(int *)(param_1 + 0xd8) + (int)*(short *)(iVar5 + 0x10),
               *(undefined4 *)(*(int *)(param_1 + 0xdc) + (uint)*(ushort *)(param_1 + 0xb0) * 4),1,0
               ,0);
    uVar3 = DAT_08b00f5c;
    uVar2 = DAT_08b00f58;
    uVar6 = DAT_08b00f54;
    iVar5 = *(int *)(param_1 + 0xd8);
    *(undefined4 *)(iVar5 + 0xc0) = DAT_08b00f50;
    *(undefined4 *)(iVar5 + 0xc4) = uVar6;
    *(undefined4 *)(iVar5 + 200) = uVar2;
    *(undefined4 *)(iVar5 + 0xcc) = uVar3;
    iVar5 = *(int *)(*(int *)(param_1 + 0xd8) + 0x74);
    (**(code **)(iVar5 + 0x14))
              (0x43700000,fVar7,0,*(int *)(param_1 + 0xd8) + (int)*(short *)(iVar5 + 0x10),
               *(undefined4 *)(*(int *)(param_1 + 0xdc) + (uint)*(ushort *)(param_1 + 0xb0) * 4),1,0
               ,0);
    cVar1 = *(char *)(param_1 + 0xa5);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xa5);
  }
  if (cVar1 == '\0') {
    iVar4 = *(int *)(param_1 + 0x74);
    goto LAB_088d0944;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  uVar6 = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 100) = uVar6;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) + 100) = uVar6;
  if (*(char *)(*(int *)(param_1 + 0x74) + 0x3b1) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x74) + 0x3b1) != '\0') {
      iVar4 = *(int *)(param_1 + 0x74);
      goto LAB_088d0944;
    }
    *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) - DAT_08abebe8;
    if (*(int *)(param_1 + 0xa8) <= DAT_08abebe0) {
      iVar4 = *(int *)(param_1 + 0x74);
      goto LAB_088d0944;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    if (*(int *)(*(int *)(param_1 + 0xd8) + 0x84) != 0) {
      iVar4 = *(int *)(param_1 + 0xd8);
      FUN_089f51b8(iVar4);
      *(undefined4 *)(iVar4 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0xc2400000;
    *(undefined *)(param_1 + 0xa5) = 0;
    *(undefined *)(param_1 + 0xa4) = 0;
  }
  else {
    *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) + DAT_08abebe8;
    if (DAT_08abebe0 < *(int *)(param_1 + 0xa8)) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0x42400000;
      *(undefined *)(param_1 + 0xa5) = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x74);
LAB_088d0944:
  if ((*(char *)(iVar4 + 0x3b1) != '\0') &&
     (iVar4 = *(int *)(param_1 + 0xac) + 1, *(int *)(param_1 + 0xac) = iVar4, DAT_08abebe4 < iVar4))
  {
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined *)(*(int *)(param_1 + 0x74) + 0x3b1) = 0;
  }
  return;
}

