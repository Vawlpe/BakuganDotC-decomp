#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08864fe0(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined (*pauVar7) [12];
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 in_V7D;
  undefined4 uVar11;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar4 = FUN_0885fcf8();
  if (iVar4 == 0) {
    pauVar7 = (undefined (*) [12])(param_1 + 0x80);
    uVar10 = vdot_t(*pauVar7,*pauVar7);
    uVar11 = vcmp_s(8,uVar10,*(undefined4 *)*pauVar7);
    vrsq_s(uVar10);
    uVar10 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar7,uVar10);
    local_50 = auVar1._0_4_;
    uStack_4c = auVar1._4_4_;
    uStack_48 = auVar1._8_4_;
    uVar10 = 4;
    if ((DAT_08abd488 == 0xc || DAT_08abd488 == 0xe) || DAT_08abd488 == 0xf) {
      uVar10 = 5;
    }
    if (*(int *)(param_1 + 8) == 10) {
      iVar9 = 0;
      iVar4 = param_1;
      do {
        iVar8 = *(int *)(iVar4 + 0x41c);
        local_40 = *(undefined4 *)(iVar8 + 400);
        uStack_38 = *(undefined4 *)(iVar8 + 0x198);
        uStack_34 = *(undefined4 *)(iVar8 + 0x19c);
        local_3c = *(undefined4 *)(param_1 + 0x344);
        FUN_08824024(DAT_08ac5c70,uVar10,&local_40,&local_50);
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar9 < 4);
    }
    else {
      puVar5 = (undefined4 *)FUN_088606ac(param_1,2,0);
      puVar5[1] = *(undefined4 *)(param_1 + 0x344);
      FUN_08824024(DAT_08ac5c70,uVar10,puVar5,&local_50);
      puVar6 = (undefined4 *)FUN_088606ac(param_1,3,0);
      uVar11 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar5 = *puVar6;
      puVar5[1] = uVar11;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[1] = *(undefined4 *)(param_1 + 0x344);
      FUN_08824024(DAT_08ac5c70,uVar10,puVar5,&local_50);
    }
  }
  return;
}

