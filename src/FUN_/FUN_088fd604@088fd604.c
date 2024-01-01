#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fd604(undefined4 param_1,float param_2,int param_3,undefined (*param_4) [12])

{
  char cVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined (*pauVar8) [12];
  int iVar9;
  undefined (*pauVar10) [12];
  undefined (*pauVar11) [12];
  int *piVar12;
  float fVar13;
  float fVar14;
  undefined4 in_V7D;
  
  pauVar10 = (undefined (*) [12])(param_3 + 0xd0);
  pauVar11 = (undefined (*) [12])(param_3 + 0xe0);
  if (*(char *)(param_3 + 0xf4) != '\0') {
    iVar9 = *(int *)(*(int *)(param_3 + 8) + 4);
    puVar7 = (undefined4 *)
             (**(code **)(iVar9 + 0x14))(*(int *)(param_3 + 8) + (int)*(short *)(iVar9 + 0x10));
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)(param_3 + 0xa0) = *puVar7;
    *(undefined4 *)(param_3 + 0xa4) = uVar4;
    *(undefined4 *)(param_3 + 0xa8) = uVar5;
    *(undefined4 *)(param_3 + 0xac) = uVar6;
    *(undefined *)(param_3 + 0xf4) = 0;
  }
  *(undefined4 *)*pauVar10 = 0;
  *(undefined4 *)(param_3 + 0xd4) = 0;
  *(undefined4 *)(param_3 + 0xd8) = 0;
  *(undefined4 *)(param_3 + 0xdc) = 0;
  uVar6 = DAT_08abfe7c;
  uVar5 = DAT_08abfe78;
  uVar4 = DAT_08abfe74;
  if (*(char *)(*(int *)(param_3 + 4) + 0x4a) != '\0') {
    *(undefined4 *)*pauVar11 = DAT_08abfe70;
    *(undefined4 *)(param_3 + 0xe4) = uVar4;
    *(undefined4 *)(param_3 + 0xe8) = uVar5;
    *(undefined4 *)(param_3 + 0xec) = uVar6;
    uVar6 = DAT_08abfe7c;
    uVar5 = DAT_08abfe78;
    uVar4 = DAT_08abfe74;
    *(undefined4 *)*(undefined (*) [12])(param_3 + 0xc0) = DAT_08abfe70;
    *(undefined4 *)(param_3 + 0xc4) = uVar4;
    *(undefined4 *)(param_3 + 200) = uVar5;
    *(undefined4 *)(param_3 + 0xcc) = uVar6;
    return;
  }
  iVar9 = 0;
  if (*(short *)(param_3 + 0xb8) == -1) {
    cVar1 = *(char *)(param_3 + 0xba);
  }
  else {
    iVar9 = (int)*(short *)(param_3 + 0xb8);
    if ((iVar9 < 0) || ((*(int **)(DAT_08abf740 + 0xc))[2] <= iVar9)) {
      piVar12 = &DAT_08b00ba8;
      memset_jak(&DAT_08b00ba8,0,4);
    }
    else {
      piVar12 = (int *)(**(int **)(DAT_08abf740 + 0xc) + iVar9 * 4);
    }
    iVar9 = *piVar12;
    cVar1 = *(char *)(param_3 + 0xba);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(param_3 + 0xf0) = 0;
  }
  else {
    if ((iVar9 == 0) || (*(char *)(iVar9 + 0x51) == '\0')) {
      iVar9 = *(int *)(*(int *)(param_3 + 8) + 4);
      pauVar8 = (undefined (*) [12])
                (**(code **)(iVar9 + 0x14))(*(int *)(param_3 + 8) + (int)*(short *)(iVar9 + 0x10));
      auVar2 = vsub_t(*pauVar8,*(undefined (*) [12])(param_3 + 0xa0));
      fVar14 = (float)vdot_t(auVar2,*param_4);
      fVar14 = fVar14 * param_2;
      fVar13 = fVar14;
      if (fVar14 < 0.0) {
        fVar13 = -fVar14;
      }
      if (0.001 < fVar13) {
        *(float *)(param_3 + 0xf0) = fVar14 * 0.2 + *(float *)(param_3 + 0xf0) * 0.8;
      }
      uVar4 = *(undefined4 *)(*param_4 + 4);
      uVar5 = *(undefined4 *)(*param_4 + 8);
      uVar6 = *(undefined4 *)param_4[1];
      *(undefined4 *)*pauVar10 = *(undefined4 *)*param_4;
      *(undefined4 *)(param_3 + 0xd4) = uVar4;
      *(undefined4 *)(param_3 + 0xd8) = uVar5;
      *(undefined4 *)(param_3 + 0xdc) = uVar6;
      auVar2 = vscl_t(*pauVar10,*(undefined4 *)(param_3 + 0xf0));
      *(int *)*pauVar10 = auVar2._0_4_;
      *(int *)(param_3 + 0xd4) = auVar2._4_4_;
      *(int *)(param_3 + 0xd8) = auVar2._8_4_;
      *(undefined4 *)(param_3 + 0xdc) = in_V7D;
      goto LAB_088fd890;
    }
    *(undefined4 *)(param_3 + 0xf0) = 0;
  }
  *(undefined4 *)*pauVar10 = 0;
  *(undefined4 *)(param_3 + 0xd4) = 0;
  *(undefined4 *)(param_3 + 0xd8) = 0;
  *(undefined4 *)(param_3 + 0xdc) = 0;
LAB_088fd890:
  auVar2 = vsub_t(*pauVar10,*(undefined (*) [12])(param_3 + 0xc0));
  fVar13 = *(float *)(param_3 + 0x10) * 0.3333333;
  fVar13 = fVar13 * fVar13;
  *(float *)(param_3 + 0xc) = fVar13;
  auVar2 = vscl_t(auVar2,fVar13);
  auVar3 = vscl_t(*pauVar11,*(undefined4 *)(param_3 + 0x10));
  auVar2 = vsub_t(auVar2,auVar3);
  auVar2 = vscl_t(auVar2,param_1);
  uVar4 = *(undefined4 *)(param_3 + 0xec);
  auVar2 = vadd_t(*pauVar11,auVar2);
  *(int *)*pauVar11 = auVar2._0_4_;
  *(int *)(param_3 + 0xe4) = auVar2._4_4_;
  *(int *)(param_3 + 0xe8) = auVar2._8_4_;
  *(undefined4 *)(param_3 + 0xec) = uVar4;
  uVar4 = *(undefined4 *)(param_3 + 0x2c);
  auVar2 = vadd_t(*(undefined (*) [12])(param_3 + 0x20),*pauVar11);
  *(int *)*(undefined (*) [12])(param_3 + 0x20) = auVar2._0_4_;
  *(int *)(param_3 + 0x24) = auVar2._4_4_;
  *(int *)(param_3 + 0x28) = auVar2._8_4_;
  *(undefined4 *)(param_3 + 0x2c) = uVar4;
  return;
}

