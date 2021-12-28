#pragma once
#include "string"
/*
	This header file contains constant values only.
*/

// certificate data path
const std::wstring A1_path = L"data/A1";
const std::wstring A2_path = L"data/A2";
const std::wstring B1_path = L"data/B1";
const std::wstring B2_path = L"data/B2";
const std::wstring certificatPathArray[4] = {A1_path, A2_path, B1_path, B2_path};

// option for test exam
const int countdownTimeArray[] = {1200, 900, 600, 300, 5};
const int maxWrongAnswersArray[] = {0, 4, 10, 15};
const int questionAmountArray[] = { 15, 25, 50, 100 };

// history storing
const std::wstring history_path = L"data/history.txt";

// users storing
const std::wstring account_path = L"data/users.txt";