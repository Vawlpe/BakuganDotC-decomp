#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08990818(int param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  
  if (param_2 == '\0') {
    cVar1 = *(char *)(param_1 + 0x1270);
    iVar7 = param_1 + cVar1 * 0x28;
    fVar9 = *(float *)(iVar7 + 0x10ec) + 0.0625;
    *(float *)(iVar7 + 0x10ec) = fVar9;
    FUN_089e3008((float)(int)*(short *)(iVar7 + 0x10e4) +
                 (1.0 - (fVar9 - 1.0) * (fVar9 - 1.0)) * *(float *)(param_1 + 0x1274),
                 (float)(int)*(short *)(iVar7 + 0x10e6) +
                 (1.0 - (fVar9 - 1.0) * (fVar9 - 1.0)) * *(float *)(param_1 + 0x1278),
                 *(undefined4 *)(param_1 + cVar1 * 4 + 0x11f0));
    iVar7 = *(int *)(*(int *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x1208) + 0x130);
    uVar10 = vmul_s(0x4048f5c3,in_V7C);
    auVar5 = vrot_q(uVar10,1,0,3,0);
    auVar3 = vidt_q();
    auVar6 = vrot_q(uVar10,2,0,1,0);
    auVar4 = vidt_q();
    *(int *)(iVar7 + 0x80) = auVar5._0_4_;
    *(int *)(iVar7 + 0x84) = auVar5._4_4_;
    *(int *)(iVar7 + 0x88) = auVar5._8_4_;
    *(int *)(iVar7 + 0x8c) = auVar5._12_4_;
    *(int *)(iVar7 + 0x90) = auVar3._0_4_;
    *(int *)(iVar7 + 0x94) = auVar3._4_4_;
    *(int *)(iVar7 + 0x98) = auVar3._8_4_;
    *(int *)(iVar7 + 0x9c) = auVar3._12_4_;
    *(int *)(iVar7 + 0xa0) = auVar6._0_4_;
    *(int *)(iVar7 + 0xa4) = auVar6._4_4_;
    *(int *)(iVar7 + 0xa8) = auVar6._8_4_;
    *(int *)(iVar7 + 0xac) = auVar6._12_4_;
    *(int *)(iVar7 + 0xb0) = auVar4._0_4_;
    *(int *)(iVar7 + 0xb4) = auVar4._4_4_;
    *(int *)(iVar7 + 0xb8) = auVar4._8_4_;
    *(int *)(iVar7 + 0xbc) = auVar4._12_4_;
    fVar9 = *(float *)(param_1 + *(char *)(param_1 + 0x1270) * 0x28 + 0x10ec) - 1.0;
    fVar9 = *(float *)(param_1 + 0x127c) +
            (1.0 - fVar9 * fVar9) * (*(float *)(param_1 + 0x1280) - *(float *)(param_1 + 0x127c));
    iVar7 = param_1 + *(char *)(param_1 + 0x1270) * 4;
    *(float *)(iVar7 + 0x1294) = fVar9;
    iVar7 = *(int *)(*(int *)(iVar7 + 0x1208) + 0x130);
    auVar3 = vscl_q(*(undefined (*) [16])(iVar7 + 0x80),fVar9);
    auVar4 = vscl_q(*(undefined (*) [16])(iVar7 + 0x90),fVar9);
    auVar5 = vscl_q(*(undefined (*) [16])(iVar7 + 0xa0),fVar9);
    *(int *)*(undefined (*) [16])(iVar7 + 0x80) = auVar3._0_4_;
    *(int *)(iVar7 + 0x84) = auVar3._4_4_;
    *(int *)(iVar7 + 0x88) = auVar3._8_4_;
    *(int *)(iVar7 + 0x8c) = auVar3._12_4_;
    *(int *)(iVar7 + 0x90) = auVar4._0_4_;
    *(int *)(iVar7 + 0x94) = auVar4._4_4_;
    *(int *)(iVar7 + 0x98) = auVar4._8_4_;
    *(int *)(iVar7 + 0x9c) = auVar4._12_4_;
    *(int *)(iVar7 + 0xa0) = auVar5._0_4_;
    *(int *)(iVar7 + 0xa4) = auVar5._4_4_;
    *(int *)(iVar7 + 0xa8) = auVar5._8_4_;
    *(int *)(iVar7 + 0xac) = auVar5._12_4_;
    bVar2 = 1.0 <= *(float *)(param_1 + *(char *)(param_1 + 0x1270) * 0x28 + 0x10ec);
    if (bVar2) {
      iVar7 = param_1 + *(char *)(param_1 + 0x1270) * 0x28;
      FUN_089e3008((float)(int)*(short *)(iVar7 + 0x10e8),(float)(int)*(short *)(iVar7 + 0x10ea),
                   *(undefined4 *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x11f0));
      iVar7 = *(int *)(*(int *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x1208) + 0x130);
      uVar10 = vmul_s(0x4048f5c3,in_V7C);
      auVar5 = vrot_q(uVar10,1,0,3,0);
      auVar3 = vidt_q();
      auVar6 = vrot_q(uVar10,2,0,1,0);
      auVar4 = vidt_q();
      *(int *)(iVar7 + 0x80) = auVar5._0_4_;
      *(int *)(iVar7 + 0x84) = auVar5._4_4_;
      *(int *)(iVar7 + 0x88) = auVar5._8_4_;
      *(int *)(iVar7 + 0x8c) = auVar5._12_4_;
      *(int *)(iVar7 + 0x90) = auVar3._0_4_;
      *(int *)(iVar7 + 0x94) = auVar3._4_4_;
      *(int *)(iVar7 + 0x98) = auVar3._8_4_;
      *(int *)(iVar7 + 0x9c) = auVar3._12_4_;
      *(int *)(iVar7 + 0xa0) = auVar6._0_4_;
      *(int *)(iVar7 + 0xa4) = auVar6._4_4_;
      *(int *)(iVar7 + 0xa8) = auVar6._8_4_;
      *(int *)(iVar7 + 0xac) = auVar6._12_4_;
      *(int *)(iVar7 + 0xb0) = auVar4._0_4_;
      *(int *)(iVar7 + 0xb4) = auVar4._4_4_;
      *(int *)(iVar7 + 0xb8) = auVar4._8_4_;
      *(int *)(iVar7 + 0xbc) = auVar4._12_4_;
      uVar10 = *(undefined4 *)(param_1 + 0x1280);
      iVar7 = param_1 + *(char *)(param_1 + 0x1270) * 4;
      *(undefined4 *)(iVar7 + 0x1294) = uVar10;
      iVar7 = *(int *)(*(int *)(iVar7 + 0x1208) + 0x130);
      auVar3 = vscl_q(*(undefined (*) [16])(iVar7 + 0x80),uVar10);
      auVar4 = vscl_q(*(undefined (*) [16])(iVar7 + 0x90),uVar10);
      auVar5 = vscl_q(*(undefined (*) [16])(iVar7 + 0xa0),uVar10);
      *(int *)*(undefined (*) [16])(iVar7 + 0x80) = auVar3._0_4_;
      *(int *)(iVar7 + 0x84) = auVar3._4_4_;
      *(int *)(iVar7 + 0x88) = auVar3._8_4_;
      *(int *)(iVar7 + 0x8c) = auVar3._12_4_;
      *(int *)(iVar7 + 0x90) = auVar4._0_4_;
      *(int *)(iVar7 + 0x94) = auVar4._4_4_;
      *(int *)(iVar7 + 0x98) = auVar4._8_4_;
      *(int *)(iVar7 + 0x9c) = auVar4._12_4_;
      *(int *)(iVar7 + 0xa0) = auVar5._0_4_;
      *(int *)(iVar7 + 0xa4) = auVar5._4_4_;
      *(int *)(iVar7 + 0xa8) = auVar5._8_4_;
      *(int *)(iVar7 + 0xac) = auVar5._12_4_;
      cVar1 = *(char *)(param_1 + 0x1270);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x1270);
    }
    FUN_089e2b14(*(undefined4 *)(param_1 + cVar1 * 4 + 0x11f0),0xffffffff);
    iVar7 = *(int *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x11f0);
    iVar8 = *(int *)(iVar7 + 0x20);
    (**(code **)(iVar8 + 0x14))(iVar7 + *(short *)(iVar8 + 0x10));
  }
  else {
    cVar1 = *(char *)(param_1 + 0x1270);
    iVar7 = param_1 + cVar1 * 0x28;
    fVar9 = *(float *)(iVar7 + 0x10ec) + 0.0625;
    *(float *)(iVar7 + 0x10ec) = fVar9;
    FUN_089e3008((float)(int)*(short *)(iVar7 + 0x10e4) +
                 fVar9 * fVar9 * *(float *)(param_1 + 0x1274),
                 (float)(int)*(short *)(iVar7 + 0x10e6) +
                 fVar9 * fVar9 * *(float *)(param_1 + 0x1278),
                 *(undefined4 *)(param_1 + cVar1 * 4 + 0x11f0));
    iVar7 = *(int *)(*(int *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x1208) + 0x130);
    uVar10 = vmul_s(0x4048f5c3,in_V7C);
    auVar5 = vrot_q(uVar10,1,0,3,0);
    auVar3 = vidt_q();
    auVar6 = vrot_q(uVar10,2,0,1,0);
    auVar4 = vidt_q();
    *(int *)(iVar7 + 0x80) = auVar5._0_4_;
    *(int *)(iVar7 + 0x84) = auVar5._4_4_;
    *(int *)(iVar7 + 0x88) = auVar5._8_4_;
    *(int *)(iVar7 + 0x8c) = auVar5._12_4_;
    *(int *)(iVar7 + 0x90) = auVar3._0_4_;
    *(int *)(iVar7 + 0x94) = auVar3._4_4_;
    *(int *)(iVar7 + 0x98) = auVar3._8_4_;
    *(int *)(iVar7 + 0x9c) = auVar3._12_4_;
    *(int *)(iVar7 + 0xa0) = auVar6._0_4_;
    *(int *)(iVar7 + 0xa4) = auVar6._4_4_;
    *(int *)(iVar7 + 0xa8) = auVar6._8_4_;
    *(int *)(iVar7 + 0xac) = auVar6._12_4_;
    *(int *)(iVar7 + 0xb0) = auVar4._0_4_;
    *(int *)(iVar7 + 0xb4) = auVar4._4_4_;
    *(int *)(iVar7 + 0xb8) = auVar4._8_4_;
    *(int *)(iVar7 + 0xbc) = auVar4._12_4_;
    fVar9 = *(float *)(param_1 + *(char *)(param_1 + 0x1270) * 0x28 + 0x10ec);
    fVar9 = *(float *)(param_1 + 0x127c) -
            fVar9 * fVar9 * (*(float *)(param_1 + 0x127c) - *(float *)(param_1 + 0x1280));
    iVar7 = param_1 + *(char *)(param_1 + 0x1270) * 4;
    *(float *)(iVar7 + 0x1294) = fVar9;
    iVar7 = *(int *)(*(int *)(iVar7 + 0x1208) + 0x130);
    auVar3 = vscl_q(*(undefined (*) [16])(iVar7 + 0x80),fVar9);
    auVar4 = vscl_q(*(undefined (*) [16])(iVar7 + 0x90),fVar9);
    auVar5 = vscl_q(*(undefined (*) [16])(iVar7 + 0xa0),fVar9);
    *(int *)*(undefined (*) [16])(iVar7 + 0x80) = auVar3._0_4_;
    *(int *)(iVar7 + 0x84) = auVar3._4_4_;
    *(int *)(iVar7 + 0x88) = auVar3._8_4_;
    *(int *)(iVar7 + 0x8c) = auVar3._12_4_;
    *(int *)(iVar7 + 0x90) = auVar4._0_4_;
    *(int *)(iVar7 + 0x94) = auVar4._4_4_;
    *(int *)(iVar7 + 0x98) = auVar4._8_4_;
    *(int *)(iVar7 + 0x9c) = auVar4._12_4_;
    *(int *)(iVar7 + 0xa0) = auVar5._0_4_;
    *(int *)(iVar7 + 0xa4) = auVar5._4_4_;
    *(int *)(iVar7 + 0xa8) = auVar5._8_4_;
    *(int *)(iVar7 + 0xac) = auVar5._12_4_;
    bVar2 = 1.0 <= *(float *)(param_1 + *(char *)(param_1 + 0x1270) * 0x28 + 0x10ec);
    if (bVar2) {
      iVar7 = param_1 + *(char *)(param_1 + 0x1270) * 0x28;
      FUN_089e3008((float)(int)*(short *)(iVar7 + 0x10e8),(float)(int)*(short *)(iVar7 + 0x10ea),
                   *(undefined4 *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x11f0));
      iVar7 = *(int *)(*(int *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x1208) + 0x130);
      uVar10 = vmul_s(0x4048f5c3,in_V7C);
      auVar5 = vrot_q(uVar10,1,0,3,0);
      auVar3 = vidt_q();
      auVar6 = vrot_q(uVar10,2,0,1,0);
      auVar4 = vidt_q();
      *(int *)(iVar7 + 0x80) = auVar5._0_4_;
      *(int *)(iVar7 + 0x84) = auVar5._4_4_;
      *(int *)(iVar7 + 0x88) = auVar5._8_4_;
      *(int *)(iVar7 + 0x8c) = auVar5._12_4_;
      *(int *)(iVar7 + 0x90) = auVar3._0_4_;
      *(int *)(iVar7 + 0x94) = auVar3._4_4_;
      *(int *)(iVar7 + 0x98) = auVar3._8_4_;
      *(int *)(iVar7 + 0x9c) = auVar3._12_4_;
      *(int *)(iVar7 + 0xa0) = auVar6._0_4_;
      *(int *)(iVar7 + 0xa4) = auVar6._4_4_;
      *(int *)(iVar7 + 0xa8) = auVar6._8_4_;
      *(int *)(iVar7 + 0xac) = auVar6._12_4_;
      *(int *)(iVar7 + 0xb0) = auVar4._0_4_;
      *(int *)(iVar7 + 0xb4) = auVar4._4_4_;
      *(int *)(iVar7 + 0xb8) = auVar4._8_4_;
      *(int *)(iVar7 + 0xbc) = auVar4._12_4_;
      uVar10 = *(undefined4 *)(param_1 + 0x1280);
      iVar7 = param_1 + *(char *)(param_1 + 0x1270) * 4;
      *(undefined4 *)(iVar7 + 0x1294) = uVar10;
      iVar7 = *(int *)(*(int *)(iVar7 + 0x1208) + 0x130);
      auVar3 = vscl_q(*(undefined (*) [16])(iVar7 + 0x80),uVar10);
      auVar4 = vscl_q(*(undefined (*) [16])(iVar7 + 0x90),uVar10);
      auVar5 = vscl_q(*(undefined (*) [16])(iVar7 + 0xa0),uVar10);
      *(int *)*(undefined (*) [16])(iVar7 + 0x80) = auVar3._0_4_;
      *(int *)(iVar7 + 0x84) = auVar3._4_4_;
      *(int *)(iVar7 + 0x88) = auVar3._8_4_;
      *(int *)(iVar7 + 0x8c) = auVar3._12_4_;
      *(int *)(iVar7 + 0x90) = auVar4._0_4_;
      *(int *)(iVar7 + 0x94) = auVar4._4_4_;
      *(int *)(iVar7 + 0x98) = auVar4._8_4_;
      *(int *)(iVar7 + 0x9c) = auVar4._12_4_;
      *(int *)(iVar7 + 0xa0) = auVar5._0_4_;
      *(int *)(iVar7 + 0xa4) = auVar5._4_4_;
      *(int *)(iVar7 + 0xa8) = auVar5._8_4_;
      *(int *)(iVar7 + 0xac) = auVar5._12_4_;
      cVar1 = *(char *)(param_1 + 0x1270);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x1270);
    }
    FUN_089e2b14(*(undefined4 *)(param_1 + cVar1 * 4 + 0x11f0),0xffffffff);
    iVar7 = *(int *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x11f0);
    iVar8 = *(int *)(iVar7 + 0x20);
    (**(code **)(iVar8 + 0x14))(iVar7 + *(short *)(iVar8 + 0x10));
  }
  return bVar2;
}

