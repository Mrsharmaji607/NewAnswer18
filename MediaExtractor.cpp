<<<<<<< HEAD
#include "MediaExtractor.h"
=======
#include "/home/kpit/MediaIndexer/MediaExtractor.h"
>>>>>>> abcd/master
#include <filesystem>


Song MediaExtractor::extractMediaInfo(const std::string& filePath) {
    std::string fileName = std::filesystem::path(filePath).filename().string();
    std::string fileFormat = fileName.substr(fileName.find_last_of(".") + 1);
    long fileSize = std::filesystem::file_size(filePath);

    return Song(fileName, fileFormat, filePath, fileSize);
<<<<<<< HEAD
}
=======
}
>>>>>>> abcd/master
