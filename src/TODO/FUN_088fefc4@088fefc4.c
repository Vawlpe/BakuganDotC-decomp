#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fefc4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (*(int *)(param_1 + 0x4c8) != 0) {
    FUN_089de940(*(undefined4 *)(param_1 + 0x4c8),0);
    *(undefined4 *)(param_1 + 0x4c8) = 0;
  }
  iVar1 = FUN_0880d378();
  if (iVar1 != 0) {
    FUN_088deb80();
  }
  FUN_089bf8c8(0x66);
  FUN_089cec00(DAT_08ac5934);
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar1 = *(int *)(param_1 + 0xec);
  }
  else {
    if (*(int *)(param_1 + 0xe8) == 0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xe8) + 0x74);
      (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0xe8) + (int)*(short *)(iVar1 + 8),3);
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    iVar1 = *(int *)(param_1 + 0xec);
  }
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xec) == 0) {
      *(undefined4 *)(param_1 + 0xec) = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 0x74);
      (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0xec) + (int)*(short *)(iVar1 + 8),3);
      *(undefined4 *)(param_1 + 0xec) = 0;
    }
  }
  FUN_089e0c90(*(undefined4 *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x4cc) == 0) {
    iVar1 = *(int *)(param_1 + 0x4d0);
  }
  else {
    FUN_088b8868(*(undefined4 *)(param_1 + 0x4cc));
    iVar1 = *(int *)(param_1 + 0x4d0);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4cc);
  }
  else {
    FUN_088b8868(*(undefined4 *)(param_1 + 0x4d0));
    iVar1 = *(int *)(param_1 + 0x4cc);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4d0);
  }
  else {
    if (*(int *)(param_1 + 0x4cc) == 0) {
      *(undefined4 *)(param_1 + 0x4cc) = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4cc) + 0x14);
      (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x4cc) + (int)*(short *)(iVar1 + 8),3);
      *(undefined4 *)(param_1 + 0x4cc) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x4d0);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x650);
  }
  else {
    if (*(int *)(param_1 + 0x4d0) == 0) {
      *(undefined4 *)(param_1 + 0x4d0) = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4d0) + 0x14);
      (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x4d0) + (int)*(short *)(iVar1 + 8),3);
      *(undefined4 *)(param_1 + 0x4d0) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x650);
  }
  if (iVar1 != 0) {
    FUN_089de940(*(undefined4 *)(param_1 + 0x650),0);
  }
  *(undefined4 *)(DAT_08abd4a0 + 0x6c) = 0x3f800000;
  DAT_08ac5c70 = 0;
  DAT_08abd5b0 = 0;
  if (*(int *)(param_1 + 0x4c4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x6c) = 0x3f800000;
    iVar1 = *(int *)(param_1 + 0x4c4);
    uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x4bc) + 0xdc);
    *(undefined4 *)(iVar1 + 0x40) = uVar7;
    *(undefined4 *)(iVar1 + 0x44) = uVar7;
    *(undefined4 *)(iVar1 + 0x48) = uVar7;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  iVar1 = FUN_089bfa40(100);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
  }
  else {
    FUN_0884cc6c(iVar1);
    iVar2 = FUN_088660e0();
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x4c0);
    }
    else if (*(int *)(param_1 + 0x4c4) == 0) {
      iVar2 = *(int *)(param_1 + 0x4c0);
    }
    else {
      piVar3 = (int *)FUN_088660c8();
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(iVar2 + 0x6c) = 0x3f800000;
      }
      else {
        iVar5 = *piVar3;
        if (iVar5 != 0) {
          puVar6 = (undefined4 *)(param_1 + 0x500);
          iVar4 = *(int *)(iVar5 + 0x14);
          while( true ) {
            iVar4 = (**(code **)(iVar4 + 0x74))(iVar5 + *(short *)(iVar4 + 0x70));
            if (iVar4 == 0) {
              local_50 = *puVar6;
              uStack_4c = puVar6[1];
              uStack_48 = puVar6[2];
              uStack_44 = puVar6[3];
              FUN_088fedd0(param_1,iVar5,&local_50);
              if (*(int *)(iVar5 + 0x20c) != 0) {
                iVar4 = *(int *)(iVar5 + 0x20c);
                *(undefined4 *)(iVar4 + 0x148) = 0;
                *(uint *)(iVar4 + 0x130) = *(uint *)(iVar4 + 0x130) & 0xfffffffe;
              }
              puVar6 = puVar6 + 4;
              iVar5 = *(int *)(iVar5 + 4);
            }
            else {
              iVar5 = *(int *)(iVar5 + 4);
            }
            if (iVar5 == 0) break;
            iVar4 = *(int *)(iVar5 + 0x14);
          }
        }
        *(undefined4 *)(iVar2 + 0x6c) = 0x3f800000;
      }
      iVar2 = *(int *)(param_1 + 0x4c0);
    }
    if (iVar2 != 0) {
      DAT_08ac5c90 = *(undefined4 *)(param_1 + 0x4c0);
      FUN_089e34bc(*(undefined4 *)(param_1 + 0x4c0));
    }
    FUN_089bf300(iVar1,3);
    *(undefined4 *)(param_1 + 0x684) = 0;
  }
  FUN_088fef4c(param_1);
  FUN_089bf7a8(param_1,1);
  return;
}

