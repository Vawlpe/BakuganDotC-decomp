#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dc228(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined auStack_60 [64];
  
  iVar2 = FUN_089d9680();
  if (iVar2 != 0) {
    FUN_089e0860(param_1);
    uVar6 = *(uint *)(param_1 + 8);
    if (uVar6 < 0x21) {
      piVar7 = *(int **)(&DAT_08ab9c2c + uVar6 * 4);
      if (piVar7 != (int *)0x0) {
        uVar3 = FUN_089d9674();
        iVar2 = FUN_089d9c84(uVar3,*piVar7);
        if (iVar2 == -1) {
          if ((*(int *)(DAT_08ac58c4 + 4) == 1) && (*(int *)(param_1 + 8) == 7)) {
            uVar3 = FUN_089d9674();
            FUN_089d9914(uVar3,"04_wil_stay.gmo");
            uVar3 = FUN_089d9674();
            FUN_089d9914(uVar3,"04_wil_b_stagger.gmo");
            uVar3 = FUN_089d9674();
            FUN_089d9914(uVar3,"04_wil_defense_c.gmo");
          }
          else if ((*(int *)(DAT_08ac58c4 + 4) == 1) && (*(int *)(param_1 + 8) == 0x1f)) {
            uVar3 = FUN_089d9674();
            FUN_089d9914(uVar3,"10_for_stay.gmo");
            uVar3 = FUN_089d9674();
            FUN_089d9914(uVar3,"10_for_one_shot.gmo");
          }
          else {
            FUN_089b4c84(auStack_60,"%s.gmo",*piVar7);
            uVar3 = FUN_089d9674();
            FUN_089d9914(uVar3,auStack_60);
            uVar3 = FUN_089d9674();
            FUN_089d9914(uVar3,(&PTR_DAT_08ab9ba8)[*(int *)(param_1 + 8)]);
          }
        }
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        uVar4 = FUN_089d7d74(0x252,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0x150) = uVar4;
        iVar2 = 0;
        iVar8 = 0;
        do {
          uVar1 = 0xffff;
          if (*piVar7 != 0) {
            uVar3 = FUN_089d9674();
            uVar1 = FUN_089d9c84(uVar3,*piVar7);
          }
          iVar2 = iVar2 + 1;
          *(undefined2 *)(*(int *)(param_1 + 0x150) + iVar8) = uVar1;
          piVar7 = piVar7 + 1;
          iVar8 = iVar8 + 2;
        } while (iVar2 < 0x129);
      }
    }
    else {
      piVar7 = (int *)(&PTR_DAT_08ab9cec)[uVar6 - 0x23];
      if (piVar7 != (int *)0x0) {
        uVar3 = FUN_089d9674();
        iVar2 = FUN_089d9c84(uVar3,piVar7[1]);
        if (iVar2 == -1) {
          uVar5 = *(uint *)(param_1 + 8);
          if (uVar5 < 0x30) {
            uVar3 = FUN_089d9674();
            FUN_089d9914(uVar3,(&PTR_s_00_Dan_mot_gmo_08ab9cb8)[uVar6 - 0x23]);
          }
          else if ((uVar5 < 0x51) || (0x53 < uVar5)) {
            if ((uVar5 < 0x4e) || (uVar5 >= 0x51)) {
              if (uVar5 == 0x54) {
                uVar3 = FUN_089d9674();
                FUN_089d9914(uVar3,"f4_quest_boat01_mylene_mot.gmo");
              }
              else if (uVar5 == 0x55) {
                uVar3 = FUN_089d9674();
                FUN_089d9914(uVar3,"f4_quest_boat01_mot.gmo");
              }
              else if (uVar5 == 0x32) {
                uVar3 = FUN_089d9674();
                FUN_089d9914(uVar3,"npc_jpn_003_mot.gmo");
              }
              else {
                uVar3 = FUN_089d9674();
                FUN_089d9914(uVar3,"npc_mot.gmo");
              }
            }
            else {
              uVar3 = FUN_089d9674();
              FUN_089d9914(uVar3,"npc_vxs_001_mot.gmo");
            }
          }
          else {
            uVar3 = FUN_089d9674();
            FUN_089d9914(uVar3,"npc_new_robo_mot.gmo");
          }
        }
      }
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar4 = FUN_089d7d74(100,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x150) = uVar4;
      iVar2 = 0;
      iVar8 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(undefined2 *)(*(int *)(param_1 + 0x150) + iVar8) = 0xffff;
        iVar8 = iVar8 + 2;
      } while (iVar2 < 0x32);
      iVar2 = 0;
      do {
        if (0x31 < *piVar7) {
          return;
        }
        uVar3 = FUN_089d9674();
        uVar1 = FUN_089d9c84(uVar3,piVar7[1]);
        iVar2 = iVar2 + 1;
        *(undefined2 *)(*(int *)(param_1 + 0x150) + *piVar7 * 2) = uVar1;
        piVar7 = piVar7 + 2;
      } while (iVar2 < 0x32);
    }
  }
  return;
}

