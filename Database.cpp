#include "Database.h"

QuestionData::QuestionData() {
	// load data from file
	std::ifstream inp(dataPath);
	int nQuestion;
	inp >> nQuestion;
	inp.ignore();
	for (int i = 0; i < nQuestion; i++) {
		Question q;
		std::string qDecription;
		std::getline(inp, qDecription);
		q.setQuestion(qDecription);
		int nAnswer;
		inp >> nAnswer;
		inp.ignore();
		for (int j = 0; j < nAnswer; j++) {
			std::string _answer;
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
		std::string _pathImage;
		std::getline(inp, _pathImage);
		q.setPathImage(_pathImage);

		questions.push_back(q);
	}
	inp.close();
}

