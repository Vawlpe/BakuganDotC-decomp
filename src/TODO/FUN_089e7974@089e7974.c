#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e7974(int *param_1,int param_2,undefined (*param_3) [12],char param_4)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined (*pauVar10) [12];
  undefined4 *puVar11;
  float fVar12;
  int in_V72;
  int in_V76;
  int in_V7A;
  int in_V7D;
  int in_V7E;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int local_40;
  undefined (*local_3c) [12];
  undefined (*local_38) [12];
  
  pauVar10 = (undefined (*) [12])(param_1 + 0x24);
  fVar12 = INFINITY;
  local_3c = (undefined (*) [12])&DAT_08b02560;
  local_40 = param_2;
  if (*param_1 == 0) {
    FUN_089d8634();
    uVar4 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar5 = FUN_089d7d74(0x180,0,0);
    FUN_089d816c(uVar4);
    FUN_089d866c();
    *param_1 = iVar5;
    param_1[1] = iVar5 + 0x80;
    param_1[2] = iVar5 + 0x100;
  }
  pauVar6 = (undefined (*) [12])FUN_089ea224(param_3,pauVar10);
  auVar1 = vscl_t(*pauVar6,0x3f000000);
  *(int *)*pauVar10 = auVar1._0_4_;
  param_1[0x25] = auVar1._4_4_;
  param_1[0x26] = auVar1._8_4_;
  param_1[0x27] = in_V7D;
  if ((float)param_1[0x24] < INFINITY) {
    fVar12 = (float)param_1[0x24];
  }
  if ((float)param_1[0x25] < fVar12) {
    fVar12 = (float)param_1[0x25];
  }
  if ((float)param_1[0x26] < fVar12) {
    fVar12 = (float)param_1[0x26];
  }
  if ((float)param_1[0x24] < 0.2) {
    param_1[0x24] = 0x3e4ccccd;
  }
  if ((float)param_1[0x25] < 0.2) {
    param_1[0x25] = 0x3e4ccccd;
  }
  if ((float)param_1[0x26] < 0.2) {
    param_1[0x26] = 0x3e4ccccd;
  }
  if (param_4 != '\0') {
    auVar1 = vadd_t(*param_3,*(undefined (*) [12])(param_3[1] + 4));
    local_a0 = auVar1._0_4_;
    uStack_9c = auVar1._4_4_;
    uStack_98 = auVar1._8_4_;
    uStack_94 = *(undefined4 *)param_3[1];
    auVar1 = vscl_t(auVar1,0x3f000000);
    local_b0 = auVar1._0_4_;
    uStack_ac = auVar1._4_4_;
    uStack_a8 = auVar1._8_4_;
    iStack_a4 = in_V7D;
    local_c0 = auVar1._0_4_;
    uStack_bc = auVar1._4_4_;
    uStack_b8 = auVar1._8_4_;
    iStack_b4 = in_V7D;
  }
  iVar5 = 0;
  iVar9 = 0;
  pauVar6 = local_3c;
  local_38 = (undefined (*) [12])&local_c0;
  do {
    auVar1 = vmul_t(*pauVar6,*pauVar10);
    local_d0 = auVar1._0_4_;
    uStack_cc = auVar1._4_4_;
    uStack_c8 = auVar1._8_4_;
    local_90 = local_d0;
    uStack_8c = uStack_cc;
    uStack_88 = uStack_c8;
    iStack_84 = in_V7D;
    if (param_4 != '\0') {
      auVar1 = vadd_t(auVar1,*local_38);
      local_d0 = auVar1._0_4_;
      uStack_cc = auVar1._4_4_;
      uStack_c8 = auVar1._8_4_;
    }
    puVar11 = (undefined4 *)(*param_1 + iVar5);
    FUN_08a29834(local_40,&local_90,&local_d0);
    *puVar11 = local_90;
    puVar11[1] = uStack_8c;
    puVar11[2] = uStack_88;
    puVar11[3] = iStack_84;
    *(undefined4 *)(*param_1 + iVar5 + 0xc) = 0;
    puVar11 = (undefined4 *)(param_1[2] + iVar5);
    puVar8 = (undefined4 *)(*param_1 + iVar5);
    uVar4 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar11 = *puVar8;
    puVar11[1] = uVar4;
    puVar11[2] = uVar2;
    puVar11[3] = uVar3;
    piVar7 = (int *)(param_1[1] + iVar5);
    *piVar7 = in_V72;
    piVar7[1] = in_V76;
    piVar7[2] = in_V7A;
    piVar7[3] = in_V7E;
    iVar9 = iVar9 + 1;
    iVar5 = iVar5 + 0x10;
    pauVar6 = (undefined (*) [12])((int)pauVar6[1] + 4);
  } while (iVar9 < 8);
  param_1[0x40] = local_40;
  param_1[0x42] = (int)(fVar12 * 0.5);
  FUN_089e6a90(param_1);
  param_1[0x28] = in_V72;
  param_1[0x29] = in_V76;
  param_1[0x2a] = in_V7A;
  param_1[0x2b] = in_V7E;
  param_1[0x2c] = in_V72;
  param_1[0x2d] = in_V76;
  param_1[0x2e] = in_V7A;
  param_1[0x2f] = in_V7E;
  param_1[0x58] = 0;
  return;
}

