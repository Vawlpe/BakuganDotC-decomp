#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d1adc(int param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
  iVar5 = *(int *)(*piVar3 + 0x464);
  bVar2 = false;
  if (*(int *)(param_1 + 0xbc) == iVar5) {
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    FUN_088e1570(*(undefined4 *)(param_1 + 0x74));
    bVar2 = false;
  }
  else if (iVar5 < *(int *)(param_1 + 0xbc)) {
    bVar2 = true;
    local_70 = 0x3f800000;
    uStack_6c = 0;
    uStack_68 = 0;
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -5;
  }
  else {
    if (iVar5 <= *(int *)(param_1 + 0xbc)) {
      iVar5 = *(int *)(param_1 + 0x1c);
      goto LAB_088d1c0c;
    }
    local_70 = 0x3f000000;
    uStack_6c = 0x3f000000;
    uStack_68 = 0x3f000000;
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 5;
    FUN_088e1570(*(undefined4 *)(param_1 + 0x74));
    bVar2 = false;
  }
  uStack_64 = 0x3f800000;
  iVar5 = *(int *)(param_1 + 0x1c);
LAB_088d1c0c:
  *(uint *)(*(int *)(iVar5 + 0xd8) + 0xd0) = *(uint *)(*(int *)(iVar5 + 0xd8) + 0xd0) | 1;
  if (bVar2) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd8);
    *(undefined4 *)(iVar5 + 0xc0) = 0;
    *(undefined4 *)(iVar5 + 0xc4) = 0;
    *(undefined4 *)(iVar5 + 200) = 0;
    *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd8);
    *(undefined4 *)(iVar5 + 0xb0) = local_70;
    *(undefined4 *)(iVar5 + 0xb4) = uStack_6c;
    *(undefined4 *)(iVar5 + 0xb8) = uStack_68;
    *(undefined4 *)(iVar5 + 0xbc) = uStack_64;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd8);
    *(undefined4 *)(iVar5 + 0xc0) = local_70;
    *(undefined4 *)(iVar5 + 0xc4) = uStack_6c;
    *(undefined4 *)(iVar5 + 200) = uStack_68;
    *(undefined4 *)(iVar5 + 0xcc) = uStack_64;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd8);
    *(undefined4 *)(iVar5 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
  }
  fVar10 = 0.0;
  bVar1 = false;
  iVar8 = 0;
  iVar9 = 1000000;
  iVar5 = *(int *)(param_1 + 0xbc);
  while( true ) {
    iVar7 = (iVar8 + 0x37) * 4;
    iVar5 = (iVar5 / iVar9) % 10;
    FUN_089f4a90((float)(iVar5 / 5),(float)(iVar5 % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    if (bVar2) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(undefined4 *)(iVar6 + 0xc0) = 0;
      *(undefined4 *)(iVar6 + 0xc4) = 0;
      *(undefined4 *)(iVar6 + 200) = 0;
      *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(undefined4 *)(iVar6 + 0xb0) = local_70;
      *(undefined4 *)(iVar6 + 0xb4) = uStack_6c;
      *(undefined4 *)(iVar6 + 0xb8) = uStack_68;
      *(undefined4 *)(iVar6 + 0xbc) = uStack_64;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(undefined4 *)(iVar6 + 0xc0) = local_70;
      *(undefined4 *)(iVar6 + 0xc4) = uStack_6c;
      *(undefined4 *)(iVar6 + 200) = uStack_68;
      *(undefined4 *)(iVar6 + 0xcc) = uStack_64;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(undefined4 *)(iVar6 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0xbc) = 0x3f800000;
    }
    if (iVar5 != 0) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      if (iVar9 != 1) {
        fVar10 = fVar10 + 5.5;
      }
    }
    iVar9 = iVar9 / 10;
    iVar8 = iVar8 + 1;
    if (6 < iVar8) break;
    iVar5 = *(int *)(param_1 + 0xbc);
  }
  iVar8 = 0x37;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xf4);
  iVar9 = 0xdc;
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  do {
    psVar4 = (short *)FUN_0881a300(0xc,iVar8);
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar9);
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 4;
    *(float *)(*piVar3 + 0x60) = (float)(int)*psVar4 - fVar10;
  } while (iVar8 < 0x3e);
  iVar5 = 0x36;
  if (*(char *)(*(int *)(param_1 + 0x74) + 0x3a1) != '\0') {
    iVar8 = 0xd8;
    do {
      iVar5 = iVar5 + 1;
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
      *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
      iVar8 = iVar8 + 4;
    } while (iVar5 < 0x3e);
  }
  return;
}

