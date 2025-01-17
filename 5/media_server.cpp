#include <iostream>
#include <string>
using namespace std;

class Media{
    protected:
    string title;
    string name;
    string surname;
     int age;
    int size;
    string extension;

    public:
        Media(){};
        Media(string nm, string snm, int ag, int sz, string ex, string ti): name(nm), surname(snm), age(ag), size(sz), extension(ex), title(ti){};
};
    //text
    class Text : public Media{


    }; 
    class Note{

        };
    class Book{

        };
    
    class Video : public Media{
        protected:
        int lenghth;
        int resolution;

        public:


    };
    class Movie{

        };
    class Audio : public Media{

    };
    class Music{

        };
    class Image : public Media{

    };
    class Meme{

        };
    class Photo{

        };
int main(){

}