#!/usr/bin/env python
# import pyglet
# song = pyglet.resource.media('/home/thor/Dropbox/DTU_5_sem/Ros/MasterTank/src/masterTankNavigation/sounds/EurekaR2D2.mp3')
# song.play()
# pyglet.app.run()
import pyglet

foo=pyglet.media.load('/home/thor/Dropbox/DTU_5_sem/Ros/MasterTank/src/masterTankNavigation/sounds/EurekaR2D2.mp3')
foo.play()

def exiter(dt):
    pyglet.app.exit()
print "Song length is: %f" % foo.duration
# foo.duration is the song length
pyglet.clock.schedule_once(exiter, foo.duration)

pyglet.app.run()

# player = pyglet.media.Player()
# sound = pyglet.media.load('/home/thor/Dropbox/DTU_5_sem/Ros/MasterTank/src/masterTankNavigation/sounds/EurekaR2D2.mp3')
# player.queue(sound)
#
# # keep playing for as long as the app is running (or you tell it to stop):
# player.eos_action = pyglet.media.SourceGroup.loop
#
# player.play()


# snd = pyglet.media.load('/home/thor/Dropbox/DTU_5_sem/Ros/MasterTank/src/masterTankNavigation/sounds/EurekaR2D2.mp3')
# looper = pyglet.media.SourceGroup(snd.audio_format, None)
# looper.loop = True
# looper.queue(snd)
# p = pyglet.media.Player()
# p.queue(looper)
# p.play()
#
# import pygame
# pygame.mixer.init()
# sound = pygame.mixer.Sound('/home/thor/Dropbox/DTU_5_sem/Ros/MasterTank/src/masterTankNavigation/sounds/EurekaR2D2.mp3')
# sound.play()
# clock = pygame.time.Clock()
# while True:
#     clock.tick(10)

# import pygame
# pygame.init()
# song = pygame.mixer.Sound('/home/thor/Dropbox/DTU_5_sem/Ros/MasterTank/src/masterTankNavigation/sounds/EurekaR2D2.mp3')
# clock = pygame.time.Clock()
# song.play()
# while True:
#     clock.tick(10)
# pygame.quit()