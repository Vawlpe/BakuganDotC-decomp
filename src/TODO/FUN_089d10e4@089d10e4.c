#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089d10e4(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,undefined4 *param_6
            ,undefined4 *param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  
  pcVar7 = *(char **)(param_1 + 0xf8);
  if (pcVar7 != (char *)0x0) {
    uVar8 = *(uint *)(param_1 + 0xfc) / 0x2c;
    iVar2 = FUN_089cf8ec(0);
    iVar3 = 0;
    if ((iVar2 != 0) && (uVar8 != 0)) {
      do {
        bVar1 = true;
        iVar4 = 0;
        pcVar5 = pcVar7;
        do {
          pcVar6 = (char *)(iVar2 + 0x38 + iVar4);
          iVar4 = iVar4 + 1;
          if (*pcVar5 != *pcVar6) {
            bVar1 = false;
            break;
          }
          pcVar5 = pcVar7 + iVar4;
        } while (iVar4 < 6);
        iVar3 = iVar3 + 1;
        if (bVar1) {
          if (param_2 != (uint *)0x0) {
            *param_2 = (uint)(byte)pcVar7[0xc];
          }
          if (param_3 != (uint *)0x0) {
            *param_3 = (uint)(byte)pcVar7[0xd];
          }
          if (param_4 != (uint *)0x0) {
            *param_4 = (uint)(byte)pcVar7[0xe];
          }
          if (param_5 != (uint *)0x0) {
            *param_5 = (uint)(byte)pcVar7[0xf];
          }
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = *(undefined4 *)(pcVar7 + 8);
          }
          if (param_7 != (undefined4 *)0x0) {
            *param_7 = *(undefined4 *)(pcVar7 + 0x30);
          }
          return 1;
        }
        pcVar7 = pcVar7 + 0x34;
      } while (iVar3 < (int)uVar8);
    }
  }
  return 0;
}

