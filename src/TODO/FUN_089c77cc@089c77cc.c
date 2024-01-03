#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089c77cc(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  
  iVar11 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  iVar8 = 0;
  puVar10 = (undefined4 *)(param_1 + 0x5d0);
  iVar9 = 0;
  do {
    switch(*(undefined2 *)(puVar10 + 0x108)) {
    case 1:
      iVar6 = DONE_NotZero_DAT_08AC61E8();
      if (iVar6 != 0) {
        uVar5 = FUN_089fce94();
        iVar6 = FUN_089fd350(uVar5,(&PTR_s_seGRP_SYS_COM_pac_08ac56e8)[puVar10[0x10b]]);
        if (iVar6 == 0) {
          uVar5 = FUN_089fce94();
          iVar4 = FUN_089fd150(uVar5,puVar10,*puVar10,puVar10[0x106],0,0);
          puVar10[0x101] = iVar4;
        }
        else {
          uVar5 = FUN_089fce94();
          iVar4 = FUN_089fd150(uVar5,puVar10,(&PTR_s_seGRP_SYS_COM_pac_08ac56e8)[puVar10[0x10b]],
                               puVar10[0x106],0,0);
          puVar10[0x101] = iVar4;
        }
        if (iVar4 != 0) {
          if (iVar6 == 0) {
            FUN_089fbac8(iVar4,2);
            *(undefined2 *)(puVar10 + 0x108) = 2;
          }
          else {
            if (puVar10[0x106] == 1) {
              uVar5 = FUN_089fbcb8();
              puVar10[0x106] = uVar5;
              iVar6 = puVar10[0x105];
            }
            else {
              iVar6 = puVar10[0x105];
            }
            iVar4 = 0;
            if (iVar6 != 0) {
              FUN_089bd8dc(iVar6,puVar10[0x106],0,0,1,1);
              iVar4 = iVar6;
            }
            puVar10[0x105] = iVar4;
            FUN_089d8d28();
            *(undefined *)(puVar10[0x105] + 0x28) = 0;
            uVar5 = FUN_089fbd30(puVar10[0x101]);
            puVar10[0x107] = uVar5;
            *(undefined2 *)(puVar10 + 0x108) = 3;
          }
        }
      }
      break;
    case 2:
      iVar6 = FUN_089fbbe0(puVar10[0x101]);
      if (iVar6 != 0) {
        if (puVar10[0x106] == 1) {
          uVar5 = FUN_089fbcb8(puVar10[0x101]);
          puVar10[0x106] = uVar5;
          iVar6 = puVar10[0x105];
        }
        else {
          iVar6 = puVar10[0x105];
        }
        iVar4 = 0;
        if (iVar6 != 0) {
          FUN_089bd8dc(iVar6,puVar10[0x106],0,1,1,1);
          iVar4 = iVar6;
        }
        puVar10[0x105] = iVar4;
        FUN_089d8d28();
        *(undefined *)(puVar10[0x105] + 0x28) = 0;
        uVar5 = FUN_089fbd30(puVar10[0x101]);
        puVar10[0x107] = uVar5;
        *(undefined2 *)(puVar10 + 0x108) = 3;
      }
      break;
    case 3:
      iVar6 = *DAT_08ac5870;
      uVar5 = FUN_089be054(puVar10[0x105],&DAT_08aa1a94);
      uVar2 = FUN_089be054(puVar10[0x105],&DAT_08aa1a98);
      iVar6 = FUN_08a1feb4(iVar6 + iVar9,uVar5,uVar2);
      puVar10[0x104] = iVar6;
      if (-1 < iVar6) {
        pcVar3 = (char *)FUN_089be054(puVar10[0x105],&DAT_08aa1a94);
        *(undefined2 *)((int)puVar10 + 0x422) = 0;
        *(undefined2 *)(puVar10 + 0x109) = 0;
        *(undefined2 *)((int)puVar10 + 0x426) = 0;
        if ((((*pcVar3 == 'P') && (pcVar3[1] == 'P')) && (pcVar3[2] == 'H')) &&
           (((pcVar3[3] == 'D' && (pcVar3 = pcVar3 + *(int *)(pcVar3 + 0x14), *pcVar3 == 'P')) &&
            ((pcVar3[1] == 'P' && ((pcVar3[2] == 'T' && (pcVar3[3] == 'N')))))))) {
          *(short *)((int)puVar10 + 0x422) =
               (short)((*(int *)(pcVar3 + 4) + -0x18) / *(int *)(pcVar3 + 8));
          *(short *)(puVar10 + 0x109) = (short)*(undefined4 *)(pcVar3 + 0x10);
          *(short *)((int)puVar10 + 0x426) = (short)*(undefined4 *)(pcVar3 + 0x14);
        }
        if (iVar8 == 0) {
          iVar6 = FUN_089be054(puVar10[0x105],&DAT_08aa1a9c);
          iVar6 = FUN_08a20568(iVar6 + 0xc);
          if (iVar6 < 0) {
            FUN_089b4c24("sceSsSetEffectParam() error\n");
            *(undefined2 *)(puVar10 + 0x108) = 0;
          }
          else {
            *(undefined2 *)(puVar10 + 0x108) = 0;
          }
        }
        else {
          *(undefined2 *)(puVar10 + 0x108) = 0;
        }
        *(undefined *)((int)puVar10 + 0x429) = 1;
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      iVar11 = iVar11 + 1;
      break;
    case 0xb:
      puVar7 = puVar10 + 1;
      *(undefined *)(puVar10 + 1) = 0;
      strcpy(puVar7,*puVar10);
      strcat(puVar7,&DAT_08aa1ac0);
      uVar5 = FUN_089fce94();
      iVar6 = FUN_089fd150(uVar5,puVar10,puVar7,1,0,0);
      puVar10[0x101] = iVar6;
      if (iVar6 != 0) {
        FUN_089fbac8(iVar6,2);
        *(short *)(puVar10 + 0x108) = *(short *)(puVar10 + 0x108) + 1;
      }
      break;
    case 0xc:
      iVar6 = FUN_089fbbe0(puVar10[0x101]);
      if (iVar6 != 0) {
        FUN_089fbcb8(puVar10[0x101]);
        FUN_089fbd30(puVar10[0x101]);
        puVar7 = puVar10 + 0x41;
        *(undefined *)(puVar10 + 0x41) = 0;
        strcpy(puVar7,*puVar10);
        strcat(puVar7,&DAT_08aa1ac8);
        uVar5 = FUN_089fce94();
        iVar6 = FUN_089fd150(uVar5,puVar10,puVar7,1,0,0);
        puVar10[0x102] = iVar6;
        if (iVar6 != 0) {
          FUN_089fbac8(iVar6,2);
          *(short *)(puVar10 + 0x108) = *(short *)(puVar10 + 0x108) + 1;
        }
      }
      break;
    case 0xd:
      iVar6 = FUN_089fbbe0(puVar10[0x102]);
      if (iVar6 != 0) {
        pcVar3 = (char *)FUN_089fbcb8(puVar10[0x101]);
        uVar5 = FUN_089fbcb8(puVar10[0x102]);
        iVar6 = FUN_08a1feb4(*DAT_08ac5870 + iVar9,pcVar3,uVar5);
        puVar10[0x104] = iVar6;
        if (-1 < iVar6) {
          *(undefined2 *)((int)puVar10 + 0x422) = 0;
          *(undefined2 *)(puVar10 + 0x109) = 0;
          *(undefined2 *)((int)puVar10 + 0x426) = 0;
          if (((((*pcVar3 == 'P') && (pcVar3[1] == 'P')) && (pcVar3[2] == 'H')) &&
              ((pcVar3[3] == 'D' && (pcVar3 = pcVar3 + *(int *)(pcVar3 + 0x14), *pcVar3 == 'P'))))
             && ((pcVar3[1] == 'P' && ((pcVar3[2] == 'T' && (pcVar3[3] == 'N')))))) {
            *(short *)((int)puVar10 + 0x422) =
                 (short)((*(int *)(pcVar3 + 4) + -0x18) / *(int *)(pcVar3 + 8));
            *(short *)(puVar10 + 0x109) = (short)*(undefined4 *)(pcVar3 + 0x10);
            *(short *)((int)puVar10 + 0x426) = (short)*(undefined4 *)(pcVar3 + 0x14);
          }
          iVar6 = FUN_089fbd30(puVar10[0x101]);
          iVar4 = FUN_089fbd30(puVar10[0x102]);
          puVar10[0x107] = iVar6 + iVar4;
        }
        if (iVar8 == 0) {
          *(short *)(puVar10 + 0x108) = *(short *)(puVar10 + 0x108) + 1;
        }
        else {
          *(undefined2 *)(puVar10 + 0x108) = 0;
          *(undefined *)((int)puVar10 + 0x429) = 1;
        }
      }
      break;
    case 0xe:
      puVar7 = puVar10 + 0x81;
      *(undefined *)(puVar10 + 0x81) = 0;
      strcpy(puVar7,*puVar10);
      strcat(puVar7,&DAT_08aa1ad0);
      uVar5 = FUN_089fce94();
      iVar6 = FUN_089fd150(uVar5,puVar10,puVar7,1,0,0);
      puVar10[0x103] = iVar6;
      if (iVar6 != 0) {
        FUN_089fbac8(iVar6,0x22);
        *(short *)(puVar10 + 0x108) = *(short *)(puVar10 + 0x108) + 1;
      }
      break;
    case 0xf:
      iVar6 = FUN_089fbbe0(puVar10[0x103]);
      if (iVar6 != 0) {
        bVar1 = false;
        iVar6 = FUN_089fbc24(puVar10[0x103]);
        if (iVar6 == 0) {
          bVar1 = true;
        }
        else {
          iVar6 = FUN_089fbcb8(puVar10[0x103]);
          iVar6 = FUN_08a20568(iVar6 + 0xc);
          if (iVar6 < 0) {
            FUN_089b4c24("sceSsSetEffectParam() error\n");
          }
          else {
            bVar1 = true;
          }
        }
        if (bVar1) {
          *(undefined2 *)(puVar10 + 0x108) = 0;
          *(undefined *)((int)puVar10 + 0x429) = 1;
        }
      }
      break;
    default:
      iVar11 = iVar11 + 1;
    }
    iVar8 = iVar8 + 1;
    puVar10 = puVar10 + 0x10c;
    iVar9 = iVar9 + 8;
  } while (iVar8 < 0x20);
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  return iVar8 == iVar11;
}

