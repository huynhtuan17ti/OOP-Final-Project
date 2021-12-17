#include "Database.h"


QuestionData::QuestionData() {
	// load data from file
	std::wifstream inp(dataPath);
	inp.imbue(std::locale(inp.getloc(), new std::codecvt_utf8<wchar_t>));
	int nQuestion;
	inp >> nQuestion;
	inp.ignore();
	for (int i = 0; i < nQuestion; i++) {
		Question q;
		std::wstring qDecription;
		std::getline(inp, qDecription);
		q.setQuestion(qDecription);
		int nAnswer;
		inp >> nAnswer;
		inp.ignore();
		for (int j = 0; j < nAnswer; j++) {
			std::wstring _answer;
			std::getline(inp, _answer);
			q.addAnswer(_answer);
		}
		int nResult;
		inp >> nResult;
		for (int j = 0; j < nResult; j++) {
			int _result;
			inp >> _result;
			q.addResult(_result);
		}
		inp.ignore();
		std::wstring _pathImage;
		std::getline(inp, _pathImage);
		q.setPathImage(_pathImage);

		questions.push_back(q);
	}
	inp.close();
}

