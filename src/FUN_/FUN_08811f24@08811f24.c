#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08811f24(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  
  uVar1 = FUN_089c9d1c();
  puVar2 = (undefined4 *)FUN_089c9ed8(param_1,2);
  uVar8 = *puVar2;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0.0;
  local_24 = 0.0;
  local_30 = (float)FUN_089c9e3c(param_1);
  local_2c = FUN_089c9e3c(param_1);
  local_28 = FUN_089c9e3c(param_1);
  local_24 = (float)FUN_089c9e3c(param_1);
  iVar3 = FUN_08860188(uVar8);
  iVar4 = FUN_0884b248();
  if ((iVar4 != 0) && (iVar3 != 0)) {
    switch(uVar1) {
    case 0:
      local_24 = local_24 * 0.01745329;
      FUN_0889d57c(&local_30,iVar3 + 0x20);
      FUN_0886003c(local_24,iVar3);
      break;
    case 1:
      fVar10 = local_30 * 0.01;
      local_30 = fVar10;
      iVar4 = FUN_08887a90(iVar3 + 0x434);
      fVar9 = (float)iVar4;
      if (iVar4 < 0) {
        fVar9 = fVar9 + 4.294967e+09;
      }
      FUN_08887ae4(fVar9 * fVar10,iVar3 + 0x434);
      if (local_30 == 0.0) {
        *(undefined *)(iVar3 + 0x4c1) = 1;
        FUN_088706f0(iVar3,6,0);
      }
      break;
    case 2:
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x6c))
                        (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x68));
      if (iVar4 != 0) {
        FUN_0889acb4(iVar3,(int)local_30);
      }
      break;
    case 3:
      FUN_08863070(iVar3,1);
      break;
    case 4:
      if (local_30 < 0.0) {
        local_30 = 0.0;
      }
      else if (9.0 < local_30) {
        local_30 = 9.0;
      }
      FUN_08888a64(iVar3 + 0x434,(int)local_30);
      break;
    case 5:
      if (local_30 < 1.0) {
        local_30 = 1.0;
      }
      else if (2000.0 < local_30) {
        local_30 = 2000.0;
      }
      FUN_08886c58(iVar3 + 0x434);
      break;
    case 6:
      if (local_30 <= 0.0) {
        *(undefined *)(iVar3 + 0x59c) = 0;
      }
      else {
        *(undefined *)(iVar3 + 0x59c) = 1;
      }
      break;
    case 7:
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x94))
                        (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x90));
      if (iVar4 != 0) {
        FUN_0885dbb4(iVar3);
      }
      break;
    case 8:
      (**(code **)(*(int *)(iVar3 + 0x14) + 0xac))
                (local_30 * 0.01,iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0xa8));
      break;
    case 9:
      if (local_30 <= 0.0) {
        FUN_08860604(iVar3,0);
      }
      else {
        FUN_08860604(iVar3,1);
      }
      break;
    case 10:
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x6c))
                        (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x68));
      if (iVar4 != 0) {
        FUN_0886647c(iVar3,(int)(local_30 - 1.0));
      }
      break;
    case 0xb:
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x6c))
                        (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x68));
      if (iVar4 != 0) {
        FUN_088664bc(iVar3,(int)(local_30 - 1.0));
      }
      break;
    case 0xc:
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x6c))
                        (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x68));
      if (iVar4 != 0) {
        FUN_0889ad04(iVar3,(int)local_30);
      }
      break;
    case 0xd:
      *(int *)(iVar3 + 0x660) = (int)local_30;
      break;
    case 0xe:
      iVar4 = 0;
      piVar5 = (int *)FUN_088660c8();
      if ((piVar5 != (int *)0x0) && (iVar7 = *piVar5, iVar7 != 0)) {
        iVar6 = *(int *)(iVar7 + 0x14);
        while( true ) {
          iVar6 = (**(code **)(iVar6 + 0x9c))(iVar7 + *(short *)(iVar6 + 0x98));
          if (iVar6 != 0) {
            iVar4 = iVar7;
          }
          iVar7 = *(int *)(iVar7 + 4);
          if (iVar7 == 0) break;
          iVar6 = *(int *)(iVar7 + 0x14);
        }
      }
      if (iVar4 != 0) {
        FUN_0886271c(iVar3,iVar4);
      }
      break;
    case 0xf:
      uVar1 = FUN_088660e0();
      iVar4 = FUN_08860188(uVar1);
      if (iVar4 != 0) {
        FUN_0886271c(iVar4,iVar3);
      }
      break;
    case 0x10:
      iVar4 = FUN_08855008((int)local_30);
      if (iVar4 != 0) {
        FUN_0886271c(iVar3,iVar4);
      }
    }
  }
  return 0;
}

