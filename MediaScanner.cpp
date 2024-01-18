#include "/home/kpit/Desktop/MediaIndex/MediaScanner.h"
#include "MediaExtractor.h"
#include "Songs.h"
#include <iostream>
#include <filesystem>

MediaScanner::MediaScanner(std::string st){

}

MediaScanner::MediaScanner(std::vector<Song>& songsRef,const std::string& pathfolder)
    :songs(songsRef),folderPath(pathfolder) {}

//std::vector<Song>  MediaScanner::scanMedia(const std::string& folderPath) {
    void MediaScanner::scanMedia(const std::string& folderPath){
    int totalFiles = 0;
    int scannedFiles = 0;

    for (const auto& entry : std::filesystem::directory_iterator(folderPath)) {
        if (entry.is_regular_file()) {
            totalFiles++;
        }
    }

    for (const auto& entry : std::filesystem::directory_iterator(folderPath)) {
        if (entry.is_regular_file()) {
            std::string filePath = entry.path().string();
            Song song = MediaExtractor::extractMediaInfo(filePath);
            songs.emplace_back(song);

            scannedFiles++;
            int progress = static_cast<int>((static_cast<double>(scannedFiles) / totalFiles) * 100);
            displayScanProgress(progress);
        }
    }

    std::cout << "\n[100%] Scan Completed!\n";
}

void MediaScanner::scanMedia()
{  

}

void MediaScanner::displayScanProgress(int percentage) const
{
    std::cout << "[" << percentage << "%] ";
    std::cout.flush();
}

void MediaScanner::displaySongInfo() const {
    for (const auto& song : songs){
        std::cout << "Name: " << song.name << "\n"
                  << "Format: " << song.format << "\n"
                  << "Path: " << song.path << "\n"
                  << "Size: " << song.size << " bytes\n\n";
    }
}

void MediaScanner::displayHelp() const {
    std::cout << "Options:\n"
              << "1. Scan for songs\n"
              << "2. Display information of founded songs\n"
              << "3. Help\n"
              << "4. Exit\n";
}