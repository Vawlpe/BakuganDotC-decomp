#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089fbfa0(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar9 = 1;
  uVar3 = FUN_089fba48();
  switch(uVar3) {
  case 0:
  case 1:
    iVar5 = FUN_089fbb30(param_1,0x100);
    if (iVar5 == 0) {
      iVar5 = FUN_089fbb30(param_1,2);
      if (iVar5 == 0) {
        iVar5 = FUN_089fbb30(param_1,1);
        if (iVar5 == 0) {
          iVar5 = FUN_089fbb30(param_1,0x40);
          if (iVar5 == 0) {
            iVar5 = FUN_089fbb30(param_1,4);
            if (iVar5 != 0) {
              uVar3 = FUN_089f9468();
              iVar5 = FUN_089f9754(uVar3,*(undefined4 *)(param_1 + 0x28),
                                   *(undefined4 *)(param_1 + 0x40),1);
              if (iVar5 != 0) {
                iVar5 = FUN_089fbb30(param_1,0x20);
                if (iVar5 != 0) {
                  uVar3 = FUN_089f9468();
                  FUN_089f9ac8(uVar3,1);
                }
                uVar3 = FUN_089f9468();
                FUN_089f9b6c(uVar3,*(undefined4 *)(param_1 + 0x58));
                FUN_089fba08(param_1,5);
                *(undefined4 *)(param_1 + 0x44) = 0;
              }
            }
          }
          else {
            uVar3 = FUN_089f9468();
            iVar5 = FUN_089f99a4(uVar3,*(undefined4 *)(param_1 + 0x28));
            if (iVar5 != 0) {
              FUN_089fba08(param_1,3);
            }
          }
        }
        else {
          uVar3 = FUN_089f9468();
          iVar5 = FUN_089f9884(uVar3,*(undefined4 *)(param_1 + 0x28));
          if (iVar5 != 0) {
            FUN_089fba08(param_1,2);
          }
        }
      }
      else {
        iVar5 = FUN_089f944c();
        if (iVar5 != 0) {
          iVar5 = FUN_089fbb30(param_1,0x80000010);
          if (iVar5 == 0) {
            iVar5 = FUN_089fbb30(param_1,10);
            if (iVar5 == 0) {
              uVar3 = FUN_089f9468();
              iVar5 = FUN_089f9754(uVar3,*(undefined4 *)(param_1 + 0x28),
                                   *(undefined4 *)(param_1 + 0x3c),0);
              if (iVar5 != 0) {
                FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
                *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
                FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
                iVar5 = FUN_089fbb30(param_1,0x20);
                if (iVar5 != 0) {
                  uVar3 = FUN_089f9468();
                  FUN_089f9ac8(uVar3,1);
                }
                uVar3 = FUN_089f9468();
                FUN_089f9b6c(uVar3,*(undefined4 *)(param_1 + 0x58));
                iVar5 = FUN_089fbb30(param_1,0x80);
                if (iVar5 != 0) {
                  uVar3 = FUN_089f9468(param_1);
                  FUN_089f9bac(uVar3,1);
                }
                FUN_089fba08(param_1,4);
              }
            }
            else {
              uVar3 = FUN_089f9468();
              iVar5 = FUN_089f9754(uVar3,*(undefined4 *)(param_1 + 0x28),
                                   *(undefined4 *)(param_1 + 0x40),1);
              if (iVar5 != 0) {
                FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
                *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
                FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
                iVar5 = FUN_089fbb30(param_1,0x20);
                if (iVar5 != 0) {
                  uVar3 = FUN_089f9468();
                  FUN_089f9ac8(uVar3,1);
                }
                uVar3 = FUN_089f9468();
                FUN_089f9b6c(uVar3,*(undefined4 *)(param_1 + 0x58));
                iVar5 = FUN_089fbb30(param_1,0x80);
                if (iVar5 != 0) {
                  uVar3 = FUN_089f9468(param_1);
                  FUN_089f9bac(uVar3,1);
                }
                FUN_089fba08(param_1,8);
              }
            }
          }
          iVar5 = FUN_089fbb30(param_1,1);
          if (iVar5 != 0) {
            FUN_089fbb8c(param_1,1);
          }
        }
      }
    }
    else {
      FUN_089fba08(param_1,9);
      FUN_089fbb8c(param_1,0x100);
    }
    break;
  case 2:
    uVar3 = FUN_089f9468();
    iVar5 = FUN_089f9dd4(uVar3);
    if (iVar5 != 0) {
      uVar3 = FUN_089f9468();
      FUN_089f9e2c(uVar3);
      FUN_089fbb8c(param_1,1);
      FUN_089fba08(param_1,0);
      *(undefined *)(param_1 + 0x38) = 1;
      uVar9 = 0;
    }
    break;
  case 3:
    uVar3 = FUN_089f9468();
    iVar5 = FUN_089f9dd4(uVar3);
    if (iVar5 != 0) {
      uVar3 = FUN_089f9468();
      uVar3 = FUN_089f9eb8(uVar3);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      uVar3 = FUN_089f9468();
      uVar3 = FUN_089f9ef0(uVar3);
      *(undefined4 *)(param_1 + 0x44) = uVar3;
      uVar3 = FUN_089f9468();
      FUN_089f9e2c(uVar3);
      FUN_089fbb8c(param_1,0x40);
      FUN_089fba08(param_1,0);
      *(undefined *)(param_1 + 0x38) = 1;
      uVar9 = 0;
    }
    break;
  case 4:
    uVar3 = FUN_089f9468();
    iVar5 = FUN_089fa070(uVar3,0);
    if (iVar5 == 0) {
      uVar3 = FUN_089f9468();
      iVar5 = FUN_089f9dd4(uVar3);
      if (iVar5 != 0) {
        uVar3 = FUN_089f9468();
        uVar3 = FUN_089f9e80(uVar3);
        uVar10 = FUN_089f9468();
        uVar10 = FUN_089f9eb8(uVar10);
        uVar4 = FUN_089f9468();
        uVar4 = FUN_089f9b10(uVar4);
        *(undefined4 *)(param_1 + 0x5c) = uVar4;
        uVar4 = FUN_089f9468();
        FUN_089f9e2c(uVar4);
        FUN_089fbb8c(param_1,2);
        iVar5 = FUN_089fbb30(param_1,0x20);
        if (iVar5 != 0) {
          FUN_089fbb8c(param_1,0x20);
        }
        if (*(int *)(param_1 + 0x5c) == 0) {
          FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
          FUN_089fba08(param_1,9);
          FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
          uVar3 = *(undefined4 *)(param_1 + 0x4c);
        }
        else {
          iVar5 = FUN_089fbb30(param_1,8);
          if (iVar5 == 0) {
            FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
            *(undefined4 *)(param_1 + 0x3c) = uVar3;
            *(undefined4 *)(param_1 + 0x44) = uVar10;
            FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
            FUN_089fba08(param_1,9);
            uVar3 = *(undefined4 *)(param_1 + 0x4c);
          }
          else {
            FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
            *(undefined4 *)(param_1 + 0x40) = uVar3;
            *(undefined4 *)(param_1 + 0x48) = uVar10;
            uVar4 = FUN_089fe17c();
            uVar3 = FUN_089fe2bc(uVar4,uVar3,uVar10,0,0);
            *(undefined4 *)(param_1 + 0x54) = uVar3;
            FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
            uVar3 = FUN_089fe17c();
            FUN_089d9174(uVar3,*(undefined4 *)(param_1 + 0x54));
            FUN_089bbf78(3);
            FUN_089fba08(param_1,6);
            uVar3 = *(undefined4 *)(param_1 + 0x4c);
          }
        }
        FUN_089bb728(uVar3);
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
        FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
      }
    }
    else {
      uVar3 = FUN_089f9468();
      FUN_089fa0e4(uVar3);
      uVar3 = FUN_089f9468();
      iVar5 = FUN_089fa070(uVar3,1);
      if (iVar5 == 0) {
        uVar3 = FUN_089f9468();
        FUN_089fa164(uVar3);
      }
    }
    break;
  case 5:
    uVar3 = FUN_089f9468();
    iVar5 = FUN_089fa070(uVar3,0);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      uVar3 = FUN_089f9468();
      FUN_089f9f98(uVar3,0xffffffff);
      uVar3 = FUN_089f9468();
      FUN_089fa0e4(uVar3);
      uVar3 = FUN_089f9468();
      iVar5 = FUN_089fa070(uVar3,1);
      if (iVar5 != 0) {
        return 1;
      }
      uVar3 = FUN_089f9468();
      FUN_089fa164(uVar3);
      return 1;
    }
    bVar1 = true;
    iVar5 = FUN_089fbb30(param_1,0x80000000);
    if (iVar5 != 0) {
      uVar3 = FUN_089f9468();
      iVar5 = FUN_089f9dd4(uVar3);
      if (iVar5 == 0) {
        uVar3 = FUN_089f9468();
        iVar5 = FUN_089f9bec(uVar3);
        if (iVar5 != 0) {
          uVar3 = FUN_089f9468();
          FUN_089f9c3c(uVar3);
        }
      }
      else {
        bVar1 = false;
      }
      uVar3 = FUN_089f9468();
      iVar5 = FUN_089f9f28(uVar3);
      if (iVar5 != 0) {
        uVar3 = FUN_089f9468();
        FUN_089f9f98(uVar3,1);
        bVar1 = true;
      }
      if (bVar1) {
        return 1;
      }
      uVar3 = FUN_089f9468();
      FUN_089f9e2c(uVar3);
      FUN_089fbb8c(param_1,4);
      FUN_089fbb8c(param_1,0x80000000);
      FUN_089fba08(param_1,0);
      return 1;
    }
    uVar3 = FUN_089f9468();
    iVar5 = FUN_089f9b10(uVar3);
    *(int *)(param_1 + 0x5c) = iVar5;
    if (iVar5 == 0) {
      iVar5 = FUN_089fbb30(param_1,0x20);
      if (iVar5 != 0) {
        FUN_089fbb8c(param_1,0x20);
      }
      uVar3 = FUN_089f9468();
      FUN_089f9e2c(uVar3);
      FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
      FUN_089fba08(param_1,9);
      FUN_089fbb8c(param_1,4);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 4;
      FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
      return 1;
    }
    uVar3 = FUN_089f9468();
    iVar5 = FUN_089f9dd4(uVar3);
    if (iVar5 == 0) {
      uVar3 = FUN_089f9468(param_1);
      iVar5 = FUN_089f9bec(uVar3);
      if (iVar5 != 0) {
        uVar3 = FUN_089f9468();
        FUN_089f9c3c(uVar3);
      }
    }
    else {
      iVar5 = FUN_089fbb30(param_1,0x20);
      if (iVar5 != 0) {
        FUN_089fbb8c(param_1,0x20);
      }
      bVar1 = false;
    }
    uVar3 = FUN_089f9468();
    iVar5 = FUN_089f9f28(uVar3);
    if (iVar5 != 0) {
      FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
      iVar7 = *(int *)(param_1 + 0x3c);
      if ((iVar7 == 0) || (iVar7 == 1)) {
        uVar3 = FUN_089f9468();
        uVar3 = FUN_089f9eb8(uVar3);
        iVar7 = *(int *)(param_1 + 0x3c);
        FUN_089d8634();
        uVar10 = FUN_089d81a4();
        FUN_089d816c(iVar7 != 0);
        iVar7 = FUN_089d7d74(uVar3,0,0);
        FUN_089d816c(uVar10);
        FUN_089d866c();
        *(int *)(param_1 + 0x3c) = iVar7;
        *(undefined *)(param_1 + 0x39) = 1;
        iVar8 = *(int *)(param_1 + 0x44);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x44);
      }
      uVar3 = *(undefined4 *)(iVar5 + 0x24);
      iVar5 = *(int *)(iVar5 + 0x28);
      bVar2 = true;
      if (iVar5 < 1) {
LAB_089fc8a0:
        iVar7 = *(int *)(param_1 + 0x44);
      }
      else {
        uVar10 = DONE_GetPtr_DAT_08AC51F8();
        iVar7 = FUN_089bcd4c(uVar10,iVar7 + iVar8,uVar3,iVar5,*(undefined4 *)(param_1 + 0x4c));
        if (iVar7 == 0) {
          bVar2 = false;
          iVar5 = 0;
          goto LAB_089fc8a0;
        }
        iVar7 = *(int *)(param_1 + 0x44);
      }
      *(int *)(param_1 + 0x44) = iVar7 + iVar5;
      FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
      bVar1 = true;
      if (bVar2) {
        uVar3 = FUN_089f9468();
        FUN_089f9f98(uVar3,1);
        bVar1 = true;
      }
    }
    if (!bVar1) {
      uVar3 = FUN_089f9468();
      FUN_089f9e2c(uVar3);
      FUN_089fbb8c(param_1,4);
      FUN_089fba08(param_1,9);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 4;
    }
    break;
  case 6:
    iVar5 = FUN_089fdedc(*(undefined4 *)(param_1 + 0x54));
    if (iVar5 != 0) {
      uVar3 = FUN_089fdf88(*(undefined4 *)(param_1 + 0x54));
      uVar10 = FUN_089fdfc0(*(undefined4 *)(param_1 + 0x54));
      FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
      FUN_089fdf14(*(undefined4 *)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      *(undefined4 *)(param_1 + 0x44) = uVar10;
      FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
      FUN_089fbb8c(param_1,8);
      FUN_089fba08(param_1,9);
      FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 8;
      FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
    }
    break;
  case 8:
    uVar3 = FUN_089f9468();
    iVar5 = FUN_089fa070(uVar3,0);
    if (iVar5 == 0) {
      bVar1 = true;
      uVar3 = FUN_089f9468();
      iVar5 = FUN_089f9dd4(uVar3);
      if (iVar5 == 0) {
        uVar3 = FUN_089f9468();
        iVar5 = FUN_089f9bec(uVar3);
        if (iVar5 != 0) {
          uVar3 = FUN_089f9468();
          FUN_089f9c3c(uVar3);
        }
      }
      else {
        bVar1 = false;
      }
      uVar3 = FUN_089f9468();
      iVar5 = FUN_089f9f28(uVar3);
      if (*(int *)(param_1 + 0x54) == 0) {
        if (iVar5 != 0) {
          bVar1 = true;
          FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar5 + 0x24);
          *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar5 + 0x28);
          uVar3 = FUN_089be500(*(undefined4 *)(param_1 + 0x40));
          *(undefined4 *)(param_1 + 0x44) = uVar3;
          uVar6 = FUN_089d7d58();
          if (uVar6 < *(uint *)(param_1 + 0x44)) {
            bVar1 = false;
            if (DAT_08ac61e4 != *(int *)(param_1 + 0x40)) {
              uVar10 = *(undefined4 *)(param_1 + 0x44);
              DAT_08ac61e4 = *(int *)(param_1 + 0x40);
              uVar3 = FUN_089d7d58();
              FUN_089b4c24(&DAT_08aa3e5c,uVar10,uVar3);
              uVar3 = FUN_089fb9d0(param_1);
              FUN_089b4c24(" ==> <%s>\n",uVar3);
              bVar1 = false;
            }
          }
          if (bVar1) {
            uVar3 = FUN_089fe17c();
            uVar3 = FUN_089fe2bc(uVar3,*(undefined4 *)(param_1 + 0x40),
                                 *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x3c),1);
            *(undefined4 *)(param_1 + 0x54) = uVar3;
            FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
            uVar3 = FUN_089fe17c();
            FUN_089d9174(uVar3,*(undefined4 *)(param_1 + 0x54));
            FUN_089fde5c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x48),
                         *(undefined4 *)(param_1 + 0x40));
          }
          else {
            FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
          }
          bVar1 = true;
        }
      }
      else {
        iVar7 = FUN_089fdedc();
        if (iVar7 == 0) {
          bVar1 = true;
          iVar7 = FUN_089fde24(*(undefined4 *)(param_1 + 0x54));
          if ((iVar7 != 0) && (iVar5 != 0)) {
            if (*(int *)(param_1 + 0x40) == *(int *)(iVar5 + 0x24)) {
              *(undefined4 *)(param_1 + 0x40) = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
              uVar3 = FUN_089f9468();
              FUN_089f9f98(uVar3,1);
              uVar3 = FUN_089f9468();
              iVar5 = FUN_089f9f28(uVar3);
            }
            if (iVar5 != 0) {
              FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
              *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar5 + 0x24);
              *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar5 + 0x28);
              FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
              FUN_089fde5c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x48),
                           *(undefined4 *)(param_1 + 0x40));
            }
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          uVar3 = FUN_089f9468();
          FUN_089f9f98(uVar3,1);
        }
      }
      if (!bVar1) {
        uVar3 = FUN_089f9468();
        FUN_089f9e2c(uVar3);
        FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
        if (*(int *)(param_1 + 0x54) == 0) {
          uVar3 = *(undefined4 *)(param_1 + 0x4c);
        }
        else {
          uVar3 = FUN_089fdf88();
          *(undefined4 *)(param_1 + 0x3c) = uVar3;
          FUN_089fdf14(*(undefined4 *)(param_1 + 0x54));
          uVar3 = *(undefined4 *)(param_1 + 0x4c);
        }
        *(undefined4 *)(param_1 + 0x54) = 0;
        FUN_089bb790(uVar3);
        FUN_089fbb8c(param_1,10);
        FUN_089fba08(param_1,9);
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 10;
      }
    }
    else if (*(int *)(param_1 + 0x54) == 0) {
      FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x44) = 0;
      FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
      uVar3 = FUN_089f9468();
      FUN_089f9f98(uVar3,0xffffffff);
      uVar3 = FUN_089f9468();
      FUN_089fa0e4(uVar3);
      uVar3 = FUN_089f9468();
      iVar5 = FUN_089fa070(uVar3,1);
      if (iVar5 == 0) {
        uVar3 = FUN_089f9468();
        FUN_089fa164(uVar3);
      }
    }
    else {
      FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
      iVar5 = FUN_089fde24(*(undefined4 *)(param_1 + 0x54));
      if ((iVar5 != 0) || (iVar5 = FUN_089fdedc(*(undefined4 *)(param_1 + 0x54)), iVar5 != 0)) {
        uVar3 = FUN_089fdf88(*(undefined4 *)(param_1 + 0x54));
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
        FUN_089fdf14(*(undefined4 *)(param_1 + 0x54));
        iVar5 = *(int *)(param_1 + 0x3c);
        *(undefined4 *)(param_1 + 0x54) = 0;
        if (iVar5 != 0) {
          FUN_089d8634();
          FUN_089d7fd8(iVar5,0,0);
          FUN_089d866c();
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
        uVar3 = FUN_089f9468();
        FUN_089f9f98(uVar3,1);
      }
      FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
    }
    break;
  case 9:
    *(undefined *)(param_1 + 0x38) = 1;
    uVar9 = 0;
  }
  return uVar9;
}

