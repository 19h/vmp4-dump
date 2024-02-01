
/* geo::codec::chapterAt(VMP4Tile*, unsigned int, unsigned short, std::__1::unordered_map<char
	 const*, DebugChapterInfo, std::__1::hash<char const*>, std::__1::equal_to<char const*>,
	 std::__1::allocator<std::__1::pair<char const* const, DebugChapterInfo>>>&) */

char * geo::codec::chapterAt(VMP4Tile *param_1,uint param_2,ushort param_3,unordered_map *param_4)

{
	long lVar1;
	uint uVar2;
	char cVar3;
	int iVar4;
	long *plVar5;
	char *pcVar6;
	Bytef *dest;
	long *plVar7;
	long **pplVar8;
	long **pplVar9;
	char *pcVar10;
	ulong uVar11;
	long *plVar12;
	uint *puVar13;
	long lVar14;
	long *plVar15;
	long *plVar16;
	ushort uVar17;
	undefined8 uVar18;
	uLongf local_58;
	
	uVar11 = (ulong)param_2;
	if (*(ulong *)(param_1 + 8) <= uVar11) {
		return (char *)0x0;
	}
	lVar14 = *(long *)param_1;
	if (*(ushort *)(lVar14 + uVar11 * 0x10) != param_3) {
		return (char *)0x0;
	}
	lVar1 = lVar14 + uVar11 * 0x10;
	puVar13 = (uint *)(lVar1 + 4);
	plVar16 = (long *)(lVar1 + 8);
	if (*(ulong *)(param_1 + 0x20) < (ulong)*(uint *)plVar16 + (ulong)*puVar13) {
		return (char *)0x0;
	}
	plVar5 = (long *)Allocator::instance();
	pcVar6 = (char *)(**(code **)(*plVar5 + 0x18))(plVar5,1,0x48);
	if (pcVar6 == (char *)0x0) {
		return (char *)0x0;
	}
	pcVar10 = (char *)(*(long *)(param_1 + 0x18) + (ulong)*puVar13);
	plVar5 = (long *)(ulong)*(uint *)plVar16;
	cVar3 = *pcVar10;
	*pcVar6 = cVar3;
	iVar4 = *(int *)(lVar14 + uVar11 * 0x10 + 0xc);
	if (iVar4 == -1) {
		iVar4 = *(int *)(param_1 + 0x14);
	}
	*(int *)(pcVar6 + 0x40) = iVar4;
	if (cVar3 == '\x01') {
		if (4 < (long)plVar5 - 1U) {
			uVar2 = *(uint *)(pcVar10 + 1);
			if (uVar2 < 0x400001) {
				*(ulong *)(pcVar6 + 0x38) = (ulong)uVar2;
				if (uVar2 == 0) {
					*(undefined8 *)(pcVar6 + 0x28) = 0;
				}
				else {
					plVar12 = (long *)Allocator::instance();
					dest = (Bytef *)(**(code **)(*plVar12 + 0x10))(plVar12,(ulong)uVar2,8);
					*(Bytef **)(pcVar6 + 0x28) = dest;
					local_58 = *(uLongf *)(pcVar6 + 0x38);
					iVar4 = __auth_stubs::_uncompress(dest,&local_58,(Bytef *)(pcVar10 + 5),(long)plVar5 - 1U)
					;
					if (iVar4 != 0) {
						__auth_stubs::_fprintf(*(FILE **)__got::___stderrp,"uncompress returned %d\n");
					}
				}
				goto LAB_190a30690;
			}
			__auth_stubs::_fprintf
								(*(FILE **)__got::___stderrp,"Cowardly refusing to uncompress to %d bytes\n");
		}
		*(undefined8 *)(pcVar6 + 0x28) = 0;
		*(undefined8 *)(pcVar6 + 0x38) = 0;
	}
	else if (cVar3 == '\0') {
		*(char **)(pcVar6 + 0x28) = pcVar10 + 1;
		*(long *)(pcVar6 + 0x38) = (long)plVar5 + -1;
	}
LAB_190a30690:
	if (*(long *)(pcVar6 + 0x28) == 0) {
		plVar16 = (long *)Allocator::instance();
		(**(code **)(*plVar16 + 0x28))(plVar16,pcVar6,0);
		return (char *)0x0;
	}
	if (param_3 - 1 < 0x9c) {
		pcVar10 = "ChapterGlobal";
		switch((uint)param_3) {
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 0xc:
		case 0xe:
		case 0xf:
		case 0x10:
		case 0x11:
		case 0x12:
		case 0x13:
		case 0x15:
		case 0x16:
		case 0x17:
		case 0x18:
		case 0x19:
		case 0x1a:
		case 0x1b:
		case 0x1c:
		case 0x1d:
		case 0x23:
		case 0x24:
		case 0x25:
		case 0x28:
		case 0x29:
		case 0x2a:
		case 0x2b:
		case 0x2c:
		case 0x2d:
		case 0x2e:
		case 0x2f:
		case 0x30:
		case 0x31:
		case 0x32:
		case 0x35:
		case 0x36:
		case 0x38:
		case 0x39:
		case 0x3a:
		case 0x3b:
		case 0x3d:
		case 0x3e:
		case 0x3f:
		case 0x40:
		case 0x41:
		case 0x42:
		case 0x43:
		case 0x44:
		case 0x45:
		case 0x46:
		case 0x47:
		case 0x48:
		case 0x49:
		case 0x4a:
		case 0x4b:
		case 0x4c:
		case 0x4d:
		case 0x4e:
		case 0x4f:
		case 0x51:
		case 0x52:
		case 0x53:
		case 0x54:
		case 0x55:
		case 0x56:
		case 0x57:
		case 0x58:
		case 0x59:
		case 0x5b:
		case 0x5c:
		case 0x5e:
		case 0x5f:
		case 0x61:
		case 0x62:
		case 99:
		case 0x69:
		case 0x6a:
		case 0x6b:
		case 0x6c:
		case 0x6d:
		case 0x6e:
		case 0x6f:
		case 0x71:
		case 0x72:
		case 0x73:
		case 0x74:
		case 0x75:
		case 0x76:
		case 0x78:
		case 0x79:
		case 0x7a:
		case 0x7b:
		case 0x7c:
		case 0x7d:
		case 0x7e:
		case 0x7f:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x8f:
		case 0x96:
			goto switchD_190a306c8_caseD_2;
		case 10:
			pcVar10 = "ChapterLabels";
			break;
		case 0xb:
			pcVar10 = "ChapterLabelLanguages";
			break;
		case 0xd:
			pcVar10 = "ChapterLabelLocalizations2";
			break;
		case 0x14:
			pcVar10 = "ChapterVertices";
			break;
		case 0x1e:
			pcVar10 = "ChapterPointFeatures";
			break;
		case 0x1f:
			pcVar10 = "ChapterLineFeatures";
			break;
		case 0x20:
			pcVar10 = "ChapterPolygonFeatures";
			break;
		case 0x21:
			pcVar10 = "ChapterBuildingFeatures";
			break;
		case 0x22:
			pcVar10 = "ChapterCoastlineFeatures";
			break;
		case 0x26:
			pcVar10 = "ChapterWrappingCoastlineFeatures";
			break;
		case 0x27:
			pcVar10 = "ChapterBuildingMeshes";
			break;
		case 0x33:
			pcVar10 = "ChapterLinePointCharacteristics";
			break;
		case 0x34:
			pcVar10 = "ChapterPolygonPointCharacteristics";
			break;
		case 0x37:
			pcVar10 = "ChapterPolygonPointLabelPositions";
			break;
		case 0x3c:
			pcVar10 = "ChapterConnectivity";
			break;
		case 0x50:
			pcVar10 = "ChapterGeoIDSegments";
			break;
		case 0x5a:
			pcVar10 = "ChapterAddressRanges";
			break;
		case 0x5d:
			pcVar10 = "ChapterTileReferences";
			break;
		case 0x60:
			pcVar10 = "ChapterHighResBuildings";
			break;
		case 100:
			pcVar10 = "ChapterDebugBlob";
			break;
		case 0x65:
			pcVar10 = "ChapterElevationRaster";
			break;
		case 0x66:
			pcVar10 = "ChapterStyleAttributeRaster";
			break;
		case 0x67:
			pcVar10 = "ChapterDaVinciMetadata";
			break;
		case 0x68:
			pcVar10 = "ChapterLowResBuildings";
			break;
		case 0x70:
			pcVar10 = "ChapterTransitMZROverride";
			break;
		case 0x77:
			pcVar10 = "ChapterCoverage";
			break;
		case 0x80:
			pcVar10 = "ChapterTransitSystems";
			break;
		case 0x81:
			pcVar10 = "ChapterTransitNetwork";
			break;
		case 0x87:
			pcVar10 = "ChapterRoadNetwork";
			break;
		case 0x88:
			pcVar10 = "ChapterVenueMZROverride";
			break;
		case 0x89:
			pcVar10 = "ChapterVenues";
			break;
		case 0x8a:
			pcVar10 = "ChapterStorefronts";
			break;
		case 0x8b:
			pcVar10 = "ChapterLowResBorderBuildings";
			break;
		case 0x8c:
			pcVar10 = "ChapterBorderBuildingMeshes";
			break;
		case 0x8d:
			pcVar10 = "ChapterLabelPlacementMetadata";
			break;
		case 0x8e:
			pcVar10 = "ChapterDaVinciBuildings";
			break;
		case 0x90:
			pcVar10 = "ChapterPointFeaturesAddendum";
			break;
		case 0x91:
			pcVar10 = "ChapterLinesExtended";
			break;
		case 0x92:
			pcVar10 = "ChapterTrafficSkeleton1";
			break;
		case 0x93:
			pcVar10 = "ChapterDaVinciLandmarks";
			break;
		case 0x94:
			pcVar10 = "ChapterLineWidths1";
			break;
		case 0x95:
			pcVar10 = "ChapterPointLabelAnnotations";
			break;
		case 0x97:
			pcVar10 = "ChapterPOIMzrOverrides";
			break;
		case 0x98:
			pcVar10 = "ChapterTrafficSkeleton2";
			break;
		case 0x99:
			pcVar10 = "ChapterLineWidths2";
			break;
		case 0x9a:
			pcVar10 = "ChapterStyleAttributeRaster2";
			break;
		case 0x9b:
			pcVar10 = "ChapterMaterialRaster";
			break;
		case 0x9c:
			pcVar10 = "ChapterDaVinciAssetMetadata";
		}
	}
	else {
switchD_190a306c8_caseD_2:
		pcVar10 = "unknonwn";
	}
	uVar11 = ((ulong)(uint)((int)pcVar10 << 3) + 8 ^ (ulong)pcVar10 >> 0x20) * -0x622015f714c7d297;
	uVar11 = (uVar11 ^ (ulong)pcVar10 >> 0x20 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
	plVar15 = (long *)((uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297);
	plVar12 = *(long **)(param_4 + 8);
	if (plVar12 != (long *)0x0) {
		uVar11 = (long)plVar12 - 1;
		if (((ulong)plVar12 & uVar11) == 0) {
			plVar16 = (long *)((ulong)plVar15 & uVar11);
			pplVar9 = *(long ***)(*(long *)param_4 + (long)plVar16 * 8);
			if (pplVar9 != (long **)0x0) {
				do {
					pplVar9 = (long **)*pplVar9;
					if ((pplVar9 == (long **)0x0) ||
						 (pplVar9[1] != plVar15 && (long *)((ulong)pplVar9[1] & uVar11) != plVar16))
					goto LAB_190a30a78;
				} while (pplVar9[2] != (long *)pcVar10);
				goto LAB_190a30c74;
			}
		}
		else {
			plVar16 = plVar15;
			if (plVar12 <= plVar15) {
				uVar11 = 0;
				if (plVar12 != (long *)0x0) {
					uVar11 = (ulong)plVar15 / (ulong)plVar12;
				}
				plVar16 = (long *)((long)plVar15 - uVar11 * (long)plVar12);
			}
			pplVar9 = *(long ***)(*(long *)param_4 + (long)plVar16 * 8);
			if (pplVar9 != (long **)0x0) {
				do {
					pplVar9 = (long **)*pplVar9;
					if (pplVar9 == (long **)0x0) goto LAB_190a30a78;
					plVar7 = pplVar9[1];
					if (plVar7 != plVar15) {
						if (plVar12 <= plVar7) {
							uVar11 = 0;
							if (plVar12 != (long *)0x0) {
								uVar11 = (ulong)plVar7 / (ulong)plVar12;
							}
							plVar7 = (long *)((long)plVar7 - uVar11 * (long)plVar12);
						}
						if (plVar7 != plVar16) goto LAB_190a30a78;
					}
				} while (pplVar9[2] != (long *)pcVar10);
				goto LAB_190a30c74;
			}
		}
	}
LAB_190a30a78:
	pplVar9 = (long **)__auth_stubs::__Znwm();
	pplVar9[3] = (long *)0x0;
	pplVar9[4] = (long *)0x0;
	pplVar9[1] = plVar15;
	pplVar9[2] = (long *)pcVar10;
	*pplVar9 = (long *)0x0;
	if (*(float *)(param_4 + 0x20) * (float)ZEXT89(plVar12) <
			(float)(unkuint9)(*(long *)(param_4 + 0x18) + 1) || plVar12 == (long *)0x0) {
		uVar11 = 1;
		if ((long *)0x2 < plVar12) {
			uVar11 = (ulong)(((ulong)plVar12 & (long)plVar12 - 1U) != 0);
		}
		plVar7 = (long *)(uVar11 | (long)plVar12 << 1);
		plVar16 = (long *)(long)((float)(unkuint9)(*(long *)(param_4 + 0x18) + 1) /
														*(float *)(param_4 + 0x20));
		if (plVar16 <= plVar7) {
			plVar16 = plVar7;
		}
		if ((long)plVar16 - 1U == 0) {
			plVar16 = (long *)0x2;
		}
		else if (((ulong)plVar16 & (long)plVar16 - 1U) != 0) {
			plVar16 = (long *)__auth_stubs::__ZNSt3__112__next_primeEm();
			plVar12 = *(long **)(param_4 + 8);
		}
		plVar7 = plVar16;
		if (plVar12 < plVar16) {
LAB_190a30b50:
			std::__1::
			__hash_table<std::__1::__hash_value_type<char_const*,DebugChapterInfo>,std::__1::__unordered_m 
ap_hasher<char_const*,std::__1::__hash_value_type<char_const*,DebugChapterInfo>,std::__1::hash 
<char_const*>,std::__1::equal_to<char_const*>,true>,std::__1::__unordered_map_equal<char_const 
*,std::__1::__hash_value_type<char_const*,DebugChapterInfo>,std::__1::equal_to<char_const*>,st 
d::__1::hash<char_const*>,true>,std::__1::allocator<std::__1::__hash_value_type<char_const*,De bugChapterInfo>>>
			::__rehash((__hash_table<std::__1::__hash_value_type<char_const*,DebugChapterInfo>,std::__1::_ 
_unordered_map_hasher<char_const*,std::__1::__hash_value_type<char_const*,DebugChapterInfo>,st 
d::__1::hash<char_const*>,std::__1::equal_to<char_const*>,true>,std::__1::__unordered_map_equa 
l<char_const*,std::__1::__hash_value_type<char_const*,DebugChapterInfo>,std::__1::equal_to<cha 
r_const*>,std::__1::hash<char_const*>,true>,std::__1::allocator<std::__1::__hash_value_type<ch ar_const*,DebugChapterInfo>>>
									*)param_4,(ulong)plVar7);
		}
		else if (plVar16 < plVar12) {
			plVar7 = (long *)(long)((float)(unkuint9)*(ulong *)(param_4 + 0x18) /
														 *(float *)(param_4 + 0x20));
			if (plVar12 < (long *)0x3) {
LAB_190a30bb8:
				plVar7 = (long *)__auth_stubs::__ZNSt3__112__next_primeEm();
			}
			else {
				uVar18 = NEON_cnt(plVar12,1);
				uVar17 = NEON_uaddlv(uVar18,1);
				if (1 < ((uint)uVar18 & 0xffff0000 | (uint)uVar17)) goto LAB_190a30bb8;
				uVar11 = (long)plVar7 - 1U | (long)plVar7 - 1U >> 1;
				uVar11 |= uVar11 >> 2;
				uVar11 |= uVar11 >> 4;
				uVar11 |= uVar11 >> 8;
				uVar11 |= uVar11 >> 0x10;
				uVar11 |= uVar11 >> 0x20;
				uVar11 = ((uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar11 & 0x5555555555555555);
				uVar11 = ((uVar11 & 0xcccccccccccccccc) >> 2) + (uVar11 & 0x3333333333333333);
				uVar11 = ((uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar11 & 0xf0f0f0f0f0f0f0f);
				uVar11 = ((uVar11 & 0xff00ff00ff00ff00) >> 8) + (uVar11 & 0xff00ff00ff00ff);
				uVar11 = ((uVar11 & 0xffff0000ffff0000) >> 0x10) + (uVar11 & 0xffff0000ffff);
				if ((long *)0x1 < plVar7) {
					plVar7 = (long *)(1 << (-(0x40 - ((uVar11 >> 0x20) + (uVar11 & 0xffffffff))) & 0x3f));
				}
			}
			if (plVar7 <= plVar16) {
				plVar7 = plVar16;
			}
			if (plVar7 < plVar12) goto LAB_190a30b50;
		}
		plVar12 = *(long **)(param_4 + 8);
		if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
			plVar16 = (long *)((long)plVar12 - 1U & (ulong)plVar15);
		}
		else {
			plVar16 = plVar15;
			if (plVar12 <= plVar15) {
				uVar11 = 0;
				if (plVar12 != (long *)0x0) {
					uVar11 = (ulong)plVar15 / (ulong)plVar12;
				}
				plVar16 = (long *)((long)plVar15 - uVar11 * (long)plVar12);
			}
		}
	}
	lVar14 = *(long *)param_4;
	pplVar8 = *(long ***)(lVar14 + (long)plVar16 * 8);
	if (pplVar8 == (long **)0x0) {
		plVar15 = (long *)(param_4 + 0x10);
		*pplVar9 = (long *)*plVar15;
		*plVar15 = (long)pplVar9;
		*(long **)(lVar14 + (long)plVar16 * 8) = plVar15;
		if (*pplVar9 != (long *)0x0) {
			plVar16 = *(long **)((long)*pplVar9 + 8);
			if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
				plVar16 = (long *)((ulong)plVar16 & (long)plVar12 - 1U);
			}
			else if (plVar12 <= plVar16) {
				uVar11 = 0;
				if (plVar12 != (long *)0x0) {
					uVar11 = (ulong)plVar16 / (ulong)plVar12;
				}
				plVar16 = (long *)((long)plVar16 - uVar11 * (long)plVar12);
			}
			*(long ***)(*(long *)param_4 + (long)plVar16 * 8) = pplVar9;
		}
	}
	else {
		*pplVar9 = *pplVar8;
		*pplVar8 = (long *)pplVar9;
	}
	*(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + 1;
LAB_190a30c74:
	pplVar9[3] = plVar5;
	return pcVar6;
}

