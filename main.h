#ifndef MAIN_H_
#define MAIN_H_

#include <QString>

struct CommandLineOptions {
    QString logFilename;
    QString ariaLogFilename; // This one opens append instead of write
};

const CommandLineOptions& getCommandLineOptions();

#endif // MAIN_H_
