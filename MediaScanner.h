#ifndef MEDIASCANNER_H
#define MEDIASCANNER_H

#include "/home/kpit/MediaIndexer/MediaDatabse.h"
#include "MediaExtractor.h"
#include <vector>

class MediaScanner {
private:
    MediaDatabase mediaDatabase;
    std::string folderPath;

public:
    // Constructor that takes the folder path as an argument
    MediaScanner(const std::string& folderPath);

    void scanMedia();
    void displayScanProgress(int percentage) const;
    void displaySongInfo() const;
    void displayHelp() const;
};

#endif // MEDIASCANNER_H


