#pragma once
#include <Windows.h>
#include <WinINet.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include <sstream>
#include <filesystem>
#include "json.hpp"

using json = nlohmann::json;
namespace fs = std::filesystem;


namespace updater {
	const std::string file_path = "offsets.json";

#ifndef _UC
	bool check_and_update(bool prompt_update);
	bool get_last_commit_date(json& commit);
	bool download_file(const char* url, const char* localPath);
#endif
	bool file_good(const std::string& name);

	extern bool read();
	extern void save();

	inline int build_number = 13992;

	namespace offsets {
		inline std::ptrdiff_t dwLocalPlayerController = 0x1901948;
		inline std::ptrdiff_t dwLocalPlayerPawn = 0x17272E8;
		inline std::ptrdiff_t dwEntityList = 0x18B1FE8;
		inline std::ptrdiff_t dwViewMatrix = 0x19112D0;
		inline std::ptrdiff_t dwBuildNumber = 0x512554;
		inline std::ptrdiff_t dwPlantedC4 = 0x19171E8;

		inline std::ptrdiff_t m_flC4Blow = 0xF08;
		inline std::ptrdiff_t m_flNextBeep = 0xF04;
		inline std::ptrdiff_t m_flTimerLength = 0xF10;

		inline std::ptrdiff_t m_pInGameMoneyServices = 0x6F8;
		inline std::ptrdiff_t m_iAccount = 0x40;
		inline std::ptrdiff_t m_vecAbsOrigin = 0xC8;
		inline std::ptrdiff_t m_vOldOrigin = 0x127C;
		inline std::ptrdiff_t m_pGameSceneNode = 0x318;
		inline std::ptrdiff_t m_flFlashOverlayAlpha = 0x14C0;
		inline std::ptrdiff_t m_bIsDefusing = 0x1408;
		inline std::ptrdiff_t m_szName = 0xC20;
		inline std::ptrdiff_t m_pClippingWeapon = 0x1308;
		inline std::ptrdiff_t m_ArmorValue = 0x1570;
		inline std::ptrdiff_t m_iHealth = 0x334;
		inline std::ptrdiff_t m_hPlayerPawn = 0x7E4;
		inline std::ptrdiff_t m_sSanitizedPlayerName = 0x748;
		inline std::ptrdiff_t m_iTeamNum = 0x3CB;
	}
}
