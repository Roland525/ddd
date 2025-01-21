#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Media {
protected:
    string title;
    string name;
    string surname;
    int age;
    int size;
    string extension;

public:
    Media() {}
    Media(string nm, string snm, int ag, int sz, string ex, string ti)
        : name(nm), surname(snm), age(ag), size(sz), extension(ex), title(ti) {}

    void input() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter surname: ";
        cin >> surname;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter size (MB): ";
        cin >> size;
        cout << "Enter extension: ";
        cin >> extension;

        display();
    }

    void display() {
        cout << "Title: " << title << ", Name: " << name << ", Surname: " << surname
             << ", Age: " << age << ", Size: " << size << " MB, Extension: " << extension << endl;
    }
};

// Text class
class Text : public Media {
public:
    Text() : Media() {}
    Text(string nm, string snm, int ag, int sz, string ex, string ti)
        : Media(nm, snm, ag, sz, ex, ti) {}
};

// Video class
class Video : public Media {
protected:
    int length;
    int resolution;

public:
    Video() : Media(), length(0), resolution(0) {}
    Video(string nm, string snm, int ag, int sz, string ex, string ti, int len, int res)
        : Media(nm, snm, ag, sz, ex, ti), length(len), resolution(res) {}

    void input() {
        Media::input();
        cout << "Enter length (minutes): ";
        cin >> length;
        cout << "Enter resolution (e.g., 1080): ";
        cin >> resolution;
    }

    void display() {
        Media::display();
        cout << "Length: " << length << " minutes, Resolution: " << resolution << "p" << endl;
    }
};

// Photo class
class Photo : public Media {
public:
    Photo() : Media() {}
    Photo(string nm, string snm, int ag, int sz, string ex, string ti)
        : Media(nm, snm, ag, sz, ex, ti) {}
};

int main() {
    vector<Media*> mediaCollection;
    int choice;
    Media* media = nullptr;

    while (true) {
        cout << "Select media type to add:\n";
        cout << "1. Text\n2. Video\n3. Photo\n4. Display all media\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            media = new Text();
        } 
        else if (choice == 2) {
            media = new Video();
        } 
        else if (choice == 3) {
            media = new Photo();
        } 
        else if (choice == 4) {
            for (Media* m : mediaCollection) {
                m->display();
            }
            continue;
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        if (media) {
            media->input();
            mediaCollection.push_back(media);
        }
    }

return 0;
}
