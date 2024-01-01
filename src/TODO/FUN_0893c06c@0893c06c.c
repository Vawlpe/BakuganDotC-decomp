#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893c06c(int param_1,char param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
  case 2:
  case 4:
  case 7:
  case 8:
  case 9:
    break;
  default:
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    uVar3 = FUN_0880d0ac(uVar2,0x34);
    if ((uVar3 & 1) != 0) {
      iVar4 = 0x17;
      if (param_2 == '\0') {
        iVar6 = *(int *)(param_1 + 0x1c);
        iVar7 = 0x5c;
        do {
          piVar5 = (int *)(iVar6 + iVar7);
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 4;
          *(uint *)(*piVar5 + 0xd0) = *(uint *)(*piVar5 + 0xd0) & 0xfffffffe;
          iVar6 = *(int *)(param_1 + 0x1c);
        } while (iVar4 < 0x1c);
        *(uint *)(*(int *)(iVar6 + 0x78) + 0xd0) =
             *(uint *)(*(int *)(iVar6 + 0x78) + 0xd0) & 0xfffffffe;
      }
      else {
        iVar4 = FUN_088be274();
        iVar4 = *(int *)(iVar4 + 0x658);
        iVar6 = 0;
        iVar7 = 0;
        if (iVar4 != 0) {
          sVar1 = *(short *)(iVar4 + 0x142);
          while( true ) {
            if (sVar1 == 0xbdf) {
              if (*(char *)(iVar4 + 0x15e) == '\0') {
                iVar7 = iVar7 + 1;
              }
              iVar6 = iVar6 + 1;
              iVar4 = *(int *)(iVar4 + 4);
            }
            else {
              iVar4 = *(int *)(iVar4 + 4);
            }
            if (iVar4 == 0) break;
            sVar1 = *(short *)(iVar4 + 0x142);
          }
        }
        FUN_089f4a90((float)((iVar7 / 10) / 6),(float)((iVar7 / 10) % 6),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x5c));
        FUN_089f4a90((float)((iVar7 % 10) / 6),(float)((iVar7 % 10) % 6),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60));
        FUN_089f4a90((float)((iVar6 / 10) / 6),(float)((iVar6 / 10) % 6),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68));
        FUN_089f4a90((float)((iVar6 % 10) / 6),(float)((iVar6 % 10) % 6),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x6c));
        iVar4 = 0x17;
        iVar6 = *(int *)(param_1 + 0x1c);
        iVar7 = 0x5c;
        do {
          *(uint *)(*(int *)(iVar6 + iVar7) + 0xd0) = *(uint *)(*(int *)(iVar6 + iVar7) + 0xd0) | 1;
          iVar4 = iVar4 + 1;
          piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
          iVar7 = iVar7 + 4;
          *(undefined4 *)(*piVar5 + 0xbc) = 0x3f800000;
          iVar6 = *(int *)(param_1 + 0x1c);
        } while (iVar4 < 0x1c);
        *(uint *)(*(int *)(iVar6 + 0x78) + 0xd0) = *(uint *)(*(int *)(iVar6 + 0x78) + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x78) + 0xbc) = 0x3f800000;
      }
    }
  }
  return;
}

