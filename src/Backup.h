#pragma once
#include <vector>
#include <string>
class Player;

extern bool isWorking;
extern Player* nowPlayer;
extern std::vector<std::string> backupList;

bool StartBackup();
bool StartRecover(int recover_NUM);
bool CopyRecoverFile(const std::string& worldName);
std::vector<std::string> getAllBackup();