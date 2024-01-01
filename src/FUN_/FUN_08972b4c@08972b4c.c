#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08972b4c(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined auStack_50 [4];
  uint local_4c;
  undefined auStack_48 [36];
  
  iVar8 = FUN_089bfa40(0x136);
  iVar9 = FUN_0880d354();
  if (iVar9 == 0) {
    uVar12 = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    iVar9 = FUN_0881b22c();
    if (iVar9 != 0) {
      bVar7 = false;
      iVar9 = FUN_0881b22c();
      if (iVar9 != 0) {
        switch(*(undefined4 *)(param_1 + 0x2c)) {
        case 0:
        case 1:
        case 4:
        case 5:
        case 6:
        case 7:
        case 9:
          bVar7 = true;
        }
        if (!bVar7) {
          iVar9 = FUN_089cf8ec(0);
          uVar12 = FUN_0881b254();
          uVar10 = FUN_0881b64c(uVar12);
          if (((uVar10 & 0x2000000) != 0) && (iVar11 = FUN_089d003c(), iVar11 != 0)) {
            bVar7 = true;
          }
          if ((!bVar7) && (iVar9 != 0)) {
            uVar12 = FUN_0881b254();
            iVar11 = FUN_0881b654(uVar12);
            if (iVar11 != 0) {
              bVar7 = *(int *)(iVar8 + 0x2370) == 0;
              iVar11 = FUN_089d0bcc(iVar9,bVar7,auStack_50);
              if ((iVar11 != 0) && ((local_4c & 0x2000000) != 0)) {
                FUN_0899ef98(iVar8,bVar7,auStack_48);
              }
              memset_jak(auStack_50,0,0x28);
              iVar11 = FUN_089d0bcc(iVar9,*(undefined4 *)(iVar8 + 0x2370),auStack_50);
              iVar13 = *(int *)(iVar8 + 0x2370);
              if (iVar11 != 0) {
                FUN_0899ef98(iVar8,iVar13,auStack_48);
                iVar13 = *(int *)(iVar8 + 0x2370);
              }
              *(undefined2 *)(iVar8 + iVar13 * 0x10 + 0x2332) = 0;
            }
            memset_jak(auStack_50,0,0x28);
            local_4c = 0x2000000;
            iVar11 = iVar8 + *(int *)(iVar8 + 0x2370) * 0x10;
            *(undefined *)(iVar11 + 0x233b) = *(undefined *)(param_1 + 0x74);
            *(undefined *)(iVar11 + 0x2338) = *(undefined *)(param_1 + 0xbaa);
            *(undefined *)(iVar11 + 0x2339) = *(undefined *)(param_1 + 0xbab);
            *(undefined *)(iVar11 + 0x233a) = *(undefined *)(param_1 + 0xbac);
            *(short *)(iVar11 + 0x233e) = (short)*(undefined4 *)(param_1 + 0x2c);
            *(undefined *)(iVar11 + 0x233c) = *(undefined *)(param_1 + 0xb88);
            *(undefined *)(iVar11 + 0x233d) = *(undefined *)(param_1 + 0xc20);
            memcpy_jak(auStack_48,iVar11 + 0x2330,0x10);
            FUN_089d0a74(iVar9,auStack_50);
          }
        }
      }
    }
    iVar9 = FUN_0880d2e0();
    if (iVar9 == 0) {
      uVar12 = *(undefined4 *)(param_1 + 0x2c);
    }
    else {
      uVar12 = FUN_0880cc48();
      iVar9 = FUN_0880d7e0(uVar12,0x80);
      if (iVar9 == 0) {
        uVar12 = *(undefined4 *)(param_1 + 0x2c);
      }
      else {
        iVar9 = *(int *)(param_1 + 0x2c);
        if (((iVar9 == 10) || (iVar9 == 8)) || (iVar9 == 2)) {
          iVar9 = FUN_08816a90();
          if (iVar9 == 0) {
            FUN_08816868();
          }
          iVar9 = FUN_08816aac();
          *(undefined4 *)(iVar9 + 0x40) = 1;
          uVar12 = FUN_08816aac();
          FUN_08816c28(uVar12,0,0x1d);
          *(undefined4 *)(param_1 + 0x2c) = 4;
          uVar12 = *(undefined4 *)(param_1 + 0x2c);
        }
        else {
          uVar12 = *(undefined4 *)(param_1 + 0x2c);
        }
      }
    }
  }
  switch(uVar12) {
  case 0:
    FUN_089707c0(param_1);
    FUN_08970868(param_1);
    FUN_08970910(param_1);
    FUN_08970a34(param_1);
    FUN_08970adc(param_1);
    FUN_08970b84(param_1);
    FUN_08970c70(param_1);
    FUN_08970d5c(param_1);
    FUN_08970e04(param_1);
    FUN_08970f34(param_1);
    FUN_08971404(param_1);
    FUN_08970448(param_1,0);
    FUN_08970550(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    uVar10 = FUN_08970608(param_1,0);
    uVar10 = uVar10 & 0xff;
    iVar8 = FUN_089704b8(param_1,0);
    if ((uVar10 + iVar8 & 0xff) == 2) {
      FUN_089720e8(param_1);
      FUN_08971e64(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_08971504(param_1);
    FUN_0897155c(param_1);
    FUN_089716cc(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe8),param_1 + 0x988);
    if (*(int *)(iVar8 + 0x2370) == 0) {
      if ((*(char *)(iVar8 + 0x233c) == '\x01') || (*(char *)(iVar8 + 0x234c) == '\x01')) {
        iVar8 = FUN_089c59d4();
        if (iVar8 != 0) {
          uVar12 = FUN_089c59f0();
          FUN_089c6350(uVar12,2,0,0);
        }
        *(undefined *)(param_1 + 0xb88) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 10;
        *(undefined *)(param_1 + 0xc20) = 0;
      }
      else {
        iVar8 = FUN_08971c74(param_1);
        if (iVar8 == 1) {
          iVar8 = FUN_089c59d4();
          if (iVar8 != 0) {
            uVar12 = FUN_089c59f0();
            FUN_089c6350(uVar12,0,0,0);
          }
          FUN_089720e8(param_1);
          FUN_08971ca8(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 6;
        }
        else if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
          iVar8 = FUN_089717a0(param_1);
          if (iVar8 == 1) {
            iVar8 = FUN_089c59d4();
            if (iVar8 != 0) {
              uVar12 = FUN_089c59f0();
              FUN_089c6350(uVar12,1,0,0);
            }
            FUN_089720e8(param_1);
          }
          else {
            iVar8 = FUN_0897196c(param_1);
            if (iVar8 == 1) {
              iVar8 = FUN_089c59d4();
              if (iVar8 != 0) {
                uVar12 = FUN_089c59f0();
                FUN_089c6350(uVar12,1,0,0);
              }
              FUN_08971b4c(param_1);
              FUN_08971bb0(param_1);
              *(undefined4 *)(param_1 + 0x2c) = 3;
            }
            else {
              iVar8 = FUN_08971910(param_1);
              if (iVar8 == 1) {
                iVar8 = FUN_089c59d4();
                if (iVar8 != 0) {
                  uVar12 = FUN_089c59f0();
                  FUN_089c6350(uVar12,1,0,0);
                }
                FUN_089720e8(param_1);
              }
            }
          }
        }
        else {
          iVar8 = FUN_089c59d4();
          if (iVar8 != 0) {
            uVar12 = FUN_089c59f0();
            FUN_089c6350(uVar12,2,0,0);
          }
          *(undefined *)(param_1 + 0xb88) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 10;
          *(undefined *)(param_1 + 0xc20) = 0;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    break;
  case 3:
    FUN_08971504(param_1);
    iVar8 = FUN_08972410(param_1);
    if (iVar8 == 1) {
      FUN_08971104(param_1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 4:
    FUN_08971e64(param_1,0);
    FUN_08971770(param_1);
    FUN_08970448(param_1,1);
    FUN_08970550(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 5:
    uVar10 = FUN_08970608(param_1,1);
    uVar10 = uVar10 & 0xff;
    iVar8 = FUN_089704b8(param_1,1);
    if ((uVar10 + iVar8 & 0xff) == 2) {
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    break;
  case 6:
    iVar8 = FUN_08971ce4(param_1);
    if (iVar8 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 10;
      *(undefined *)(param_1 + 0xc20) = 0;
    }
    break;
  default:
    FUN_08970414(param_1);
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    break;
  case 8:
    FUN_08971504(param_1);
    FUN_0897155c(param_1);
    FUN_089716cc(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe8),param_1 + 0x988);
    if (*(int *)(iVar8 + 0x2370) != 0) {
      if (*(char *)(iVar8 + 0x234c) == '\x01') {
        if (*(char *)(iVar8 + 0x233c) == '\x01') {
          *(undefined4 *)(param_1 + 0x2c) = 10;
          *(undefined *)(param_1 + 0xc20) = 0;
        }
        if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
          iVar8 = FUN_089c59d4();
          if (iVar8 != 0) {
            uVar12 = FUN_089c59f0();
            FUN_089c6350(uVar12,2,0,0);
          }
          *(undefined *)(param_1 + 0xb88) = 1;
          return;
        }
        cVar1 = *(char *)(param_1 + 0x74);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x74);
      }
      cVar2 = *(char *)(param_1 + 0xbaa);
      cVar3 = *(char *)(param_1 + 0xbab);
      bVar7 = cVar1 == *(char *)(iVar8 + 0x233b);
      cVar1 = *(char *)(param_1 + 0xbac);
      if (!bVar7) {
        *(char *)(param_1 + 0x74) = *(char *)(iVar8 + 0x233b);
      }
      cVar4 = *(char *)(iVar8 + 0x2338);
      if (cVar2 != cVar4) {
        *(bool *)(param_1 + 3000) = cVar2 <= cVar4;
        *(char *)(param_1 + 0xbaa) = *(char *)(iVar8 + 0x2338);
      }
      cVar5 = *(char *)(iVar8 + 0x2339);
      if (cVar3 != cVar5) {
        *(bool *)(param_1 + 3000) = cVar3 <= cVar5;
        *(undefined *)(param_1 + 0xbab) = *(undefined *)(iVar8 + 0x2339);
      }
      cVar6 = *(char *)(iVar8 + 0x233a);
      if (cVar1 != cVar6) {
        *(bool *)(param_1 + 3000) = cVar1 <= cVar6;
        *(undefined *)(param_1 + 0xbac) = *(undefined *)(iVar8 + 0x233a);
      }
      if (cVar1 != cVar6 || (cVar3 != cVar5 || (cVar2 != cVar4 || !bVar7))) {
        iVar8 = FUN_089c59d4();
        if (iVar8 != 0) {
          uVar12 = FUN_089c59f0();
          FUN_089c6350(uVar12,1,0,0);
        }
        if (bVar7) {
          FUN_08971b4c(param_1);
          FUN_08971bb0(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 3;
        }
        else {
          FUN_089720e8(param_1);
        }
      }
      else if (*(short *)(iVar8 + 0x233e) == 10) {
        *(undefined4 *)(param_1 + 0x2c) = 10;
        *(undefined *)(param_1 + 0xc20) = 0;
      }
    }
    break;
  case 9:
    bVar7 = true;
    iVar8 = FUN_08816a90();
    if (iVar8 != 0) {
      bVar7 = false;
      uVar12 = FUN_08816aac();
      iVar8 = FUN_08816e58(uVar12);
      if (iVar8 != 0) {
        bVar7 = true;
      }
    }
    if (bVar7) {
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
    break;
  case 10:
    iVar9 = iVar8 + (1 - *(int *)(iVar8 + 0x2370)) * 0x10;
    bVar7 = *(short *)(iVar9 + 0x233e) == -1;
    if ((*(byte *)(param_1 + 0xc20) & 1) == 0) {
      *(byte *)(param_1 + 0xc20) = *(byte *)(param_1 + 0xc20) | 1;
    }
    else if ((*(byte *)(iVar9 + 0x233d) & 1) != 0) {
      bVar7 = true;
    }
    if (bVar7) {
      if ((*(char *)(iVar8 + 0x233c) == '\x01') || (*(char *)(iVar8 + 0x234c) == '\x01')) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
      else if (*(char *)(iVar8 + 0x233b) == '\x04') {
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
      else {
        FUN_089564e4();
        FUN_0896f7fc(param_1,0);
        FUN_08970f34(param_1);
        FUN_08971404(param_1);
        uVar12 = 8;
        if (*(int *)(iVar8 + 0x2370) == 0) {
          uVar12 = 2;
        }
        *(undefined4 *)(param_1 + 0x2c) = uVar12;
      }
    }
  }
  return;
}

