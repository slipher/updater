#ifndef MAIN_H_
#define MAIN_H_

#include <QString>

struct CommandLineOptions {
    QString logFilename;
};

const CommandLineOptions& getCommandLineOptions();

#endif // MAIN_H_
