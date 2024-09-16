#include <iostream>
#include <cstring>
using namespace std;

class Material
{
protected:
    string title;
    float rating;

public:
    Material(string s, float r)
    {
        title = s, rating = r;
    }

    virtual void display() { cout << "Null Pointer.." << endl; }
};

class Video : public Material
{
    float videoLength;

public:
    Video(string s, float r, float vL) : Material(s, r)
    {
        videoLength = vL;
    }

    void display()
    {
        cout << "Video Title : " << title << endl
             << "Video Rating : " << rating << endl
             << "Video Length : " << videoLength << endl;
    }
};

class Textual : public Material
{
    int wordsLength;

public:
    Textual(string s, float r, int wc) : Material(s, r)
    {
        wordsLength = wc;
    }

    void display()
    {
        cout << "Content Title : " << title << endl
             << "Content Rating : " << rating << endl
             << "Content Words : " << wordsLength << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "Mujya Video Coding";
    rating = 4.5;
    vlen = 3.20;

    Video djVideo(title, rating, vlen);
    // djVideo.display();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    title = "Munjya Content Coding";
    rating = 4.4;
    words = 10103;

    Textual djText(title, rating, words);
    // djText.display();

    Material *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    tuts[1]->display();

    return 0;
}