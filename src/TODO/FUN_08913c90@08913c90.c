#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08913c90(int param_1,undefined param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  
  cVar7 = '\0';
  iVar4 = 0x2b;
  iVar6 = 0xac;
  iVar5 = param_1 + 0x724;
  do {
    if ((iVar4 != 0x32) && (iVar4 != 0x35)) {
      uVar2 = 1;
      if (iVar4 == 0x2b) {
LAB_08913d40:
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else if (iVar4 == 0x32) {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else if (iVar4 == 0x33) {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else if (iVar4 == 0x34) {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else {
        if (iVar4 != 0x35) {
          uVar2 = 9;
          goto LAB_08913d40;
        }
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,*(undefined4 *)(iVar3 + iVar6),
                           iVar5,uVar2);
      cVar7 = cVar7 + cVar1;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 0x28;
    if (0x65 < iVar4) {
      return cVar7 != '\0';
    }
  } while( true );
}

