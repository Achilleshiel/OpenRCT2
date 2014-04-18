/*****************************************************************************
 * Copyright (c) 2014 Ted John
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 * 
 * This file is part of OpenRCT2.
 * 
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef _ADDRESSES_H_
#define _ADDRESSES_H_

#pragma warning(disable : 4731)

#define RCT2_ADDRESS(address, type)				((type*)(address))
#define RCT2_GLOBAL(address, type)				(*((type*)(address)))
#define RCT2_CALLPROC(address)					(((void(*)())(address))())
#define RCT2_CALLFUNC(address, returnType)		((((returnType)(*)())(address))())

#define RCT2_CALLFUNC_1(address, returnType, a1, v1)							(((returnType(*)(a1))(address))(v1))
#define RCT2_CALLFUNC_2(address, returnType, a1, a2, v1, v2)					(((returnType(*)(a1, a2))(address))(v1, v2))
#define RCT2_CALLFUNC_3(address, returnType, a1, a2, a3, v1, v2, v3)			(((returnType(*)(a1, a2, a3))(address))(v1, v2, v3))
#define RCT2_CALLFUNC_4(address, returnType, a1, a2, a3, a4, v1, v2, v3, v4)	(((returnType(*)(a1, a2, a3, a4))(address))(v1, v2, v3, v4))
#define RCT2_CALLFUNC_5(address, returnType, a1, a2, a3, a4, a5, v1, v2, v3, v4, v5)	(((returnType(*)(a1, a2, a3, a4, a5))(address))(v1, v2, v3, v4, v5))

#define RCT2_CALLPROC_1(address, a1, v1)									RCT2_CALLFUNC_1(address, void, a1, v1)
#define RCT2_CALLPROC_2(address, a1, a2, v1, v2)							RCT2_CALLFUNC_2(address, void, a1, a2, v1, v2)
#define RCT2_CALLPROC_3(address, a1, a2, a3, v1, v2, v3)					RCT2_CALLFUNC_3(address, void, a1, a2, a3, v1, v2, v3)
#define RCT2_CALLPROC_4(address, a1, a2, a3, a4, v1, v2, v3, v4)			RCT2_CALLFUNC_4(address, void, a1, a2, a3, a4, v1, v2, v3, v4)
#define RCT2_CALLPROC_5(address, a1, a2, a3, a4, a5, v1, v2, v3, v4, v5)	RCT2_CALLFUNC_5(address, void, a1, a2, a3, a4, a5, v1, v2, v3, v4, v5)

#define RCT2_ADDRESS_LAND_TOOL_SIZE					0x009A9800

#define RCT2_ADDRESS_SCENARIO_LIST					0x009A9FF4
#define RCT2_ADDRESS_NUM_SCENARIOS					0x009AA008

#define RCT2_ADDRESS_APP_PATH						0x009AA214

#define RCT2_ADDRESS_CONFIG_FLAGS					0x009AAC74
#define RCT2_ADDRESS_CONFIG_METRIC					0x009AAC78
#define RCT2_ADDRESS_CONFIG_FAHRENHEIT				0x009AAC79
#define RCT2_ADDRESS_CONFIG_KEYBOARD_SHORTCUTS		0x009AAC7A
#define RCT2_ADDRESS_CONFIG_EDGE_SCROLLING			0x009AACBA

#define RCT2_ADDRESS_CONFIG_RESOLUTION_WIDTH		0x009AB4C2
#define RCT2_ADDRESS_CONFIG_RESOLUTION_HEIGHT		0x009AB4C4

#define RCT2_ADDRESS_APP_PATH_SLASH					0x009AB4D9
#define RCT2_ADDRESS_SAVED_GAMES_PATH				0x009AB5DA
#define RCT2_ADDRESS_SCENARIOS_PATH					0x009AB6E9
#define RCT2_ADDRESS_LANDSCAPES_PATH				0x009AB7FB
#define RCT2_ADDRESS_OBJECT_DATA_PATH				0x009AB90E
#define RCT2_ADDRESS_TRACKS_PATH					0x009ABA1E
#define RCT2_ADDRESS_SAVED_GAMES_PATH_2				0x009ABB37

#define RCT2_ADDRESS_SCREEN_DPI						0x009ABDC8
#define RCT2_ADDRESS_SCREEN_WIDTH					0x009ABDD8
#define RCT2_ADDRESS_SCREEN_HEIGHT					0x009ABDDA

#define RCT2_ADDRESS_DIRTY_BLOCK_WIDTH				0x009ABDE4
#define RCT2_ADDRESS_DIRTY_BLOCK_HEIGHT				0x009ABDE6
#define RCT2_ADDRESS_DIRTY_BLOCK_COLUMNS			0x009ABDE8
#define RCT2_ADDRESS_DIRTY_BLOCK_ROWS				0x009ABDEC

#define RCT2_ADDRESS_RUN_INTRO_TICK_PART			0x009AC319

#define RCT2_ADDRESS_INPUT_STATE					0x009DE51D
#define RCT2_ADDRESS_CURSOR_DOWN_WINDOWCLASS		0x009DE51F
#define RCT2_ADDRESS_CURSOR_DOWN_WINDOWNUMBER		0x009DE520
#define RCT2_ADDRESS_CURSOR_DOWN_WIDGETINDEX		0x009DE524

#define RCT2_ADDRESS_CURSOR_DRAG_LAST_X				0x009DE52A
#define RCT2_ADDRESS_CURSOR_DRAG_LAST_Y				0x009DE52C

#define RCT2_ADDRESS_TOOLTIP_WINDOW_CLASS			0x009DE533
#define RCT2_ADDRESS_TOOLTIP_WINDOW_NUMBER			0x009DE534
#define RCT2_ADDRESS_TOOLTIP_WIDGET_INDEX			0x009DE536
#define RCT2_ADDRESS_TOOLTIP_CURSOR_X				0x009DE538
#define RCT2_ADDRESS_TOOLTIP_CURSOR_Y				0x009DE53A
#define RCT2_ADDRESS_TOOLTIP_TIMEOUT				0x009DE53C
#define RCT2_ADDRESS_TOOLTIP_NOT_SHOWN_TICKS		0x009DE53E

#define RCT2_ADDRESS_TOOL_WINDOWNUMBER				0x009DE542
#define RCT2_ADDRESS_TOOL_WINDOWCLASS				0x009DE544
#define RCT2_ADDRESS_TOOL_WIDGETINDEX				0x009DE546

#define RCT2_ADDRESS_CURSOR_OVER_WINDOWCLASS		0x009DE55C
#define RCT2_ADDRESS_CURSOR_OVER_WINDOWNUMBER		0x009DE55E
#define RCT2_ADDRESS_CURSOR_OVER_WIDGETINDEX		0x009DE560

#define RCT2_ADDRESS_SCREEN_FLAGS					0x009DEA68
#define RCT2_ADDRESS_PLACE_OBJECT_MODIFIER			0x009DEA70
#define RCT2_ADDRESS_ON_TUTORIAL					0x009DEA71

#define RCT2_ADDRESS_WINDOW_DPI						0x009DEA74

#define RCT2_ADDRESS_CMDLINE						0x009E2D98

#define RCT2_ADDRESS_LAND_RAISE_COST				0x009E2E1C
#define RCT2_ADDRESS_LAND_LOWER_COST				0x009E2E20
#define RCT2_ADDRESS_SELECTED_TERRAIN_EDGE			0x009E2E24
#define RCT2_ADDRESS_SELECTED_TERRAIN_SURFACE		0x009E2E25

#define RCT2_ADDRESS_G1_ELEMENTS					0x009EBD28

#define RCT2_ADDRESS_CURRENT_MONTH_YEAR				0x00F663A8
#define RCT2_ADDRESS_CURRENT_DAY					0x00F663AA

#define RCT2_ADDRESS_MAP_ELEMENTS					0x00F663B8

#define RCT2_ADDRESS_SPRITE_LIST					0x010E63BC
#define RCT2_ADDRESS_SPRITES_NEXT_INDEX				0x013573BC
#define RCT2_ADDRESS_SPRITES_START_VEHICLE			0x013573BE
#define RCT2_ADDRESS_SPRITES_START_PEEP				0x013573C0
#define RCT2_ADDRESS_SPRITES_START_TEXTFX			0x013573C2
#define RCT2_ADDRESS_SPRITES_START_LITTER			0x013573C4

#define RCT2_ADDRESS_CURRENT_LOAN					0x013573E0
#define RCT2_ADDRESS_GAME_FLAGS						0x013573E4
#define RCT2_ADDRESS_PARK_ENTRANCE_FEE				0x013573E8
#define RCT2_ADDRESS_GUESTS_IN_PARK					0x01357844
#define RCT2_ADDRESS_CURRENT_PARK_RATING			0x01357CB0
#define RCT2_ADDRESS_PARK_RATING_HISTORY			0x01357CB2
#define RCT2_ADDRESS_OBJECTIVE_TYPE					0x013580F8
#define RCT2_ADDRESS_OBJECTIVE_YEAR					0x013580F9
#define RCT2_ADDRESS_OBJECTIVE_CURRENCY				0x013580FC
#define RCT2_ADDRESS_OBJECTIVE_NUM_GUESTS			0x01358100
#define RCT2_ADDRESS_CURRENT_PROFIT					0x01358330
#define RCT2_ADDRESS_CURRENT_PARK_VALUE				0x0135853C
#define RCT2_ADDRESS_COMPLETED_COMPANY_VALUE		0x01358740
#define RCT2_ADDRESS_TOTAL_ADMISSIONS				0x01358744
#define RCT2_ADDRESS_INCOME_FROM_ADMISSIONS			0x01358748
#define RCT2_ADDRESS_CURRENT_COMPANY_VALUE			0x0135874C
#define RCT2_ADDRESS_AWARD_LIST						0x01358760
#define RCT2_ADDRESS_CURRENT_MONEY_ENCRYPTED		0x013587F8

#define RCT2_ADDRESS_MAP_SIZE						0x01358834

#define RCT2_ADDRESS_SCENARIO_DETAILS				0x0135924A

#define RCT2_ADDRESS_PARK_ENTRANCE_X				0x01359350
#define RCT2_ADDRESS_PARK_ENTRANCE_Y				0x01359358
#define RCT2_ADDRESS_PARK_ENTRANCE_Z				0x01359360

#define RCT2_ADDRESS_CURRENT_TICKS					0x013628F4
#define RCT2_ADDRESS_RIDE_LIST						0x013628F8
#define RCT2_ADDRESS_RIDE_MEASUREMENTS				0x0138B60C

#define RCT2_ADDRESS_CLIMATE						0x013CA746
#define RCT2_ADDRESS_CURRENT_WEATHER				0x013CA74A
#define RCT2_ADDRESS_NEXT_WEATHER					0x013CA74B
#define RCT2_ADDRESS_CURRENT_TEMPERATURE			0x013CA74C

#define RCT2_ADDRESS_NEWS_ITEM_LIST					0x013CA754

#define RCT2_ADDRESS_TILE_MAP_ELEMENT_POINTERS		0x013CE9A4

#define RCT2_ADDRESS_CURRENT_ROTATION				0x0141E9E0

#define RCT2_ADDRESS_SCENARIO_NAME					0x0141F5B8

#define RCT2_ADDRESS_WINDOW_LIST					0x01420078
#define RCT2_ADDRESS_NEW_WINDOW_PTR					0x014234B8
#define RCT2_ADDRESS_VIEWPORT_LIST					0x014234BC
#define RCT2_ADDRESS_NEW_VIEWPORT_PTR				0x01423570

#define RCT2_ADDRESS_OS_TIME_MONTH					0x01423A04
#define RCT2_ADDRESS_OS_TOTALPHYS					0x01423B5C
#define RCT2_ADDRESS_OS_TIME_DAY					0x01424304
#define RCT2_ADDRESS_OS_TIME_YEAR					0x01424320
#define RCT2_ADDRESS_OS_TIME_DAYOFWEEK				0x01423B20

static void RCT2_CALLPROC_EBPSAFE(int address)
{
	__asm push ebp
	__asm call address
	__asm pop ebp
}

static void RCT2_CALLPROC_X(int address, int _eax, int _ebx, int _ecx, int _edx, int _esi, int _edi, int _ebp)
{
	__asm {
		push address
		mov eax, _eax
		mov ebx, _ebx
		mov ecx, _ecx
		mov edx, _edx
		mov esi, _esi
		mov edi, _edi
		mov ebp, _ebp
		call [esp]
		add esp, 4
	}
}

static void RCT2_CALLFUNC_X(int address, int *_eax, int *_ebx, int *_ecx, int *_edx, int *_esi, int *_edi, int *_ebp)
{
	__asm {
		// Store C's base pointer
		push ebp

		// Store address to call
		push address

		// Set all registers to the input values
		mov eax, [_eax]
		mov eax, [eax]
		mov ebx, [_ebx]
		mov ebx, [ebx]
		mov ecx, [_ecx]
		mov ecx, [ecx]
		mov edx, [_edx]
		mov edx, [edx]
		mov esi, [_esi]
		mov esi, [esi]
		mov edi, [_edi]
		mov edi, [edi]
		mov ebp, [_ebp]
		mov ebp, [ebp]

		// Call function
		call [esp]
		add esp, 4

		// Store output eax
		push eax
		
		// Put original C base pointer into eax
		mov eax, [esp+4]

		// Store output ebp
		push ebp

		// Set ebp to the original C base pointer
		mov ebp, eax

		// Put output ebp into ebp parameter
		mov eax, [esp]
		mov [_ebp], eax
		add esp, 4

		// Get resulting ebx, ecx, edx, esi, edi registers
		mov eax, [_edi]
		mov [eax], edi
		mov eax, [_esi]
		mov [eax], esi
		mov eax, [_edx]
		mov [eax], edx
		mov eax, [_ecx]
		mov [eax], ecx
		mov eax, [_ebx]
		mov [eax], ebx
		pop eax

		// Get resulting eax register
		mov ebx, [_eax]
		mov [ebx], eax

		add esp, 4
	}
}

#endif