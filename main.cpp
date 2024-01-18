#include "MediaScanner.h"
#include "MediaExtractor.h"
#include "Songs.h"
#include <iostream>
#include <filesystem>


int main() {
    // Hardcoded path to the folder containing media files
    std::string folderPath = "/home/kpit/Desktop/DemoAudio";

    // Check if the folder exists
    if (!std::filesystem::exists(folderPath)) {
        std::cout << "Error: The specified folder does not exist.\n";
        return 1;
    }

    // Create a media scanner with the specified folder path
    MediaScanner mediaScanner(folderPath);

    while (true) {
        std::cout << "\nOptions:\n"
                  << "1. Scan for songs\n"
                  << "2. Display information of founded songs\n"
                  << "3. Help\n"
                  << "4. Exit\n"
                  << "Enter option (1-4): ";

        int option;
        std::cin >> option;

        switch (option) {
            case 1:
                // Scan the media files in the folder
                mediaScanner.scanMedia();
                break;
            case 2:
                // Display information about the scanned songs
                mediaScanner.displaySongInfo();
                break;
            case 3:
                // Display help or other information if needed
                mediaScanner.displayHelp();
                break;
            case 4:
                // Exit the application
                std::cout << "Exiting the application.\n";
                return 0;
            default:
                std::cout << "Invalid option. Please enter a valid option.\n";
                break;
        }
    }

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> abcd/master
