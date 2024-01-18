#ifndef MEDIADATABASE_H
#define MEDIADATABASE_H

<<<<<<< HEAD
#include "Songs.h"
=======
#include "/home/kpit/MediaIndexer/Songs.h"
>>>>>>> abcd/master
#include <vector>

class MediaDatabase {
private:
    std::vector<Song> songs;

public:
    void addSong(const Song& song);
    void displayAllSongs() const;
<<<<<<< HEAD

    std::vector<Song> getSongs() const { return songs; }
};

#endif // MEDIADATABASE_
=======
};

#endif // MEDIADATABASE_H
>>>>>>> abcd/master
