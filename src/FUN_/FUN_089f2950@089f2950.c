#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f2950(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_08b02c60;
  iVar1 = FUN_089d8e54(DAT_08b02c60);
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(0);
  piVar3 = (int *)FUN_089d7d74((iVar1 + 1) * 8,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar6 = 0;
  piVar4 = piVar3;
  if (iVar7 != 0) {
    do {
      *piVar4 = iVar7;
      piVar3[iVar6 * 2 + 1] = (int)-*(float *)(iVar7 + 0x24);
      iVar7 = *(int *)(iVar7 + 4);
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar7 != 0);
  }
  *piVar4 = iVar7;
  FUN_089bf03c(piVar3,iVar1);
  iVar7 = *piVar3;
  iVar1 = 1;
  FUN_089d8634();
  FUN_089d7fd8(piVar3,0,0);
  FUN_089d866c();
  FUN_089b4c24("----------DumpRender-----------\n");
  for (; iVar7 != 0; iVar7 = piVar3[iVar7]) {
    FUN_089b4c24("$%07x:",iVar7);
    iVar6 = *(int *)(iVar7 + 0x28);
    if (iVar6 != 0) {
      uVar2 = *(undefined4 *)(iVar6 + 0xc);
      while( true ) {
        FUN_089b4c24("($%07x,$%07x)",iVar6,uVar2);
        if (*(int *)(iVar6 + 8) == 0) {
          uVar5 = *(uint *)(iVar6 + 0xc);
          *DAT_08ac5db4 = (uVar5 >> 0x18 & 0xf) << 0x10 | 0x10000000;
          DAT_08ac5db4[1] = uVar5 & 0xffffff | 0xa000000;
          DAT_08ac5db4 = DAT_08ac5db4 + 2;
          iVar6 = *(int *)(iVar6 + 4);
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        if (iVar6 == 0) break;
        FUN_089b4c24(&DAT_08aa3ac0);
        uVar2 = *(undefined4 *)(iVar6 + 0xc);
      }
    }
    __extendsfdf2(*(undefined4 *)(iVar7 + 0x24));
    FUN_089b4c24(" :%f\n");
    iVar7 = iVar1 * 2;
    iVar1 = iVar1 + 1;
  }
  return;
}

