#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08942a58(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined uVar10;
  int iVar11;
  uint uVar12;
  undefined auStack_d0 [33];
  byte local_af;
  uint local_a8;
  char local_a4;
  char local_a3;
  char local_a2;
  char local_a1;
  char local_a0;
  char local_9f;
  undefined auStack_9c [40];
  uint local_74;
  char local_70;
  char local_6f;
  char local_6e;
  char local_6d;
  char local_6c;
  char local_6b;
  undefined auStack_68 [40];
  uint local_40;
  char local_3c;
  char local_3b;
  char local_3a;
  char local_39;
  char local_38;
  char local_37;
  undefined local_2a;
  
  uVar10 = 0;
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 1:
    iVar7 = FUN_08941a88(param_1,0);
    iVar8 = FUN_08941aa0(param_1,0);
    if (iVar8 != 0 && iVar7 != 0) {
      uVar6 = DONE_GetPtr_DAT_08AB0300();
      iVar7 = FUN_0881bb94(uVar6);
      if (iVar7 != 0) {
        *(undefined4 *)(param_1 + 0x80) = 0;
        FUN_089ed6a0(*(undefined4 *)(param_1 + 0x98),1);
        *(undefined4 *)(param_1 + 0x2c) = 2;
        FUN_08941f80(param_1,1,1,1,1);
      }
    }
    break;
  case 2:
    iVar7 = FUN_08943aec();
    if (iVar7 == 0) {
      bVar1 = false;
      iVar7 = FUN_0881b22c(param_1);
      if (iVar7 == 0) {
        bVar1 = true;
      }
      else if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar7 = DONE_NotZero_DAT_08AAC9E0();
        if (iVar7 != 0) {
          uVar6 = DONE_Get_DAT_08AAC9E0();
          iVar7 = FUN_0880d7e0(uVar6,0x80);
          if (iVar7 != 0) {
            bVar1 = true;
          }
        }
      }
      else {
        iVar7 = DONE_NotZero_DAT_08AC5874();
        if (iVar7 != 0) {
          uVar6 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar6,2,0,0);
        }
        iVar7 = FUN_08816a90();
        if (iVar7 == 0) {
          FUN_08816868();
        }
        iVar7 = FUN_08816aac();
        *(undefined4 *)(iVar7 + 0x40) = 0;
        uVar6 = FUN_08816aac();
        FUN_08816c28(uVar6,1,0x12);
        *(undefined4 *)(param_1 + 0x2c) = 0xc;
      }
      if (bVar1) {
        *(undefined4 *)(param_1 + 0x2c) = 0x10;
        FUN_089ed6a0(*(undefined4 *)(param_1 + 0x98),0);
        FUN_08941a90(param_1,1);
        FUN_08941c2c(param_1,1);
        iVar7 = FUN_0881b22c();
        if (iVar7 != 0) {
          uVar6 = DONE_GetPtr_DAT_08AB0300(param_1);
          FUN_0881bbd8(uVar6);
        }
      }
      else {
        iVar7 = 0;
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        iVar8 = FUN_0881b278(uVar6);
        iVar9 = *(int *)(param_1 + 0x20);
        if ((*(byte *)(iVar9 + 5) & 0x40) == 0) {
          if ((*(byte *)(iVar9 + 8) & 0x10) == 0) {
            if ((*(byte *)(iVar9 + 8) & 0x40) != 0) {
              iVar7 = 1;
            }
          }
          else {
            iVar7 = -1;
          }
        }
        else {
          local_2a = 0;
          bVar3 = false;
          bVar2 = false;
          bVar1 = false;
          uVar6 = DONE_GetPtr_DAT_08AB0300();
          iVar9 = FUN_0881b280(uVar6,*(undefined4 *)(param_1 + 0x80));
          uVar12 = 0xffffffff;
          if (iVar9 != 0) {
            iVar11 = 1;
            do {
              iVar5 = FUN_089cf7d0(auStack_d0,iVar11);
              if (iVar5 == 0) break;
              if ((((local_a4 == *(char *)(iVar9 + 0x19)) && (local_a3 == *(char *)(iVar9 + 0x1a)))
                  && (local_a2 == *(char *)(iVar9 + 0x1b))) &&
                 (((local_a1 == *(char *)(iVar9 + 0x1c) && (local_a0 == *(char *)(iVar9 + 0x1d))) &&
                  (local_9f == *(char *)(iVar9 + 0x1e))))) {
                uVar12 = (uint)local_af;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < 0x10);
            uVar10 = local_2a;
            if ((int)uVar12 < 2) {
              if ((-1 < (int)uVar12) && ((local_a8 & 1) != 0)) {
                bVar1 = true;
              }
            }
            else {
              bVar2 = true;
            }
          }
          if (bVar1) {
            iVar9 = DONE_NotZero_DAT_08AC5874();
            if (iVar9 != 0) {
              uVar6 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar6,3,0,0);
            }
            *(undefined4 *)(param_1 + 0x2c) = 6;
            iVar9 = FUN_0881b22c();
            if (iVar9 != 0) {
              uVar6 = DONE_GetPtr_DAT_08AB0300();
              FUN_0881b26c(uVar6,4);
              uVar6 = DONE_GetPtr_DAT_08AB0300();
              FUN_0881b374(uVar6);
            }
          }
          else if (bVar2) {
            iVar9 = DONE_NotZero_DAT_08AC5874();
            if (iVar9 != 0) {
              uVar6 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar6,3,0,0);
            }
            iVar9 = FUN_08816a90();
            if (iVar9 == 0) {
              FUN_08816868();
            }
            iVar9 = FUN_08816aac();
            *(undefined4 *)(iVar9 + 0x40) = 1;
            uVar6 = FUN_08816aac();
            FUN_08816c28(uVar6,0,0x15);
            *(undefined4 *)(param_1 + 0x2c) = 0xe;
          }
          else {
            if ((0 < iVar8) && (*(int *)(param_1 + 0x80) < iVar8)) {
              bVar3 = true;
            }
            if (bVar3) {
              iVar9 = DONE_NotZero_DAT_08AC5874();
              if (iVar9 != 0) {
                uVar6 = DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar6,0,0,0);
              }
              uVar10 = 1;
              uVar6 = DONE_GetPtr_DAT_08AB0300();
              FUN_0881b2ac(uVar6,*(undefined4 *)(param_1 + 0x80));
              FUN_08941a90(param_1,1);
              *(undefined4 *)(param_1 + 0x2c) = 3;
            }
            else {
              iVar9 = DONE_NotZero_DAT_08AC5874();
              if (iVar9 != 0) {
                uVar6 = DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar6,3,0,0);
              }
            }
          }
        }
        if (iVar7 == 0) {
          iVar7 = *(int *)(param_1 + 0x80);
        }
        else {
          uVar10 = 1;
          iVar7 = iVar7 + *(int *)(param_1 + 0x80);
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          if (iVar8 + -1 < iVar7) {
            iVar7 = iVar8 + -1;
          }
          if (*(int *)(param_1 + 0x80) == iVar7) {
            iVar7 = DONE_NotZero_DAT_08AC5874();
            if (iVar7 == 0) {
              iVar7 = *(int *)(param_1 + 0x80);
            }
            else {
              uVar6 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar6,3,0,0);
              iVar7 = *(int *)(param_1 + 0x80);
            }
          }
          else {
            *(int *)(param_1 + 0x80) = iVar7;
            iVar7 = DONE_NotZero_DAT_08AC5874();
            if (iVar7 == 0) {
              iVar7 = *(int *)(param_1 + 0x80);
            }
            else {
              uVar6 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar6,1,0,0);
              iVar7 = *(int *)(param_1 + 0x80);
            }
          }
        }
        if (iVar8 <= iVar7) {
          iVar7 = iVar8 + -1;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          *(int *)(param_1 + 0x80) = iVar7;
          uVar10 = 1;
        }
        iVar8 = 0;
        if (-1 < iVar7) {
          iVar8 = iVar7;
        }
        *(int *)(param_1 + 0x80) = iVar8;
      }
    }
    FUN_08941f80(param_1,1,1,1,uVar10);
    break;
  case 3:
    FUN_08941f80(param_1,0,0,0,0);
    iVar7 = FUN_08941a90(param_1,0);
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 5;
      iVar7 = FUN_089bfa40(1999);
      if (iVar7 != 0) {
        FUN_0894e6cc(iVar7,5);
      }
      *(undefined4 *)(param_1 + 0x6c) = 0x96;
    }
    break;
  case 4:
    iVar7 = FUN_08941a88(param_1,0);
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    break;
  case 5:
    bVar2 = false;
    bVar1 = false;
    FUN_089a5c54(1,1);
    iVar7 = FUN_0881b22c();
    if (iVar7 == 0) {
      uVar6 = DONE_Get_DAT_08AAC9E0();
      FUN_0880d0e8(uVar6,0x80);
      bVar2 = true;
    }
    else if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
      uVar6 = DONE_GetPtr_DAT_08AB0300();
      iVar7 = FUN_0881b264(uVar6);
      if (iVar7 < 6) {
        if (iVar7 < 5) {
          iVar7 = *(int *)(param_1 + 0x6c);
          goto LAB_089431d0;
        }
        bVar3 = true;
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        iVar7 = FUN_0881b35c(uVar6);
        iVar8 = 1;
        if (iVar7 != 0) {
          do {
            iVar9 = FUN_089cf7d0(auStack_9c,iVar8);
            if ((((iVar9 != 0) && (local_70 == *(char *)(iVar7 + 0x19))) &&
                (local_6f == *(char *)(iVar7 + 0x1a))) &&
               (((local_6e == *(char *)(iVar7 + 0x1b) && (local_6d == *(char *)(iVar7 + 0x1c))) &&
                ((local_6c == *(char *)(iVar7 + 0x1d) && (local_6b == *(char *)(iVar7 + 0x1e)))))))
            {
              bVar3 = false;
              break;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x10);
          if ((!bVar3) && ((local_74 & 1) != 0)) {
            bVar1 = true;
          }
        }
        if (bVar3) {
          if (*(int *)(param_1 + 0x6c) < 1) {
            bVar1 = true;
          }
          else {
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x6c) = 0x96;
        }
      }
      else if (iVar7 < 7) {
        *(undefined4 *)(param_1 + 0x2c) = 0xf;
        FUN_089ed6a0(*(undefined4 *)(param_1 + 0x98),0);
        FUN_08941a90(param_1,1);
        FUN_08941c2c(param_1,1);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x6c);
LAB_089431d0:
        if (iVar7 < 1) {
          bVar1 = true;
        }
        else {
          *(int *)(param_1 + 0x6c) = iVar7 + -1;
        }
      }
    }
    else {
      iVar7 = FUN_08816a90();
      if (iVar7 == 0) {
        FUN_08816868();
      }
      iVar7 = FUN_08816aac();
      *(undefined4 *)(iVar7 + 0x40) = 0;
      uVar6 = FUN_08816aac();
      FUN_08816c28(uVar6,1,0x11);
      *(undefined4 *)(param_1 + 0x2c) = 0xd;
      *(undefined4 *)(param_1 + 0x6c) = 0x96;
    }
    if (bVar1) {
      iVar7 = FUN_08816a90();
      if (iVar7 == 0) {
        FUN_08816868();
      }
      iVar7 = FUN_08816aac();
      *(undefined4 *)(iVar7 + 0x40) = 1;
      uVar6 = FUN_08816aac();
      FUN_08816c28(uVar6,0,0x1c);
      *(undefined4 *)(param_1 + 0x2c) = 7;
      iVar7 = FUN_0881b22c();
      if (iVar7 != 0) {
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        FUN_0881b26c(uVar6,4);
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        FUN_0881b374(uVar6);
      }
    }
    else if (bVar2) {
      iVar7 = FUN_0881b22c();
      if (iVar7 != 0) {
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        FUN_0881b374(uVar6);
      }
      *(undefined4 *)(param_1 + 0x2c) = 9;
      iVar7 = FUN_089bfa40(1999);
      if (iVar7 != 0) {
        FUN_0894e6cc(iVar7,3);
      }
    }
    else {
      FUN_08941f80(param_1,1,0,0,0);
    }
    break;
  case 6:
    bVar1 = true;
    iVar7 = FUN_08816a90();
    if (iVar7 != 0) {
      bVar1 = false;
      uVar6 = FUN_08816aac();
      iVar7 = FUN_08816e58(uVar6);
      if (iVar7 != 0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      iVar7 = FUN_08816a90();
      if (iVar7 == 0) {
        FUN_08816868();
      }
      iVar7 = FUN_08816aac();
      *(undefined4 *)(iVar7 + 0x40) = 1;
      uVar6 = FUN_08816aac();
      FUN_08816c28(uVar6,0,0x1c);
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    break;
  case 7:
    bVar1 = true;
    iVar7 = FUN_08816a90();
    if (iVar7 != 0) {
      bVar1 = false;
      uVar6 = FUN_08816aac();
      iVar7 = FUN_08816e58(uVar6);
      if (iVar7 != 0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      iVar7 = FUN_089bfa40(1999);
      if (iVar7 != 0) {
        FUN_0894e6cc(iVar7,3);
      }
      *(undefined4 *)(param_1 + 0x2c) = 9;
    }
    break;
  default:
    FUN_08941a80(param_1,0x15);
    FUN_08941a88(param_1,1);
    FUN_08941a98(param_1,0);
    FUN_08941aa0(param_1,1);
    FUN_0881b018();
    *(undefined4 *)(param_1 + 0x2c) = 1;
    break;
  case 9:
    iVar7 = FUN_08941a90(param_1,0);
    if (iVar7 != 0) {
      FUN_08941f80(param_1,0,0,0,0);
      FUN_08941a80(param_1,0x15);
      FUN_08941a88(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 10;
    }
    break;
  case 10:
    iVar7 = FUN_08941a88(param_1,0);
    if (iVar7 != 0) {
      FUN_08941f80(param_1,1,1,1,1);
      FUN_089a5c54(0,1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 0xc:
    bVar1 = true;
    bVar2 = true;
    iVar7 = FUN_08816a90();
    if (iVar7 != 0) {
      bVar2 = false;
      uVar6 = FUN_08816aac();
      iVar7 = FUN_08816e58(uVar6);
      if (iVar7 == 0) {
        bVar1 = false;
        iVar7 = DONE_NotZero_DAT_08AAC9E0();
        if (iVar7 != 0) {
          uVar6 = DONE_Get_DAT_08AAC9E0();
          iVar7 = FUN_0880d7e0(uVar6,0x80);
          if (iVar7 != 0) {
            uVar6 = FUN_08816aac();
            FUN_08816e48(uVar6);
          }
        }
      }
      else {
        uVar6 = FUN_08816aac();
        iVar7 = FUN_08816eb0(uVar6);
        if (-2 < iVar7) {
          if (iVar7 < 1) {
            if (iVar7 < 0) goto LAB_089435b4;
            bVar2 = true;
          }
          else if (iVar7 < 2) {
LAB_089435b4:
            bVar2 = false;
          }
        }
      }
    }
    if ((bVar1) && (*(undefined4 *)(param_1 + 0x2c) = 2, bVar2)) {
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
      FUN_089ed6a0(*(undefined4 *)(param_1 + 0x98),0);
      FUN_08941a90(param_1,1);
      FUN_08941c2c(param_1,1);
      iVar7 = FUN_0881b22c();
      if (iVar7 != 0) {
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        FUN_0881bbd8(uVar6);
      }
    }
    break;
  case 0xd:
    bVar1 = true;
    bVar2 = true;
    iVar7 = FUN_08816a90();
    if (iVar7 != 0) {
      bVar2 = false;
      uVar6 = FUN_08816aac();
      iVar7 = FUN_08816e58(uVar6);
      if (iVar7 == 0) {
        bVar1 = false;
        iVar7 = DONE_NotZero_DAT_08AAC9E0();
        if (iVar7 != 0) {
          uVar6 = DONE_Get_DAT_08AAC9E0();
          iVar7 = FUN_0880d7e0(uVar6,0x80);
          if (iVar7 != 0) {
            uVar6 = FUN_08816aac();
            FUN_08816e48(uVar6);
          }
        }
        bVar3 = true;
        bVar4 = false;
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        iVar7 = FUN_0881b35c(uVar6);
        iVar8 = 1;
        if (iVar7 != 0) {
          do {
            iVar9 = FUN_089cf7d0(auStack_68,iVar8);
            if ((((((iVar9 != 0) && (local_3c == *(char *)(iVar7 + 0x19))) &&
                  (local_3b == *(char *)(iVar7 + 0x1a))) &&
                 ((local_3a == *(char *)(iVar7 + 0x1b) && (local_39 == *(char *)(iVar7 + 0x1c)))))
                && (local_38 == *(char *)(iVar7 + 0x1d))) && (local_37 == *(char *)(iVar7 + 0x1e)))
            {
              *(undefined4 *)(param_1 + 0x6c) = 0x96;
              bVar3 = false;
              if ((local_40 & 1) != 0) {
                uVar6 = FUN_08816aac();
                FUN_08816e48(uVar6);
              }
              break;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x10);
        }
        if (bVar3) {
          if (*(int *)(param_1 + 0x6c) < 1) {
            bVar4 = true;
          }
          else {
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x6c) = 0x96;
        }
        if (bVar4) {
          uVar6 = FUN_08816aac();
          FUN_08816e48(uVar6);
          *(undefined4 *)(param_1 + 0x2c) = 6;
          iVar7 = FUN_0881b22c();
          if (iVar7 != 0) {
            uVar6 = DONE_GetPtr_DAT_08AB0300();
            FUN_0881b26c(uVar6,4);
            uVar6 = DONE_GetPtr_DAT_08AB0300();
            FUN_0881b374(uVar6);
          }
        }
        iVar7 = FUN_0881b22c();
        if (iVar7 != 0) {
          uVar6 = DONE_GetPtr_DAT_08AB0300();
          iVar7 = FUN_0881b264(uVar6);
          if (iVar7 == 6) {
            uVar6 = FUN_08816aac();
            FUN_08816e48(uVar6);
            *(undefined4 *)(param_1 + 0x2c) = 0xf;
            FUN_089ed6a0(*(undefined4 *)(param_1 + 0x98),0);
            FUN_08941a90(param_1,1);
            FUN_08941c2c(param_1,1);
            return;
          }
        }
      }
      else {
        uVar6 = FUN_08816aac();
        iVar7 = FUN_08816eb0(uVar6);
        if (-2 < iVar7) {
          if (iVar7 < 1) {
            if (iVar7 < 0) goto LAB_089436d0;
            bVar2 = true;
          }
          else if (iVar7 < 2) {
LAB_089436d0:
            bVar2 = false;
          }
        }
      }
    }
    if ((bVar1) && (*(undefined4 *)(param_1 + 0x2c) = 5, bVar2)) {
      iVar7 = FUN_0881b22c();
      if (iVar7 != 0) {
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        FUN_0881b26c(uVar6,4);
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        FUN_0881b374(uVar6);
      }
      *(undefined4 *)(param_1 + 0x2c) = 9;
      iVar7 = FUN_089bfa40(1999);
      if (iVar7 != 0) {
        FUN_0894e6cc(iVar7,3);
      }
    }
    break;
  case 0xe:
    bVar1 = true;
    iVar7 = FUN_08816a90();
    if (iVar7 != 0) {
      bVar1 = false;
      uVar6 = FUN_08816aac();
      iVar7 = FUN_08816e58(uVar6);
      if (iVar7 != 0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 0xf:
    FUN_08941f80(param_1,0,0,0,0);
    iVar7 = FUN_08941a90(param_1,0);
    iVar8 = FUN_08941c2c(param_1,0);
    if (iVar8 != 0 && iVar7 != 0) {
      bVar1 = false;
      iVar7 = FUN_0881b22c();
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0x10;
        uVar6 = DONE_Get_DAT_08AAC9E0();
        FUN_0880d0e8(uVar6,0x80);
      }
      else {
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        iVar7 = FUN_0881b264(uVar6);
        if (iVar7 == 7) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        *(undefined4 *)(param_1 + 0x28) = 3;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
    break;
  case 0x10:
    FUN_08941f80(param_1,1,1,1,0);
    iVar7 = FUN_08941a90(param_1,0);
    iVar8 = FUN_08941c2c(param_1,0);
    iVar9 = FUN_0881b22c();
    if (iVar9 == 0 && (iVar8 != 0 && iVar7 != 0)) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      *(undefined *)(param_1 + 0x88) = 1;
      *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    }
  }
  return;
}

