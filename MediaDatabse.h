#ifndef MEDIADATABASE_H
#define MEDIADATABASE_H

#include "/home/kpit/MediaIndexer/Songs.h"
#include <vector>

class MediaDatabase {
private:
    std::vector<Song> songs;

public:
    void addSong(const Song& song);
    void displayAllSongs() const;
};

#endif // MEDIADATABASE_H
