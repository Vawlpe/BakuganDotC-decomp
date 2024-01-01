#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881b7a0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined auStack_50 [4];
  uint local_4c;
  char local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined local_44;
  undefined local_43;
  
  iVar2 = FUN_089cf8ec(0);
  iVar3 = FUN_089d3ab4();
  if (iVar3 != 0) {
    uVar4 = FUN_089d3adc();
    iVar3 = FUN_089d41cc(uVar4);
    if (iVar2 != 0) {
      memset_jak(auStack_50,0,0x28);
      switch(*(undefined4 *)(param_1 + 0xc0)) {
      case 0:
        break;
      case 1:
        local_48 = (char)*(int *)(param_1 + 0x10) + '\x01';
        iVar5 = param_1 + *(int *)(param_1 + 0x10) * 5;
        local_47 = *(undefined *)(iVar5 + 0xc4);
        local_46 = *(undefined *)(iVar5 + 0xc5);
        local_45 = *(undefined *)(iVar5 + 0xc6);
        local_43 = *(undefined *)(iVar5 + 200);
        local_44 = *(undefined *)(iVar5 + 199);
        local_4c = 0x4000000;
        iVar2 = FUN_089d0a74(iVar2,auStack_50);
        uVar4 = 2;
        if (iVar2 != 0) {
          if (iVar3 != 0) {
            uVar4 = 3;
          }
          *(undefined4 *)(param_1 + 0xc0) = uVar4;
        }
        break;
      case 2:
        iVar2 = FUN_089d0bcc(iVar2,0,auStack_50);
        if ((iVar2 != 0) && ((local_4c & 0x4000000) != 0)) {
          *(undefined *)(param_1 + 0xc4) = local_47;
          *(undefined *)(param_1 + 0xc5) = local_46;
          *(undefined *)(param_1 + 0xc6) = local_45;
          *(undefined *)(param_1 + 200) = local_43;
          *(undefined *)(param_1 + 199) = local_44;
          *(undefined *)(param_1 + 0xd8) = *(undefined *)(param_1 + 0xc4);
          *(undefined *)(param_1 + 0xd9) = *(undefined *)(param_1 + 0xc5);
          *(undefined *)(param_1 + 0xda) = *(undefined *)(param_1 + 0xc6);
          *(undefined *)(param_1 + 0xdb) = *(undefined *)(param_1 + 199);
          *(undefined *)(param_1 + 0xdc) = *(undefined *)(param_1 + 200);
          iVar2 = *(int *)(param_1 + 0x10);
          *(undefined *)(param_1 + iVar2 + 0xd8) =
               *(undefined *)(param_1 + iVar2 * 5 + iVar2 + 0xc4);
          *(undefined4 *)(param_1 + 0xc0) = 4;
        }
        break;
      case 3:
        iVar3 = 1;
        bVar1 = false;
        if (1 < *(int *)(param_1 + 0x14)) {
          puVar8 = (undefined *)(param_1 + 0xc9);
          do {
            iVar5 = FUN_089d0bcc(iVar2,iVar3,auStack_50);
            if (iVar5 == 0) {
              iVar5 = *(int *)(param_1 + 0x14);
            }
            else if ((local_4c & 0x4000000) == 0) {
              iVar5 = *(int *)(param_1 + 0x14);
            }
            else {
              *puVar8 = local_47;
              puVar8[1] = local_46;
              puVar8[2] = local_45;
              puVar8[3] = local_44;
              puVar8[4] = local_43;
              bVar1 = true;
              iVar5 = *(int *)(param_1 + 0x14);
            }
            iVar3 = iVar3 + 1;
            puVar8 = puVar8 + 5;
          } while (iVar3 < iVar5);
        }
        if (bVar1) {
          *(undefined *)(param_1 + 0xd8) = *(undefined *)(param_1 + 0xc4);
          *(undefined *)(param_1 + 0xd9) = *(undefined *)(param_1 + 0xc5);
          *(undefined *)(param_1 + 0xda) = *(undefined *)(param_1 + 0xc6);
          *(undefined *)(param_1 + 0xdb) = *(undefined *)(param_1 + 199);
          *(undefined *)(param_1 + 0xdc) = *(undefined *)(param_1 + 200);
          iVar2 = *(int *)(param_1 + 0x14);
          iVar3 = 1;
          iVar5 = param_1 + 5;
          if (1 < iVar2) {
            do {
              iVar6 = iVar5 + iVar3;
              iVar7 = param_1 + iVar3;
              iVar3 = iVar3 + 1;
              *(undefined *)(iVar7 + 0xd8) = *(undefined *)(iVar6 + 0xc4);
              iVar5 = iVar5 + 5;
            } while (iVar3 < iVar2);
          }
          *(undefined4 *)(param_1 + 0xc0) = 4;
        }
        break;
      case 4:
        local_48 = 0;
        local_47 = *(undefined *)(param_1 + 0xd8);
        local_46 = *(undefined *)(param_1 + 0xd9);
        local_45 = *(undefined *)(param_1 + 0xda);
        local_43 = *(undefined *)(param_1 + 0xdc);
        local_44 = *(undefined *)(param_1 + 0xdb);
        iVar2 = FUN_089d0a74(iVar2,auStack_50);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0xc0) = 5;
        }
        break;
      case 5:
        iVar2 = FUN_089d0bcc(iVar2,0,auStack_50);
        if (iVar2 != 0) {
          *(undefined *)(param_1 + 0xd8) = local_47;
          *(undefined *)(param_1 + 0xd9) = local_46;
          *(undefined *)(param_1 + 0xda) = local_45;
          *(undefined *)(param_1 + 0xdb) = local_44;
          *(undefined *)(param_1 + 0xdc) = local_43;
          *(undefined4 *)(param_1 + 0xc0) = 6;
        }
      }
    }
  }
  return;
}

