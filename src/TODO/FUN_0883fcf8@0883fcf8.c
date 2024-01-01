#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883fcf8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 in_V7C;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x48) + 8);
  iVar1 = FUN_0882c220(3);
  if (iVar1 == 1) {
    if (*(char *)(param_1 + 0x680) == '\0') {
      *(undefined4 *)(param_1 + 0x67c) = 10;
    }
    *(undefined *)(param_1 + 0x680) = 1;
  }
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  iVar1 = FUN_0880d0ac(uVar2,0x1b);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (5 < iVar1) {
    iVar1 = 5;
  }
  iVar3 = FUN_0884b248();
  if ((iVar3 == 0) || (*(int *)(DAT_08ac58c4 + 0x20) != 2)) {
LAB_0883fde8:
    iVar1 = *(int *)(param_1 + 0x67c);
  }
  else if (iVar1 < 3) {
    iVar1 = *(int *)(param_1 + 0x67c);
  }
  else {
    uVar2 = FUN_0884b268();
    iVar1 = FUN_0884c830(uVar2);
    if (iVar1 != 0) {
      FUN_088372a8(param_1);
      goto LAB_0883fde8;
    }
    iVar1 = *(int *)(param_1 + 0x67c);
  }
  switch(iVar1) {
  case 0:
    uVar4 = FUN_0880d354();
    if ((uVar4 | DAT_08aba778 != 2) != 0) {
      FUN_089c2fbc(0x29fd);
    }
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    FUN_089f46dc(iVar5);
    FUN_089f4954(0x3f800000,0x3f800000,0,iVar5,0);
    FUN_089f43d4(0x3f000000,iVar5);
    *(undefined4 *)(param_1 + 0x684) = 0;
    *(undefined4 *)(param_1 + 0xadc) = 0;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
    iVar1 = 1;
    break;
  case 1:
    iVar1 = *(int *)(param_1 + 0xadc) + 1;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    goto switchD_0883fe08_caseD_3;
  case 10:
    *(undefined4 *)(param_1 + 0x684) = 0;
    *(undefined4 *)(param_1 + 0xadc) = 0;
    *(int *)(param_1 + 0x67c) = (iVar1 * 4 >> 2) + 1;
    iVar1 = 1;
    goto LAB_08840014;
  case 0xb:
    iVar1 = *(int *)(param_1 + 0xadc) + 1;
LAB_08840014:
    *(int *)(param_1 + 0xadc) = iVar1;
    fVar7 = (float)iVar1 * 0.04 - 1.0;
    uVar2 = vmul_s((1.0 - fVar7 * fVar7) * 3.141593,in_V7C);
    fVar7 = (float)vcos_s(uVar2);
    fVar7 = (1.0 - fVar7) * 0.5;
    *(float *)(iVar5 + 0xbc) = 1.0 - fVar7;
    fVar6 = *(float *)(param_1 + 0x684) * 0.04 - 1.0;
    uVar2 = vmul_s(1.0 - fVar6 * fVar6,in_V7C);
    fVar6 = (float)vsin_s(uVar2);
    *(float *)(param_1 + 0x684) = *(float *)(param_1 + 0x684) + 1.5;
    FUN_089f4954(fVar6 * 0.8 + 1.0,fVar7 * 0.6 + 1.0,0,iVar5,0);
    if (*(float *)(iVar5 + 0xbc) <= 0.0) {
      *(undefined4 *)(iVar5 + 0xbc) = 0;
      *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
    }
    goto switchD_0883fe08_caseD_3;
  }
  *(int *)(param_1 + 0xadc) = iVar1;
  fVar7 = (float)iVar1 * 0.05 - 1.0;
  uVar2 = vmul_s((1.0 - fVar7 * fVar7) * 3.141593,in_V7C);
  fVar7 = (float)vcos_s(uVar2);
  fVar7 = (1.0 - fVar7) * 0.5;
  *(float *)(iVar5 + 0xbc) = fVar7;
  if (1.0 <= fVar7) {
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
switchD_0883fe08_caseD_3:
  iVar1 = FUN_0880d354();
  if ((iVar1 == 0) && (DAT_08aba778 == 2)) {
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
  }
  return;
}

