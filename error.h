namespace Errors{
    int SyntaxError(std::string msg, int line);
    int UnexpectedEOL(std::string msg, int line);
    int UnexpectedEOF(std::string msg, int line);
    int UnkownToken(std::string token, int line);
};

