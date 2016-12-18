//#include "Sound.h"
//#include "soundFiles.h"
//
//Sound::Sound(void) {
//    int result = 0;
//    int flags = MIX_INIT_MP3;
//
//    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
//        ROS_INFO("Failed to init SDL\n");
//        exit(1);
//    }
//    if (flags != (result = Mix_Init(flags))) {
//        ROS_INFO("Could not initialize mixer (result: %d).\n", result);
//        ROS_INFO("Mix_Init: %s\n", Mix_GetError());
//        exit(1);
//    }
//}
//
//Sound::~Sound(void) {
//    SDL_Quit();
//}
//
//void Sound::moodSoundCallback(const std_msgs::Int32ConstPtr msg) {
//    const int soundInt = msg->data;
//
//    ROS_INFO("Received: %s", moodStrings[soundInt]);
//
//    Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 640);
//    Mix_Music *music = Mix_LoadMUS(moodStrings[soundInt]);
//    Mix_PlayMusic(music, 1);
//    while (Mix_PlayingMusic()) {
//        SDL_Delay(50);
//    }
//    Mix_FreeMusic(music);
//}
//
//void Sound::startSoundTopic(ros::NodeHandle nh) {
//    ros::Subscriber sub = nh.subscribe("/mood/sound", 10, &Sound::moodSoundCallback, this);
//    ros::spin();
//}
