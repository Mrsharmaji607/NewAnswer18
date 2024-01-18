#ifndef MEDIASCANNER_H
#define MEDIASCANNER_H

<<<<<<< HEAD
#include "MediaDatabse.h"
#include "MediaExtractor.h"
#include <vector>
#include <string>
#include "Songs.h"

class MediaScanner {
   
private:
   
    //MediaExtractor mediaExtractor;
    std::string folderPath;
    std::vector<Song> songs; //reference member

public:
    // Constructor that takes the folder path as an argument
    MediaScanner(std::vector<Song>& songsRef, const std::string& Pathfolder);
    MediaScanner(std::string st);

    void scanMedia(const std::string& folderPath);
=======
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

>>>>>>> abcd/master
    void scanMedia();
    void displayScanProgress(int percentage) const;
    void displaySongInfo() const;
    void displayHelp() const;
};

<<<<<<< HEAD
#endif // MEDIASCANNER_H
=======
#endif // MEDIASCANNER_H


>>>>>>> abcd/master
