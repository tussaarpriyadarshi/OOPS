#include<iostream>
using namespace std;
class AudioPlayer{
    public:
    virtual void playAudio(string song)=0;
    virtual ~AudioPlayer(){}
};
class VideoPlayer{
    public:
    virtual void playVideo(string movie)=0;
    virtual ~VideoPlayer(){}
};
class MediaPlayer:public AudioPlayer,VideoPlayer{
    public:
    void playAudio(string song) override{
        cout<<"Playing Audio :"<<song<<endl;

    }
    void playVideo(string movie) override{
        cout<<"Playing Video :"<<movie<<endl;;

    }
};
int main(){
    MediaPlayer player;
    
    player.playAudio("shape of you");
    player.playVideo("Inception");
    
    return 0;
}